/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103eb4d14; end: 103eb4d3f; -[SCLensInfoControllerV3 init] */

void FUN_103eb4d14(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.LensInfoController",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb4d40);
  (*pcVar1)();
}



/* Entry: 103eb4d40; end: 103eb4e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb4d40(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar1 = *(ulong *)(param_2 + _DAT_11302ac68);
    func_0x000107c3dfec();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    FUN_103eb6840(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    uVar3 = uVar1;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar1,uVar2);
    _objc_release(uVar1);
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRelease();
    if (uVar1 == 0) {
      func_0x00010af88f74();
      *(ulong *)(param_2 + _DAT_11302ac40) = uVar3;
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103eb4e28; end: 103eb4f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb4e28(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000103eb5430();
  FUN_103eb5828();
  lVar1 = *(long *)(unaff_x20 + _DAT_11302ac88);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302ac80);
    _swift_getObjectType(uVar4);
    puVar2 = &UNK_11071ca08;
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    puVar3 = &UNK_11071cc10;
    _swift_allocObject(&UNK_11071cc10,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar1;
    _swift_retain(puVar2);
    _swift_unknownObjectRetain(lVar1);
    func_0x00010090569c(0x103eb68b0,puVar3,uVar4);
    _swift_unknownObjectRelease(lVar1);
    _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  return;
}



/* Entry: 103eb4f20; end: 103eb4f77;  */

void FUN_103eb4f20(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    (*param_3)();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103eb4f78; end: 103eb50f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb4f78(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_11302ac68);
  func_0x000107c3dfec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  FUN_103eb6840(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  uVar3 = uVar1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar1,uVar2);
  _objc_release(uVar1);
  if (uVar3 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRelease(uVar3);
  if (uVar1 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_11302ac40) = 0;
    func_0x000103eb4c08();
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_11302ac88);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302ac80);
    _swift_getObjectType(uVar2);
    puVar5 = &UNK_11071ca08;
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar6 = &UNK_11071cb98;
    _swift_allocObject(&UNK_11071cb98,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(long *)(puVar6 + 0x18) = lVar4;
    _swift_retain(puVar5);
    _swift_unknownObjectRetain(lVar4);
    func_0x00010090569c(0x103eb6724,puVar6,uVar2);
    _swift_unknownObjectRelease(lVar4);
    _swift_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar6);
    return;
  }
  return;
}



/* Entry: 103eb50f8; end: 103eb521b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb50f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_11302ac00);
    _swift_retain(uVar1);
    _objc_release(param_3);
    func_0x000107c438c0(param_2);
    uStack_50 = param_1;
    func_0x0001002a64a8(&uStack_50);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 103eb521c; end: 103eb53e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb521c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_68;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3e == 0) {
      uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = param_4;
      if (-1 < (long)param_4) {
        uVar2 = param_4 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar2 != 0) {
      lVar8 = *(long *)(*(long *)(unaff_x20 + _DAT_11302aca0) + 0x38);
      bVar1 = lVar8 == 0;
      if (bVar1) {
        _swift_bridgeObjectRetain(param_4);
        param_3 = 0;
      }
      else {
        _swift_bridgeObjectRetain(param_4);
        _objc_retain(lVar8);
        lVar3 = lVar8;
        FUN_103ec0c6c();
        func_0x000107c438d4();
        _objc_release(lVar3);
        _objc_release(lVar8);
      }
      uVar7 = param_5;
      func_0x000107c51f40(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      _swift_getObjectType();
      puVar5 = &UNK_11071ca08;
      _swift_allocObject(&UNK_11071ca08,0x18,7);
      _swift_unknownObjectWeakInit(puVar5 + 0x10,unaff_x20);
      puVar6 = &UNK_11071cb48;
      _swift_allocObject(&UNK_11071cb48,0x38,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(ulong *)(puVar6 + 0x18) = param_4;
      *(undefined8 *)(puVar6 + 0x20) = param_3;
      puVar6[0x28] = bVar1;
      *(undefined8 *)(puVar6 + 0x30) = param_5;
      _swift_retain(puVar5);
      _swift_unknownObjectRetain(param_5);
      func_0x00010090569c(0x103eb6708,puVar6,uVar4);
      _swift_release(puVar5);
      _swift_unknownObjectRelease(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar6);
      return;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11302ac20);
  uStack_68 = 0;
  _swift_retain(uVar7);
  func_0x0001002a64a8(&uStack_68);
  _swift_release(uVar7);
  return;
}



/* Entry: 103eb53e4; end: 103eb551b;  */

void FUN_103eb53e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103eb551c; end: 103eb5827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb551c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_11302aca0);
  lVar1 = *(long *)(lVar10 + 0x48);
  func_0x000107c5c42c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = _DAT_11302abe8;
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + _DAT_11302abe8;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 == 0) {
      return;
    }
    lVar2 = lVar1;
    func_0x000107c403bc();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
    lVar3 = unaff_x20 + lVar3;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 == 0) {
      param_1 = 0;
      param_2 = 0;
      param_3 = 0;
      param_4 = 0;
    }
    else {
      func_0x000107c5d190();
      _swift_unknownObjectRelease(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar10 + 0x48);
    _objc_retain();
    func_0x000107c3d89c(lVar2);
    func_0x000107c5a050(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    _objc_opt_self();
    puVar6 = puVar5;
    func_0x0001008478a8();
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 9;
    *(undefined8 *)(puVar6 + 0x10) = 4;
    uVar8 = uVar4;
    func_0x000107c4ace0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c4ace0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x000107c40284(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(lVar3);
    *(undefined8 *)(puVar6 + 0x20) = uVar7;
    uVar8 = uVar4;
    func_0x000107c50890();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c50890(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x000107c40284(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(lVar3);
    *(undefined8 *)(puVar6 + 0x28) = uVar7;
    uVar8 = uVar4;
    func_0x000107c5cbe4();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c5cbe4(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x000107c40284(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(lVar3);
    *(undefined8 *)(puVar6 + 0x30) = uVar7;
    func_0x000107c3ec1c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c3ec1c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x000107c40284(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar3);
    *(undefined8 *)(puVar6 + 0x38) = uVar8;
    uVar8 = 0;
    FUN_103eb6840(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar9 = puVar6;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar6,uVar8);
    _swift_release(puVar6);
    func_0x000107c3d048(puVar5);
    _objc_release(puVar9);
    func_0x000107c4abfc(lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103eb5828; end: 103eb5927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb5828(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302ac48;
  if (*(long *)(unaff_x20 + _DAT_11302ac48) != 0) {
    func_0x000107c498f8();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11302ac88);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302ac80);
    _swift_getObjectType(uVar4);
    puVar3 = &UNK_11071cc38;
    _swift_allocObject(&UNK_11071cc38,0x20,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(long *)(puVar3 + 0x18) = lVar2;
    _objc_retain();
    _swift_unknownObjectRetain(lVar2);
    func_0x00010090569c(0x103eb68b4,puVar3,uVar4);
    _swift_unknownObjectRelease(lVar2);
    _swift_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bc890;
  _objc_opt_self();
  func_0x000107c51928(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 103eb5928; end: 103eb5b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb5928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302ac68);
  func_0x000107c4cd08(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_11071ca08;
  _swift_allocObject(&UNK_11071ca08,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_1);
  uStack_40 = 0x103eb668c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101286f34;
  puStack_48 = &UNK_11071ca20;
  puStack_38 = puVar2;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x000107c4c18c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5dc64(uVar1);
  _swift_unknownObjectRelease(param_2);
  __Block_release(ppuVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 103eb5b04; end: 103eb5be3; -[SCLensInfoControllerV3 updateMemory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb5b04(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11302ac88);
  _objc_retain();
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11302ac80);
    _swift_getObjectType(uVar3);
    puVar1 = &UNK_11071c9e0;
    _swift_allocObject(&UNK_11071c9e0,0x20,7);
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = lVar2;
    _objc_retain(param_1);
    _swift_unknownObjectRetain(lVar2);
    func_0x00010090569c(FUN_103eb6684,puVar1,uVar3);
    _swift_unknownObjectRelease(lVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103eb5be4; end: 103eb5e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb5be4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_11302ac68;
  if (param_1 != 0) {
    uVar9 = *(undefined8 *)(param_1 + _DAT_11302ac68);
    func_0x000107c42458();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    FUN_103eb6840(0,0x11302acd0,&PTR_PTR_1126dd048);
    uVar6 = uVar9;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar2);
    _objc_release(uVar9);
    uVar9 = uVar6;
    FUN_103eb5e28();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_2;
    func_0x000107c4c18c(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    _swift_getObjectType();
    puVar7 = &UNK_11071ca08;
    puVar3 = puVar7;
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10,param_1);
    puVar4 = &UNK_11071cbc0;
    _swift_allocObject(&UNK_11071cbc0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar9;
    lVar5 = param_1;
    _objc_retain(param_1);
    _swift_retain(puVar3);
    func_0x00010090569c(0x103eb672c,puVar4,uVar2);
    _swift_release(puVar3);
    _swift_unknownObjectRelease(uVar6);
    _swift_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c4cd08(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _swift_allocObject(&UNK_11071ca08,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10,lVar5);
    _objc_release(lVar5);
    uStack_88 = 0x103eb6734;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101286f34;
    puStack_90 = &UNK_11071cbd8;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    __Block_copy(ppuVar8);
    _swift_release(puStack_80);
    func_0x000107c4c18c(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c5dc64(uVar6);
    _swift_unknownObjectRelease(param_2);
    __Block_release(ppuVar8);
    _objc_release(lVar5);
    _objc_release(uVar6);
  }
  return;
}



/* Entry: 103eb5e28; end: 103eb61af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103eb5e28(undefined8 param_1,undefined *param_2)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long lVar15;
  long unaff_x20;
  ulong *puVar16;
  ulong uVar17;
  ulong auStack_c0 [2];
  undefined *apuStack_b0 [2];
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined *puStack_78;
  
  lVar4 = 0x11302acd8;
  puVar13 = &UNK_10dca6108;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar16 = (ulong *)((long)auStack_c0 + lVar4);
  lVar5 = 0;
  FUN_103eb6e88();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lStack_90 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((ulong)param_2 >> 0x3e == 0) {
    apuStack_b0[0] = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      puVar12 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    apuStack_b0[0] = puVar12;
  }
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (apuStack_b0[0] != (undefined *)0x0) {
    uVar17 = 0;
    uStack_98 = (ulong)param_2 & 0xc000000000000001;
    uStack_a0 = (ulong)param_2 & 0xffffffffffffff8;
    auStack_c0[1] = _DAT_11302ac60;
    apuStack_b0[1] = param_2;
    do {
      if (uStack_98 == 0) {
        if (*(ulong *)(uStack_a0 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103eb6164);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(apuStack_b0[1] + uVar17 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar6 = uVar17;
        puVar13 = apuStack_b0[1];
        FUN_103ebf984();
      }
      puVar12 = (undefined *)(uVar17 + 1);
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103eb6160);
        (*pcVar3)();
      }
      uVar7 = uVar6;
      func_0x000107c42434();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x000107c4b1dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar8;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar8);
      lVar15 = *(long *)(unaff_x20 + auStack_c0[1]);
      uVar8 = uVar6;
      func_0x000107c42434(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar15;
      func_0x000107c4041c();
      _objc_release(uVar8);
      uVar8 = uVar6;
      func_0x000107c42434(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c4f6f8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      iVar2 = *(int *)(lVar5 + 0x18);
      if (lVar15 != 0) {
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                  ((long)puVar16 + (long)iVar2,lVar15);
        _objc_release(lVar15);
      }
      lVar10 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))((long)puVar16 + (long)iVar2,lVar15 == 0,1,lVar10)
      ;
      func_0x000107c3e018(uVar6);
      *puVar16 = uVar7;
      *(undefined **)((long)auStack_c0 + lVar4 + 8) = puVar13;
      *(double *)((long)apuStack_b0 + lVar4) = (double)lVar9;
      *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar5 + 0x1c)) = param_1;
      (**(code **)(lVar14 + 0x38))(puVar16,0,1,lVar5);
      _objc_release(uVar6);
      puVar13 = (undefined *)0x1;
      puVar11 = puVar16;
      (**(code **)(lVar14 + 0x30))(puVar16,1,lVar5);
      if ((int)puVar11 == 1) {
        func_0x000103eb673c(puVar16);
      }
      else {
        func_0x000103eb6784(puVar16,lStack_90);
        puVar13 = puStack_78;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar13 & 1) == 0) {
          plVar1 = (long *)(puStack_78 + 0x10);
          puStack_78 = (undefined *)0x0;
          FUN_103ebf808(0,*plVar1 + 1,1);
        }
        uVar6 = *(ulong *)(puStack_78 + 0x10);
        if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar6) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puStack_78 + 0x18));
          FUN_103ebf808(puVar13,uVar6 + 1,1,puStack_78);
          puStack_78 = puVar13;
        }
        *(ulong *)(puStack_78 + 0x10) = uVar6 + 1;
        puVar13 = puStack_78 +
                  *(long *)(lVar14 + 0x48) * uVar6 +
                  ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
        func_0x000103eb6784(lStack_90);
      }
      uVar17 = uVar17 + 1;
    } while (puVar12 != apuStack_b0[0]);
  }
  return puStack_78;
}



/* Entry: 103eb61b0; end: 103eb622b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb61b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11302ac10);
    uStack_40 = param_2;
    _swift_retain(uVar1);
    func_0x0001002a64a8(&uStack_40);
    _swift_release(uVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 103eb622c; end: 103eb62cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb622c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 != 0) {
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(param_4 + _DAT_11302ac08);
      _objc_retain(param_2);
      _swift_retain(uVar1);
      func_0x000107c4223c(param_2);
      uStack_50 = param_1;
      func_0x0001002a64a8(&uStack_50);
      _swift_release(uVar1);
      _objc_release(param_4);
    }
    _objc_release();
  }
  return;
}



/* Entry: 103eb62d0; end: 103eb6427;  */

void FUN_103eb62d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_103eb6428(param_2,param_3,param_4);
    _objc_release(lVar1);
  }
  func_0x000107c4c18c(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  _swift_getObjectType();
  puVar3 = &UNK_11071ca08;
  _swift_allocObject(&UNK_11071ca08,0x18,7);
  _swift_beginAccess(param_1 + 0x10,auStack_70,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong(param_1);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,param_1);
  _objc_release(param_1);
  puVar4 = &UNK_11071cb70;
  _swift_allocObject(&UNK_11071cb70,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  _swift_retain(param_2);
  _swift_retain(puVar3);
  func_0x00010090569c(0x103eb671c,puVar4,uVar2);
  _swift_release(param_2);
  _swift_release(puVar3);
  _swift_unknownObjectRelease(param_5);
  _swift_release(puVar4);
  return;
}



/* Entry: 103eb6428; end: 103eb64af;  */

void FUN_103eb6428(long param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != '\x01') {
    lVar2 = param_1;
    uVar3 = param_2;
    FUN_103eb3628();
    FUN_103ebe024(param_2);
    _swift_release(lVar2);
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = uVar3;
    }
    lVar2 = 0;
    func_0x000103ec16f8();
    _swift_allocObject();
    *(long *)(lVar2 + 0x10) = param_1;
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 103eb64b0; end: 103eb6533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb64b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11302ac20);
    _swift_retain(uVar1);
    _objc_release(param_1);
    uStack_50 = param_2;
    func_0x0001002a64a8(&uStack_50);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 103eb6534; end: 103eb6613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb6534(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(unaff_x20 + _DAT_11302ac38) != 2) &&
     ((((uint)param_1 ^ (uint)*(byte *)(unaff_x20 + _DAT_11302ac38)) & 1) == 0)) {
    return;
  }
  *(byte *)(unaff_x20 + _DAT_11302ac38) = (byte)param_1 & 1;
  lVar1 = *(long *)(unaff_x20 + _DAT_11302ac98);
  if ((param_1 & 1) == 0) {
    if (lVar1 != 0) {
      func_0x000107c42868();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar1);
      goto LAB_103eb65c4;
    }
  }
  else if (lVar1 != 0) {
    func_0x000107c3e7f0();
  }
  lVar3 = 0;
  param_2 = 0;
LAB_103eb65c4:
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302ac18);
  uStack_58 = param_1 & 1;
  lStack_50 = lVar3;
  uStack_48 = param_2;
  _swift_retain(uVar2);
  func_0x0001002a64a8(&uStack_58);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 103eb6614; end: 103eb6663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb6614(void)

{
  long unaff_x20;
  byte bStack_21;
  
  bStack_21 = (*(byte *)(unaff_x20 + _DAT_11302ac30) ^ 0xff) & 1;
  *(byte *)(unaff_x20 + _DAT_11302ac30) = bStack_21;
  func_0x000100087c34(&bStack_21);
  return;
}



/* Entry: 103eb6664; end: 103eb6683;  */

void FUN_103eb6664(void)

{
  _objc_opt_self(&PTR_PTR_11295ef18);
  return;
}



/* Entry: 103eb6684; end: 103eb66b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb6684(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  uVar2 = *(undefined8 *)(lVar1 + _DAT_11302ac68);
  func_0x000107c4cd08(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_11071ca08;
  _swift_allocObject(&UNK_11071ca08,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,lVar1);
  uStack_40 = 0x103eb668c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101286f34;
  puStack_48 = &UNK_11071ca20;
  puStack_38 = puVar3;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x000107c4c18c(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5dc64(uVar2);
  _swift_unknownObjectRelease(uVar5);
  __Block_release(ppuVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 103eb66b8; end: 103eb66f7;  */

void FUN_103eb66b8(void)

{
  FUN_103eb4f20();
  return;
}



/* Entry: 103eb66f8; end: 103eb673b;  */

void FUN_103eb66f8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    uStack_50 = 0;
    uVar3 = 0;
    FUN_103ebde6c(0);
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (param_1,&uStack_50,uVar3);
    uVar3 = uStack_50;
    FUN_103eb521c(uStack_50,uVar1);
    _objc_release(lVar2);
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Entry: 103eb673c; end: 103eb67ff;  */

undefined8 FUN_103eb673c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x11302acd8;
  func_0x0001000285a8(0x11302acd8,&UNK_10dca6108);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103eb6800; end: 103eb682b;  */

void FUN_103eb6800(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103eb682c; end: 103eb683f;  */

void FUN_103eb682c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103eb6840; end: 103eb687f;  */

void FUN_103eb6840(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103eb6880; end: 103eb68bb;  */

void FUN_103eb6880(long param_1,long param_2)

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



/* Entry: 103eb68bc; end: 103eb69cf;  */

long * FUN_103eb68bc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    param_1[2] = param_2[2];
    lVar5 = (long)*(int *)(param_3 + 0x18);
    lVar2 = 0;
    __s10Foundation4DateVMa();
    lVar6 = *(long *)(lVar2 + -8);
    pcVar7 = *(code **)(lVar6 + 0x30);
    _swift_bridgeObjectRetain(lVar3);
    lVar3 = (long)param_2 + lVar5;
    (*pcVar7)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103eb69d0; end: 103eb6a47;  */

void FUN_103eb69d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103eb6a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103eb6a48; end: 103eb6c6b;  */

undefined8 * FUN_103eb6a48(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 103eb6c6c; end: 103eb6d43;  */

undefined8 * FUN_103eb6c6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = param_2[2];
  lVar3 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 103eb6d44; end: 103eb6e6f;  */

undefined8 * FUN_103eb6d44(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      goto LAB_103eb6e30;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    goto LAB_103eb6e30;
  }
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
LAB_103eb6e30:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 103eb6e70; end: 103eb6e87;  */

void FUN_103eb6e70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103eb6e88; end: 103eb6ebf;  */

void FUN_103eb6e88(undefined8 param_1)

{
  if (lRam000000011302ad38 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d1e3c);
  return;
}



/* Entry: 103eb6ec0; end: 103eb6f3f;  */

void FUN_103eb6ec0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_40 = &UNK_10dca6128;
  lVar2 = 0x13f;
  puStack_38 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 103eb6f40; end: 103eb7067;  */

long * FUN_103eb6f40(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 == 6) {
      lVar6 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      uVar4 = 6;
    }
    else if (iVar2 == 5) {
      lVar6 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      uVar4 = 5;
    }
    else {
      if (iVar2 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
        return param_1;
      }
      lVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar6;
      lVar6 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar6;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar6);
      uVar4 = 4;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103eb7068; end: 103eb70db;  */

void FUN_103eb7068(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)lVar2;
  if ((iVar1 != 6) && (iVar1 != 5)) {
    if (iVar1 == 4) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
      return;
    }
    return;
  }
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000103eb70cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return;
}



/* Entry: 103eb70dc; end: 103eb72fb;  */

undefined8 * FUN_103eb70dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 == 6) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    uVar4 = 6;
  }
  else if (iVar1 == 5) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    uVar4 = 5;
  }
  else {
    if (iVar1 != 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    uVar4 = 4;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Entry: 103eb72fc; end: 103eb7337;  */

undefined8 FUN_103eb72fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103eb7338();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103eb7338; end: 103eb736f;  */

void FUN_103eb7338(undefined8 param_1)

{
  if (lRam000000011302ade8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d1e64);
  return;
}



/* Entry: 103eb7370; end: 103eb7517;  */

undefined8 FUN_103eb7370(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)uVar2 == 6) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    uVar2 = 6;
  }
  else {
    if ((int)uVar2 != 5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar1 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    uVar2 = 5;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar2);
  return param_1;
}



/* Entry: 103eb7518; end: 103eb7547;  */

void FUN_103eb7518(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103eb7520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103eb7548; end: 103eb75cb;  */

void FUN_103eb7548(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dca6158;
  lVar1 = 0x13f;
  puStack_50 = puStack_58;
  puStack_48 = puStack_58;
  puStack_40 = puStack_58;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,7,&puStack_58);
  }
  return;
}



/* Entry: 103eb75cc; end: 103eb76cf;  */

undefined1  [16] FUN_103eb75cc(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  
  lVar3 = 0;
  FUN_103eb7338();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar1);
  FUN_103eb7a54();
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      uVar6 = 0xe300000000000000;
      uVar5 = 0x535046;
    }
    else if (iVar2 == 1) {
      uVar6 = 0xe300000000000000;
      uVar5 = 0x4d4152;
    }
    else {
      uVar6 = 0xe400000000000000;
      uVar5 = 0x455a4953;
    }
  }
  else if (iVar2 - 5U < 2) {
    FUN_103eb72fc(puVar7);
    uVar5 = 0;
    uVar6 = 0;
  }
  else if (iVar2 == 3) {
    uVar6 = 0xe300000000000000;
    uVar5 = 0x54414c;
  }
  else {
    uVar5 = *puVar7;
    uVar6 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar1);
    _swift_bridgeObjectRelease(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar1));
  }
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 103eb76d0; end: 103eb7713;  */

void FUN_103eb76d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x79792e64642e4d4d;
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_allocWithZone();
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79792e64642e4d4d,0xea00000000007979);
  func_0x000107c53e28(puVar1);
  _objc_release(uVar2);
  puRam000000011302ae38 = puVar1;
  return;
}



/* Entry: 103eb7714; end: 103eb777b;  */

void FUN_103eb7714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_allocWithZone();
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  func_0x000107c53e28(puVar1);
  _objc_release(param_2);
  *param_4 = puVar1;
  return;
}



/* Entry: 103eb777c; end: 103eb7a53;  */

void FUN_103eb777c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_103eb7338();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar9 = (undefined8 *)(puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_103eb7a54();
  puVar6 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar5);
  iVar3 = (int)puVar6;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      uVar11 = *puVar9;
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      _swift_allocObject();
      puVar1 = PTR___sSdN_11034dd90;
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar2 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar4 + 0x38) = puVar1;
      *(undefined **)(lVar4 + 0x40) = puVar2;
      *(undefined8 *)(lVar4 + 0x20) = uVar11;
      __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x6632302e25,0xe500000000000000,lVar4);
    }
    else {
      FUN_103eb7a98(*puVar9);
    }
  }
  else if (iVar3 < 5) {
    if (iVar3 == 3) {
      uVar11 = *puVar9;
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      _swift_allocObject();
      puVar1 = PTR___sSdN_11034dd90;
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar2 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar4 + 0x38) = puVar1;
      *(undefined **)(lVar4 + 0x40) = puVar2;
      *(undefined8 *)(lVar4 + 0x20) = uVar11;
      __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x736d206631302e25,0xe800000000000000,lVar4);
    }
    else {
      _swift_bridgeObjectRelease(puVar9[1]);
    }
  }
  else {
    puVar7 = puVar8;
    if (iVar3 == 5) {
      (**(code **)(lVar10 + 0x20))(puVar8,puVar9,lVar4);
      if (lRam000000011302ae30 != -1) {
        puVar7 = (undefined1 *)0x11302ae30;
        _swift_once(0x11302ae30,FUN_103eb76d0);
      }
      uVar11 = uRam000000011302ae38;
      __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
      func_0x000107c5c1b8(uVar11);
    }
    else {
      (**(code **)(lVar10 + 0x20))(puVar8,puVar9,lVar4);
      if (lRam000000011302ae20 != -1) {
        puVar7 = (undefined1 *)0x11302ae20;
        _swift_once(0x11302ae20,0x103eb76f4);
      }
      uVar11 = uRam000000011302ae28;
      __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
      func_0x000107c5c1b8(uVar11);
    }
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar11);
    _objc_release(uVar11);
    (**(code **)(lVar10 + 8))(puVar8,lVar4);
  }
  return;
}



/* Entry: 103eb7a54; end: 103eb7a97;  */

undefined8 FUN_103eb7a54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103eb7338();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103eb7a98; end: 103eb7beb;  */

undefined1  [16] FUN_103eb7a98(double param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if (param_1 <= -1.0) {
    param_1 = -1.0;
  }
  uVar7 = 0x7365747962;
  dVar2 = param_1;
  if (1024.0 <= param_1) {
    uVar7 = 0x426b;
    dVar2 = param_1 * 0.0009765625;
  }
  uVar1 = 0xe500000000000000;
  if (1024.0 <= param_1) {
    uVar1 = 0xe200000000000000;
  }
  if (1048576.0 <= param_1) {
    uVar7 = 0x424d;
    uVar1 = 0xe200000000000000;
    dVar2 = param_1 * 9.5367431640625e-07;
  }
  uVar6 = 0x40252066332e25;
  if (100.0 <= dVar2) {
    uVar6 = 0x40252066312e25;
  }
  lVar4 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar3 = PTR___sSds7CVarArgsWP_11034ddc0;
  *(undefined **)(lVar4 + 0x38) = PTR___sSdN_11034dd90;
  *(undefined **)(lVar4 + 0x40) = puVar3;
  *(double *)(lVar4 + 0x20) = dVar2;
  *(undefined **)(lVar4 + 0x60) = PTR___sSSN_11034da80;
  lVar5 = lVar4;
  func_0x00010075bbf0();
  *(long *)(lVar4 + 0x68) = lVar5;
  *(undefined8 *)(lVar4 + 0x48) = uVar7;
  *(undefined8 *)(lVar4 + 0x50) = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  uVar7 = 0xe700000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(uVar6,0xe700000000000000,lVar4);
  _swift_bridgeObjectRelease(0xe700000000000000);
  _swift_bridgeObjectRelease(uVar1);
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 103eb7bec; end: 103eb7d53;  */

int FUN_103eb7bec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103eb7c68;
        goto LAB_103eb7c4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103eb7c4c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103eb7c68:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103eb7d54; end: 103eb7d93;  */

void FUN_103eb7d54(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ae40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca61c8;
  _swift_getWitnessTable(&UNK_10dca61c8,&UNK_11071ccd8);
  puRam000000011302ae40 = puVar1;
  return;
}



/* Entry: 103eb7d94; end: 103eb7da7;  */

bool FUN_103eb7d94(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103eb7da8; end: 103eb7e53;  */

void FUN_103eb7da8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103eb7e54; end: 103eb8033;  */

void FUN_103eb7e54(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103eb8034; end: 103eb812f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103eb8034(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  if (*(char *)(param_1 + _DAT_11302af00) == '\x01') {
    if (lRam000000011302b220 != -1) {
      _swift_once(0x11302b220,FUN_103ebda50);
    }
  }
  else if (lRam000000011302b228 != -1) {
    _swift_once(0x11302b228,0x103ebdaa8);
  }
  func_0x000107c54adc(puVar1);
  if (lRam000000011302b218 != -1) {
    _swift_once(0x11302b218,FUN_103ebdb00);
  }
  func_0x000107c59c78(puVar1);
  func_0x000107c5a050(puVar1);
  return puVar1;
}



/* Entry: 103eb8130; end: 103eb818f;  */

long FUN_103eb8130(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  return lVar2;
}



/* Entry: 103eb8190; end: 103eb82af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103eb8190(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_allocWithZone(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  if (lRam000000011302b228 != -1) {
    _swift_once(0x11302b228,0x103ebdaa8);
  }
  func_0x000107c54adc(puVar1);
  if (*(char *)(param_1 + _DAT_11302af00) == '\x01') {
    if (lRam000000011302b218 != -1) {
      _swift_once(0x11302b218,FUN_103ebdb00);
    }
  }
  else if (lRam000000011302b230 != -1) {
    _swift_once(0x11302b230,FUN_103ebdb30);
  }
  func_0x000107c59c78(puVar1);
  _objc_retain(puVar1);
  func_0x000107c537fc(0x447a0000);
  func_0x000107c5a050(puVar1);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 103eb82b0; end: 103eb845f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb82b0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_103eb7338();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_11302af08;
  FUN_103eb8130(&DAT_11302af08,FUN_103eb8034);
  lVar4 = _DAT_113812220;
  _swift_beginAccess(unaff_x20 + _DAT_113812220,auStack_68,0,0);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar7 = unaff_x20 + lVar4;
  (*pcVar8)(lVar7,1,lVar1);
  lVar5 = 0;
  if ((int)lVar7 == 0) {
    lVar5 = unaff_x20 + lVar4;
    puVar3 = puVar6;
    FUN_103eb7a54(lVar5,puVar6);
    FUN_103eb777c();
    FUN_103eb72fc(puVar6);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,puVar3);
    _swift_bridgeObjectRelease(puVar3);
  }
  func_0x000107c59c6c(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar5);
  puVar2 = &DAT_11302af10;
  FUN_103eb8130(&DAT_11302af10,FUN_103eb8190);
  lVar7 = unaff_x20 + lVar4;
  (*pcVar8)(lVar7,1,lVar1);
  if ((int)lVar7 == 0) {
    lVar4 = unaff_x20 + lVar4;
    puVar3 = puVar6;
    FUN_103eb7a54(lVar4);
    FUN_103eb75cc();
    FUN_103eb72fc(puVar6);
    if (puVar3 != (undefined1 *)0x0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar4,puVar3);
      _swift_bridgeObjectRelease(puVar3);
      goto LAB_103eb8428;
    }
  }
  lVar4 = 0;
LAB_103eb8428:
  func_0x000107c59c6c(puVar2);
  _objc_release(puVar2);
  _objc_release(lVar4);
  return;
}



/* Entry: 103eb8460; end: 103eb8503; -[_TtC25LensInfoControllerFeature17LensInfoFieldView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb8460(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + _DAT_11302af08) = 0;
  *(undefined8 *)(param_1 + _DAT_11302af10) = 0;
  lVar1 = _DAT_113812220;
  lVar3 = 0;
  FUN_103eb7338();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + lVar1,1,1,lVar3);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
             "LensInfoControllerFeature/LensInfoFieldView.swift",0x31,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103eb8504);
  (*pcVar2)();
}



/* Entry: 103eb8504; end: 103eb8867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb8504(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  func_0x000107c534b0();
  puVar2 = &DAT_11302af08;
  FUN_103eb8130(&DAT_11302af08,FUN_103eb8034);
  func_0x000107c3d89c();
  _objc_release(puVar2);
  puVar2 = &DAT_11302af10;
  FUN_103eb8130(&DAT_11302af10,FUN_103eb8190);
  func_0x000107c3d89c();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0xf;
  *(undefined8 *)(puVar3 + 0x10) = 7;
  lVar1 = _DAT_11302af08;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302af08);
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar5);
  *(undefined8 *)(puVar3 + 0x30) = uVar8;
  lVar5 = _DAT_11302af10;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302af10);
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar6);
  *(undefined8 *)(puVar3 + 0x38) = uVar8;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar6);
  *(undefined8 *)(puVar3 + 0x40) = uVar8;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar6);
  *(undefined8 *)(puVar3 + 0x48) = uVar8;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c5ce8c(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x000107c40298(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar7);
  *(undefined8 *)(puVar3 + 0x50) = uVar8;
  uVar8 = 0;
  func_0x000100847984(0);
  puVar9 = puVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar3,uVar8);
  _swift_release(puVar3);
  func_0x000107c3d048(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 103eb8868; end: 103eb88c7; -[_TtC25LensInfoControllerFeature17LensInfoFieldView initWithFrame:] */

void FUN_103eb8868(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.LensInfoFieldView",0x2b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb8894);
  (*pcVar1)();
}



/* Entry: 103eb88c8; end: 103eb890f; -[_TtC25LensInfoControllerFeature17LensInfoFieldView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103eb88c8(long param_1)

{
  long lVar1;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302af08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302af10));
  param_1 = param_1 + _DAT_113812220;
  lVar1 = 0x11302af58;
  func_0x0001000285a8(0x11302af58,&UNK_10dca62b0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103eb8910; end: 103eb8917;  */

void FUN_103eb8910(void)

{
  if (lRam000000011302af40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d1f00);
  return;
}



/* Entry: 103eb8918; end: 103eb894f;  */

void FUN_103eb8918(undefined8 param_1)

{
  if (lRam000000011302af40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d1f00);
  return;
}



/* Entry: 103eb8950; end: 103eb8a6f;  */

void FUN_103eb8950(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = &UNK_10dca6268;
  puStack_38 = &UNK_10dca6280;
  puStack_30 = &UNK_10dca6280;
  lVar1 = 0x13f;
  func_0x000103eb89d4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 103eb8a70; end: 103eb9723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103eb8a70(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  code *pcVar9;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_e0 = param_1;
  _swift_getObjectType();
  lVar2 = 0x11302acd8;
  func_0x0001000285a8(0x11302acd8,&UNK_10dca6108);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_e8 = (long)&lStack_f0 - extraout_x8;
  FUN_103eb6e88();
  lStack_d0 = *(long *)(lVar2 + -8);
  lStack_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar2 = _DAT_11302af60;
  lStack_f0 = ((long)&lStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_103eb8918();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar4 + _DAT_11302af10) = 0;
  lVar7 = _DAT_113812220;
  lVar5 = 0;
  FUN_103eb7338();
  pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar9)(lVar4 + lVar7,1,1,lVar5);
  *(undefined1 *)(lVar4 + _DAT_11302af00) = 0;
  plVar6 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(0,0,0,0,plVar6,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar6);
  *(long **)(unaff_x20 + lVar2) = plVar6;
  lVar2 = _DAT_11302af68;
  lVar7 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar7 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar7 + _DAT_11302af10) = 0;
  (*pcVar9)(lVar7 + _DAT_113812220,1,1,lVar5);
  *(undefined1 *)(lVar7 + _DAT_11302af00) = 0;
  plVar6 = &lStack_80;
  lStack_80 = lVar7;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(0,0,0,0,plVar6,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar6);
  *(long **)(unaff_x20 + lVar2) = plVar6;
  lVar2 = _DAT_11302af70;
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar7 = lStack_e8;
  *(undefined8 *)(lVar4 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar4 + _DAT_11302af10) = 0;
  (*pcVar9)(lVar4 + _DAT_113812220,1,1,lVar5);
  *(undefined1 *)(lVar4 + _DAT_11302af00) = 0;
  plVar6 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  _objc_msgSendSuper2(0,0,0,0,plVar6,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar6);
  *(long **)(unaff_x20 + lVar2) = plVar6;
  lVar2 = _DAT_11302af78;
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar4 + _DAT_11302af10) = 0;
  (*pcVar9)(lVar4 + _DAT_113812220,1,1,lVar5);
  *(undefined1 *)(lVar4 + _DAT_11302af00) = 0;
  plVar6 = &lStack_a0;
  lStack_a0 = lVar4;
  lStack_98 = lVar3;
  _objc_msgSendSuper2(0,0,0,0,plVar6,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar6);
  *(long **)(unaff_x20 + lVar2) = plVar6;
  lVar2 = _DAT_11302af80;
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar4 + _DAT_11302af10) = 0;
  (*pcVar9)(lVar4 + _DAT_113812220,1,1,lVar5);
  uVar1 = uStack_e0;
  *(undefined1 *)(lVar4 + _DAT_11302af00) = 0;
  plVar6 = &lStack_b0;
  lStack_b0 = lVar4;
  lStack_a8 = lVar3;
  _objc_msgSendSuper2(0,0,0,0,plVar6,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar6);
  *(long **)(unaff_x20 + lVar2) = plVar6;
  puVar8 = &stack0xffffffffffffff40;
  _objc_msgSendSuper2(0,0,0,0,puVar8,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  func_0x000103eb8f08();
  func_0x000103eb9bbc(uVar1,lVar7,0x11302acd8,&UNK_10dca6108);
  lVar4 = lVar7;
  (**(code **)(lStack_d0 + 0x30))(lVar7,1,lStack_c8);
  lVar2 = lStack_f0;
  if ((int)lVar4 == 1) {
    func_0x000103eb9c04(uVar1,0x11302acd8,&UNK_10dca6108);
    _objc_release(puVar8);
    func_0x000103eb9c04(lVar7,0x11302acd8,&UNK_10dca6108);
  }
  else {
    func_0x000103eb6784(lVar7,lStack_f0);
    func_0x000103eb9154(lVar2);
    _objc_release(puVar8);
    func_0x000103eb9c04(uVar1,0x11302acd8,&UNK_10dca6108);
    func_0x000103eb9c44(lVar2,FUN_103eb6e88);
  }
  return puVar8;
}



/* Entry: 103eb9724; end: 103eb975f; -[_TtC25LensInfoControllerFeature12LensInfoView initWithCoder:] */

undefined8 FUN_103eb9724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103eb9848();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 103eb9760; end: 103eb97bf; -[_TtC25LensInfoControllerFeature12LensInfoView initWithFrame:] */

void FUN_103eb9760(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.LensInfoView",0x26,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eb978c);
  (*pcVar1)();
}



/* Entry: 103eb97c0; end: 103eb9827; -[_TtC25LensInfoControllerFeature12LensInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb97c0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302af60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302af68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302af70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302af78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302af80));
  return;
}



/* Entry: 103eb9828; end: 103eb9847;  */

void FUN_103eb9828(void)

{
  _objc_opt_self(&PTR_PTR_11295f170);
  return;
}



/* Entry: 103eb9848; end: 103eb9b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eb9848(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  lVar1 = _DAT_11302af60;
  lVar2 = 0;
  FUN_103eb8918();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar3 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11302af10) = 0;
  lVar6 = _DAT_113812220;
  lVar4 = 0;
  FUN_103eb7338();
  pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar7)(lVar3 + lVar6,1,1,lVar4);
  *(undefined1 *)(lVar3 + _DAT_11302af00) = 0;
  plVar5 = &lStack_70;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(0,0,0,0,plVar5,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar5);
  *(long **)(unaff_x20 + lVar1) = plVar5;
  lVar1 = _DAT_11302af68;
  lVar6 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar6 + _DAT_11302af10) = 0;
  (*pcVar7)(lVar6 + _DAT_113812220,1,1,lVar4);
  *(undefined1 *)(lVar6 + _DAT_11302af00) = 0;
  plVar5 = &lStack_80;
  lStack_80 = lVar6;
  lStack_78 = lVar2;
  _objc_msgSendSuper2(0,0,0,0,plVar5,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar5);
  *(long **)(unaff_x20 + lVar1) = plVar5;
  lVar1 = _DAT_11302af70;
  lVar6 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar6 + _DAT_11302af10) = 0;
  (*pcVar7)(lVar6 + _DAT_113812220,1,1,lVar4);
  *(undefined1 *)(lVar6 + _DAT_11302af00) = 0;
  plVar5 = &lStack_90;
  lStack_90 = lVar6;
  lStack_88 = lVar2;
  _objc_msgSendSuper2(0,0,0,0,plVar5,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar5);
  *(long **)(unaff_x20 + lVar1) = plVar5;
  lVar1 = _DAT_11302af78;
  lVar6 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar6 + _DAT_11302af10) = 0;
  (*pcVar7)(lVar6 + _DAT_113812220,1,1,lVar4);
  *(undefined1 *)(lVar6 + _DAT_11302af00) = 0;
  plVar5 = &lStack_a0;
  lStack_a0 = lVar6;
  lStack_98 = lVar2;
  _objc_msgSendSuper2(0,0,0,0,plVar5,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar5);
  *(long **)(unaff_x20 + lVar1) = plVar5;
  lVar1 = _DAT_11302af80;
  lVar6 = lVar2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar6 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar6 + _DAT_11302af10) = 0;
  (*pcVar7)(lVar6 + _DAT_113812220,1,1,lVar4);
  *(undefined1 *)(lVar6 + _DAT_11302af00) = 0;
  plVar5 = &lStack_b0;
  lStack_b0 = lVar6;
  lStack_a8 = lVar2;
  _objc_msgSendSuper2(0,0,0,0,plVar5,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar5);
  *(long **)(unaff_x20 + lVar1) = plVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_initWithCoder__1125dd730,param_1);
  return;
}



/* Entry: 103eb9b6c; end: 103eb9c7f;  */

undefined8 FUN_103eb9b6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11302af58;
  func_0x0001000285a8(0x11302af58,&UNK_10dca62b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103eb9c80; end: 103eb9d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103eb9c80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x0001008479c8();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar6 = *(undefined8 *)(param_1 + _DAT_11302afc8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11302afd0);
  *(undefined8 *)(lVar1 + 0x20) = uVar6;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  FUN_103ebb174(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  lVar4 = lVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar3);
  _swift_release(lVar1);
  func_0x000107c45784(puVar2);
  _objc_release(lVar4);
  func_0x000107c52610(puVar2);
  func_0x000107c54280(puVar2);
  func_0x000107c52b2c(puVar2);
  func_0x000107c59594(0x4024000000000000,puVar2);
  return puVar2;
}



/* Entry: 103eb9d98; end: 103eb9df7;  */

long FUN_103eb9d98(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  return lVar2;
}



/* Entry: 103eb9df8; end: 103eb9f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103eb9df8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x0001008479c8();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 7;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  puVar2 = &DAT_11302afe0;
  FUN_103eb9d98(&DAT_11302afe0,FUN_103eb9c80);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11302afe8);
  *(undefined **)(lVar1 + 0x20) = puVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar6;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11302afc0);
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  FUN_103ebb174(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  lVar4 = lVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar3);
  _swift_release(lVar1);
  func_0x000107c45784(puVar2);
  _objc_release(lVar4);
  func_0x000107c52b2c(puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c59594(0x4024000000000000,puVar2);
  return puVar2;
}



/* Entry: 103eb9f1c; end: 103eb9f43; -[_TtC25LensInfoControllerFeature22LensProcessingInfoView initWithCoder:] */

void FUN_103eb9f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000103ebb8c0();
  return;
}



/* Entry: 103eb9f44; end: 103eba463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103eb9f44(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  code *pcVar14;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  lVar1 = _DAT_11302afb0;
  uVar2 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11302afb8) = 0;
  lVar1 = _DAT_11302afc0;
  uVar2 = 0;
  FUN_103ebc568();
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_11302afc8;
  lVar3 = 0;
  FUN_103eb8918();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar4 + _DAT_11302af10) = 0;
  lVar7 = _DAT_113812220;
  lVar5 = 0;
  FUN_103eb7338();
  pcVar14 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar14)(lVar4 + lVar7,1,1,lVar5);
  *(undefined1 *)(lVar4 + _DAT_11302af00) = 1;
  plVar6 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(0,0,0,0,plVar6,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar6);
  *(long **)(unaff_x20 + lVar1) = plVar6;
  lVar1 = _DAT_11302afd0;
  lVar7 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar7 + _DAT_11302af08) = 0;
  *(undefined8 *)(lVar7 + _DAT_11302af10) = 0;
  (*pcVar14)(lVar7 + _DAT_113812220,1,1,lVar5);
  *(undefined1 *)(lVar7 + _DAT_11302af00) = 1;
  plVar6 = &lStack_80;
  lStack_80 = lVar7;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(0,0,0,0,plVar6,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_103eb8504();
  _objc_release(plVar6);
  *(long **)(unaff_x20 + lVar1) = plVar6;
  *(undefined **)(unaff_x20 + _DAT_11302afd8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_11302afe0) = 0;
  lVar1 = _DAT_11302afe8;
  puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c52610();
  func_0x000107c54280(puVar8);
  func_0x000107c52b2c(puVar8);
  func_0x000107c59594(0x4024000000000000,puVar8);
  *(undefined **)(unaff_x20 + lVar1) = puVar8;
  *(undefined8 *)(unaff_x20 + _DAT_11302aff0) = 0;
  puVar9 = &stack0xffffffffffffff70;
  _objc_msgSendSuper2(0,0,0,0,puVar9,PTR_s_initWithFrame__1125e2948);
  lVar1 = lRam000000011302b238;
  _objc_retain();
  _objc_retain();
  if (lVar1 != -1) {
    _swift_once(0x11302b238,0x103ebdba8);
  }
  func_0x000107c52b50(puVar9);
  puVar10 = puVar9;
  func_0x000107c4aba4(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c539d4(0x4024000000000000);
  _objc_release(puVar10);
  puVar8 = &DAT_11302aff0;
  FUN_103eb9d98(&DAT_11302aff0,FUN_103eb9df8);
  func_0x000107c3d89c(puVar9);
  _objc_release(puVar8);
  lVar1 = _DAT_11302aff0;
  func_0x000107c5a050(*(undefined8 *)(puVar9 + _DAT_11302aff0));
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar11 = puVar8;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar11 + 0x18) = 9;
  *(undefined8 *)(puVar11 + 0x10) = 4;
  uVar12 = *(undefined8 *)(puVar9 + lVar1);
  func_0x000107c4ace0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000107c4ace0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x000107c40284(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar10);
  *(undefined8 *)(puVar11 + 0x20) = uVar2;
  uVar12 = *(undefined8 *)(puVar9 + lVar1);
  func_0x000107c50890();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000107c50890(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar10);
  *(undefined8 *)(puVar11 + 0x28) = uVar2;
  uVar12 = *(undefined8 *)(puVar9 + lVar1);
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000107c5cbe4(puVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar10);
  *(undefined8 *)(puVar11 + 0x30) = uVar2;
  uVar12 = *(undefined8 *)(puVar9 + lVar1);
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000107c3ec1c(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  uVar2 = uVar12;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar10);
  *(undefined8 *)(puVar11 + 0x38) = uVar2;
  uVar2 = 0;
  FUN_103ebb174(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar13 = puVar11;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar11,uVar2);
  _swift_release(puVar11);
  func_0x000107c3d048(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar13);
  return puVar9;
}



/* Entry: 103eba464; end: 103eba483; -[_TtC25LensInfoControllerFeature22LensProcessingInfoView init] */

void FUN_103eba464(void)

{
  FUN_103eb9f44();
  return;
}



/* Entry: 103eba484; end: 103eba68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eba484(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  
  plVar8 = *(long **)(param_1 + 0x10);
  puVar6 = &UNK_11071cdb0;
  puVar1 = puVar6;
  _swift_allocObject(&UNK_11071cdb0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  pcVar2 = FUN_103ebbb38;
  puVar7 = puVar1;
  (**(code **)(*plVar8 + 0x60))(FUN_103ebbb38);
  _swift_release(puVar1);
  pcVar3 = pcVar2;
  _swift_getObjectType(pcVar2);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11302afb0);
  (**(code **)(puVar7 + 0x10))(uVar9,pcVar3,puVar7);
  _swift_unknownObjectRelease(pcVar2);
  plVar8 = *(long **)(param_1 + 0x18);
  puVar1 = puVar6;
  _swift_allocObject(&UNK_11071cdb0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar4 = 0x103ebbb5c;
  puVar7 = puVar1;
  (**(code **)(*plVar8 + 0x60))(0x103ebbb5c);
  _swift_release(puVar1);
  uVar5 = uVar4;
  _swift_getObjectType(uVar4);
  (**(code **)(puVar7 + 0x10))(uVar9,uVar5,puVar7);
  _swift_unknownObjectRelease(uVar4);
  plVar8 = *(long **)(param_1 + 0x20);
  puVar1 = puVar6;
  _swift_allocObject(&UNK_11071cdb0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  pcVar2 = FUN_103ebbb80;
  puVar7 = puVar1;
  (**(code **)(*plVar8 + 0x60))(FUN_103ebbb80);
  _swift_release(puVar1);
  pcVar3 = pcVar2;
  _swift_getObjectType(pcVar2);
  (**(code **)(puVar7 + 0x10))(uVar9,pcVar3,puVar7);
  _swift_unknownObjectRelease(pcVar2);
  plVar8 = *(long **)(param_1 + 0x28);
  _swift_allocObject(&UNK_11071cdb0,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  uVar4 = 0x103ebbb88;
  puVar1 = puVar6;
  (**(code **)(*plVar8 + 0x60))(0x103ebbb88);
  _swift_release(puVar6);
  uVar5 = uVar4;
  _swift_getObjectType(uVar4);
  (**(code **)(puVar1 + 0x10))(uVar9,uVar5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 103eba68c; end: 103eba787; -[_TtC25LensInfoControllerFeature22LensProcessingInfoView initWithFrame:] */

void FUN_103eba68c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensInfoControllerFeature.LensProcessingInfoView",0x30,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eba6b8);
  (*pcVar1)();
}



/* Entry: 103eba788; end: 103eba82f; -[_TtC25LensInfoControllerFeature22LensProcessingInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eba788(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302afb0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302afb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302afc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302afc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302afd0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302afd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302afe0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302afe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302aff0));
  return;
}



/* Entry: 103eba830; end: 103eba84f;  */

void FUN_103eba830(void)

{
  _objc_opt_self(&PTR_PTR_11295f250);
  return;
}



/* Entry: 103eba850; end: 103eba99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eba850(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x11302af58;
  func_0x0001000285a8(0x11302af58,&UNK_10dca62b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)((long)auStack_80 - extraout_x8);
  uVar4 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + *param_3);
    _objc_retain(lVar2);
    _objc_release(param_2);
    *puVar3 = uVar4;
    lVar1 = 0;
    FUN_103eb7338();
    _swift_storeEnumTagMultiPayload(puVar3,lVar1,param_4);
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,0,1,lVar1);
    lVar1 = _DAT_113812220;
    _swift_beginAccess(lVar2 + _DAT_113812220,auStack_80,0x21,0);
    FUN_103eb9b6c(puVar3,lVar2 + lVar1);
    _swift_endAccess(auStack_80);
    FUN_103eb82b0();
    _objc_release(lVar2);
    func_0x000103eb8a28(puVar3);
  }
  return;
}



/* Entry: 103eba9a0; end: 103eba9fb;  */

void FUN_103eba9a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_103eba9fc(uVar1);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103eba9fc; end: 103ebaf17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eba9fc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar7 = 0x11302acd8;
  func_0x0001000285a8(0x11302acd8,&UNK_10dca6108);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  lStack_b8 = (long)&uStack_d0 - extraout_x8;
  FUN_103eb6e88();
  lVar12 = *(long *)(lVar7 + -8);
  lStack_c0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = (ulong *)(((long)&uStack_d0 - extraout_x8) -
                     (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_11302afd8;
  _swift_beginAccess(unaff_x20 + _DAT_11302afd8,auStack_80,0,0);
  lVar8 = *(long *)(unaff_x20 + lVar3);
  _swift_bridgeObjectRetain();
  FUN_103ebb040();
  puStack_88 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar7 = *(long *)(param_1 + 0x10);
  lStack_68 = lVar8;
  if (lVar7 != 0) {
    uStack_d0 = *(ulong *)(unaff_x20 + _DAT_11302afe8);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lStack_b0 = *(long *)(lVar12 + 0x48);
    puStack_c8 = (undefined *)lVar12;
    do {
      FUN_103ebbb90(param_1,(long)puVar13 - extraout_x12);
      func_0x000103eb6784((long)puVar13 - extraout_x12,puVar13);
      uVar10 = *puVar13;
      uVar2 = puVar13[1];
      uVar15 = uVar10 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar15 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar15 != 0) {
        _swift_beginAccess(unaff_x20 + lVar3,auStack_a0,0x20,0);
        lVar8 = *(long *)(unaff_x20 + lVar3);
        if (*(long *)(lVar8 + 0x10) == 0) {
LAB_103ebab2c:
          _swift_endAccess(auStack_a0);
          lVar12 = lStack_b8;
          FUN_103ebbb90(puVar13,lStack_b8);
          (**(code **)((long)puStack_c8 + 0x38))(lVar12,0,1,lStack_c0);
          FUN_103eb9828(0);
          _objc_allocWithZone();
          func_0x000103eb8a70(lVar12);
          func_0x000107c3d5b4(uStack_d0);
          _swift_beginAccess(unaff_x20 + lVar3,auStack_a0,0x21,0);
          _swift_bridgeObjectRetain(uVar2);
          _objc_retain(lVar12);
          uVar11 = *(undefined8 *)(unaff_x20 + lVar3);
          _swift_isUniquelyReferenced_nonNull_native(uVar11);
          lStack_a8 = *(long *)(unaff_x20 + lVar3);
          *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
          func_0x000103ebb1b4(lVar12,uVar10,uVar2,uVar11);
          _swift_bridgeObjectRelease(uVar2);
          *(long *)(unaff_x20 + lVar3) = lStack_a8;
          _swift_endAccess(auStack_a0);
        }
        else {
          _swift_bridgeObjectRetain(lVar8);
          uVar15 = uVar10;
          uVar9 = uVar2;
          func_0x000100029284();
          if ((uVar9 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar8);
            goto LAB_103ebab2c;
          }
          lVar12 = *(long *)(*(long *)(lVar8 + 0x38) + uVar15 * 8);
          _objc_retain(lVar12);
          _swift_endAccess(auStack_a0);
          _swift_bridgeObjectRelease(lVar8);
          func_0x000103eb9154(puVar13);
        }
        _objc_release(lVar12);
      }
      _swift_bridgeObjectRetain(uVar2);
      func_0x000100403b00(auStack_a0,uVar10,uVar2);
      _swift_bridgeObjectRelease(uStack_98);
      func_0x000103ebbbd4(puVar13);
      param_1 = param_1 + lStack_b0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  puStack_c8 = puStack_88;
  func_0x0001012eef50();
  puVar13 = (ulong *)(lStack_68 + 0x38);
  uStack_d0 = -1L << ((ulong)*(byte *)(lStack_68 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uStack_d0 < 0x40) {
    uVar15 = ~(-1L << (-uStack_d0 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lStack_c0 = *(undefined8 *)(unaff_x20 + _DAT_11302afe8);
  uVar10 = 0x3f - uStack_d0;
  lStack_b0 = lStack_68;
  _swift_bridgeObjectRetain();
  lVar7 = 0;
  lVar8 = lVar7;
  do {
    while (lVar12 = lStack_b0, uVar15 == 0) {
      bVar5 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ebaf18);
        (*pcVar4)();
      }
      if ((long)(uVar10 >> 6) <= lVar7) {
        func_0x000100d715a4(lStack_b0,puVar13,~uStack_d0,lVar8,0);
        _swift_bridgeObjectRelease(puStack_c8);
        _swift_bridgeObjectRelease(lVar12);
        return;
      }
      uVar15 = puVar13[lVar7];
    }
    uVar2 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    plVar1 = (long *)(*(long *)(lStack_b0 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                     lVar7 * 0x400);
    lVar8 = *plVar1;
    uVar2 = plVar1[1];
    _swift_beginAccess(unaff_x20 + lVar3,auStack_a0,0x20,0);
    lVar12 = *(long *)(unaff_x20 + lVar3);
    lVar14 = *(long *)(lVar12 + 0x10);
    _swift_bridgeObjectRetain(uVar2);
    if (lVar14 == 0) {
LAB_103ebad44:
      _swift_endAccess(auStack_a0);
    }
    else {
      _swift_bridgeObjectRetain(lVar12);
      lVar14 = lVar8;
      uVar9 = uVar2;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar12);
        goto LAB_103ebad44;
      }
      lVar14 = *(long *)(*(long *)(lVar12 + 0x38) + lVar14 * 8);
      _objc_retain();
      _swift_endAccess(auStack_a0);
      _swift_bridgeObjectRelease(lVar12);
      func_0x000107c4fe94(lStack_c0);
      lStack_b8 = lVar14;
      func_0x000107c4ff34(lVar14);
      _swift_beginAccess(unaff_x20 + lVar3,auStack_a0,0x21,0);
      uVar11 = *(undefined8 *)(unaff_x20 + lVar3);
      _swift_bridgeObjectRetain(uVar11);
      uVar9 = uVar2;
      func_0x000100029284();
      _swift_bridgeObjectRelease(uVar11);
      if ((uVar9 & 1) != 0) {
        iVar6 = (int)*(undefined8 *)(unaff_x20 + lVar3);
        _swift_isUniquelyReferenced_nonNull_native();
        lStack_a8 = *(long *)(unaff_x20 + lVar3);
        *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
        if (iVar6 == 0) {
          func_0x000103ebb304();
        }
        lVar12 = lStack_a8;
        _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lStack_a8 + 0x30) + lVar8 * 0x10 + 8));
        _objc_release(*(undefined8 *)(*(long *)(lVar12 + 0x38) + lVar8 * 8));
        func_0x000103ebb710(lVar8,lVar12);
        *(long *)(unaff_x20 + lVar3) = lVar12;
      }
      _swift_endAccess(auStack_a0);
      _objc_release(lStack_b8);
    }
    uVar15 = uVar15 - 1 & uVar15;
    _swift_bridgeObjectRelease(uVar2);
    lVar8 = lVar7;
  } while( true );
}



/* Entry: 103ebaf18; end: 103ebb03f;  */

void FUN_103ebaf18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000103ebaf8c(uVar1,uVar2,uVar3);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103ebb040; end: 103ebb173;  */

undefined8 FUN_103ebb040(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  __sSh15minimumCapacityShyxGSi_tcfC(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      _swift_bridgeObjectRetain(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      _swift_bridgeObjectRelease(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      func_0x000100d715a4(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x103ebb174);
  (*pcVar5)();
}



/* Entry: 103ebb174; end: 103ebb1b3;  */

void FUN_103ebb174(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ebb1b4; end: 103ebb473;  */

void FUN_103ebb1b4(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebb28c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103ebb474(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebb254);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103ebb304();
    lVar6 = *unaff_x20;
    goto joined_r0x000103ebb2a0;
  }
  lVar6 = *unaff_x20;
joined_r0x000103ebb2a0:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ebb304);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103ebb474; end: 103ebbb37;  */

void FUN_103ebb474(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x11302b020;
  func_0x0001000285a8(0x11302b020,&UNK_10dca62e0);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103ebb6dc:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103ebb70c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103ebb6dc;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103ebb710);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103ebbb38; end: 103ebbb7f;  */

void FUN_103ebbb38(void)

{
  FUN_103eba850();
  return;
}



/* Entry: 103ebbb80; end: 103ebbb8f;  */

void FUN_103ebbb80(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_103eba9fc(uVar2);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 103ebbb90; end: 103ebbe1f;  */

undefined8 FUN_103ebbb90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103eb6e88();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103ebbe20; end: 103ebbe47; -[_TtC25LensInfoControllerFeature21LensProfilingInfoView initWithCoder:] */

void FUN_103ebbe20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000103ebc658();
  return;
}



/* Entry: 103ebbe48; end: 103ebbf87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ebbe48(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffc0;
  lVar2 = unaff_x20 + _DAT_11302b028;
  *(undefined8 *)(lVar2 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302b030) = 0x4059000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302b038) = 0;
  lVar1 = _DAT_11302b040;
  func_0x000103ebbc10();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  lVar2 = _DAT_11302b048;
  puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_allocWithZone();
  func_0x000107c453e4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x73746174735f6171;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73746174735f6171,0xef6863746977735f);
  func_0x000107c520f4(puVar3);
  _objc_release(uVar4);
  func_0x000107c5a050(puVar3);
  puVar5 = puVar3;
  _objc_release();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_11302b050;
  func_0x000103ebbcec();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  FUN_103ebc568();
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffffc0,PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c5a050();
  FUN_103ebbf88();
  _objc_release(puVar6);
  return puVar6;
}



/* Entry: 103ebbf88; end: 103ebc3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ebbf88(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11302b048);
  func_0x000107c3d8b8(uVar10);
  func_0x000107c3d89c();
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11302b040);
  func_0x000107c3d89c();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11302b050);
  func_0x000107c3d89c();
  uVar8 = uVar9;
  func_0x000107c44d9c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x000107c40290(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11302b038);
  *(undefined8 *)(unaff_x20 + _DAT_11302b038) = uVar1;
  _objc_retain();
  _objc_release(uVar8);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0x13;
  *(undefined8 *)(puVar3 + 0x10) = 9;
  uVar8 = uVar10;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar4);
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar8 = uVar11;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar4);
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uVar8 = uVar11;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x000107c4acb0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x000107c40284(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar5);
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  func_0x000107c3f764();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x000107c3f764(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar8);
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  uVar8 = uVar9;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3ec1c(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x000107c40284(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar10);
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  uVar8 = uVar9;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar4);
  *(undefined8 *)(puVar3 + 0x48) = uVar5;
  uVar8 = uVar9;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = unaff_x20;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar4);
  *(undefined8 *)(puVar3 + 0x50) = uVar5;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(unaff_x20);
  *(undefined8 *)(puVar3 + 0x58) = uVar8;
  *(undefined8 *)(puVar3 + 0x60) = uVar1;
  uVar8 = 0;
  func_0x000100847984(0);
  _objc_retain(uVar1);
  puVar7 = puVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar3,uVar8);
  _swift_release(puVar3);
  func_0x000107c3d048(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 103ebc3a4; end: 103ebc3c3; -[_TtC25LensInfoControllerFeature21LensProfilingInfoView init] */

void FUN_103ebc3a4(void)

{
  FUN_103ebbe48();
  return;
}



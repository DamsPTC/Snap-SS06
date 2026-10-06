/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d4e970; end: 107d4ea73; -[SCGroupActionScope initWithPlugInRegistry:context:groupId:saveableSnapMessageId:disableCallingActions:] */

undefined1 *
FUN_107d4e970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126facd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4ea74; end: 107d4ea7b; -[SCGroupActionScope plugInRegistry] */

undefined8 FUN_107d4ea74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4ea7c; end: 107d4ea83; -[SCGroupActionScope groupId] */

undefined8 FUN_107d4ea7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4ea84; end: 107d4ea8b; -[SCGroupActionScope context] */

undefined8 FUN_107d4ea84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d4ea8c; end: 107d4ea93; -[SCGroupActionScope saveableSnapMessageId] */

undefined8 FUN_107d4ea8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d4ea94; end: 107d4ea9b; -[SCGroupActionScope setSaveableSnapMessageId:] */

void FUN_107d4ea94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d4ea9c; end: 107d4eaa3; -[SCGroupActionScope disableCallingActions] */

undefined1 FUN_107d4ea9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d4eaa4; end: 107d4eaeb; -[SCGroupActionScope .cxx_destruct] */

void FUN_107d4eaa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d4eaec; end: 107d4ec6b; -[SCConditionalProfileSectionCreator initWithActionHandler:section:order:lifecycleAnnouncer:configuration:timeProviding:timeToLoadCallback:] */

undefined1 *
FUN_107d4eaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126facd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x60) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    FUN_107d4ec6c(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4ec6c; end: 107d4ece3;  */

void FUN_107d4ec6c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d79f8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1895e0(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uStack_28 = 0;
  uStack_30 = uVar2;
  FUN_107d4f170(param_1 + 8,&uStack_30);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  return;
}



/* Entry: 107d4ece4; end: 107d4ee3f; -[SCConditionalProfileSectionCreator setConditionalDelegate:withObservable:] */

void FUN_107d4ece4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x68,param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_4;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bf86d80();
  }
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  uVar1 = param_4;
  func_0x00010c25ff60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d4ee40; end: 107d4ef13;  */

void FUN_107d4ee40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d4ef14;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 107d4ef14; end: 107d4f16f;  */

void FUN_107d4ef14(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_2 + 0x30;
  _objc_loadWeakRetained();
  lVar1 = *(long *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(lVar1);
  _objc_retain(uVar2);
  if ((lVar3 != 0) && (lVar1 != 0)) {
    lVar4 = lVar3 + 0x68;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = lVar3 + 0x68;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c155920();
      _objc_release(lVar4);
      if ((uint)*(byte *)(lVar3 + 0x60) != (uint)lVar5) {
        *(char *)(lVar3 + 0x60) = (char)lVar5;
        uVar6 = *(undefined8 *)(lVar3 + 0x48);
        func_0x00010bf5e5e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        if (*(long *)(lVar3 + 0x50) != 0) {
          func_0x00010c26f380(uVar6);
          (**(code **)(*(long *)(lVar3 + 0x50) + 0x10))
                    (*(long *)(lVar3 + 0x50),(long)(param_1 * 1000.0));
        }
        if ((uint)lVar5 == 0) {
          FUN_107d4ec6c(lVar3);
        }
        else if (*(long *)(lVar3 + 8) == *(long *)(lVar3 + 0x18)) {
          uVar7 = *(undefined8 *)(lVar3 + 0x20);
          func_0x00010bf57500();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(lVar3 + 0x28);
          func_0x00010bf57500();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010010fab4();
          uVar10 = uVar8;
          if ((int)uVar9 == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          lVar4 = lVar3 + 0x38;
          _objc_loadWeakRetained(lVar4);
          func_0x00010bef9980(uVar10);
          _objc_release(uVar10);
          _objc_release(lVar4);
          uStack_70 = uVar7;
          uStack_68 = uVar8;
          _objc_retain(uVar8);
          _objc_retain(uVar7);
          FUN_107d4f170((long *)(lVar3 + 8),&uStack_70);
          _objc_release(uStack_70);
          _objc_release(uStack_68);
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        uVar10 = *(undefined8 *)(lVar3 + 8);
        func_0x00010bf6b020(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf40a00();
        _objc_release(uVar10);
        uVar10 = *(undefined8 *)(lVar3 + 8);
        func_0x00010bf6b020(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf40900(uVar10);
        _objc_release(puVar11);
        _objc_release(uVar10);
        _objc_release(uVar6);
      }
    }
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107d4f170; end: 107d4f1c3;  */

void FUN_107d4f170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  _objc_retain(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  _objc_release(uVar1);
  uVar2 = param_2[1];
  _objc_retain(uVar2);
  uVar1 = param_1[1];
  param_1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d4f1c4; end: 107d4f1cb; -[SCConditionalProfileSectionCreator order] */

undefined8 FUN_107d4f1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d4f1cc; end: 107d4f1f3; -[SCConditionalProfileSectionCreator actionHandler] */

void FUN_107d4f1cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d4f1f4; end: 107d4f21b; -[SCConditionalProfileSectionCreator section] */

void FUN_107d4f1f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d4f21c; end: 107d4f223; -[SCConditionalProfileSectionCreator supportsDynamicReload] */

undefined8 FUN_107d4f21c(void)

{
  return 1;
}



/* Entry: 107d4f224; end: 107d4f23b; -[SCConditionalProfileSectionCreator lifecycleAnnouncer] */

void FUN_107d4f224(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4f23c; end: 107d4f247; -[SCConditionalProfileSectionCreator setLifecycleAnnouncer:] */

void FUN_107d4f23c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 107d4f248; end: 107d4f24f; -[SCConditionalProfileSectionCreator configuration] */

undefined8 FUN_107d4f248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d4f250; end: 107d4f267; -[SCConditionalProfileSectionCreator conditionalDelegate] */

void FUN_107d4f250(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4f268; end: 107d4f273; -[SCConditionalProfileSectionCreator setConditionalDelegate:] */

void FUN_107d4f268(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 107d4f274; end: 107d4f27b; -[SCConditionalProfileSectionCreator observable] */

undefined8 FUN_107d4f274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107d4f27c; end: 107d4f2ab; -[SCConditionalProfileSectionCreator setObservable:] */

void FUN_107d4f27c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d4f2ac; end: 107d4f2b3; -[SCConditionalProfileSectionCreator observableToken] */

undefined8 FUN_107d4f2ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107d4f2b4; end: 107d4f2e3; -[SCConditionalProfileSectionCreator setObservableToken:] */

void FUN_107d4f2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d4f2e4; end: 107d4f2eb; -[SCConditionalProfileSectionCreator isContentShown] */

undefined1 FUN_107d4f2e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 107d4f2ec; end: 107d4f2f3; -[SCConditionalProfileSectionCreator setIsContentShown:] */

void FUN_107d4f2ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107d4f2f4; end: 107d4f397; -[SCConditionalProfileSectionCreator .cxx_destruct] */

void FUN_107d4f2f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_release(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 107d4f398; end: 107d4f39f; -[SCEmptyProfileSection minimumSectionInteritemSpacing] */

undefined8 FUN_107d4f398(void)

{
  return 0;
}



/* Entry: 107d4f3a0; end: 107d4f3a7; -[SCEmptyProfileSection minimumSectionLineSpacing] */

undefined8 FUN_107d4f3a0(void)

{
  return 0;
}



/* Entry: 107d4f3a8; end: 107d4f3af; -[SCEmptyProfileSection cellForItemAtIndexInSection:] */

undefined8 FUN_107d4f3a8(void)

{
  return 0;
}



/* Entry: 107d4f3b0; end: 107d4f3b7; -[SCEmptyProfileSection numberOfCellsInSection] */

undefined8 FUN_107d4f3b0(void)

{
  return 0;
}



/* Entry: 107d4f3b8; end: 107d4f3c3; -[SCEmptyProfileSection reuseCellClassesByIdentifiers] */

undefined * FUN_107d4f3b8(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 107d4f3c4; end: 107d4f3d3; -[SCEmptyProfileSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16] FUN_107d4f3c4(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 107d4f3d4; end: 107d4f3eb; -[SCEmptyProfileSection delegate] */

void FUN_107d4f3d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d4f3ec; end: 107d4f3f7; -[SCEmptyProfileSection setDelegate:] */

void FUN_107d4f3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107d4f3f8; end: 107d4f3ff; -[SCEmptyProfileSection sectionUpdateModel] */

undefined8 FUN_107d4f3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d4f400; end: 107d4f407; -[SCEmptyProfileSection setSectionUpdateModel:] */

void FUN_107d4f400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d4f408; end: 107d4f40f; -[SCEmptyProfileSection dataLoadingStatus] */

undefined8 FUN_107d4f408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d4f410; end: 107d4f417; -[SCEmptyProfileSection setDataLoadingStatus:] */

void FUN_107d4f410(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107d4f418; end: 107d4f41f; -[SCEmptyProfileSection sectionInfo] */

undefined8 FUN_107d4f418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d4f420; end: 107d4f44f; -[SCEmptyProfileSection setSectionInfo:] */

void FUN_107d4f420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d4f450; end: 107d4f457; -[SCEmptyProfileSection sectionInsets] */

undefined8 FUN_107d4f450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d4f458; end: 107d4f487; -[SCEmptyProfileSection setSectionInsets:] */

void FUN_107d4f458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d4f488; end: 107d4f4cb; -[SCEmptyProfileSection .cxx_destruct] */

void FUN_107d4f488(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107d4f4cc; end: 107d4f5b7;  */

void FUN_107d4f4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bf00560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b12b8;
  _objc_alloc(PTR_PTR_1126b12b8);
  func_0x00010c00bac0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010befa120(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d4f5b8; end: 107d4f6d7; -[SCProfileSectionLegacyObserver initWithDescriptors:sections:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d4f5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126face0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276e308;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276e30c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276e30c) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11276e310;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11276e314;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    func_0x00010be07fc0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d4f6d8; end: 107d4f6df; -[SCProfileSectionLegacyObserver sectionDescriptorProviderDidUpdateSectionDesciptors:updateReason:] */

void FUN_107d4f6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be07fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitNextWithUpdateReason__11255f990,param_4)
  ;
  return;
}



/* Entry: 107d4f6e0; end: 107d4f7d7; -[SCProfileSectionLegacyObserver _emitNextWithUpdateReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d4f6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276e308);
  _objc_copyWeak(auStack_58,auStack_48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276e314);
  uStack_50 = param_3;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9fa0(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107d4f7d8; end: 107d4f82b;  */

void FUN_107d4f7d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf2fc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d4f82c; end: 107d4fb73; -[SCProfileSectionLegacyObserver _createSectionsBasedOnSectionDescriptors:updateReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d4f82c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **unaff_x27;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11276e30c;
  uVar11 = *(ulong *)(param_1 + lVar9);
  _objc_retain(uVar11);
  _objc_retain(param_3);
  if (uVar11 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar11);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar11);
    }
    else {
      uVar10 = uVar11;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar11);
      if ((uVar10 & 1) != 0) goto LAB_107d4fb04;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    uVar11 = param_3;
    func_0x00010bf52a60();
    if (uVar11 != 0) {
      lVar9 = *plStack_130;
      unaff_x27 = &puStack_178;
      do {
        uVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar12 = *(ulong *)(lStack_138 + uVar10 * 8);
          uVar3 = uVar12;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126b1220;
          _objc_opt_class(PTR_PTR_1126b1220);
          uVar5 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar4);
          while ((uVar5 & 1) != 0) {
            _objc_retain(uVar3);
            uVar6 = uVar3;
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            func_0x00010c0ec9a0(uVar3);
            _objc_release(uVar3);
            puVar4 = PTR_PTR_1126b1220;
            _objc_opt_class(PTR_PTR_1126b1220);
            uVar5 = uVar6;
            _objc_opt_isKindOfClass(uVar6,puVar4);
            uVar3 = uVar6;
          }
          _objc_initWeak(auStack_148,param_1);
          puVar4 = PTR_PTR_1126ae720;
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_107d4fb74;
          puStack_160 = &UNK_110853330;
          _objc_copyWeak(auStack_150,auStack_148);
          uStack_158 = uVar12;
          func_0x00010bf11fe0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126afda8;
          _objc_alloc(PTR_PTR_1126afda8);
          func_0x00010c032280();
          func_0x00010befa120(puVar2);
          _objc_release(puVar7);
          _objc_release(puVar4);
          _objc_destroyWeak(auStack_150);
          _objc_destroyWeak(auStack_148);
          _objc_release(uVar3);
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
        uVar11 = param_3;
        func_0x00010bf52a60();
      } while (uVar11 != 0);
    }
    _objc_release(param_3);
    func_0x00010c0d9840(param_1);
    _objc_release(puVar2);
  }
LAB_107d4fb04:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 5);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  lVar9 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar9);
  lVar8 = lVar9;
  func_0x00010be9cde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 107d4fb74; end: 107d4fbbb;  */

void FUN_107d4fb74(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d4fbbc; end: 107d4fbcb; -[SCProfileSectionLegacyObserver _sectionForDescriptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d4fbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276e310),PTR_s_sectionForDescriptor__112633158);
  return;
}



/* Entry: 107d4fbcc; end: 107d4fc2b; -[SCProfileSectionLegacyObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d4fbcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276e30c,0);
  _objc_storeStrong(param_1 + _DAT_11276e314,0);
  _objc_storeStrong(param_1 + _DAT_11276e310,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276e308,0);
  return;
}



/* Entry: 107d4fc2c; end: 107d4ff2f; -[SCSimpleProfileSectionCreator initWithActionHandler:section:order:lifecycleAnnouncer:configuration:profileIdFuture:performer:timeProviding:timeToLoadCallback:] */

undefined8 *
FUN_107d4fc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_80 = PTR_PTR_1126face8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_5;
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    _objc_retainBlock();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126d79f8;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    func_0x00010c1895e0(puVar1[0xc]);
    uVar2 = puVar1[0xc];
    _objc_retain(uVar2);
    uStack_70 = 0;
    uStack_78 = uVar2;
    FUN_107d4f170(puVar1 + 10,&uStack_78);
    _objc_release(uStack_78);
    _objc_release(uStack_70);
    uVar4 = puVar1[8];
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(&uStack_78,puVar1);
    uVar5 = puVar1[6];
    _objc_copyWeak(auStack_90,&uStack_78);
    uVar2 = uVar4;
    _objc_retain(uVar4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(&uStack_78);
    _objc_release(uVar4);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d4ff30; end: 107d5011f;  */

void FUN_107d4ff30(double param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(uVar8);
  if ((lVar2 != 0) && (lVar4 = param_3, func_0x00010c08fa60(), lVar4 != 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    func_0x00010bf5e5e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(lVar2 + 0x48) != 0) {
      func_0x00010c26f380(uVar3);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))
                (*(long *)(lVar2 + 0x48),(long)(param_1 * 1000.0));
    }
    lVar4 = *(long *)(lVar2 + 0x60);
    if (*(long *)(lVar2 + 0x50) == lVar4) {
      uVar5 = *(undefined8 *)(lVar2 + 8);
      func_0x00010bf57500();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar2 + 0x10);
      func_0x00010bf57500();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010010fab4();
      uVar1 = uVar6;
      if ((int)uVar7 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      lVar4 = lVar2 + 0x20;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bef9980(uVar1);
      _objc_release(uVar1);
      _objc_release(lVar4);
      uStack_70 = uVar5;
      uStack_68 = uVar6;
      _objc_retain(uVar6);
      _objc_retain(uVar5);
      FUN_107d4f170((long *)(lVar2 + 0x50),&uStack_70);
      _objc_release(uStack_70);
      _objc_release(uStack_68);
      _objc_release(uVar6);
      _objc_release(uVar5);
      lVar4 = *(long *)(lVar2 + 0x60);
    }
    func_0x00010bf6b020(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40a00();
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107d50120; end: 107d50127; -[SCSimpleProfileSectionCreator order] */

undefined8 FUN_107d50120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d50128; end: 107d5014f; -[SCSimpleProfileSectionCreator actionHandler] */

void FUN_107d50128(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d50150; end: 107d50177; -[SCSimpleProfileSectionCreator section] */

void FUN_107d50150(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d50178; end: 107d5017f; -[SCSimpleProfileSectionCreator supportsDynamicReload] */

undefined8 FUN_107d50178(void)

{
  return 1;
}



/* Entry: 107d50180; end: 107d50197; -[SCSimpleProfileSectionCreator lifecycleAnnouncer] */

void FUN_107d50180(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d50198; end: 107d501a3; -[SCSimpleProfileSectionCreator setLifecycleAnnouncer:] */

void FUN_107d50198(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107d501a4; end: 107d501ab; -[SCSimpleProfileSectionCreator configuration] */

undefined8 FUN_107d501a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d501ac; end: 107d5023b; -[SCSimpleProfileSectionCreator .cxx_destruct] */

void FUN_107d501ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d5023c; end: 107d502e7; -[SCSimpleProfileSectionProvider initWithOrder:actionHandler:sectionLazy:] */

undefined1 *
FUN_107d5023c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126facf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d502e8; end: 107d503c3; -[SCSimpleProfileSectionProvider initWithOrder:actionHandler:sectionLazy:configuration:] */

undefined1 *
FUN_107d502e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126facf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d503c4; end: 107d503cb; -[SCSimpleProfileSectionProvider order] */

undefined8 FUN_107d503c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d503cc; end: 107d5047b; -[SCSimpleProfileSectionProvider actionHandler] */

void FUN_107d503cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010bf57500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010010fab4();
    lVar1 = lVar3;
    if ((int)lVar4 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bef9980(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107d5047c; end: 107d504df; -[SCSimpleProfileSectionProvider section] */

void FUN_107d5047c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf57500(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d504e0; end: 107d504f7; -[SCSimpleProfileSectionProvider lifecycleAnnouncer] */

void FUN_107d504e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d504f8; end: 107d50503; -[SCSimpleProfileSectionProvider setLifecycleAnnouncer:] */

void FUN_107d504f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107d50504; end: 107d5050b; -[SCSimpleProfileSectionProvider configuration] */

undefined8 FUN_107d50504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d5050c; end: 107d5054f; -[SCSimpleProfileSectionProvider .cxx_destruct] */

void FUN_107d5050c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d50550; end: 107d50573; -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:subfeature:] */

void FUN_107d50550(void)

{
  func_0x00010c058800();
  return;
}



/* Entry: 107d50574; end: 107d505a7; -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:sourcePage:] */

void FUN_107d50574(void)

{
  func_0x00010c058800();
  return;
}



/* Entry: 107d505a8; end: 107d505cf; -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:viewLocation:subfeature:] */

void FUN_107d505a8(void)

{
  func_0x00010c058800();
  return;
}



/* Entry: 107d505d0; end: 107d505f3; -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:subfeatureString:] */

void FUN_107d505d0(void)

{
  func_0x00010c058800();
  return;
}



/* Entry: 107d505f4; end: 107d50727; -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:subfeature:viewLocation:sourcePage:] */

undefined1 *
FUN_107d505f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126facf8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x18),param_5);
    puVar1 = PTR_PTR_1133bb250;
    if (param_6 != (undefined *)0x0) {
      puVar1 = param_6;
    }
    *(undefined **)((long)puVar2 + 0x20) = puVar1;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_7;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x30) = param_8;
    *(undefined8 *)((long)puVar2 + 0x38) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107d50728; end: 107d5072f; -[SCSafetyReportScope uiContainer] */

undefined8 FUN_107d50728(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d50730; end: 107d50737; -[SCSafetyReportScope reportParams] */

undefined8 FUN_107d50730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d50738; end: 107d5074f; -[SCSafetyReportScope delegate] */

void FUN_107d50738(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d50750; end: 107d50757; -[SCSafetyReportScope feature] */

undefined8 FUN_107d50750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d50758; end: 107d5075f; -[SCSafetyReportScope subfeature] */

undefined8 FUN_107d50758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d50760; end: 107d50767; -[SCSafetyReportScope viewLocation] */

undefined8 FUN_107d50760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d50768; end: 107d5076f; -[SCSafetyReportScope sourcePage] */

undefined8 FUN_107d50768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d50770; end: 107d507b3; -[SCSafetyReportScope .cxx_destruct] */

void FUN_107d50770(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d507b4; end: 107d5081f; +[SCSafetyReportParams bitmojiOutfitWithParams:] */

void FUN_107d507b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x17;
  uVar3 = *(undefined8 *)(puVar2 + 200);
  *(undefined8 *)(puVar2 + 200) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50820; end: 107d5088b; +[SCSafetyReportParams chatMediaWithParams:] */

void FUN_107d50820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x12;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d5088c; end: 107d508f7; +[SCSafetyReportParams chatMessageWithParams:] */

void FUN_107d5088c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x13;
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d508f8; end: 107d50963; +[SCSafetyReportParams chatWallpaperWithParams:] */

void FUN_107d508f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x14;
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50964; end: 107d509cf; +[SCSafetyReportParams customStoryWithParams:] */

void FUN_107d50964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d509d0; end: 107d50a3b; +[SCSafetyReportParams gamesChatMessageWithParams:] */

void FUN_107d509d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x18;
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50a3c; end: 107d50aa7; +[SCSafetyReportParams lensWithParams:] */

void FUN_107d50a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50aa8; end: 107d50b13; +[SCSafetyReportParams mapStoryWithParams:] */

void FUN_107d50aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50b14; end: 107d50b7f; +[SCSafetyReportParams mediaShareWithParams:] */

void FUN_107d50b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x16;
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50b80; end: 107d50beb; +[SCSafetyReportParams myStoryWithParams:] */

void FUN_107d50b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50bec; end: 107d50c57; +[SCSafetyReportParams nonPartnerStoryTileWithParams:] */

void FUN_107d50bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d50c58; end: 107d50cc3; +[SCSafetyReportParams officialUserStoryTileWithParams:] */

void FUN_107d50c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2e98;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



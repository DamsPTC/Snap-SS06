/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ddc82c; end: 107ddc82f; -[SCOperaMetaInfoProvider willDumpLogGivenProject:] */

void FUN_107ddc82c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdca250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__allowMediaFileAttachment_112550230);
  return;
}



/* Entry: 107ddc830; end: 107ddc96b; -[SCOperaMetaInfoProvider provideLogContentAsync:] */

void FUN_107ddc830(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010bdca240();
  if ((param_1 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2747e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c22a520();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf5f6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_retain(param_3);
    func_0x00010bf51e40(puVar1);
    _objc_release(param_3);
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ddc96c; end: 107ddc9d7;  */

void FUN_107ddc96c(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_2;
  }
  lVar3 = param_2;
  func_0x00010c08fa60();
  ppuVar2 = (undefined **)0x0;
  if (lVar3 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ebed78;
  }
  (**(code **)(lVar4 + 0x10))(lVar4,lVar1,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ddc9d8; end: 107ddc9df; -[SCOperaMetaInfoProvider getMetaInfoByProject:subProject:description:] */

undefined8 FUN_107ddc9d8(void)

{
  return 0;
}



/* Entry: 107ddc9e0; end: 107ddca8f; -[SCOperaMetaInfoProvider provideShakeLog] */

void FUN_107ddc9e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c08b200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf64920(puVar1,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b7488;
    _objc_alloc(PTR_PTR_1126b7488);
    func_0x00010c0270a0();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ddca90; end: 107ddcabf; -[SCOperaMetaInfoProvider .cxx_destruct] */

void FUN_107ddca90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ddcac0; end: 107ddcbdf;  */

void FUN_107ddcac0(undefined8 param_1)

{
  switch(param_1) {
  case 5:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x30:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x50:
  case 0x53:
  case 0x60:
    func_0x00010c258040(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x00010bf35d60(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x15:
    func_0x00010c0b85e0(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x1a:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x54:
  case 0x57:
  case 0x5a:
  case 0x5f:
  case 0x61:
  case 0x62:
  case 0x65:
  case 0x66:
  case 0x69:
  case 0x6a:
  case 0x6b:
    func_0x00010c24ace0(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x1e:
  case 0x5b:
    func_0x00010bfba680(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x31:
  case 0x32:
  case 0x35:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x56:
  case 0x59:
  case 0x67:
    func_0x00010bf5bc60(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x37:
  case 0x58:
  case 0x5c:
  case 0x5d:
  case 99:
    func_0x00010c0c7a40(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x51:
  case 0x68:
    func_0x00010c0d2940(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x55:
    func_0x00010bef19a0(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xffffffffffffffff:
  case 0:
  case 1:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2e:
  case 0x2f:
  case 0x34:
  case 0x3a:
  case 0x48:
  case 0x4f:
  case 0x52:
  case 100:
    func_0x00010c0e9ee0(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ddcbe0; end: 107ddcd5f;  */

void FUN_107ddcbe0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    lVar3 = param_1;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110ebedb8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40();
      lVar4 = lVar3;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110ebedd8);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
  ppuVar5 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110ebedf8;
  }
  else {
    ppuVar5 = ppuVar1;
    func_0x00010bf51e00(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 107ddcd60; end: 107ddcdf3; -[SCOperaPageTraceEvent init] */

undefined1 * FUN_107ddcd60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb2b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe4cc0();
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ddcdf4; end: 107ddcdfb; -[SCOperaPageTraceEvent dateTime] */

undefined8 FUN_107ddcdf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ddcdfc; end: 107ddce03; -[SCOperaPageTraceEvent source] */

undefined8 FUN_107ddcdfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ddce04; end: 107ddce0b; -[SCOperaPageTraceEvent setSource:] */

void FUN_107ddce04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ddce0c; end: 107ddce13; -[SCOperaPageTraceEvent action] */

undefined8 FUN_107ddce0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ddce14; end: 107ddce1b; -[SCOperaPageTraceEvent setAction:] */

void FUN_107ddce14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ddce1c; end: 107ddce23; -[SCOperaPageTraceEvent networkRTT] */

undefined8 FUN_107ddce1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ddce24; end: 107ddce5f; -[SCOperaPageTraceEvent .cxx_destruct] */

void FUN_107ddce24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ddce60; end: 107ddcee7; +[SCOperaShakeToReportHelper shared] */

void FUN_107ddce60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107ddcee8;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113727f90 != -1) {
    func_0x00010002a2fc(0x113727f90,&puStack_48);
  }
  uVar1 = uRam0000000113727f88;
  _objc_retain(uRam0000000113727f88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ddcee8; end: 107ddcf0f;  */

void FUN_107ddcee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113727f88;
  uRam0000000113727f88 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ddcf10; end: 107ddd08b; -[SCOperaShakeToReportHelper init] */

undefined1 * FUN_107ddcf10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb2b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b7800;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010c184700(*(undefined8 *)((long)puVar1 + 0x10));
    puVar2 = PTR_PTR_1126b7800;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    func_0x00010c184700(*(undefined8 *)((long)puVar1 + 0x18));
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ddd08c; end: 107ddd0e3; -[SCOperaShakeToReportHelper addS2RTrace:] */

void FUN_107ddd08c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 == 2) {
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 8),param_2,0);
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ddd0e4; end: 107ddd0eb; -[SCOperaShakeToReportHelper clearS2RTrace] */

void FUN_107ddd0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107ddd0ec; end: 107ddd103; -[SCOperaShakeToReportHelper traces] */

void FUN_107ddd0ec(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ddd104; end: 107ddd12b; -[SCOperaShakeToReportHelper eventAnnouncer] */

void FUN_107ddd104(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ddd12c; end: 107ddd18b; -[SCOperaShakeToReportHelper setEventAnnouncer:] */

void FUN_107ddd12c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x50)) {
    func_0x00010c12cf80(*(long *)(param_1 + 0x50),param_2,param_1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = param_3;
    _objc_release(uVar1);
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x50),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ddd18c; end: 107ddd197; -[SCOperaShakeToReportHelper announcerIdentifier] */

undefined ** FUN_107ddd18c(void)

{
  return &PTR____CFConstantStringClassReference_110ebee38;
}



/* Entry: 107ddd198; end: 107ddd1c7; -[SCOperaShakeToReportHelper shakeStartEventName] */

void FUN_107ddd198(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f54558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f54558);
  return;
}



/* Entry: 107ddd1c8; end: 107ddd1f7; -[SCOperaShakeToReportHelper shakeCompleteEventName] */

void FUN_107ddd1c8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110f54578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110f54578);
  return;
}



/* Entry: 107ddd1f8; end: 107ddd1fb; -[SCOperaShakeToReportHelper startNewPageTrace:] */

void FUN_107ddd1f8(void)

{
  return;
}



/* Entry: 107ddd1fc; end: 107ddd1ff; -[SCOperaShakeToReportHelper addPageTraceEventFor:source:action:] */

void FUN_107ddd1fc(void)

{
  return;
}



/* Entry: 107ddd200; end: 107ddd32f; -[SCOperaShakeToReportHelper addAsset:forPage:] */

void FUN_107ddd200(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar1 & 1) != 0) {
      _objc_retain(param_3);
      uVar1 = param_3;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c072e60();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar1 = param_3;
        func_0x00010bdc2b80(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        puVar3 = *(undefined **)(param_1 + 0x18);
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
          func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18));
        }
        func_0x00010befa120(puVar3);
        _objc_release(puVar3);
        _objc_release(uVar2);
      }
      _objc_release(param_3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ddd330; end: 107ddd403; -[SCOperaShakeToReportHelper addPlaybackAsset:forPage:] */

void FUN_107ddd330(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010c0c4940();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_107ddd404;
      puStack_50 = &UNK_110848ba8;
      lStack_48 = param_1;
      _objc_retain(param_3);
      lStack_40 = param_3;
      _objc_retain(param_4);
      lStack_38 = param_4;
      func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
      _objc_release(lStack_38);
      _objc_release(lStack_40);
    }
    _objc_release(param_3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107ddd404; end: 107ddd417;  */

void FUN_107ddd404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_setObject_forKey__112651b80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107ddd418; end: 107ddd483; -[SCOperaShakeToReportHelper filesForPage:] */

void FUN_107ddd418(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x18);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf00560(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ddd484; end: 107ddd53b; -[SCOperaShakeToReportHelper copyBufferedVideoDataForPage:completion:] */

void FUN_107ddd484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107ddd53c;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ddd53c; end: 107ddd5bb;  */

void FUN_107ddd53c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x20);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_copyLocallyAvailableDataWithComp_1125b21e0);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    func_0x00010bf520e0(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ddd5bc; end: 107ddd5c3; -[SCOperaShakeToReportHelper pageTraceEventsFor:] */

undefined8 FUN_107ddd5bc(void)

{
  return 0;
}



/* Entry: 107ddd5c4; end: 107ddd67b; -[SCOperaShakeToReportHelper didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107ddd5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf04780(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c22a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,uVar1);
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010bddb800(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ddd67c; end: 107ddd683; -[SCOperaShakeToReportHelper registerStateProvider:] */

void FUN_107ddd67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 107ddd684; end: 107ddd68b; -[SCOperaShakeToReportHelper unregisterStateProvider:] */

void FUN_107ddd684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeObjectIfPresentAndCompact__112628f38);
  return;
}



/* Entry: 107ddd68c; end: 107ddd693; -[SCOperaShakeToReportHelper registerOperaSummaryInfoProvider:] */

void FUN_107ddd68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 107ddd694; end: 107ddd6d7; -[SCOperaShakeToReportHelper unregisterOperaSummaryInfoProvider:] */

void FUN_107ddd694(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c12d460(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ddd6d8; end: 107ddd71f; -[SCOperaShakeToReportHelper topOperaSummaryInfoProvider] */

void FUN_107ddd6d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    lVar1 = lVar2;
    func_0x00010bf529e0(lVar2);
    func_0x00010c0dfd20(lVar2,param_2,lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ddd720; end: 107ddd727; -[SCOperaShakeToReportHelper registerPageToPlaylistItemIdConverter:] */

void FUN_107ddd720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 107ddd728; end: 107ddd72f; -[SCOperaShakeToReportHelper unregisterPageToPlaylistItemIdConverted:] */

void FUN_107ddd728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeObjectIfPresentAndCompact__112628f38);
  return;
}



/* Entry: 107ddd730; end: 107ddd867; -[SCOperaShakeToReportHelper _captureStateSnapshot] */

void FUN_107ddd730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126d7e50;
  _objc_alloc();
  func_0x00010c032820();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c0ab340(puVar1,param_2,*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar1 + 0x38);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107ddd868; end: 107ddd88f; -[SCOperaShakeToReportHelper latestStateSnapshot] */

void FUN_107ddd868(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ddd890; end: 107ddd9db; -[SCOperaShakeToReportHelper itemIdForPage:summaryInfoProvider:] */

long FUN_107ddd890(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_118 + lVar5 * 8);
        func_0x00010c084500(lVar3,param_2,param_4,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) goto LAB_107ddd988;
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB_107ddd988:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return *(long *)(param_3 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return lVar3;
}



/* Entry: 107ddd9dc; end: 107ddd9e3; -[SCOperaShakeToReportHelper lastReportedError] */

undefined8 FUN_107ddd9dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107ddd9e4; end: 107ddd9eb; -[SCOperaShakeToReportHelper setLastReportedError:] */

void FUN_107ddd9e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ddd9ec; end: 107ddd9f3; -[SCOperaShakeToReportHelper lastNavigationStyle] */

undefined8 FUN_107ddd9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107ddd9f4; end: 107ddd9fb; -[SCOperaShakeToReportHelper setLastNavigationStyle:] */

void FUN_107ddd9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107ddd9fc; end: 107ddda97; -[SCOperaShakeToReportHelper .cxx_destruct] */

void FUN_107ddd9fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ddda98; end: 107dddaa3; -[SCOperaShakeToReportStateLoggerImpl initWithOutputString:] */

void FUN_107ddda98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c032850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithOutputString_indentation_1125ea408,param_3,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 107dddaa4; end: 107dddb4b; -[SCOperaShakeToReportStateLoggerImpl initWithOutputString:indentation:] */

undefined1 *
FUN_107dddaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb2c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dddb4c; end: 107dddb53; -[SCOperaShakeToReportStateLoggerImpl logObject:] */

void FUN_107dddb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ab370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logObject_withTitle__1126086e8,param_3,0);
  return;
}



/* Entry: 107dddb54; end: 107dddca7; -[SCOperaShakeToReportStateLoggerImpl logObject:withTitle:] */

void FUN_107dddb54(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a53a0);
    lVar1 = param_3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c0b3580(param_1);
    }
    else {
      if (param_4 == (undefined *)0x0) {
        _objc_opt_class();
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        param_4 = puVar3;
      }
      func_0x00010bef9860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0af5e0(param_3);
      puVar3 = param_1;
    }
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dddca8; end: 107ddddd7; -[SCOperaShakeToReportStateLoggerImpl logWithFormat:] */

void FUN_107dddca8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        func_0x00010bf070e0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
        func_0x00010bf070e0(*(undefined8 *)(param_1 + 8),param_2,uVar6);
        func_0x00010bf070e0(*(undefined8 *)(param_1 + 8),param_2,
                            &PTR____CFConstantStringClassReference_110db2db8);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar2 = (undefined1 *)puVar5;
  func_0x00010c08fa60();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010c0b3580(param_3,param_2,puVar5);
  }
  puVar3 = PTR_PTR_1126d7e50;
  _objc_alloc(PTR_PTR_1126d7e50);
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c25ce40(uVar4,param_2,&PTR____CFConstantStringClassReference_110ebee78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032840(puVar3,param_2,uVar6,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ddddd8; end: 107ddde73; -[SCOperaShakeToReportStateLoggerImpl addLevel:] */

void FUN_107ddddd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c0b3580(param_1,param_2,param_3);
  }
  puVar3 = PTR_PTR_1126d7e50;
  _objc_alloc(PTR_PTR_1126d7e50);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c25ce40(uVar4,param_2,&PTR____CFConstantStringClassReference_110ebee78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032840(puVar3,param_2,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ddde74; end: 107dddea3; -[SCOperaShakeToReportStateLoggerImpl .cxx_destruct] */

void FUN_107ddde74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dddea4; end: 107dde19b; -[SCOperaS2RTrace initWithPageOpenTime:mediaID:pageID:sessionID:clientID:mediaType:itemType:viewSource:storyTellerURL:publisherId:editionId:segmentId:navigationType:snapId:] */

undefined8 *
FUN_107dddea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain();
  puStack_68 = PTR_PTR_1126fb2c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107dde19c; end: 107dde1bf; -[SCOperaS2RTrace copyWithZone:] */

undefined8 FUN_107dde19c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dde1c0; end: 107dde2c3; -[SCOperaS2RTrace hash] */

undefined8 * FUN_107dde1c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_98;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107dde464:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107dde470;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[8];
                    if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[9];
                      if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[10];
                        if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xb];
                          if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xc];
                            if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              lVar5 = puVar3[0xd];
                              if ((lVar5 == param_3[0xd]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                puVar6 = (undefined8 *)puVar3[0xe];
                                if (puVar6 != (undefined8 *)param_3[0xe]) {
                                  func_0x00010c071ae0();
                                  goto LAB_107dde470;
                                }
                                goto LAB_107dde464;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107dde470:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107dde2c4; end: 107dde48b; -[SCOperaS2RTrace isEqual:] */

long FUN_107dde2c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107dde464:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107dde470;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x58);
                          if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x60);
                            if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x68);
                              if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x70);
                                if (lVar3 != *(long *)(param_3 + 0x70)) {
                                  func_0x00010c071ae0();
                                  goto LAB_107dde470;
                                }
                                goto LAB_107dde464;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107dde470:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107dde48c; end: 107dde493; -[SCOperaS2RTrace pageOpenTime] */

undefined8 FUN_107dde48c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dde494; end: 107dde49b; -[SCOperaS2RTrace mediaID] */

undefined8 FUN_107dde494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dde49c; end: 107dde4a3; -[SCOperaS2RTrace pageID] */

undefined8 FUN_107dde49c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dde4a4; end: 107dde4ab; -[SCOperaS2RTrace sessionID] */

undefined8 FUN_107dde4a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dde4ac; end: 107dde4b3; -[SCOperaS2RTrace clientID] */

undefined8 FUN_107dde4ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dde4b4; end: 107dde4bb; -[SCOperaS2RTrace mediaType] */

undefined8 FUN_107dde4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dde4bc; end: 107dde4c3; -[SCOperaS2RTrace itemType] */

undefined8 FUN_107dde4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dde4c4; end: 107dde4cb; -[SCOperaS2RTrace viewSource] */

undefined8 FUN_107dde4c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dde4cc; end: 107dde4d3; -[SCOperaS2RTrace storyTellerURL] */

undefined8 FUN_107dde4cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dde4d4; end: 107dde4db; -[SCOperaS2RTrace publisherId] */

undefined8 FUN_107dde4d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107dde4dc; end: 107dde4e3; -[SCOperaS2RTrace editionId] */

undefined8 FUN_107dde4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107dde4e4; end: 107dde4eb; -[SCOperaS2RTrace segmentId] */

undefined8 FUN_107dde4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107dde4ec; end: 107dde4f3; -[SCOperaS2RTrace navigationType] */

undefined8 FUN_107dde4ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107dde4f4; end: 107dde4fb; -[SCOperaS2RTrace snapId] */

undefined8 FUN_107dde4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107dde4fc; end: 107dde5bb; -[SCOperaS2RTrace .cxx_destruct] */

void FUN_107dde4fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dde5bc; end: 107dde643; -[SCOperaLongformVideoControlsView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107dde5bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb2d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276f994) = 0;
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107dde644; end: 107ddea8f; -[SCOperaLongformVideoControlsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dde644(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lStack_b0;
  undefined *puStack_a8;
  
  puStack_a8 = PTR_PTR_1126fb2d0;
  lStack_b0 = param_5;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_11276f998;
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar4);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar10 = (param_3 - param_4) + -10.0;
  dVar12 = param_4 * 0.5 + dVar10 + -18.5;
  lVar7 = (long)_DAT_11276f99c;
  func_0x00010c19f0e0(0x4020000000000000,dVar12,0x4042800000000000,0x4042800000000000,
                      *(undefined8 *)(param_5 + lVar7));
  uVar4 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = 18.5;
  func_0x00010c1842e0(0x4032800000000000);
  _objc_release(uVar4);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  lVar5 = (long)_DAT_11276f9a0;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar9 = dVar11;
  func_0x00010c1842e0(0x4032800000000000);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar13 = dVar9;
  if (*(char *)(param_5 + _DAT_11276f9a4) == '\x01') {
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    dVar13 = dVar9 + -37.0 + -8.0;
    lVar5 = (long)_DAT_11276f9a8;
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar13,dVar12,0x4042800000000000,0x4042800000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinX();
    lVar8 = (long)_DAT_11276f9ac;
    uVar1 = *(undefined8 *)(param_5 + lVar8);
    dVar9 = dVar13;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar13 = dVar13 - dVar9;
    uVar2 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    uVar3 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar13,dVar12,dVar9,0x4042800000000000);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinX();
    dVar14 = dVar13 + -12.0;
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    uVar2 = *(undefined8 *)(param_5 + lVar8);
    dVar9 = dVar13;
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    lVar5 = (long)_DAT_11276f9b0;
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar14,dVar12,dVar13 + dVar9 + 12.0,0x4042800000000000);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4032800000000000);
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinX();
    dVar9 = dVar11;
    _objc_release(uVar4);
    dVar13 = dVar11;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  _CGRectGetMaxX();
  dVar11 = dVar9 + 12.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  _CGRectGetMaxX();
  func_0x00010c19f0e0(dVar11,dVar10,(dVar13 - dVar9) + -24.0,param_4,
                      *(undefined8 *)(param_5 + lVar6));
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276f9b4));
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar9 = dVar11 + -250.0;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,dVar9,dVar11,0x406f400000000000,*(undefined8 *)(param_5 + _DAT_11276f9b8));
  return;
}



/* Entry: 107ddea90; end: 107ddea97; -[SCOperaLongformVideoControlsView seekPointBuffer] */

undefined8 FUN_107ddea90(void)

{
  return 0x4000000000000000;
}



/* Entry: 107ddea98; end: 107ddeb87; -[SCOperaLongformVideoControlsView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddea98(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  double dVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_5 + _DAT_11276f998);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(uVar2);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  param_3 = param_3 - param_4;
  dVar3 = param_3 + -10.0;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  if (param_3 - dVar3 <= param_2) {
    puStack_58 = PTR_PTR_1126fb2d0;
    lStack_60 = param_5;
    _objc_msgSendSuper2(param_1,param_2,&lStack_60,PTR_s_hitTest_withEvent__1125d6850,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar1 = (long *)0x0;
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 107ddeb88; end: 107ddec83; -[SCOperaLongformVideoControlsView fadeControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddeb88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_11276f994) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010bf500a0();
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11276f998));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11276f9a0));
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276f9b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276f9ac);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar2);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11276f9b8));
    if ((int)lVar1 != 0) {
      func_0x00010c299980(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107ddec84; end: 107dded7f; -[SCOperaLongformVideoControlsView showControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddec84(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + (long)_DAT_11276f994) & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf500a0();
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + (long)_DAT_11276f998));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + (long)_DAT_11276f9a0));
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11276f9b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11276f9ac);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar2);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + (long)_DAT_11276f9b8));
    if ((uVar1 & 1) == 0) {
      func_0x00010c299980(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107dded80; end: 107ddedd7; -[SCOperaLongformVideoControlsView resetControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dded80(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_11276f994) & 1) != 0) {
    return;
  }
  lVar1 = (long)_DAT_11276f9bc;
  *(undefined1 *)(param_1 + lVar1) = 0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11276f998));
                    /* WARNING: Could not recover jumptable at 0x00010bedccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updatePauseButtonToIsPaused__112594cd0,*(undefined1 *)(param_1 + lVar1))
  ;
  return;
}



/* Entry: 107ddedd8; end: 107ddeecf; -[SCOperaLongformVideoControlsView hideControls:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddedd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_11276f994) = param_3;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276f998));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276f9a0));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f9b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f9a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f9ac);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276f9b8));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276f99c));
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107ddeed0; end: 107ddeefb; -[SCOperaLongformVideoControlsView controlsVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ddeed0(double param_1,long param_2)

{
  func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_11276f998));
  return param_1 == 1.0;
}



/* Entry: 107ddeefc; end: 107ddeff3; -[SCOperaLongformVideoControlsView updateControlsWithViewModel:] */

void FUN_107ddeefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010befe400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0beba0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ddeff4; end: 107ddf0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddeff4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = (long)_DAT_11276f998;
    func_0x00010c173c20(*(undefined8 *)(lVar1 + lVar2));
    func_0x00010c201b40(*(undefined8 *)(lVar1 + lVar2));
    func_0x00010bea7520(lVar1);
    func_0x00010c22e260(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bfe1d60(lVar1);
    func_0x00010c22e260(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1672c0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ddf0b4; end: 107ddf307; -[SCOperaLongformVideoControlsView _setSendButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf0b4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + _DAT_11276f994) & 1) != 0) {
    return;
  }
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + _DAT_11276f9a4) = 0;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276f9a8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x00010c1677c0(0);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276f9b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar2);
    plVar4 = (long *)(param_1 + _DAT_11276f9ac);
  }
  else {
    *(undefined1 *)(param_1 + _DAT_11276f9a4) = 1;
    lVar3 = (long)_DAT_11276f9b0;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3ff0000000000000;
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276f9a8;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar2);
    plVar4 = (long *)(param_1 + _DAT_11276f9ac);
    lVar1 = *plVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf57500(*plVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar1 = *plVar4;
      func_0x00010c269d40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(lVar1);
    }
  }
  lVar1 = *plVar4;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar5);
  _objc_release(lVar1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107ddf308; end: 107ddf36b; -[SCOperaLongformVideoControlsView adjustForTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf308(double param_1,long param_2)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c220160((float)param_1,*(undefined8 *)(param_2 + _DAT_11276f998));
  puStack_38 = PTR_PTR_1126fb2d0;
  lStack_40 = param_2;
  _objc_msgSendSuper2(param_1,&lStack_40,PTR_s_adjustForTime__11259cfe8);
  return;
}



/* Entry: 107ddf36c; end: 107ddf37f; -[SCOperaLongformVideoControlsView setDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf36c(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)param_1,*(undefined8 *)(param_2 + _DAT_11276f998),
             PTR_s_setMaximumValue__11264e968);
  return;
}



/* Entry: 107ddf380; end: 107ddf393; -[SCOperaLongformVideoControlsView setHalfFillDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf380(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a50d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)param_1,*(undefined8 *)(param_2 + _DAT_11276f998),
             PTR_s_setHalfFillValue__112646e50);
  return;
}



/* Entry: 107ddf394; end: 107ddf3a3; -[SCOperaLongformVideoControlsView currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f998),PTR_s_value_112683588);
  return;
}



/* Entry: 107ddf3a4; end: 107ddf43b; -[SCOperaLongformVideoControlsView slider:textLabelForValue:maximumValue:] */

void FUN_107ddf3a4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ebeef8);
  return;
}



/* Entry: 107ddf43c; end: 107ddf46f; -[SCOperaLongformVideoControlsView _setupViews] */

void FUN_107ddf43c(undefined8 param_1)

{
  func_0x00010beacdc0();
  func_0x00010beafc80(param_1);
  func_0x00010beaebe0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bead770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLazySendButton_112588f80);
  return;
}



/* Entry: 107ddf470; end: 107ddf6eb; -[SCOperaLongformVideoControlsView _setupGradientViews] */

/* WARNING: Possible PIC construction at 0x000107ddf5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107ddf6a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ddf5c0) */
/* WARNING: Removing unreachable block (ram,0x000107ddf6a4) */
/* WARNING: Removing unreachable block (ram,0x000107ddf6e8) */
/* WARNING: Removing unreachable block (ram,0x000107ddf6bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf470(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1198;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11276f9b4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe6666666666666);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 107ddf6ec; end: 107ddf85f; -[SCOperaLongformVideoControlsView _setupSlider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf6ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d7e58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276f998;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a2fe0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1c3d00(0x41200000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1c8440(0,*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173c00(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7f40(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c220160(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107ddf860; end: 107ddf967; -[SCOperaLongformVideoControlsView _setupPauseButton] */

/* WARNING: Possible PIC construction at 0x000107ddf948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ddf94c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf860(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11276f9bc) = 0;
  puVar1 = PTR_PTR_1126b6138;
  _objc_opt_new();
  lVar3 = (long)_DAT_11276f99c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bedcca0(param_1);
  func_0x00010befbd40(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1d4b80(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1c3c80(0x3ff3333333333333,*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11276f9a0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fc999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107ddf968; end: 107ddfb37; -[SCOperaLongformVideoControlsView _setupLazySendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddf968(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  *(undefined1 *)(param_1 + _DAT_11276f9a4) = 0;
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107ddfb38;
  puStack_78 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276f9a8);
  *(undefined **)(param_1 + _DAT_11276f9a8) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_b8 = puVar2;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x107ddfb78;
  puStack_a0 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276f9b0);
  *(undefined **)(param_1 + _DAT_11276f9b0) = puVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010c0b8440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276f9ac);
  *(undefined **)(param_1 + _DAT_11276f9ac) = puVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



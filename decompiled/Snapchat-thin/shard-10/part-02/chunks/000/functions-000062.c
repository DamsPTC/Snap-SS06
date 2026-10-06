/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107adb5e0; end: 107adb5e7; -[SCMemoriesSendItemsCounter setSmartShareLagunaVideoCount:] */

void FUN_107adb5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 107adb5e8; end: 107adb5ef; -[SCMemoriesSendItemsCounter smartShareSuccessCount] */

undefined8 FUN_107adb5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 107adb5f0; end: 107adb5f7; -[SCMemoriesSendItemsCounter setSmartShareSuccessCount:] */

void FUN_107adb5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 107adb5f8; end: 107adb5ff; -[SCMemoriesSendItemsCounter smartShareImageSuccessCount] */

undefined8 FUN_107adb5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 107adb600; end: 107adb607; -[SCMemoriesSendItemsCounter setSmartShareImageSuccessCount:] */

void FUN_107adb600(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x108) = param_3;
  return;
}



/* Entry: 107adb608; end: 107adb60f; -[SCMemoriesSendItemsCounter smartShareNormalVideoSuccessCount] */

undefined8 FUN_107adb608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 107adb610; end: 107adb617; -[SCMemoriesSendItemsCounter setSmartShareNormalVideoSuccessCount:] */

void FUN_107adb610(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 107adb618; end: 107adb61f; -[SCMemoriesSendItemsCounter smartShareLagunaVideoSuccessCount] */

undefined8 FUN_107adb618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 107adb620; end: 107adb627; -[SCMemoriesSendItemsCounter setSmartShareLagunaVideoSuccessCount:] */

void FUN_107adb620(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x118) = param_3;
  return;
}



/* Entry: 107adb628; end: 107adb62f; -[SCMemoriesSendItemsCounter smartShareFailureCount] */

undefined8 FUN_107adb628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 107adb630; end: 107adb637; -[SCMemoriesSendItemsCounter setSmartShareFailureCount:] */

void FUN_107adb630(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 107adb638; end: 107adb63f; -[SCMemoriesSendItemsCounter meoCount] */

undefined8 FUN_107adb638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 107adb640; end: 107adb647; -[SCMemoriesSendItemsCounter setMeoCount:] */

void FUN_107adb640(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x128) = param_3;
  return;
}



/* Entry: 107adb648; end: 107adb767; -[SCGallerySendItemSegmentQueueItem initWithVideoAsset:shouldSegment:videoImporter:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_107adb648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9b88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_4;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107adb768; end: 107adb8d7; -[SCGallerySendItemSegmentQueueItem initWithVideoSnap:encryptedContentManager:cloudFile:videoImporter:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_107adb768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f9b88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107adb8d8; end: 107adbc37; -[SCGallerySendItemSegmentQueueItem startSegmentWithCompletionBlock:] */

void FUN_107adb8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_107adbbf0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    puVar6 = PTR_PTR_1126d6490;
    _objc_alloc(PTR_PTR_1126d6490);
    func_0x00010c00fce0(0x4024000000000000);
    func_0x00010c1d5dc0();
    _objc_retain(param_3);
    func_0x00010bf9d320(puVar6);
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
    lVar1 = param_1;
    func_0x00010be9f580();
    if ((int)lVar1 == 0) {
      puVar6 = PTR_PTR_1126d2b18;
      _objc_alloc(PTR_PTR_1126d2b18);
      puVar7 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0x4024000000000000;
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar3 = 0x40ac200000000000;
      }
      func_0x00010c01cae0(uVar3,puVar6);
      _objc_release(puVar7);
      func_0x00010c1d5dc0(puVar6);
      _objc_retain(param_3);
      func_0x00010bf9d320(puVar6);
    }
    else {
      puVar6 = PTR_PTR_1126c3268;
      _objc_alloc(PTR_PTR_1126c3268);
      func_0x00010c01dbe0();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf165a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
      uStack_80 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
      uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
      uStack_70 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
      uStack_58 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
      uStack_60 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
      uVar4 = uVar2;
      func_0x00010bf9d3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(&uStack_80,param_1);
      uVar5 = uVar4;
      func_0x00010bfbc3e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,&uStack_80);
      _objc_retain(param_3);
      _objc_retain(uVar4);
      func_0x00010c297260(uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(&uStack_80);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar2);
  _objc_release(puVar6);
LAB_107adbbf0:
  _objc_release(param_3);
  return;
}



/* Entry: 107adbc38; end: 107adbd93;  */

void FUN_107adbc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0,0,0,0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8dc60();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107adbd94;
    puStack_78 = &UNK_110866740;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = param_2;
    lStack_68 = lVar1;
    uStack_60 = uVar2;
    _objc_retain(uVar4);
    uStack_58 = uVar4;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = param_3;
    _objc_retain(uVar4);
    uStack_48 = uVar4;
    _objc_retain(uVar2);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_70);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107adbd94; end: 107adc0b7;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000107adbe38 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_107adbd94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = *(long *)(param_1 + 0x20);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar6);
      }
      lVar7 = *(long *)(lVar9 * 8);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf9e3a0(uVar4);
      (**(code **)(lVar7 + 0x10))(lVar7,puVar5,uVar2,uVar4,*(undefined8 *)(param_1 + 0x40));
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18) = 0;
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + 0x48);
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf9e3a0(uVar2);
  lVar3 = *(long *)(param_1 + 0x40);
  (**(code **)(lVar6 + 0x10))(lVar6,puVar5,lVar1,uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar1);
    _objc_retain(lVar3);
    _objc_retain(in_x6);
    lVar8 = *(long *)(*(long *)(puVar5 + 0x20) + 0x18);
    _objc_retain(lVar8);
    lVar6 = lVar8;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        (**(code **)(*(long *)(lVar10 * 8) + 0x10))(*(long *)(lVar10 * 8),lVar1,lVar3,in_x5,in_x6);
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    uVar2 = *(undefined8 *)(*(long *)(puVar5 + 0x20) + 0x18);
    *(undefined8 *)(*(long *)(puVar5 + 0x20) + 0x18) = 0;
    _objc_release(uVar2);
    lVar6 = lVar3;
    (**(code **)(*(long *)(puVar5 + 0x28) + 0x10))(*(long *)(puVar5 + 0x28),lVar1,lVar3,in_x5,in_x6)
    ;
    _objc_release(in_x6);
    _objc_release(lVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar6);
    _objc_retain(in_x5);
    lVar8 = *(long *)(*(long *)(lVar1 + 0x20) + 0x18);
    _objc_retain(lVar8);
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        (**(code **)(*(long *)(lVar10 * 8) + 0x10))(*(long *)(lVar10 * 8),lVar6,0,0,in_x5);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x18);
    *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x18) = 0;
    _objc_release(uVar2);
    uVar2 = 0;
    (**(code **)(*(long *)(lVar1 + 0x28) + 0x10))(*(long *)(lVar1 + 0x28),lVar6,0,0,in_x5);
    _objc_release(in_x5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(lVar6 + 0x18);
    _objc_retainBlock(uVar2);
    func_0x00010befa120(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107adc0b8; end: 107adc21f;  */

void FUN_107adc0b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      (**(code **)(*(long *)(lVar7 * 8) + 0x10))(*(long *)(lVar7 * 8),param_3,0,0,param_4);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  _objc_release(uVar3);
  uVar3 = 0;
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3,0,0,param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  _objc_retainBlock(uVar3);
  func_0x00010befa120(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107adc220; end: 107adc257; -[SCGallerySendItemSegmentQueueItem queueCompletionBlock:] */

void FUN_107adc220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107adc258; end: 107adc297; -[SCGallerySendItemSegmentQueueItem identifier] */

void FUN_107adc258(long param_1)

{
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010bfbd0e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107adc298; end: 107adc2d3; -[SCGallerySendItemSegmentQueueItem hash] */

undefined8 FUN_107adc298(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107adc2d4; end: 107adc36f; -[SCGallerySendItemSegmentQueueItem isEqual:] */

bool FUN_107adc2d4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    _objc_opt_class(param_1);
    lVar3 = param_3;
    func_0x00010c077980(param_3,param_2,lVar2);
    if ((int)lVar3 == 0) {
      bVar1 = false;
    }
    else {
      _objc_retain(param_3);
      func_0x00010bfde980(param_1);
      lVar2 = param_3;
      func_0x00010bfde980(param_3);
      _objc_release(param_3);
      bVar1 = param_1 == lVar2;
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107adc370; end: 107adc387; -[SCGallerySendItemSegmentQueueItem _sendItemsShouldUseVisFromCof] */

void FUN_107adc370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eac558,0,0);
  return;
}



/* Entry: 107adc388; end: 107adc38f; -[SCGallerySendItemSegmentQueueItem phAsset] */

undefined8 FUN_107adc388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107adc390; end: 107adc397; -[SCGallerySendItemSegmentQueueItem snap] */

undefined8 FUN_107adc390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107adc398; end: 107adc39f; -[SCGallerySendItemSegmentQueueItem didStart] */

undefined1 FUN_107adc398(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 107adc3a0; end: 107adc3a7; -[SCGallerySendItemSegmentQueueItem setDidStart:] */

void FUN_107adc3a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107adc3a8; end: 107adc42b; -[SCGallerySendItemSegmentQueueItem .cxx_destruct] */

void FUN_107adc3a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107adc42c; end: 107adc567; -[SCMemoriesSendItemsVideoSegmentHelper initWithVideoImporter:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_107adc42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f9b90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107adc568; end: 107adc73b; -[SCMemoriesSendItemsVideoSegmentHelper segmentVideoAsset:shouldSegment:complete:] */

void FUN_107adc568(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfbd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126d6498;
    _objc_alloc(PTR_PTR_1126d6498);
    func_0x00010c060c60();
    _objc_release(param_3);
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfecde0();
    puVar4 = *(undefined **)(param_1 + 8);
    if (lVar3 == 0x7fffffffffffffff) {
      func_0x00010befa120();
      puVar4 = puVar1;
    }
    else {
      func_0x00010c0dfd20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    func_0x00010c11de40(puVar4);
    _objc_release(param_5);
    func_0x00010be81ec0(param_1);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    puVar4 = param_3;
    func_0x00010bfbd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = param_3;
    func_0x00010bfbd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c067ec0();
    (**(code **)(param_5 + 0x10))(param_5,lVar5,uVar7,uVar2,0);
    _objc_release(param_5);
    _objc_release(uVar6);
    _objc_release(puVar1);
    _objc_release(uVar7);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 107adc73c; end: 107adc8ab; -[SCMemoriesSendItemsVideoSegmentHelper segmentVideoSnap:encryptedContentManager:cloudFile:complete:] */

void FUN_107adc73c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126d6498;
    _objc_alloc(PTR_PTR_1126d6498);
    func_0x00010c0611a0();
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfecde0();
    puVar4 = *(undefined **)(param_1 + 8);
    if (lVar3 == 0x7fffffffffffffff) {
      func_0x00010befa120();
      puVar4 = puVar2;
    }
    else {
      func_0x00010c0dfd20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    func_0x00010c11de40(puVar4);
    func_0x00010be81ec0(param_1);
    _objc_release(puVar4);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,lVar5,0,0,0);
  }
  _objc_release(lVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107adc8ac; end: 107adc993; -[SCMemoriesSendItemsVideoSegmentHelper _processQueueItem] */

void FUN_107adc8ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7ba60();
    if ((uVar3 & 1) == 0) {
      _objc_initWeak(auStack_28,param_1);
      _objc_copyWeak(auStack_30,auStack_28);
      _objc_retain(uVar2);
      func_0x00010c2507a0(uVar2);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107adc994; end: 107adcacf;  */

void FUN_107adc994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar3);
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 8));
    func_0x00010be81ec0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107adcad0; end: 107adcb3b; -[SCMemoriesSendItemsVideoSegmentHelper .cxx_destruct] */

void FUN_107adcad0(long param_1)

{
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



/* Entry: 107adcb3c; end: 107add69b;  */

undefined1 * FUN_107adcb3c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *unaff_x22;
  undefined *unaff_x23;
  ulong uVar14;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined *puVar15;
  undefined *puStack_940;
  undefined *puStack_938;
  undefined *puStack_930;
  undefined *puStack_928;
  undefined8 ***pppuStack_920;
  code *pcStack_918;
  undefined8 uStack_910;
  long lStack_908;
  long *plStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long lStack_850;
  undefined *puStack_840;
  undefined **ppuStack_838;
  undefined *puStack_830;
  ulong uStack_828;
  ulong uStack_820;
  undefined *puStack_818;
  undefined *puStack_810;
  undefined *puStack_808;
  undefined *puStack_800;
  undefined *puStack_7f8;
  undefined8 ***pppuStack_7f0;
  undefined8 uStack_7e8;
  undefined *puStack_7e0;
  long lStack_7d8;
  undefined8 uStack_7d0;
  long lStack_7c8;
  long *plStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  long lStack_788;
  long *plStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_650;
  undefined *puStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  ulong uStack_628;
  ulong uStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined1 ***pppuStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  ulong *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_460;
  undefined *puStack_450;
  undefined **ppuStack_448;
  undefined *puStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined1 **ppuStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  ulong *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_270;
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_1);
  puStack_200 = param_1;
  func_0x00010bf52a60();
  if (param_1 != (undefined *)0x0) {
    lStack_1f8 = *plStack_1a0;
    unaff_x27 = &PTR_PTR_1126d2000;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lStack_1f8) {
          _objc_enumerationMutation(puStack_200);
        }
        unaff_x22 = *(undefined **)(lStack_1a8 + (long)unaff_x28 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = unaff_x22;
        func_0x00010bf52a60();
        if (puVar2 != (undefined *)0x0) {
          lVar13 = *plStack_1e0;
          unaff_x23 = puVar2;
          do {
            unaff_x26 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lVar13) {
                _objc_enumerationMutation(unaff_x22);
              }
              unaff_x24 = *(ulong *)(lStack_1e8 + (long)unaff_x26 * 8);
              uVar3 = unaff_x24;
              FUN_107ade96c();
              puVar2 = PTR_PTR_1126d29a8;
              if (uVar3 == 4) {
LAB_107adcc78:
                func_0x00010befa120(puVar1);
              }
              else if (uVar3 == 3) {
                _objc_retain(unaff_x24);
                _objc_opt_class(puVar2);
                uVar3 = unaff_x24;
                _objc_opt_isKindOfClass(unaff_x24,puVar2);
                unaff_x25 = unaff_x24;
                if ((uVar3 & 1) == 0) {
                  unaff_x25 = 0;
                }
                _objc_retain(unaff_x25);
                _objc_release(unaff_x24);
                if (unaff_x25 != 0) {
                  func_0x00010bfbd940();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(puVar1);
                  _objc_release(unaff_x24);
                }
                _objc_release(unaff_x25);
              }
              else if (uVar3 == 1) goto LAB_107adcc78;
              unaff_x26 = unaff_x26 + 1;
            } while (unaff_x23 != unaff_x26);
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60();
          } while (unaff_x23 != (undefined *)0x0);
        }
        _objc_release(unaff_x22);
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x28 != param_1);
      param_1 = puStack_200;
      func_0x00010bf52a60();
    } while (param_1 != (undefined *)0x0);
  }
  puVar2 = puStack_200;
  _objc_release(puStack_200);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puStack_218 = puVar2;
  uStack_208 = 0x107adcdb4;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = unaff_x28;
  ppuStack_258 = unaff_x27;
  puStack_250 = unaff_x26;
  uStack_248 = unaff_x25;
  uStack_240 = unaff_x24;
  puStack_238 = unaff_x23;
  puStack_230 = unaff_x22;
  puStack_228 = puVar4;
  puStack_220 = puVar1;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  puStack_3a0 = (ulong *)0x0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  _objc_retain(puVar5);
  puVar2 = puVar5;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    unaff_x25 = *puStack_3a0;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if (*puStack_3a0 != unaff_x25) {
          _objc_enumerationMutation(puVar5);
        }
        unaff_x22 = *(undefined **)(lStack_3a8 + (long)unaff_x26 * 8);
        lStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_3d8 = 0;
        plStack_3e0 = (long *)0x0;
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = unaff_x22;
        func_0x00010bf52a60();
        if (puVar4 != (undefined *)0x0) {
          unaff_x27 = (undefined **)*plStack_3e0;
          unaff_x23 = puVar4;
          do {
            unaff_x28 = (undefined *)0x0;
            do {
              if ((undefined **)*plStack_3e0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x22);
              }
              unaff_x24 = *(ulong *)(lStack_3e8 + (long)unaff_x28 * 8);
              uVar3 = unaff_x24;
              FUN_107ade96c();
              if (uVar3 == 3) {
                func_0x00010bfbcca0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar1);
                _objc_release(unaff_x24);
              }
              unaff_x28 = unaff_x28 + 1;
            } while (unaff_x23 != unaff_x28);
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60();
          } while (unaff_x23 != (undefined *)0x0);
        }
        _objc_release(unaff_x22);
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != puVar2);
      puVar2 = puVar5;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_3f8 = 0x107adcfb4;
  lStack_460 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_450 = unaff_x28;
  ppuStack_448 = unaff_x27;
  puStack_440 = unaff_x26;
  uStack_438 = unaff_x25;
  uStack_430 = unaff_x24;
  puStack_428 = unaff_x23;
  puStack_420 = unaff_x22;
  puStack_418 = puVar4;
  puStack_410 = puVar1;
  puStack_408 = puVar5;
  ppuStack_400 = &puStack_210;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  puStack_590 = (ulong *)0x0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    unaff_x25 = *puStack_590;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if (*puStack_590 != unaff_x25) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x22 = *(undefined **)(lStack_598 + (long)unaff_x26 * 8);
        lStack_5d8 = 0;
        uStack_5e0 = 0;
        uStack_5c8 = 0;
        plStack_5d0 = (long *)0x0;
        uStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x22;
        func_0x00010bf52a60();
        if (puVar5 != (undefined *)0x0) {
          unaff_x27 = (undefined **)*plStack_5d0;
          unaff_x23 = puVar5;
          do {
            unaff_x28 = (undefined *)0x0;
            do {
              if ((undefined **)*plStack_5d0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x22);
              }
              unaff_x24 = *(ulong *)(lStack_5d8 + (long)unaff_x28 * 8);
              uVar3 = unaff_x24;
              FUN_107ade96c();
              if (uVar3 == 2) {
                func_0x00010befa120(puVar1);
              }
              unaff_x28 = unaff_x28 + 1;
            } while (unaff_x23 != unaff_x28);
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60();
          } while (unaff_x23 != (undefined *)0x0);
        }
        _objc_release(unaff_x22);
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x26 != puVar4);
      puVar4 = puVar2;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_460) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_5e8 = 0x107add198;
  lStack_650 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_640 = unaff_x28;
  ppuStack_638 = unaff_x27;
  puStack_630 = unaff_x26;
  uStack_628 = unaff_x25;
  uStack_620 = unaff_x24;
  puStack_618 = unaff_x23;
  puStack_610 = unaff_x22;
  puStack_608 = puVar4;
  puStack_600 = puVar1;
  puStack_5f8 = puVar2;
  pppuStack_5f0 = &ppuStack_400;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  plStack_780 = (long *)0x0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  _objc_retain(puVar5);
  puVar10 = &uStack_790;
  puStack_7e0 = puVar5;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lStack_7d8 = *plStack_780;
    unaff_x27 = &PTR_PTR_1126c4000;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_780 != lStack_7d8) {
          _objc_enumerationMutation(puStack_7e0);
        }
        unaff_x22 = *(undefined **)(lStack_788 + (long)unaff_x28 * 8);
        lStack_7c8 = 0;
        uStack_7d0 = 0;
        uStack_7b8 = 0;
        plStack_7c0 = (long *)0x0;
        uStack_7a8 = 0;
        uStack_7b0 = 0;
        uStack_798 = 0;
        uStack_7a0 = 0;
        func_0x00010bfbd240();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = unaff_x22;
        func_0x00010bf52a60();
        if (puVar2 != (undefined *)0x0) {
          lVar13 = *plStack_7c0;
          unaff_x23 = puVar2;
          do {
            unaff_x26 = (undefined *)0x0;
            do {
              if (*plStack_7c0 != lVar13) {
                _objc_enumerationMutation(unaff_x22);
              }
              unaff_x24 = *(ulong *)(lStack_7c8 + (long)unaff_x26 * 8);
              uVar3 = unaff_x24;
              FUN_107ade96c();
              puVar2 = PTR_PTR_1126c4650;
              if (uVar3 == 2) {
                _objc_retain(unaff_x24);
                _objc_opt_class(puVar2);
                uVar3 = unaff_x24;
                _objc_opt_isKindOfClass(unaff_x24,puVar2);
                unaff_x25 = unaff_x24;
                if ((uVar3 & 1) == 0) {
                  unaff_x25 = 0;
                }
                _objc_retain(unaff_x25);
                _objc_release(unaff_x24);
                unaff_x24 = unaff_x25;
                func_0x00010bf0af00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x25);
                func_0x00010befa120(puVar1);
                _objc_release(unaff_x24);
              }
              unaff_x26 = unaff_x26 + 1;
            } while (unaff_x23 != unaff_x26);
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60();
          } while (unaff_x23 != (undefined *)0x0);
        }
        _objc_release(unaff_x22);
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x28 != puVar5);
      puVar10 = &uStack_790;
      puVar5 = puStack_7e0;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  puVar2 = puStack_7e0;
  _objc_release(puStack_7e0);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_650) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar11 = &uStack_910;
  puStack_7f8 = puVar2;
  uStack_7e8 = 0x107add3ec;
  lStack_850 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_840 = unaff_x28;
  ppuStack_838 = unaff_x27;
  puStack_830 = unaff_x26;
  uStack_828 = unaff_x25;
  uStack_820 = unaff_x24;
  puStack_818 = unaff_x23;
  puStack_810 = unaff_x22;
  puStack_808 = puVar4;
  puStack_800 = puVar1;
  pppuStack_7f0 = &pppuStack_5f0;
  _objc_retain();
  puVar1 = puVar5;
  func_0x00010bfcf460();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = puVar5;
    func_0x00010c259a20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar4 == (undefined *)0x0) goto LAB_107add430;
    puVar1 = puVar5;
    func_0x00010c259a20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_107add430:
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_908 = 0;
    uStack_910 = 0;
    uStack_8f8 = 0;
    plStack_900 = (long *)0x0;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    uStack_8d8 = 0;
    uStack_8e0 = 0;
    puVar2 = puVar5;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar13 = *plStack_900;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_900 != lVar13) {
            _objc_enumerationMutation(puVar2);
          }
          puVar6 = PTR_DAT_1126a5228;
          uVar14 = *(ulong *)(lStack_908 + (long)puVar15 * 8);
          _objc_retain(uVar14);
          uVar3 = uVar14;
          func_0x00010010fab4(uVar14,puVar6);
          _objc_release(uVar14);
          if ((int)uVar3 == 0 || uVar14 == 0) {
            puVar6 = PTR_PTR_1126c4650;
            _objc_opt_class(PTR_PTR_1126c4650);
            uVar3 = uVar14;
            _objc_opt_isKindOfClass(uVar14,puVar6);
            puVar6 = PTR_PTR_1126c4650;
            if ((uVar3 & 1) != 0) {
              _objc_retain(uVar14);
              _objc_opt_class(puVar6);
              uVar7 = uVar14;
              _objc_opt_isKindOfClass(uVar14,puVar6);
              uVar3 = uVar14;
              if ((uVar7 & 1) == 0) {
                uVar3 = 0;
              }
              _objc_retain(uVar3);
              _objc_release(uVar14);
              uVar14 = uVar3;
              func_0x00010bf0af00(uVar3);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar3);
              uVar3 = uVar14;
              func_0x00010bf5a700(uVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14c720(puVar1);
              _objc_release(uVar3);
              goto LAB_107add59c;
            }
          }
          else {
            func_0x00010b5f7a24(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14c720(puVar1);
LAB_107add59c:
            _objc_release(uVar14);
          }
          puVar15 = puVar15 + 1;
        } while (puVar4 != puVar15);
        puVar4 = puVar2;
        puVar11 = &uStack_910;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010b5f9ce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
  }
  _objc_release(puVar1);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_850) {
    ___stack_chk_fail();
    ppuVar8 = &puStack_940;
    pcStack_918 = FUN_107add69c;
    puStack_930 = puVar1;
    puStack_928 = puVar5;
    pppuStack_920 = &pppuStack_7f0;
    _objc_retain(puVar10);
    puStack_938 = PTR_PTR_1126f9b98;
    puStack_940 = puVar2;
    _objc_msgSendSuper2(&puStack_940,PTR_s_init_1125d9248);
    if (ppuVar8 != (undefined **)0x0) {
      _objc_retain(puVar10);
      uVar9 = *(undefined8 *)((long)ppuVar8 + 0x20);
      *(undefined8 **)((long)ppuVar8 + 0x20) = puVar10;
      _objc_release();
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)((long)ppuVar8 + 0x18);
      *(undefined8 *)((long)ppuVar8 + 0x18) = uVar9;
      _objc_release(uVar12);
    }
    _objc_release(puVar10);
    return (undefined1 *)ppuVar8;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107add69c; end: 107add72b; -[SCMemoriesSendMediaGroup initPrivateWithGalleryMedias:] */

undefined1 * FUN_107add69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9b98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107add72c; end: 107adda3b; -[SCMemoriesSendMediaGroup _populateCountsWithDataObjectContext:] */

long FUN_107add72c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  double dVar14;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar14 = 0.0;
  lVar2 = param_1;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_f0;
  uVar10 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return param_3;
      }
      ___stack_chk_fail();
      _objc_retain(puVar9);
      _objc_retain(uVar10);
      func_0x00010bfef200();
      if (param_3 != 0) {
        func_0x00010be75ce0(param_3);
        *(undefined8 *)(param_3 + 0x28) = 0;
        _objc_retain(puVar9);
        uVar8 = *(undefined8 *)(param_3 + 0x10);
        *(undefined1 **)(param_3 + 0x10) = puVar9;
        _objc_release(uVar8);
      }
      _objc_release(uVar10);
      _objc_release(puVar9);
      return param_3;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar11 = *(ulong *)(lVar12 * 8);
      uVar4 = uVar11;
      FUN_107ade96c();
      puVar6 = PTR_PTR_1126c4650;
      if ((long)uVar4 < 3) {
        if (uVar4 == 1) {
          _objc_retain(uVar11);
          fVar13 = SUB84(dVar14,0);
          func_0x00010bf8b160(uVar11);
          dVar14 = *(double *)(param_1 + 0x58) + (double)fVar13;
          *(double *)(param_1 + 0x58) = dVar14;
          uVar4 = uVar11;
          func_0x00010b5fa088();
          switch(uVar4) {
          case 0:
            *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
            break;
          case 1:
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
            break;
          case 2:
          case 5:
          case 6:
          case 8:
          case 10:
          case 0xc:
            *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
            *(undefined1 *)(param_1 + 8) = 1;
            break;
          case 3:
          case 4:
          case 7:
          case 9:
          case 0xb:
            dVar14 = (double)(*(long *)(param_1 + 0x30) + 1);
            *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
            *(double *)(param_1 + 0x30) = dVar14;
            *(undefined1 *)(param_1 + 9) = 1;
          }
          puVar6 = PTR_PTR_1126af4c0;
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c07b240();
          *(ulong *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + ((ulong)puVar7 & 0xffffffff);
          _objc_release(puVar6);
          goto LAB_107add99c;
        }
        if (uVar4 == 2) {
          _objc_retain(uVar11);
          _objc_opt_class(puVar6);
          uVar5 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar6);
          uVar4 = uVar11;
          if ((uVar5 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar11);
          uVar11 = uVar4;
          func_0x00010bf0af00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uVar4 = uVar11;
          func_0x00010c0c6c20();
          if (uVar4 == 2) {
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
            func_0x00010bf8b160(uVar11);
          }
          else {
            if (uVar4 != 1) goto LAB_107add99c;
            *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
            func_0x00010bf2a7e0(PTR_PTR_1126b6600);
          }
          dVar14 = dVar14 + *(double *)(param_1 + 0x58);
          *(double *)(param_1 + 0x58) = dVar14;
          goto LAB_107add99c;
        }
      }
      else {
        if (uVar4 == 3) {
          _objc_retain(uVar11);
          fVar13 = SUB84(dVar14,0);
          func_0x00010c276460(uVar11);
        }
        else {
          if (uVar4 != 4) goto LAB_107add9a4;
          _objc_retain(uVar11);
          fVar13 = SUB84(dVar14,0);
          func_0x00010bf8b160(uVar11);
        }
        dVar14 = (double)fVar13;
        *(double *)(param_1 + 0x58) = dVar14;
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_107add99c:
        _objc_release(uVar11);
      }
LAB_107add9a4:
      lVar12 = lVar12 + 1;
    } while (lVar3 != lVar12);
    puVar9 = auStack_f0;
    uVar10 = 0x10;
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107adda3c; end: 107addac7; -[SCMemoriesSendMediaGroup initWithStoryGroupWithGalleryMedias:storyEntry:dataObjectContext:] */

long FUN_107adda3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfef200(param_1,param_2,param_3);
  if (param_1 != 0) {
    func_0x00010be75ce0(param_1,param_2,param_5);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107addac8; end: 107addb2f; -[SCMemoriesSendMediaGroup initWithMultiSnapGalleryMedias:dataObjectContext:] */

long FUN_107addac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bfef200(param_1,param_2,param_3);
  if (param_1 != 0) {
    func_0x00010be75ce0(param_1,param_2,param_4);
    *(undefined8 *)(param_1 + 0x28) = 1;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107addb30; end: 107addb97; -[SCMemoriesSendMediaGroup initWithBatchGroupWithGalleryMedias:dataObjectContext:] */

long FUN_107addb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bfef200(param_1,param_2,param_3);
  if (param_1 != 0) {
    func_0x00010be75ce0(param_1,param_2,param_4);
    *(undefined8 *)(param_1 + 0x28) = 2;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107addb98; end: 107addd57; -[SCMemoriesSendMediaGroup initWithStitchedMultiSnap:isPrivate:] */

long FUN_107addb98(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  double dVar7;
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
  func_0x00010bfef200(param_1,param_2,param_3);
  if (param_1 != 0) {
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_107addd0c;
    }
    *(undefined8 *)(param_1 + 0x28) = 3;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = param_3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 1;
    *(undefined2 *)(param_1 + 8) = 0;
    *(ulong *)(param_1 + 0x50) = param_4 & 0xffffffff;
    dVar7 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar3 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          fVar6 = SUB84(dVar7,0);
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          uVar1 = *(undefined8 *)(lStack_118 + lVar5 * 8);
          func_0x00010bf8b160(uVar1);
          dVar7 = *(double *)(param_1 + 0x58) + (double)fVar6;
          *(double *)(param_1 + 0x58) = dVar7;
          func_0x00010b5fa088(uVar1);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
  }
  _objc_retain(param_1);
  lVar3 = param_1;
LAB_107addd0c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar3;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return lVar3;
}



/* Entry: 107addd58; end: 107addd7f; -[SCMemoriesSendMediaGroup storyEntry] */

void FUN_107addd58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107addd80; end: 107adddd3; -[SCMemoriesSendMediaGroup isEntryLevelSnapDocBased] */

uint FUN_107addd80(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107ade96c();
  _objc_release(uVar1);
  return (uint)(4 < uVar2) | 8U >> (ulong)((uint)uVar2 & 0x1f) & 1;
}



/* Entry: 107adddd4; end: 107addddb; -[SCMemoriesSendMediaGroup UUID] */

undefined8 FUN_107adddd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107addddc; end: 107addde3; -[SCMemoriesSendMediaGroup galleryMedias] */

undefined8 FUN_107addddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107addde4; end: 107adddeb; -[SCMemoriesSendMediaGroup groupType] */

undefined8 FUN_107addde4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107adddec; end: 107adddf3; -[SCMemoriesSendMediaGroup imageCount] */

undefined8 FUN_107adddec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107adddf4; end: 107adddfb; -[SCMemoriesSendMediaGroup specsImageCount] */

undefined8 FUN_107adddf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107adddfc; end: 107adde03; -[SCMemoriesSendMediaGroup normalVideoCount] */

undefined8 FUN_107adddfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107adde04; end: 107adde0b; -[SCMemoriesSendMediaGroup specsVideoCount] */

undefined8 FUN_107adde04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107adde0c; end: 107adde13; -[SCMemoriesSendMediaGroup meoCount] */

undefined8 FUN_107adde0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107adde14; end: 107adde1b; -[SCMemoriesSendMediaGroup totalDuration] */

undefined8 FUN_107adde14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107adde1c; end: 107adde23; -[SCMemoriesSendMediaGroup containsLagunaSnap] */

undefined1 FUN_107adde1c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107adde24; end: 107adde2b; -[SCMemoriesSendMediaGroup containsPsychomantisSnap] */

undefined1 FUN_107adde24(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107adde2c; end: 107adde67; -[SCMemoriesSendMediaGroup .cxx_destruct] */

void FUN_107adde2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107adde68; end: 107addfcf; -[SCMemoriesSendMediaPostState initWithEphemeralClientIds:] */

/* WARNING: Possible PIC construction at 0x000107addf58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107addf5c) */
/* WARNING: Removing unreachable block (ram,0x000107addf68) */

undefined8 * FUN_107adde68(undefined8 param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  puStack_e0 = PTR_PTR_1126f9ba0;
  puVar2 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar2[1];
    puVar2[1] = puVar1;
    _objc_release(uVar9);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_128 = (undefined8 *)0x0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    param_4 = (int)auStack_d8;
    puVar8 = param_3;
    func_0x00010bf52a60();
    if (puVar8 != (undefined1 *)0x0) {
      if (*plStack_120 != *plStack_120) {
        _objc_enumerationMutation(param_3);
      }
      puVar8 = (undefined1 *)*puStack_128;
      puVar2 = (undefined8 *)puVar2[1];
      ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb590;
      goto code_r0x00010c1d0640;
    }
    _objc_release(param_3);
    puVar8 = (undefined1 *)puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_3 + 8);
  func_0x00010bf529e0();
  puVar2 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    lVar4 = *(long *)(param_3 + 8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (int)auStack_208;
    lVar3 = lVar4;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      _objc_release(lVar4);
      lVar10 = 0;
    }
    else {
      lVar11 = 0;
      lVar10 = 0;
      lVar12 = *plStack_240;
      do {
        lVar13 = 0;
        do {
          if (*plStack_240 != lVar12) {
            _objc_enumerationMutation(lVar4);
          }
          lVar5 = *(long *)(lStack_248 + lVar13 * 8);
          func_0x00010c067fc0();
          if (lVar5 == 2) {
            lVar11 = lVar11 + 1;
          }
          else if (lVar5 == 1) {
            lVar10 = lVar10 + 1;
          }
          lVar13 = lVar13 + 1;
        } while (lVar3 != lVar13);
        param_4 = (int)auStack_208;
        lVar3 = lVar4;
        puVar6 = &uStack_250;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      _objc_release(lVar4);
      if (lVar11 != 0) {
        puVar2 = (undefined8 *)0x2;
        puVar8 = (undefined1 *)puVar6;
        goto LAB_107ade0f0;
      }
    }
    lVar3 = *(long *)(param_3 + 8);
    func_0x00010bf529e0();
    puVar2 = (undefined8 *)(ulong)(lVar10 == lVar3);
    puVar8 = (undefined1 *)puVar6;
  }
LAB_107ade0f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)puVar2[1];
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb5a8;
  if (param_4 == 0) {
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb5c0;
  }
code_r0x00010c1d0640:
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar2,PTR_s_setObject_forKeyedSubscript__112651bb8,ppuVar7,puVar8);
  return puVar2;
}



/* Entry: 107addfd0; end: 107ade127; -[SCMemoriesSendMediaPostState postProgress] */

void FUN_107addfd0(long param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  uVar5 = 0;
  if (lVar2 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (int)auStack_d8;
    lVar2 = lVar3;
    func_0x00010bf52a60();
    if (lVar2 == 0) {
      _objc_release(lVar3);
      lVar7 = 0;
    }
    else {
      lVar8 = 0;
      lVar7 = 0;
      lVar9 = *plStack_110;
      do {
        lVar10 = 0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(lVar3);
          }
          lVar4 = *(long *)(lStack_118 + lVar10 * 8);
          func_0x00010c067fc0();
          if (lVar4 == 2) {
            lVar8 = lVar8 + 1;
          }
          else if (lVar4 == 1) {
            lVar7 = lVar7 + 1;
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        param_4 = (int)auStack_d8;
        lVar2 = lVar3;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      _objc_release(lVar3);
      if (lVar8 != 0) {
        uVar5 = 2;
        param_3 = (undefined1 *)puVar6;
        goto LAB_107ade0f0;
      }
    }
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    uVar5 = (ulong)(lVar7 == lVar2);
    param_3 = (undefined1 *)puVar6;
  }
LAB_107ade0f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb5a8;
  if (param_4 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb5c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(uVar5 + 8),PTR_s_setObject_forKeyedSubscript__112651bb8,ppuVar1,param_3
            );
  return;
}



/* Entry: 107ade128; end: 107ade14f; -[SCMemoriesSendMediaPostState ephemeralDidFinishPost:didSucceed:] */

void FUN_107ade128(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb5a8;
  if (param_4 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb5c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKeyedSubscript__112651bb8,ppuVar1,
             param_3);
  return;
}



/* Entry: 107ade150; end: 107ade15b; -[SCMemoriesSendMediaPostState .cxx_destruct] */

void FUN_107ade150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ade15c; end: 107ade4e3;  */

void FUN_107ade15c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010bf977c0();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)ppuVar1 == 0x27) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eac578;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eac578,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010bf8be20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000108dfd174();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  else {
    ppuVar1 = param_1;
    func_0x00010bf3fcc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010c1083e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 107ade4e4; end: 107ade6f7;  */

bool FUN_107ade4e4(long param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 in_b0;
  undefined1 uVar15;
  undefined1 in_register_00005001;
  undefined1 uVar16;
  undefined1 in_register_00005002;
  undefined1 uVar17;
  undefined1 in_register_00005003;
  undefined1 uVar18;
  undefined1 in_register_00005004;
  undefined1 uVar19;
  undefined1 in_register_00005005;
  undefined1 uVar20;
  undefined1 in_register_00005006;
  undefined1 uVar21;
  undefined1 in_register_00005007;
  undefined1 uVar22;
  double dVar23;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x000108f4a2bc(param_3);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar4 != 0) {
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        uVar12 = *(undefined8 *)(lVar14 * 8);
        uVar5 = uVar12;
        func_0x00010c0c6c20();
        if (((int)uVar5 == 1) &&
           (func_0x00010bf8b160(uVar12),
           (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) <
           (float)(long)(double)CONCAT17(in_register_00005007,
                                         CONCAT16(in_register_00005006,
                                                  CONCAT15(in_register_00005005,
                                                           CONCAT14(in_register_00005004,
                                                                    CONCAT13(in_register_00005003,
                                                                             CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))))) {
          bVar2 = true;
          lVar7 = param_1;
          goto LAB_107ade69c;
        }
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_1);
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  bVar2 = false;
  lVar7 = param_2;
  if (lVar14 != 0) {
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        uVar6 = *(ulong *)(lVar13 * 8);
        lVar9 = param_3;
        func_0x000107f70278();
        if ((uVar6 & 1) != 0) {
          bVar2 = true;
          goto LAB_107ade69c;
        }
        lVar13 = lVar13 + 1;
      } while (lVar14 != lVar13);
      lVar14 = param_2;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
    bVar2 = false;
  }
LAB_107ade69c:
  _objc_release(lVar7);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return bVar2;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar9);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  _objc_retain(param_1);
  lVar7 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_1);
      }
      uVar12 = *(undefined8 *)(lVar14 * 8);
      uVar5 = uVar12;
      func_0x00010c0c6c20();
      if ((int)uVar5 == 1) {
        func_0x00010bf8b160(uVar12);
        bVar2 = NAN((float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))));
        if ((bVar2 || (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) != 60.0) &&
            (!bVar2 && (float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))) < 60.0) ==
            bVar2) {
          bVar2 = true;
          lVar7 = param_1;
          goto LAB_107ade8b0;
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar7 != lVar14);
    lVar7 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  _objc_retain(lVar9);
  lVar14 = lVar9;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  bVar2 = false;
  lVar7 = lVar9;
  if (lVar14 != 0) {
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar9);
        }
        lVar11 = *(long *)(lVar13 * 8);
        lVar8 = lVar11;
        func_0x00010c0c6c20();
        if (lVar8 == 2) {
          func_0x00010bf8b160(lVar11);
          bVar1 = false;
          bVar3 = false;
          bVar2 = NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15))))))));
          if (!bVar2) {
            bVar1 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13
                                                  (uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))))
                                                  ))) < 60.0;
            bVar3 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13
                                                  (uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))))
                                                  ))) == 60.0;
          }
          if (!bVar3 && bVar1 == bVar2) {
            bVar2 = true;
            goto LAB_107ade8b0;
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar14 != lVar13);
      lVar14 = lVar9;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
    bVar2 = false;
  }
LAB_107ade8b0:
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return bVar2;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar7 = param_1;
  func_0x00010b5fa088();
  if (lVar7 == 1) {
    func_0x00010bf8b160(param_1);
    dVar23 = (double)(float)CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)));
    func_0x00010c23cf80(PTR_PTR_1126b6600);
    bVar2 = false;
    if (!NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))))) &&
        !NAN(dVar23)) {
      bVar2 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                              )) < dVar23;
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_1);
  return bVar2;
}



/* Entry: 107ade6f8; end: 107ade8ff;  */

bool FUN_107ade6f8(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  double dVar21;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  _objc_retain(param_1);
  lVar5 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar9 = *(undefined8 *)(lVar11 * 8);
      uVar6 = uVar9;
      func_0x00010c0c6c20();
      if ((int)uVar6 == 1) {
        func_0x00010bf8b160(uVar9);
        bVar3 = NAN((float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))));
        if ((bVar3 || (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) != 60.0) &&
            (!bVar3 && (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))) < 60.0) ==
            bVar3) {
          bVar3 = true;
          lVar5 = param_1;
          goto LAB_107ade8b0;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  _objc_retain(param_2);
  lVar11 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  bVar3 = false;
  lVar5 = param_2;
  if (lVar11 != 0) {
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar10 = *(long *)(lVar12 * 8);
        lVar7 = lVar10;
        func_0x00010c0c6c20();
        if (lVar7 == 2) {
          func_0x00010bf8b160(lVar10);
          bVar2 = false;
          bVar4 = false;
          bVar3 = NAN((double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,
                                                  CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,
                                                  uVar13))))))));
          if (!bVar3) {
            bVar2 = (double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13
                                                  (uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))))
                                                  ))) < 60.0;
            bVar4 = (double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13
                                                  (uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))))
                                                  ))) == 60.0;
          }
          if (!bVar4 && bVar2 == bVar3) {
            bVar3 = true;
            goto LAB_107ade8b0;
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar11 != lVar12);
      lVar11 = param_2;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
    bVar3 = false;
  }
LAB_107ade8b0:
  _objc_release(lVar5);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return bVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar5 = param_1;
  func_0x00010b5fa088();
  if (lVar5 == 1) {
    func_0x00010bf8b160(param_1);
    dVar21 = (double)(float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
    func_0x00010c23cf80(PTR_PTR_1126b6600);
    bVar3 = false;
    if (!NAN((double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(uVar16
                                                  ,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))))) &&
        !NAN(dVar21)) {
      bVar3 = (double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(
                                                  uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))
                                              )) < dVar21;
    }
  }
  else {
    bVar3 = false;
  }
  _objc_release(param_1);
  return bVar3;
}



/* Entry: 107ade900; end: 107ade96b;  */

bool FUN_107ade900(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  double dVar5;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  _objc_retain();
  lVar2 = param_2;
  func_0x00010b5fa088();
  if (lVar2 == 1) {
    func_0x00010bf8b160(param_2);
    dVar5 = (double)fVar3;
    func_0x00010c23cf80(PTR_PTR_1126b6600);
    bVar1 = (double)CONCAT44(uVar4,fVar3) < dVar5;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107ade96c; end: 107adeb63;  */

undefined8 FUN_107ade96c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010010fab4(param_1,PTR_DAT_1126a5228);
  puVar3 = PTR_DAT_1126a5228;
  if ((param_1 == 0) || ((int)uVar1 == 0)) {
    puVar3 = PTR_PTR_1126c4650;
    _objc_opt_class(PTR_PTR_1126c4650);
    uVar1 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    if ((uVar1 & 1) == 0) {
      puVar3 = PTR_PTR_1126d29a8;
      _objc_opt_class(PTR_PTR_1126d29a8);
      uVar1 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar3);
      uVar4 = 3;
      if ((uVar1 & 1) == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010010fab4(param_1,puVar3);
    uVar1 = param_1;
    if ((int)uVar2 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    uVar4 = 4;
    if (uVar2 == 0) {
      uVar4 = 1;
    }
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107adeb64; end: 107adec6f; -[SCMemoriesSnapDocGalleryMediaWrapper totalDuration] */

undefined1 * FUN_107adeb64(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar2 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf8b160(*(undefined8 *)((long)puVar11 * 8));
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_1e8;
  uVar7 = 0x10;
  puVar11 = param_1;
  func_0x00010bf52a60();
  if (puVar11 != (undefined1 *)0x0) {
    lVar10 = *plStack_220;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_220 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        iVar1 = (int)*(undefined8 *)(lStack_228 + (long)puVar12 * 8);
        func_0x00010bfdd120();
        if (iVar1 == 0) {
          puVar11 = (undefined1 *)0x0;
          goto LAB_107aded34;
        }
        puVar12 = puVar12 + 1;
      } while (puVar11 != puVar12);
      puVar2 = auStack_1e8;
      uVar7 = 0x10;
      puVar11 = param_1;
      puVar6 = &uStack_230;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined1 *)0x0);
  }
  puVar11 = (undefined1 *)0x1;
LAB_107aded34:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar11;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_280;
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  _objc_retain(uVar7);
  puStack_278 = PTR_PTR_1126f9ba8;
  puStack_280 = param_1;
  _objc_msgSendSuper2(&puStack_280,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined1 **)0x0) {
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined8 **)((long)ppuVar3 + 8) = puVar6;
    _objc_release(uVar4);
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined1 **)((long)ppuVar3 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar7;
    _objc_release(uVar4);
    *(undefined8 *)((long)ppuVar3 + 0x20) = uVar9;
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar9 = *(undefined8 *)((long)ppuVar3 + 0x28);
    *(undefined **)((long)ppuVar3 + 0x28) = puVar5;
    _objc_release(uVar9);
  }
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 107adec70; end: 107aded73; -[SCMemoriesSnapDocGalleryMediaWrapper allSnapsSynced] */

undefined1 * FUN_107adec70(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  long lStack_160;
  undefined *puStack_158;
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
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_c8;
  uVar8 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar11 * 8);
        func_0x00010bfdd120();
        if (iVar1 == 0) {
          puVar9 = (undefined1 *)0x0;
          goto LAB_107aded34;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar7 = auStack_c8;
      uVar8 = 0x10;
      lVar2 = param_1;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar9 = (undefined1 *)0x1;
LAB_107aded34:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar9;
  }
  ___stack_chk_fail();
  plVar3 = &lStack_160;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  puStack_158 = PTR_PTR_1126f9ba8;
  lStack_160 = param_1;
  _objc_msgSendSuper2(&lStack_160,PTR_s_init_1125d9248);
  if (plVar3 != (long *)0x0) {
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)((long)plVar3 + 8);
    *(undefined8 **)((long)plVar3 + 8) = puVar6;
    _objc_release(uVar4);
    _objc_retain(puVar7);
    uVar4 = *(undefined8 *)((long)plVar3 + 0x10);
    *(undefined1 **)((long)plVar3 + 0x10) = puVar7;
    _objc_release(uVar4);
    _objc_retain(uVar8);
    uVar4 = *(undefined8 *)((long)plVar3 + 0x18);
    *(undefined8 *)((long)plVar3 + 0x18) = uVar8;
    _objc_release(uVar4);
    *(ulong *)((long)plVar3 + 0x20) =
         CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,CONCAT12(
                                                  uVar14,CONCAT11(uVar13,uVar12)))))));
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)plVar3 + 0x28);
    *(undefined **)((long)plVar3 + 0x28) = puVar5;
    _objc_release(uVar4);
  }
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  return (undefined1 *)plVar3;
}



/* Entry: 107aded74; end: 107adee83; -[SCMemoriesSnapSegmentedExportSession initWithEncryptedContentManager:snap:cloudFile:segmentDuration:] */

undefined1 *
FUN_107aded74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f9ba8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107adee84; end: 107adef43; -[SCMemoriesSnapSegmentedExportSession exportWithCompletionQueue:completionHandler:] */

void FUN_107adee84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107adef44;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107adef44; end: 107adf07f;  */

void FUN_107adef44(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40) = 1;
  func_0x00010bf8b160(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
  dVar7 = (double)param_1;
  lVar4 = *(long *)(param_2 + 0x20);
  if (*(double *)(lVar4 + 0x20) < dVar7) {
    func_0x00010bf8b160(*(undefined8 *)(lVar4 + 0x10));
    dVar7 = (double)SUB84(dVar7,0);
    dVar8 = dVar7 / *(double *)(*(long *)(param_2 + 0x20) + 0x20);
    func_0x00010bf8b160(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    lVar5 = *(long *)(param_2 + 0x20);
    *(long *)(lVar5 + 0x40) = (long)dVar8;
    lVar4 = *(long *)(param_2 + 0x20);
    if (1.0 <= (double)SUB84(dVar7,0) - *(double *)(lVar5 + 0x20) * (double)(long)dVar8) {
      *(long *)(lVar4 + 0x40) = *(long *)(lVar4 + 0x40) + 1;
      lVar4 = *(long *)(param_2 + 0x20);
    }
  }
  uVar1 = *(undefined8 *)(lVar4 + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107adf080;
  puStack_60 = &UNK_1108b71b0;
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c135200(uVar1,param_3,uVar2,uVar6,0,uVar3,&puStack_78);
  _objc_release(uVar3);
  return;
}



/* Entry: 107adf080; end: 107adf257;  */

/* WARNING: Possible PIC construction at 0x000107adf160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107adf200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107adf170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107adf204) */
/* WARNING: Removing unreachable block (ram,0x000107adf164) */
/* WARNING: Removing unreachable block (ram,0x000107adf20c) */
/* WARNING: Removing unreachable block (ram,0x000107adf174) */

void FUN_107adf080(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((param_2 == 0) || (param_3 != (undefined *)0x0)) {
    uVar8 = 0;
  }
  else if (*(long *)(lVar1 + 0x40) == 1) {
    func_0x00010bfbde00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e060();
    if ((int)param_2 == 0) {
      lVar1 = *(long *)(param_1 + 0x20);
      param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c0d3c80();
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar2;
      _objc_release(uVar8);
      _objc_release(puVar3);
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
      param_3 = (undefined *)0x0;
      lVar1 = *(long *)(param_1 + 0x20);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar3;
    _objc_release(uVar8);
    lVar1 = *(long *)(param_1 + 0x20);
    _objc_retain(param_2);
    uVar8 = *(undefined8 *)(lVar1 + 0x50);
    *(long *)(lVar1 + 0x50) = param_2;
    _objc_release(uVar8);
    uVar6 = 0;
    func_0x00010be0c880(*(undefined8 *)(param_1 + 0x20));
    _objc_release(0);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    if (uVar6 != *(ulong *)(param_2 + 0x40)) {
      dVar9 = (double)uVar6;
      dVar11 = *(double *)(param_2 + 0x20);
      dVar10 = dVar11 * dVar9;
      if (uVar6 == *(ulong *)(param_2 + 0x40) - 1) {
        func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x10));
        dVar11 = (double)SUB84(dVar9,0) - dVar10;
      }
      _CMTimeMakeWithSeconds(&uStack_130,dVar10,600);
      _CMTimeMakeWithSeconds(auStack_f8,dVar11,600);
      _CMTimeRangeMake(&uStack_e0,&uStack_130,auStack_f8);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b24f0;
      func_0x00010bfbde00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      func_0x00010bff4280();
      _objc_release(puVar5);
      func_0x00010c1d7200(puVar4);
      func_0x00010c1d6fc0(puVar4);
      uStack_128 = uStack_d8;
      uStack_130 = uStack_e0;
      uStack_118 = uStack_c8;
      uStack_120 = uStack_d0;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      func_0x00010c214ec0(puVar4);
      func_0x00010c200aa0(puVar4);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      func_0x00010bf9cee0(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      return;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    param_3 = (undefined *)0x0;
    lVar1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde3810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s__completeWithSegmentURLs_error__1125567a0,uVar8,param_3);
  return;
}



/* Entry: 107adf258; end: 107adf487; -[SCMemoriesSnapSegmentedExportSession _exportSegmentAtIndex:] */

void FUN_107adf258(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 == *(ulong *)(param_1 + 0x40)) {
                    /* WARNING: Could not recover jumptable at 0x00010bde3810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__completeWithSegmentURLs_error__1125567a0,
               *(undefined8 *)(param_1 + 0x48),0);
    return;
  }
  dVar5 = (double)param_3;
  dVar7 = *(double *)(param_1 + 0x20);
  dVar6 = dVar7 * dVar5;
  if (param_3 == *(ulong *)(param_1 + 0x40) - 1) {
    func_0x00010bf8b160(*(undefined8 *)(param_1 + 0x10));
    dVar7 = (double)SUB84(dVar5,0) - dVar6;
  }
  _CMTimeMakeWithSeconds(&uStack_e0,dVar6,600);
  _CMTimeMakeWithSeconds(auStack_a8,dVar7,600);
  _CMTimeRangeMake(&uStack_90,&uStack_e0,auStack_a8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24f0;
  func_0x00010bfbde00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  func_0x00010c0082a0();
  func_0x00010bff4280();
  _objc_release(puVar4);
  func_0x00010c1d7200(puVar3);
  func_0x00010c1d6fc0(puVar3);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  func_0x00010c214ec0(puVar3);
  func_0x00010c200aa0(puVar3);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x00010bf9cee0(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 107adf488; end: 107adf567;  */

void FUN_107adf488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar2 == 3) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_38 = lVar2 == 3;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_68 = FUN_107adf568;
  puStack_60 = &UNK_1108b0960;
  lStack_58 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(lStack_58 + 0x28);
  uStack_70 = 0xc2000000;
  _objc_retain(uVar1);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar3);
  return;
}



/* Entry: 107adf568; end: 107adf5bf;  */

void FUN_107adf568(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,
                        *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be0c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__exportSegmentAtIndex__112560bc0,
               *(long *)(param_1 + 0x38) + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde3810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__completeWithSegmentURLs_error__1125567a0,0,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107adf5c0; end: 107adf827; -[SCMemoriesSnapSegmentedExportSession _completeWithSegmentURLs:error:] */

void FUN_107adf5c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x30);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    _objc_retainBlock();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_107adf828;
    puStack_118 = &UNK_1108465d0;
    uStack_110 = uVar7;
    uStack_f8 = uVar3;
    _objc_retain(param_3);
    lStack_108 = param_3;
    _objc_retain(param_4);
    uStack_100 = param_4;
    _objc_retain(uVar7);
    _objc_retain(uVar3);
    func_0x00010007380c(uVar4,&puStack_130);
    _objc_release(uStack_100);
    _objc_release(lStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_f8);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar7);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar4);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (lVar2 = *(long *)(param_1 + 0x48), lVar2 != 0)) {
    _objc_retain(lVar2);
    lVar5 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60();
        _objc_release(puVar6);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107adf838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20),
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 107adf828; end: 107adf83b;  */

void FUN_107adf828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107adf838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107adf83c; end: 107adf843; -[SCMemoriesSnapSegmentedExportSession optimizesForNetworkUse] */

undefined1 FUN_107adf83c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



/* Entry: 107adf844; end: 107adf84b; -[SCMemoriesSnapSegmentedExportSession setOptimizesForNetworkUse:] */

void FUN_107adf844(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107adf84c; end: 107adf8c3; -[SCMemoriesSnapSegmentedExportSession .cxx_destruct] */

void FUN_107adf84c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107adf8c4; end: 107adf96b; -[SCMemoriesSnapDocGalleryMediaWrapper initWithGallerySnaps:galleryEntry:] */

undefined1 *
FUN_107adf8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9bb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107adf96c; end: 107adf98f; -[SCMemoriesSnapDocGalleryMediaWrapper copyWithZone:] */

undefined8 FUN_107adf96c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107adf990; end: 107adfa03; -[SCMemoriesSnapDocGalleryMediaWrapper hash] */

undefined8 * FUN_107adf990(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107adfa84:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107adfa90;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107adfa90;
        }
        goto LAB_107adfa84;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107adfa90:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107adfa04; end: 107adfaab; -[SCMemoriesSnapDocGalleryMediaWrapper isEqual:] */

long FUN_107adfa04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107adfa84:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107adfa90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107adfa90;
        }
        goto LAB_107adfa84;
      }
    }
    lVar3 = 0;
  }
LAB_107adfa90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107adfaac; end: 107adfab3; -[SCMemoriesSnapDocGalleryMediaWrapper gallerySnaps] */

undefined8 FUN_107adfaac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107adfab4; end: 107adfabb; -[SCMemoriesSnapDocGalleryMediaWrapper galleryEntry] */

undefined8 FUN_107adfab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107adfabc; end: 107adfaeb; -[SCMemoriesSnapDocGalleryMediaWrapper .cxx_destruct] */

void FUN_107adfabc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107adfaec; end: 107adfb97; -[SCMemoriesSendPHAsset initWithAsset:chatPrefillText:] */

undefined1 *
FUN_107adfaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9bb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 107adfb98; end: 107adfbbb; -[SCMemoriesSendPHAsset copyWithZone:] */

undefined8 FUN_107adfb98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107adfbbc; end: 107adfc2f; -[SCMemoriesSendPHAsset hash] */

undefined8 * FUN_107adfbbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107adfcb0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107adfcbc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107adfcbc;
        }
        goto LAB_107adfcb0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107adfcbc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107adfc30; end: 107adfcd7; -[SCMemoriesSendPHAsset isEqual:] */

long FUN_107adfc30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107adfcb0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107adfcbc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107adfcbc;
        }
        goto LAB_107adfcb0;
      }
    }
    lVar3 = 0;
  }
LAB_107adfcbc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107adfcd8; end: 107adfcdf; -[SCMemoriesSendPHAsset asset] */

undefined8 FUN_107adfcd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107adfce0; end: 107adfce7; -[SCMemoriesSendPHAsset chatPrefillText] */

undefined8 FUN_107adfce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107adfce8; end: 107adfd17; -[SCMemoriesSendPHAsset .cxx_destruct] */

void FUN_107adfce8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107adfd18; end: 107adfe4b;  */

void FUN_107adfd18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfcb5a0();
  if (lVar1 < 1) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    puVar2 = PTR_PTR_1126d64a0;
    _objc_alloc(PTR_PTR_1126d64a0);
    _objc_retain(param_1);
    _objc_retain(param_3);
    func_0x00010bffae40(puVar2);
    func_0x00010c11c020(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107adfe4c; end: 107adfec3;  */

void FUN_107adfe4c(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c08fa60();
    if (uVar2 < *(ulong *)(param_1 + 0x30)) goto LAB_107adfeb0;
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar3 = 1;
    uVar2 = param_2;
  }
  (*pcVar4)(lVar1,uVar2,uVar3);
LAB_107adfeb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107adfec4; end: 107adff93; -[SCStreamingContentFetcher initWithCallbackBlock:serialCallbackQueue:numberOfBytes:] */

undefined1 *
FUN_107adfec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9bc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107adff94; end: 107ae009b; -[SCStreamingContentFetcher putBytesSlice:] */

void FUN_107adff94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107ae009c;
  uStack_40 = 0x107ae00ac;
  puStack_58 = &uStack_60;
  _objc_retain(param_1);
  uVar1 = param_3;
  lStack_38 = param_1;
  func_0x00010b7f51c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107ae00b4;
  puStack_78 = &UNK_11084b9d0;
  uStack_70 = uVar1;
  puStack_68 = &uStack_60;
  _objc_retain();
  func_0x00010007380c(uVar2,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(lStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ae009c; end: 107ae00b3;  */

void FUN_107ae009c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ae00b4; end: 107ae0107;  */

void FUN_107ae00b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf06ae0(*(undefined8 *)
                       (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010be26c60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ae0108; end: 107ae01eb; -[SCStreamingContentFetcher setError:message:networkCode:] */

void FUN_107ae0108(long param_1)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107ae009c;
  uStack_30 = 0x107ae00ac;
  puStack_48 = &uStack_50;
  _objc_retain();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x107ae01ac;
  puStack_60 = &UNK_110847658;
  puStack_58 = &uStack_50;
  lStack_28 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_1 + 8),&puStack_78);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(lStack_28);
  return;
}



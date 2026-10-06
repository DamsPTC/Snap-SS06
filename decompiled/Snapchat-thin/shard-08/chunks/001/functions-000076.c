/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d07b3c; end: 105d07b9b; -[SCStickerInjectorBase _isExpectedSOJUGalleryStickerType:] */

undefined8 FUN_105d07b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf9c340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be403a0(param_1,param_2,param_3,uVar1,&PTR____CFConstantStringClassReference_110e28ab8
                     );
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105d07b9c; end: 105d07c17; -[SCStickerInjectorBase _ctpTypeForCTItemInstance:] */

undefined8 FUN_105d07b9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c27de00();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2827c0();
  _objc_release(uVar4);
  _objc_release(puVar2);
  return uVar3;
}



/* Entry: 105d07c18; end: 105d07c93; -[SCStickerInjectorBase _ctpTypeForStickerState:] */

undefined8 FUN_105d07c18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c27de80();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2827c0();
  _objc_release(uVar4);
  _objc_release(puVar2);
  return uVar3;
}



/* Entry: 105d07c94; end: 105d07d0f; -[SCStickerInjectorBase _ctpTypeForSOJUGallerySticker:] */

undefined8 FUN_105d07c94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c27de60();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2827c0();
  _objc_release(uVar4);
  _objc_release(puVar2);
  return uVar3;
}



/* Entry: 105d07d10; end: 105d07ddb; -[SCStickerInjectorBase _isStickerTypeGatedForCTPItem:] */

long FUN_105d07d10(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x00010bf96f00(param_3);
    lVar2 = param_1;
    func_0x00010be40340(param_1,param_2,lVar3);
    if ((int)lVar2 != 0) {
      lVar3 = param_1;
      func_0x00010c27de20(param_1,param_2,param_3);
      lVar2 = *(long *)(param_1 + 8);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar2,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar2;
        FUN_105d05720(lVar2);
      }
      _objc_release(lVar2);
      goto LAB_105d07dc0;
    }
  }
  lVar3 = 0;
LAB_105d07dc0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d07ddc; end: 105d07e5f; -[SCStickerInjectorBase _gatedInjectorForCTPType:] */

void FUN_105d07ddc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if ((uVar3 == 0) || (uVar2 = uVar3, FUN_105d05720(), (uVar2 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    _objc_retain(uVar3);
    uVar2 = uVar3;
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d07e60; end: 105d07f2b; -[SCStickerInjectorBase _isStickerSupportedWithCTPType:safeInjectorBlock:] */

long FUN_105d07e60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010be1a600();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = param_4;
      (**(code **)(param_4 + 0x10))(param_4,lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 105d07f2c; end: 105d07f6b; -[SCStickerInjectorBase _injectorForCTPType:] */

void FUN_105d07f2c(long param_1)

{
  func_0x00010be1a600();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d07f6c; end: 105d07fe7; -[SCStickerInjectorBase _injectorForCTPItem:] */

void FUN_105d07f6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf96f00(param_3);
    uVar2 = param_1;
    func_0x00010be40340(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c27de20(param_1,param_2,param_3);
      func_0x00010be3c020(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d07fd0;
    }
  }
  param_1 = 0;
LAB_105d07fd0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d07fe8; end: 105d080a7; -[SCStickerInjectorBase _injectorForCTItemInstance:] */

void FUN_105d07fe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      func_0x00010be3c020(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d08088;
    }
  }
  param_1 = 0;
LAB_105d08088:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d080a8; end: 105d08123; -[SCStickerInjectorBase _injectorForSOJUGallerySticker:] */

void FUN_105d080a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    uVar2 = param_1;
    func_0x00010be40360(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6600(param_1,param_2,param_3);
      func_0x00010be3c020(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d0810c;
    }
  }
  param_1 = 0;
LAB_105d0810c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08124; end: 105d0819f; -[SCStickerInjectorBase _injectorForStickerState:] */

void FUN_105d08124(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    uVar2 = param_1;
    func_0x00010be40380(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6620(param_1,param_2,param_3);
      func_0x00010be3c020(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d08188;
    }
  }
  param_1 = 0;
LAB_105d08188:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d081a0; end: 105d08213; -[SCStickerInjectorBase _injectorFromStickerView:] */

void FUN_105d081a0(long param_1,undefined8 param_2,long param_3)

{
  FUN_105d06984();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be3c000(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      _objc_retain(param_1);
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08214; end: 105d08253; -[SCStickerInjectorBase _safeConversionInjectorForCTPType:] */

void FUN_105d08214(long param_1)

{
  func_0x00010be1a600();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08254; end: 105d08293; -[SCStickerInjectorBase _conversionInjectorForCTPType:] */

void FUN_105d08254(long param_1)

{
  func_0x00010be1a600();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08294; end: 105d0830f; -[SCStickerInjectorBase _conversionInjectorForCTPItem:] */

void FUN_105d08294(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf96f00(param_3);
    uVar2 = param_1;
    func_0x00010be40340(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c27de20(param_1,param_2,param_3);
      func_0x00010bde8e20(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d082f8;
    }
  }
  param_1 = 0;
LAB_105d082f8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08310; end: 105d083cf; -[SCStickerInjectorBase _conversionInjectorForCTItemInstance:] */

void FUN_105d08310(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      func_0x00010bde8e20(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d083b0;
    }
  }
  param_1 = 0;
LAB_105d083b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d083d0; end: 105d0844b; -[SCStickerInjectorBase _conversionInjectorForSOJUGallerySticker:] */

void FUN_105d083d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    uVar2 = param_1;
    func_0x00010be40360(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6600(param_1,param_2,param_3);
      func_0x00010bde8e20(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d08434;
    }
  }
  param_1 = 0;
LAB_105d08434:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d0844c; end: 105d084c7; -[SCStickerInjectorBase _conversionInjectorForStickerState:] */

void FUN_105d0844c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    uVar2 = param_1;
    func_0x00010be40380(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6620(param_1,param_2,param_3);
      func_0x00010bde8e20(param_1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d084b0;
    }
  }
  param_1 = 0;
LAB_105d084b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d084c8; end: 105d08547; -[SCStickerInjectorBase _isConversionSupportedWithCTPType:injectorBlock:] */

long FUN_105d084c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010be984a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  return lVar1;
}



/* Entry: 105d08548; end: 105d085e3; -[SCStickerInjectorBase _animatedInjectorForCTPType:] */

void FUN_105d08548(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bde8e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010010fab4();
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d085e4; end: 105d086a3; -[SCStickerInjectorBase _animatedInjectorForCTItemInstance:] */

void FUN_105d085e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      func_0x00010bdcb4a0(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d08684;
    }
  }
  param_1 = 0;
LAB_105d08684:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d086a4; end: 105d0876f; -[SCStickerInjectorBase _isContextUnlockSupportedWithCTPType:injectorBlock:] */

long FUN_105d086a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010be984a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_4;
      (**(code **)(param_4 + 0x10))(param_4,lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 105d08770; end: 105d0882f; -[SCStickerInjectorBase _contextUnlockInjectorForItemInstance:] */

void FUN_105d08770(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      func_0x00010bde8620(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d08810;
    }
  }
  param_1 = 0;
LAB_105d08810:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08830; end: 105d088cb; -[SCStickerInjectorBase _contextUnlockInjectorForCTPType:] */

void FUN_105d08830(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bde8e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010010fab4();
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d088cc; end: 105d08967; -[SCStickerInjectorBase _attachmentInjectorForCTPType:] */

void FUN_105d088cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bde8e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010010fab4();
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d08968; end: 105d08a27; -[SCStickerInjectorBase _attachmentInjectorForCTItemInstance:] */

void FUN_105d08968(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      func_0x00010bdd0a80(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d08a08;
    }
  }
  param_1 = 0;
LAB_105d08a08:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08a28; end: 105d08af3; -[SCStickerInjectorBase _isAttachmentSupportedWithCTPType:injectorBlock:] */

long FUN_105d08a28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010be984a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_4;
      (**(code **)(param_4 + 0x10))(param_4,lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 105d08af4; end: 105d08b8f; -[SCStickerInjectorBase _presentationModelInjectorForCTPType:] */

void FUN_105d08af4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bde8e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010010fab4();
    lVar1 = lVar3;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar3);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d08b90; end: 105d08c4f; -[SCStickerInjectorBase _presentationModelInjectorForCTItemInstance:] */

void FUN_105d08b90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      func_0x00010be7f800(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d08c30;
    }
  }
  param_1 = 0;
LAB_105d08c30:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d08c50; end: 105d08ca3; -[SCStickerInjectorBase .cxx_destruct] */

void FUN_105d08c50(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d08ca4; end: 105d08d9f; -[SCStickerInjectorDependenciesImpl initWithMemoriesMediaHandler:creativeToolsHintManager:protobufTransformer:videoPlaybackDataProvider:] */

undefined1 *
FUN_105d08ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126ece50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d08da0; end: 105d08dc7; -[SCStickerInjectorDependenciesImpl memoriesMediaHandler] */

void FUN_105d08da0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d08dc8; end: 105d08def; -[SCStickerInjectorDependenciesImpl creativeToolsHintManager] */

void FUN_105d08dc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d08df0; end: 105d08e17; -[SCStickerInjectorDependenciesImpl protobufTransformer] */

void FUN_105d08df0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d08e18; end: 105d08e3f; -[SCStickerInjectorDependenciesImpl videoPlaybackDataProvider] */

void FUN_105d08e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d08e40; end: 105d08e87; -[SCStickerInjectorDependenciesImpl .cxx_destruct] */

void FUN_105d08e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d08e88; end: 105d08f43; -[SCStickerInjectorImpl initWithProtobufTransformer:ctpItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105d08e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ece58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127347ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127347b0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d08f44; end: 105d0905b; -[SCStickerInjectorImpl registerInjector:injectorConfig:] */

void FUN_105d08f44(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bab90;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010bf5d720(param_4);
    func_0x00010bf5cd60(param_4);
    lVar2 = param_4;
    func_0x00010c255220(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c2465c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ea0(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puStack_58 = PTR_PTR_1126ece58;
    uStack_60 = param_1;
    _objc_msgSendSuper2(&uStack_60,PTR_s_registerInjector_config__112529fb8,param_3,puVar1);
    _objc_release(param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105d0905c; end: 105d09063; -[SCStickerInjectorImpl typeForCTPItem:] */

void FUN_105d0905c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_entityType_1125c3568);
  return;
}



/* Entry: 105d09064; end: 105d090d7; -[SCStickerInjectorImpl typeForCTItemInstance:] */

long FUN_105d09064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf96ee0();
  _objc_release(uVar3);
  _objc_release(param_3);
  iVar5 = (int)uVar4;
  lVar1 = 9;
  if (iVar5 != 0x18) {
    lVar1 = (long)iVar5;
  }
  lVar2 = 9;
  if (iVar5 != 7) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 105d090d8; end: 105d090df; -[SCStickerInjectorImpl typeForStickerState:] */

void FUN_105d090d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_type_11267d188);
  return;
}



/* Entry: 105d090e0; end: 105d090e7; -[SCStickerInjectorImpl typeForSOJUGallerySticker:] */

void FUN_105d090e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_typeEnum_11267d1a0);
  return;
}



/* Entry: 105d090e8; end: 105d092bf; -[SCStickerInjectorImpl stickerForCTItemInstance:presentationModelProviderType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d090e8(undefined8 ***param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    pppuVar3 = (undefined8 ***)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126ece58;
    pppuVar3 = &ppuStack_50;
    ppuStack_50 = param_1;
    _objc_msgSendSuper2(pppuVar3,PTR_s_stickerForCTItemInstance_present_1126729e0,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (pppuVar3 == (undefined8 ***)0x0) {
      uVar2 = *(undefined8 *)((long)param_1 + (long)_DAT_1127347ac);
      lVar1 = param_3;
      func_0x00010c0840e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c084460(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      pppuVar3 = param_1;
      func_0x00010c06f720();
      if ((int)pppuVar3 == 0) {
        param_1 = (undefined8 ***)0x0;
      }
      else {
        puStack_78 = &uStack_80;
        uStack_80 = 0;
        uStack_70 = 0x3032000000;
        pcStack_68 = FUN_105d092c0;
        uStack_60 = 0x105d092d0;
        _objc_retain(param_4);
        uStack_58 = param_4;
        _objc_retain(param_3);
        func_0x00010c0c11a0(param_4);
        func_0x00010c253f00(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        __Block_object_dispose(&uStack_80,8);
        _objc_release(uStack_58);
      }
      _objc_release(uVar2);
      pppuVar3 = param_1;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar3);
  return;
}



/* Entry: 105d092c0; end: 105d092d7;  */

void FUN_105d092c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d092d8; end: 105d093f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d092d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127347ac);
  func_0x00010c0cc0c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0840e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96ee0();
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f560(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010c284000(uVar6);
  puVar3 = PTR_PTR_1126bc960;
  func_0x00010c2904a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105d093f8; end: 105d095c3; -[SCStickerInjectorImpl stickerStateForSDMPlaybackLayer:snapDocEditor:uniqueId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d093f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108eb6384();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c246580(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c06f740();
  if ((int)lVar4 == 0) {
    param_1 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c246520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_3;
    func_0x00010bf8c1c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(puVar7);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + _DAT_1127347b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + _DAT_1127347ac,0);
  return;
}



/* Entry: 105d095c4; end: 105d09603; -[SCStickerInjectorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d095c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127347b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127347ac,0);
  return;
}



/* Entry: 105d09604; end: 105d096a7; -[SCStickerInjectorMemoriesMediaHandlerImpl initWithMemoriesPickerFeatureLauncher:memoriesPickerScopeServices:] */

undefined1 *
FUN_105d09604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ece60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d096a8; end: 105d09763; -[SCStickerInjectorMemoriesMediaHandlerImpl launchMemoriesImagePickerWithPresentingViewController:targetImageSizeBlock:completion:] */

void FUN_105d096a8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    else {
      lVar1 = param_4;
      _objc_retainBlock();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar1;
      _objc_release(uVar2);
      lVar1 = param_5;
      _objc_retainBlock();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar1;
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + 0x50) = 0;
      func_0x00010be47c40(param_1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d09764; end: 105d09893; -[SCStickerInjectorMemoriesMediaHandlerImpl imageForAsset:targetSize:completion:] */

void FUN_105d09764(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_3 + 0x30);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_3 + 0x38);
    *(undefined **)(param_3 + 0x38) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18ba80(*(undefined8 *)(param_3 + 0x38),param_4,1);
    func_0x00010c1ec960(*(undefined8 *)(param_3 + 0x38),param_4,1);
    func_0x00010c1cc000(*(undefined8 *)(param_3 + 0x38),param_4,1);
    lVar3 = *(long *)(param_3 + 0x30);
  }
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d09894;
  puStack_50 = &UNK_1108e5788;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x00010c1357a0(param_1,param_2,lVar3,param_4,param_5,1,uVar2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105d09894; end: 105d0989f;  */

void FUN_105d09894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105d0989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105d098a0; end: 105d098c3; -[SCStickerInjectorMemoriesMediaHandlerImpl dismissMemoriesPicker] */

void FUN_105d098a0(undefined8 param_1)

{
  func_0x00010be358e0();
                    /* WARNING: Could not recover jumptable at 0x00010be02cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissMemoriesPicker_11255e4d8);
  return;
}



/* Entry: 105d098c4; end: 105d09a4f; -[SCStickerInjectorMemoriesMediaHandlerImpl handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_105d098c4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x50) != '\x01') {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b1c58;
      _objc_opt_class(PTR_PTR_1126b1c58);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      if (uVar2 == 0) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
        bVar1 = false;
      }
      else {
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar3 != 0;
        if (uVar3 == 0) {
          (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
        }
        else {
          *(undefined1 *)(param_1 + 0x50) = 1;
          func_0x00010beb99a0(param_1);
          func_0x00010be37040(param_1);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      goto LAB_105d09a1c;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  bVar1 = false;
LAB_105d09a1c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105d09a50; end: 105d09a53; -[SCStickerInjectorMemoriesMediaHandlerImpl requestToDismissPage] */

void FUN_105d09a50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissMemoriesPicker_1125be900);
  return;
}



/* Entry: 105d09a54; end: 105d09beb; -[SCStickerInjectorMemoriesMediaHandlerImpl _launchMemoriesPickerWithPresentingViewController:] */

void FUN_105d09a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = PTR_PTR_1126b1c60;
    _objc_alloc();
    func_0x00010c052c80();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d09bec;
  puStack_50 = &UNK_110868d10;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126aedf8;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23840(uVar3,param_2,param_1,0,0,param_1,puVar1,uVar4,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 8),param_2,uVar3,param_1);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105d09bec; end: 105d09c33;  */

void FUN_105d09bec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c10f940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d09c34; end: 105d09d37; -[SCStickerInjectorMemoriesMediaHandlerImpl _imageForAsset:] */

void FUN_105d09c34(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0fce40(param_3);
  dVar3 = (double)uVar1;
  uVar1 = param_3;
  func_0x00010c0fcaa0(param_3);
  dVar2 = (double)uVar1;
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))(dVar3,dVar2);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfe7820(dVar3,dVar2,param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105d09d38; end: 105d09d7f;  */

void FUN_105d09d38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3700();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d09d80; end: 105d09dcb; -[SCStickerInjectorMemoriesMediaHandlerImpl _completeWithImage:] */

void FUN_105d09d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d09dcc; end: 105d09e03; -[SCStickerInjectorMemoriesMediaHandlerImpl _dismissMemoriesPicker] */

void FUN_105d09dcc(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 105d09e04; end: 105d09f1b; -[SCStickerInjectorMemoriesMediaHandlerImpl _showLoadingIndicator] */

void FUN_105d09e04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010bf20c00(uVar1);
  func_0x00010c013de0();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x48),param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x48),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aeff0;
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x48),param_2,puVar2);
  func_0x00010befbb60(uVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c14c920(puVar2);
  func_0x00010c14c940(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c24dbc0(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d09f1c; end: 105d09f57; -[SCStickerInjectorMemoriesMediaHandlerImpl _hideLoadingIndicator] */

void FUN_105d09f1c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d09f58; end: 105d09f6f; -[SCStickerInjectorMemoriesMediaHandlerImpl containerViewController] */

void FUN_105d09f58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d09f70; end: 105d09f7b; -[SCStickerInjectorMemoriesMediaHandlerImpl setContainerViewController:] */

void FUN_105d09f70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 105d09f7c; end: 105d09f93; -[SCStickerInjectorMemoriesMediaHandlerImpl workFlowDelegate] */

void FUN_105d09f7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d09f94; end: 105d09f9f; -[SCStickerInjectorMemoriesMediaHandlerImpl setWorkFlowDelegate:] */

void FUN_105d09f94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105d09fa0; end: 105d0a033; -[SCStickerInjectorMemoriesMediaHandlerImpl .cxx_destruct] */

void FUN_105d09fa0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 105d0a034; end: 105d0a307; -[SCStickerInjectorPreviewServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d0a034(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar11 = param_1 + _DAT_1127347e4;
  _objc_loadWeakRetained();
  lVar1 = lVar11;
  func_0x00010c0c9260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127347fc;
    _objc_loadWeakRetained();
  }
  puVar2 = PTR_PTR_1126ae720;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105d0a308;
  puStack_88 = &UNK_1108e57b8;
  lStack_80 = lVar1;
  lStack_78 = lVar11;
  _objc_retain(lVar11);
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127347e8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe37a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126bb1d0;
  _objc_alloc(PTR_PTR_1126bb1d0);
  lVar3 = param_1 + _DAT_1127347ec;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar5,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_1127347f0;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126ae720;
  puStack_c8 = puVar8;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105d0a338;
  puStack_b0 = &UNK_1108e57e8;
  lStack_a8 = lVar6;
  _objc_retain(lVar6);
  func_0x00010bf11fe0(puVar7,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c3fb8;
  _objc_alloc(PTR_PTR_1126c3fb8);
  func_0x00010c02a900();
  param_1 = param_1 + _DAT_1127347f4;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar9 = lVar3;
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18bd00();
  _objc_release(lVar9);
  puVar10 = PTR_PTR_1126c3fc0;
  _objc_alloc(PTR_PTR_1126c3fc0);
  func_0x00010c04c8c0();
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lStack_a8);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(lStack_78);
  _objc_release(lStack_80);
  _objc_release(lVar11);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105d0a308; end: 105d0a367;  */

void FUN_105d0a308(void)

{
  _objc_alloc(PTR_PTR_1126c3fa8);
  func_0x00010c02aa80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d0a368; end: 105d0a3db; -[SCStickerInjectorPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d0a368(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127347fc);
  _objc_destroyWeak(param_1 + _DAT_1127347f0);
  _objc_destroyWeak(param_1 + _DAT_1127347ec);
  _objc_destroyWeak(param_1 + _DAT_1127347e4);
  _objc_destroyWeak(param_1 + _DAT_1127347e8);
  _objc_destroyWeak(param_1 + _DAT_1127347f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127347f8);
  return;
}



/* Entry: 105d0a3dc; end: 105d0a5cb;  */

void FUN_105d0a3dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3fc8;
  _objc_alloc(PTR_PTR_1126c3fc8);
  func_0x00010c03b9e0();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1c320(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1c340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf61e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf61e40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf8e8e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf8e900(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfccb80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfccba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfedee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfedf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c2441a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c2441c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d0a5cc; end: 105d0a667; -[SCStickerInjectorServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d0a5cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734824,0);
  _objc_destroyWeak(param_1 + _DAT_112734804);
  _objc_destroyWeak(param_1 + _DAT_11273481c);
  _objc_destroyWeak(param_1 + _DAT_11273480c);
  _objc_destroyWeak(param_1 + _DAT_112734808);
  _objc_destroyWeak(param_1 + _DAT_112734818);
  _objc_destroyWeak(param_1 + _DAT_112734814);
  _objc_destroyWeak(param_1 + _DAT_112734810);
  _objc_destroyWeak(param_1 + _DAT_112734800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734820);
  return;
}



/* Entry: 105d0a668; end: 105d0a873; -[SCStickerInjectorSnapEditorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d0a668(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar8 = param_1 + _DAT_112734828;
  _objc_loadWeakRetained();
  lVar1 = lVar8;
  func_0x00010c0c9260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112734834;
    _objc_loadWeakRetained();
  }
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d0a874;
  puStack_68 = &UNK_1108e57b8;
  lStack_60 = lVar1;
  lStack_58 = lVar8;
  _objc_retain(lVar8);
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb1d0;
  _objc_alloc(PTR_PTR_1126bb1d0);
  lVar4 = param_1 + _DAT_11273482c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar3,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126c3fb8;
  _objc_alloc(PTR_PTR_1126c3fb8);
  func_0x00010c02a900();
  param_1 = param_1 + _DAT_112734830;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18bd00();
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126c3fd8;
  _objc_alloc(PTR_PTR_1126c3fd8);
  func_0x00010c04c8c0();
  _objc_release(lVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lStack_58);
  _objc_release(lStack_60);
  _objc_release(lVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d0a874; end: 105d0a8a3;  */

void FUN_105d0a874(void)

{
  _objc_alloc(PTR_PTR_1126c3fa8);
  func_0x00010c02aa80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d0a8a4; end: 105d0a8f3; -[SCStickerInjectorSnapEditorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d0a8a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734834);
  _objc_destroyWeak(param_1 + _DAT_11273482c);
  _objc_destroyWeak(param_1 + _DAT_112734828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734830);
  return;
}



/* Entry: 105d0a8f4; end: 105d0a967; -[SCStickerInjectorVideoPlaybackDataProviderImpl initWithVideoPlayback:] */

undefined1 * FUN_105d0a8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ece68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d0a968; end: 105d0a9fb; -[SCStickerInjectorVideoPlaybackDataProviderImpl playbackDuration] */

void FUN_105d0a968(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde420();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff1e0();
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d0a9fc; end: 105d0aa07; -[SCStickerInjectorVideoPlaybackDataProviderImpl .cxx_destruct] */

void FUN_105d0a9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d0aa08; end: 105d0aac7; -[SCStickerTypeInjectorBaseConfig initWithCtpType:ctItemInstanceType:stickerTypes:sojuGalleryTypes:] */

undefined1 *
FUN_105d0aa08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ece70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105d0aac8; end: 105d0aaeb; -[SCStickerTypeInjectorBaseConfig copyWithZone:] */

undefined8 FUN_105d0aac8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105d0aaec; end: 105d0ab6f; -[SCStickerTypeInjectorBaseConfig hash] */

undefined8 * FUN_105d0aaec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105d0ac10:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105d0ac1c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[1] == param_3[1] && (puVar3[2] == param_3[2])))) {
      lVar5 = puVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_105d0ac1c;
        }
        goto LAB_105d0ac10;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105d0ac1c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105d0ab70; end: 105d0ac37; -[SCStickerTypeInjectorBaseConfig isEqual:] */

long FUN_105d0ab70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105d0ac10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105d0ac1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_105d0ac1c;
        }
        goto LAB_105d0ac10;
      }
    }
    lVar3 = 0;
  }
LAB_105d0ac1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d0ac38; end: 105d0ac3f; -[SCStickerTypeInjectorBaseConfig ctpType] */

undefined8 FUN_105d0ac38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d0ac40; end: 105d0ac47; -[SCStickerTypeInjectorBaseConfig ctItemInstanceType] */

undefined8 FUN_105d0ac40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105d0ac48; end: 105d0ac4f; -[SCStickerTypeInjectorBaseConfig stickerTypes] */

undefined8 FUN_105d0ac48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d0ac50; end: 105d0ac57; -[SCStickerTypeInjectorBaseConfig sojuGalleryTypes] */

undefined8 FUN_105d0ac50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105d0ac58; end: 105d0ac87; -[SCStickerTypeInjectorBaseConfig .cxx_destruct] */

void FUN_105d0ac58(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105d0ac88; end: 105d0aeb3;  */

void FUN_105d0ac88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c3fe0;
  _objc_alloc(PTR_PTR_1126c3fe0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ada0();
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ada0();
  func_0x00010c0df720(param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063600(puVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126c3fe8;
  _objc_alloc(PTR_PTR_1126c3fe8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = param_4;
  func_0x00010c27a460(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055500(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126c3ff0;
  _objc_alloc(PTR_PTR_1126c3ff0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_68,param_4);
  }
  _CMTimeGetSeconds(&uStack_68);
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052280(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d0aeb4; end: 105d0b187;  */

void FUN_105d0aeb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  if (param_3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c3ff8;
    _objc_opt_new(PTR_PTR_1126c3ff8);
    func_0x00010c1281e0(param_3);
    uVar8 = param_1;
    uVar9 = param_2;
    func_0x00010bf345e0(param_3);
    func_0x00010bf345e0(param_3);
    puVar1 = PTR_PTR_1126c4000;
    _objc_alloc_init(PTR_PTR_1126c4000);
    puVar2 = puVar1;
    func_0x00010c227680(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c227840(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c141a80(param_3);
    uVar8 = uVar9;
    func_0x00010c14e120(param_3);
    lVar5 = param_3;
    func_0x00010c2790e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      lVar5 = param_3;
      func_0x00010c2790e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000100504554();
      _objc_release(lVar5);
      func_0x00010c219440(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
    func_0x00010c1e9b60(param_1,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1e9a40(param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1dee80(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1ee8e0(uVar9,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1f6140(uVar8,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c081660(param_3);
    func_0x00010c1b51a0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c081160(param_3);
    func_0x00010c1b50a0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b4000(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b3660(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bfedfc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac5a0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010bf06320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169260(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c1b1180(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1af2c0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1ac5e0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d0b188; end: 105d0b38f;  */

void FUN_105d0b188(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010bf377a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf9e600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x00010bf377a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf9e600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar4 = param_1;
    FUN_105d0aeb4(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf377a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f0a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7da0(lVar4,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf377a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b0e0(lVar4,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c199840(lVar4,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf377a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf62920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188dc0(lVar4,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf377a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cdf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8000(lVar4,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105d0b390; end: 105d0b427;  */

void FUN_105d0b390(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain();
    lVar2 = param_1;
    FUN_105d0aeb4(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ace0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfedfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1ac5a0(lVar2,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d0b428; end: 105d0b82f;  */

void FUN_105d0b428(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c3ff8;
    _objc_opt_new(PTR_PTR_1126c3ff8);
    puVar2 = PTR_PTR_1126c4000;
    _objc_alloc_init(PTR_PTR_1126c4000);
    func_0x00010bf345e0(param_4);
    puVar3 = puVar2;
    func_0x00010c227680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0(param_4);
    puVar4 = puVar3;
    func_0x00010c227840(param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar6 = param_4;
    func_0x00010c279100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      lVar6 = param_4;
      func_0x00010c279100(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x000100504554();
      _objc_release(lVar6);
      func_0x00010c219440(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar7);
    }
    func_0x00010c1281e0(param_4);
    func_0x00010c1e9b60(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1281e0(param_4);
    func_0x00010c1e9a40(param_2,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c081660(param_4);
    func_0x00010c1b51a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c081160(param_4);
    func_0x00010c1b50a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c14e120(param_4);
    func_0x00010c1f6140(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c141a80(param_4);
    func_0x00010c1ee8e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1dee80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b4000(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b3660(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b1180(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1af2c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1ac5e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d0b830; end: 105d0b86f;  */

void FUN_105d0b830(undefined8 param_1)

{
  FUN_105d0b428();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ace0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d0b870; end: 105d0b8d7;  */

void FUN_105d0b870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_105d0b428(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d0b8d8; end: 105d0bdcb;  */

void FUN_105d0b8d8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  
  puVar2 = PTR_PTR_1126ba8c8;
  _objc_retain(param_2);
  _objc_alloc_init(puVar2);
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar9);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar4 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (uVar1 == 0) {
    if (uVar4 == 0) {
      if (uVar5 == 0) {
        if (uVar6 == 0) {
          puVar9 = (undefined *)0x0;
          goto LAB_105d0bd80;
        }
        puVar7 = PTR_PTR_1126ba9a8;
        _objc_alloc_init(PTR_PTR_1126ba9a8);
        uVar3 = uVar6;
        func_0x00010bf64de0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(uVar3);
        func_0x00010c2156c0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c26fc80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c215860(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar3);
        func_0x00010c27dd80(uVar6);
        func_0x00010c21ace0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c21ace0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf21f60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189a20(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        puVar7 = PTR_PTR_1126ba8c0;
        _objc_alloc_init(PTR_PTR_1126ba8c0);
        puVar9 = PTR_PTR_1126bab40;
        func_0x00010c29e660(uVar5);
        func_0x00010bdc28e0(puVar9);
        puVar9 = PTR_PTR_1126bab40;
        func_0x00010c2807a0(uVar5);
        func_0x00010bdc2900(puVar9);
        func_0x00010bf01f20(uVar5);
        func_0x00010c1679c0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c21ace0(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c21b980(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c21ace0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf21f60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c167920(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    else {
      puVar7 = PTR_PTR_1126bab48;
      _objc_alloc_init(PTR_PTR_1126bab48);
      func_0x00010bf34540(uVar4);
      func_0x00010c17a660(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bf9fa60(uVar4);
      func_0x00010c199dc0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c09f000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bfa60(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010bfe4800(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9360(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010bf632c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189360(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c2a2d00(uVar4);
      func_0x00010c222dc0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c21ace0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf21f60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c224b40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    puVar7 = PTR_PTR_1126ba930;
    _objc_alloc_init(PTR_PTR_1126ba930);
    puVar9 = PTR_PTR_1126bab40;
    func_0x00010c282760(uVar3);
    func_0x00010bdc2920(puVar9);
    func_0x00010c1bd820(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c21ace0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f9a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
  puVar9 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
LAB_105d0bd80:
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105d0bdcc; end: 105d0be27;  */

void FUN_105d0bdcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_105d0be28;
  puStack_20 = &UNK_1108e58a8;
  uStack_18 = param_1;
  func_0x00010bfb2040(param_2,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d0be28; end: 105d0be57;  */

bool FUN_105d0be28(long param_1,long param_2)

{
  func_0x00010c27dde0(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 105d0be58; end: 105d0be97; +[SCStickerInjectorHelpers infoStickerStateWithSOJUGallerySticker:infoStickerType:itemInstance:timelineSegmentTimeRanges:uniqueId:supportedFlows:editCapabilities:] */

void FUN_105d0be58(void)

{
  func_0x00010bec2bc0();
  return;
}



/* Entry: 105d0be98; end: 105d0bf93; +[SCStickerInjectorHelpers chatStickerStateWithSOJUGallerySticker:stickerType:sojuStickerType:itemInstance:timelineSegmentTimeRanges:uniqueId:supportedFlows:editCapabilities:] */

void FUN_105d0be98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  _objc_retain(param_11);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000105d0b674(param_3,param_8,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



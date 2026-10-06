/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107aecfa0; end: 107aed017;  */

void FUN_107aecfa0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bc92e28();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar2 + 0x18) == -1) {
    uVar1 = 8;
    if (param_3 == 0) {
      uVar1 = 0x4f;
    }
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
  }
  uVar1 = 0xc;
  if (param_3 == 0) {
    uVar1 = 0x2d;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 107aed018; end: 107aed0af;  */

void FUN_107aed018(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x50;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x12;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0x2f;
  return;
}



/* Entry: 107aed0b0; end: 107aed12f; -[SCCommerceSession startNewPageSession:] */

void FUN_107aed0b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0x13) {
    uVar1 = param_1;
    func_0x00010c0f12e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(uVar1);
  }
  func_0x00010c0f12e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aed130; end: 107aed15f; -[SCCommerceSession endCurrentPageSession] */

void FUN_107aed130(undefined8 param_1)

{
  func_0x00010c0f12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107aed160; end: 107aed2ef; -[SCCommerceSession logPageOpen:sourcePage:metricsDataSource:jsonMetadata:eventId:] */

void FUN_107aed160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8240(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar4 = param_5;
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d6580;
  _objc_alloc_init(PTR_PTR_1126d6580);
  func_0x00010c206f20();
  func_0x00010c1b6980(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c197860(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010be51cc0(param_1,param_2,puVar1,param_3);
  lVar3 = param_1;
  func_0x00010bfcdee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf125c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf125c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010baf0c7c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abbe0(lVar3,param_2,param_4,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aed2f0; end: 107aed4c7; -[SCCommerceSession logPageOpen:sourcePage:metricsDataSource:jsonMetadata:eventId:cartItems:] */

void FUN_107aed2f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8240(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar4 = param_5;
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d6580;
  _objc_alloc_init(PTR_PTR_1126d6580);
  func_0x00010c206f20();
  func_0x00010c1b6980(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c197860(puVar1,param_2,param_7);
  _objc_release(param_7);
  lVar3 = param_8;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar3 = param_8;
    FUN_107af1538(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6420(puVar1,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010be51cc0(param_1,param_2,puVar1,param_3);
  lVar3 = param_1;
  func_0x00010bfcdee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf125c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf125c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010baf0c7c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abbe0(lVar3,param_2,param_4,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 107aed4c8; end: 107aed62f; -[SCCommerceSession logPageClose:destinationPage:timeUntilPageReadySeconds:metricsDataSource:availableModules:exitEvent:cartItems:] */

void FUN_107aed4c8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_6;
  _objc_release(uVar5);
  lVar1 = param_2;
  func_0x00010be78de0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (0.0 <= param_1) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b4ca0();
    func_0x00010c215660(lVar1,param_3,puVar3);
    _objc_release(puVar2);
  }
  lVar4 = param_7;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c16d780(lVar1,param_3,param_7);
  }
  if (param_8 != -1) {
    func_0x00010c198340(lVar1,param_3,param_8);
  }
  lVar4 = param_9;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    lVar4 = param_9;
    FUN_107af1538(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6420(lVar1,param_3,lVar4);
    _objc_release(lVar4);
  }
  func_0x00010be51cc0(param_2,param_3,lVar1,param_4);
  _objc_release(lVar1);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107aed630; end: 107aed6a7; -[SCCommerceSession logPageClose:destinationPage:metricsDataSource:] */

void FUN_107aed630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_5;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010be78de0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be51cc0(param_1,param_2,lVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aed6a8; end: 107aed78b; -[SCCommerceSession logPageClose:destinationPage:metricsDataSource:exitEvent:cartItems:] */

void FUN_107aed6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_5;
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010be78de0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != -1) {
    func_0x00010c198340(lVar1,param_2,param_6);
  }
  lVar2 = param_7;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = param_7;
    FUN_107af1538(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6420(lVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  func_0x00010be51cc0(param_1,param_2,lVar1,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107aed78c; end: 107aed86b; -[SCCommerceSession logPageClose:destinationPage:timeUntilPageReadySeconds:metricsDataSource:exitEvent:] */

void FUN_107aed78c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_6;
  _objc_release(uVar4);
  lVar1 = param_2;
  func_0x00010be78de0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b4ca0();
  func_0x00010c215660(lVar1,param_3,puVar3);
  _objc_release(puVar2);
  if (param_7 != -1) {
    func_0x00010c198340(lVar1,param_3,param_7);
  }
  func_0x00010be51cc0(param_2,param_3,lVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aed86c; end: 107aed96f; -[SCCommerceSession logPageClose:destinationPage:timeUntilPageReadySeconds:metricsDataSource:availableModules:exitEvent:] */

void FUN_107aed86c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_6;
  _objc_release(uVar4);
  lVar1 = param_2;
  func_0x00010be78de0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b4ca0();
  func_0x00010c215660(lVar1,param_3,puVar3);
  _objc_release(puVar2);
  func_0x00010c16d780(lVar1,param_3,param_7);
  _objc_release(param_7);
  if (param_8 != -1) {
    func_0x00010c198340(lVar1,param_3,param_8);
  }
  func_0x00010be51cc0(param_2,param_3,lVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107aed970; end: 107aeda97; -[SCCommerceSession logCardOpen:currentPage:metricsDataSource:] */

void FUN_107aed970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d6588;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  uVar4 = param_5;
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  _objc_release(uVar2);
  func_0x00010c1795a0(puVar1,param_2,param_3);
  func_0x00010c187720(puVar1,param_2,param_4);
  func_0x00010be507c0(param_1,param_2,puVar1);
  lVar3 = param_1;
  func_0x00010bfcdee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf125c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16cbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010baf0c7c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abbe0(lVar3,param_2,param_4,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aeda98; end: 107aedb3b; -[SCCommerceSession logCardClose:currentPage:metricsDataSource:] */

void FUN_107aeda98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6590;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  uVar2 = param_5;
  func_0x00010bf85820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar3);
  func_0x00010c1795a0(puVar1,param_2,param_3);
  func_0x00010c187720(puVar1,param_2,param_4);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aedb3c; end: 107aedb9b; -[SCCommerceSession logCommercePickerOpen:picker:] */

void FUN_107aedb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6598;
  _objc_alloc_init(PTR_PTR_1126d6598);
  func_0x00010c187720();
  func_0x00010c1db680(puVar1,param_2,param_4);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aedb9c; end: 107aedbfb; -[SCCommerceSession logCommercePickerClose:picker:] */

void FUN_107aedb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65a0;
  _objc_alloc_init(PTR_PTR_1126d65a0);
  func_0x00010c187720();
  func_0x00010c1db680(puVar1,param_2,param_4);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aedbfc; end: 107aedd27; -[SCCommerceSession logProductImpression:] */

void FUN_107aedbfc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d65a8;
  _objc_alloc_init(PTR_PTR_1126d65a8);
  _objc_opt_class(param_1);
  func_0x00010be75c00();
  lVar2 = param_3;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c278ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219300(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c247800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010c247800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206ea0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c0ed2a0(param_1);
  func_0x00010c17f240(puVar1,param_2,lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0xf0),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aedd28; end: 107aede2f; -[SCCommerceSession logWidgetImpressionWithDuration:source:pageSessionId:availableSections:] */

void FUN_107aedd28(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d65b0;
  _objc_alloc_init(PTR_PTR_1126d65b0);
  if ((param_1 == -1.0) || (0.0 <= param_1)) {
    func_0x00010c1ab480(param_1,puVar1);
  }
  if (param_4 != -1) {
    func_0x00010c206c40(puVar1,param_3,param_4);
  }
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c8408;
    _objc_alloc_init(PTR_PTR_1126c8408);
    func_0x00010c1d8620();
    func_0x00010c1d8300(puVar1,param_3,puVar3);
    _objc_release(puVar3);
  }
  lVar2 = param_6;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c16d800(puVar1,param_3,param_6);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0xf0),param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107aede30; end: 107aedf5b; -[SCCommerceSession logProductTapWithProductImpressionData:] */

void FUN_107aede30(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d65b8;
  _objc_alloc_init(PTR_PTR_1126d65b8);
  _objc_opt_class(param_1);
  func_0x00010be75c00();
  lVar2 = param_3;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c278ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219300(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c247800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010c247800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206ea0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c0ed2a0(param_1);
  func_0x00010c17f240(puVar1,param_2,lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0xf0),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aedf5c; end: 107aedfe7; -[SCCommerceSession logScreenshopOnboardingModalImpressionWithLocation:retryCounter:isNewUser:] */

void FUN_107aedf5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65c0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1bf6c0();
  _objc_release(param_3);
  func_0x00010c1ed9c0(puVar1,param_2,param_4);
  func_0x00010c1b2d80(puVar1,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0xf0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aedfe8; end: 107aee04b; -[SCCommerceSession logSwipeUpOnPage:] */

void FUN_107aedfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65c8;
  _objc_alloc_init(PTR_PTR_1126d65c8);
  func_0x00010c161fe0();
  func_0x00010c2121a0(puVar1,param_2,param_3);
  func_0x00010be51c80(param_1,param_2,puVar1,0xffffffffffffffff,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee04c; end: 107aee0bf; -[SCCommerceSession logCardAction:card:currentPage:] */

void FUN_107aee04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65d0;
  _objc_alloc_init(PTR_PTR_1126d65d0);
  func_0x00010c2121a0();
  func_0x00010c161fe0(puVar1,param_2,param_3);
  func_0x00010be51c80(param_1,param_2,puVar1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee0c0; end: 107aee157; -[SCCommerceSession logButtonTap:currentCard:currentPage:jsonMetadata:] */

void FUN_107aee0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65d8;
  _objc_retain(param_6);
  _objc_alloc_init(puVar1);
  func_0x00010c2121a0();
  func_0x00010c161fe0(puVar1,param_2,5);
  func_0x00010c1b6980(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010be51c80(param_1,param_2,puVar1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee158; end: 107aee20f; -[SCCommerceSession logButtonTap:currentCard:currentPage:jsonMetadata:productId:] */

void FUN_107aee158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65d8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_alloc_init(puVar1);
  func_0x00010c2121a0();
  func_0x00010c161fe0(puVar1,param_2,5);
  func_0x00010c1b6980(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010be51ca0(param_1,param_2,puVar1,param_4,param_5,param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee210; end: 107aee327; -[SCCommerceSession logSharePDPButtonTapForProductId:storeId:trackingId:] */

void FUN_107aee210(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d65d8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c2121a0();
  func_0x00010c161fe0(puVar1,param_2,5);
  func_0x00010c17f2a0(puVar1,param_2,0xe);
  func_0x00010c187720(puVar1,param_2,0x29);
  func_0x00010c1e3bc0(puVar1,param_2,param_3);
  _objc_release(param_3);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c20c240(puVar1,param_2,param_4);
  }
  lVar2 = param_5;
  func_0x00010c08fa60();
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x00010c219300(puVar1,param_2,param_5);
  }
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197860(puVar1,param_2,puVar3);
  func_0x00010be507c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107aee328; end: 107aee3b3; -[SCCommerceSession logProductCellTappedAtRow:column:productId:] */

void FUN_107aee328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65e0;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c2149c0();
  func_0x00010c2147e0(puVar1,param_2,param_4);
  func_0x00010c2149a0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee3b4; end: 107aee46b; -[SCCommerceSession logHeroSessionCloseOnPage:timeSpentSeconds:timeUntilReadySeconds:heroImageCount:heroImagePos:] */

void FUN_107aee3b4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65e8;
  _objc_alloc_init(PTR_PTR_1126d65e8);
  func_0x00010c187720();
  func_0x00010c215140(puVar1,param_4,(long)(param_1 * 1000.0));
  func_0x00010c215640(puVar1,param_4,(long)(param_2 * 1000.0));
  func_0x00010c1a7e60(puVar1,param_4,param_6);
  func_0x00010c1a7ec0(puVar1,param_4,param_7);
  func_0x00010be507c0(param_3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee46c; end: 107aee517; -[SCCommerceSession logScreenshopScannerSessionCloseWithDuration:totalScreenshotCount:processedScreenshotCount:fashionScreenshotCount:screenshopEnabled:] */

void FUN_107aee46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d65f0;
  _objc_alloc_init(PTR_PTR_1126d65f0);
  func_0x00010c1fd960();
  func_0x00010c218820(puVar1,param_2,param_3);
  func_0x00010c1e37e0(puVar1,param_2,param_4);
  func_0x00010c19a3c0(puVar1,param_2,param_5);
  func_0x00010c1f7780(puVar1,param_2,param_6);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee518; end: 107aee5f3; -[SCCommerceSession logSendPDPForProductId:storeId:trackingId:] */

void FUN_107aee518(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d65f8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c17f2a0();
  func_0x00010c187720(puVar1,param_2,0x29);
  func_0x00010c1e3bc0(puVar1,param_2,param_3);
  _objc_release(param_3);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c20c240(puVar1,param_2,param_4);
  }
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c219300(puVar1,param_2,param_5);
  }
  func_0x00010be507c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107aee5f4; end: 107aee69f; -[SCCommerceSession logCommercePickerCellTap:category:content:picker:] */

void FUN_107aee5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6600;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c187720();
  func_0x00010c17a060(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c181b40(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c2121a0(puVar1,param_2,param_6);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee6a0; end: 107aee717; -[SCCommerceSession logPostAttachment:toGroup:toFriend:] */

void FUN_107aee6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6608;
  _objc_alloc_init(PTR_PTR_1126d6608);
  func_0x00010c1fc900();
  func_0x00010c1fc560(puVar1,param_2,param_4);
  func_0x00010c1fc540(puVar1,param_2,param_5);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee718; end: 107aee753; -[SCCommerceSession logAddAttachment] */

void FUN_107aee718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6610;
  _objc_alloc_init(PTR_PTR_1126d6610);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee754; end: 107aee78f; -[SCCommerceSession logRemoveAttachment] */

void FUN_107aee754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6618;
  _objc_alloc_init(PTR_PTR_1126d6618);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee790; end: 107aee7d3; -[SCCommerceSession logAttachmentCellDeselect] */

void FUN_107aee790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6620;
  _objc_alloc_init(PTR_PTR_1126d6620);
  func_0x00010c1b42a0();
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee7d4; end: 107aee817; -[SCCommerceSession logAttachmentCellSelect] */

void FUN_107aee7d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6620;
  _objc_alloc_init(PTR_PTR_1126d6620);
  func_0x00010c1b42a0();
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee818; end: 107aee867; -[SCCommerceSession logTextFieldInput:] */

void FUN_107aee818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6628;
  _objc_alloc_init(PTR_PTR_1126d6628);
  func_0x00010c2121a0();
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aee868; end: 107aee8cf; -[SCCommerceSession logCategoryOpenWithMetrics:] */

void FUN_107aee868(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6630;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x00010be51620(param_1,param_2,puVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107aee8d0; end: 107aee997; -[SCCommerceSession logCategoryCloseWithMetrics:timeSpent:] */

void FUN_107aee8d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6638;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    lVar2 = param_3;
    func_0x00010c276a80(param_3);
    func_0x00010c2187c0(puVar1,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010c0c2c40(param_3);
    func_0x00010c1c3600(puVar1,param_2,lVar2);
    func_0x00010c2150c0(puVar1,param_2,param_4);
    func_0x00010be51620(param_1,param_2,puVar1,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    lVar2 = param_3;
    func_0x00010c0c2c40(param_3);
    _objc_release(param_3);
    func_0x00010c0acee0(uVar3,param_2,lVar2,&PTR____CFConstantStringClassReference_110e85298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107aee998; end: 107aee9ff; -[SCCommerceSession logCategoryHeaderTapWithMetrics:] */

void FUN_107aee998(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6640;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x00010be51620(param_1,param_2,puVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107aeea00; end: 107aeeadf; -[SCCommerceSession logProductTileTapWithMetrics:productId:tileRow:tileColumn:] */

void FUN_107aeea00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d65e0;
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x00010c2149c0();
    func_0x00010c2147e0(puVar1,param_2,param_6);
    func_0x00010c2149a0(puVar1,param_2,param_4);
    _objc_release(param_4);
    func_0x00010be51620(param_1,param_2,puVar1,param_3);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010baf0c7c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acd20(uVar3,param_2,param_5,param_6,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107aeeae0; end: 107aeeb8b; -[SCCommerceSession logHeroImageTapWithMetrics:imageId:tileRow:tileColumn:] */

void FUN_107aeeae0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6648;
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x00010c1a7e80();
    _objc_release(param_4);
    func_0x00010c2149c0(puVar1,param_2,param_5);
    func_0x00010c2147e0(puVar1,param_2,param_6);
    func_0x00010be51620(param_1,param_2,puVar1,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107aeeb8c; end: 107aeebdb; -[SCCommerceSession logValidationFailure:] */

void FUN_107aeeb8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6650;
  _objc_alloc_init(PTR_PTR_1126d6650);
  func_0x00010c2200a0();
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aeebdc; end: 107aeec67; -[SCCommerceSession logUnlockMappingWithUnlockableId:unlockableType:currentPage:] */

void FUN_107aeebdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6658;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c21bbe0();
  _objc_release(param_3);
  func_0x00010c21bd00(puVar1,param_2,param_4);
  func_0x00010c187720(puVar1,param_2,param_5);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aeec68; end: 107aeecef; -[SCCommerceSession logOpenFromLink:] */

void FUN_107aeec68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d6660;
  _objc_alloc_init(PTR_PTR_1126d6660);
  func_0x00010c2121a0();
  uVar1 = 0x11;
  if (param_3 != 1) {
    uVar1 = 0x18;
  }
  uVar2 = 9;
  if (param_3 != 1) {
    uVar2 = 5;
  }
  func_0x00010c187720(puVar3,param_2,uVar1);
  func_0x00010c161fe0(puVar3,param_2,uVar2);
  func_0x00010be51c80(param_1,param_2,puVar3,0xffffffffffffffff,0x11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107aeecf0; end: 107aeedfb; -[SCCommerceSession logDiscountEventWithDiscountCode:discountAmount:currency:actionType:success:errorCode:] */

void FUN_107aeecf0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d6668;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c18ee80();
  _objc_release(param_4);
  lVar2 = param_2;
  func_0x00010bdf6680(param_2,param_3,param_6);
  _objc_release(param_6);
  func_0x00010c186ee0(puVar1,param_3,lVar2);
  func_0x00010bf885a0(param_5);
  _objc_release(param_5);
  func_0x00010c18ee60(param_1,puVar1);
  func_0x00010c17c220(puVar1,param_3,*(undefined8 *)(param_2 + 0x80));
  func_0x00010be507a0(param_2,param_3,puVar1,param_7,param_8,param_9);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aeedfc; end: 107aeeeb3; -[SCCommerceSession logCreditCardEventWithPaymentMethodId:cardtype:actionType:success:errorCode:] */

void FUN_107aeedfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6670;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d9ca0();
  _objc_release(param_3);
  func_0x00010c1797e0(puVar1,param_2,param_4);
  func_0x00010c17c220(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010be507a0(param_1,param_2,puVar1,param_5,param_6,param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aeeeb4; end: 107aeef53; -[SCCommerceSession logShippingAddressEventWithShippingAddressId:actionType:success:errorCode:] */

void FUN_107aeeeb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6678;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1ff6a0();
  _objc_release(param_3);
  func_0x00010c17c220(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010be507a0(param_1,param_2,puVar1,param_4,param_5,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aeef54; end: 107aeefc7; -[SCCommerceSession logContactDetailsEventWithSuccess:errorCode:] */

void FUN_107aeef54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6680;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c17c220();
  func_0x00010be507a0(param_1,param_2,puVar1,1,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aeefc8; end: 107aef16b; -[SCCommerceSession logCheckoutObjectUpdateWithCheckoutId:currency:tax:total:subtotal:hasValidPaymentMethod:setHasValidShippingAddress:hasValidContactInfo:shippingAmount:shippingMethodId:discountAmount:actionType:success:errorCode:] */

void FUN_107aeefc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d6688;
  if (*(long *)(param_6 + 0x48) != 0) {
    _objc_retain(param_17);
    _objc_retain(param_13);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_alloc_init(puVar1);
    func_0x00010c17c220();
    _objc_release(param_8);
    lVar2 = param_6;
    func_0x00010bdf6680(param_6,param_7,param_9);
    _objc_release(param_9);
    func_0x00010c186ee0(puVar1,param_7,lVar2);
    func_0x00010c212960(param_1,puVar1);
    func_0x00010c217e60(param_2,puVar1);
    func_0x00010c20ef00(param_3,puVar1);
    func_0x00010c1a72e0(puVar1,param_7,param_10);
    func_0x00010c1a7300(puVar1,param_7,param_11);
    func_0x00010c1a72c0(puVar1,param_7,param_12);
    func_0x00010c1ff6c0(param_4,puVar1);
    func_0x00010c1ff700(puVar1,param_7,param_13);
    _objc_release(param_13);
    func_0x00010c18ee40(param_5,puVar1);
    func_0x00010be507a0(param_6,param_7,puVar1,param_14,param_15,param_17);
    _objc_release(param_17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107aef16c; end: 107aef25b; -[SCCommerceSession logShippingMethodEventWithShippingId:optionPriceAmount:optionCurrency:actionType:success:errorCode:] */

void FUN_107aef16c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d6690;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1ff6c0(param_1);
  func_0x00010c1ff700(puVar1,param_3,param_4);
  _objc_release(param_4);
  lVar2 = param_2;
  func_0x00010bdf6680(param_2,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c186ee0(puVar1,param_3,lVar2);
  func_0x00010c17c220(puVar1,param_3,*(undefined8 *)(param_2 + 0x80));
  func_0x00010be507a0(param_2,param_3,puVar1,param_6,param_7,param_8);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aef25c; end: 107aef3ff; -[SCCommerceSession logOperationalMetricForUserAction:endpoint:statusCode:duration:requestPayloadSize:responsePayloadSize:errorCode:jsonMetadata:] */

void FUN_107aef25c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_2;
  func_0x00010bde2340(param_2,param_3,param_5);
  lVar2 = param_2;
  func_0x00010be952e0(param_2,param_3,param_4);
  if ((lVar1 != -1) && (lVar2 != -1)) {
    lVar1 = param_9;
    func_0x00010c08fa60();
    lVar3 = param_2;
    func_0x00010bfcdf40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7a60((double)(long)(param_1 * -1000.0));
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126d6698;
    _objc_alloc_init(PTR_PTR_1126d6698);
    func_0x00010c196300();
    func_0x00010c161620(puVar4,param_3,lVar2);
    func_0x00010c20a3c0(puVar4,param_3,param_6);
    func_0x00010c1b91e0(puVar4,param_3,(long)(param_1 * -1000.0));
    func_0x00010c1ebfc0(puVar4,param_3,lVar1 == 0);
    func_0x00010c17f120(puVar4,param_3,param_9);
    func_0x00010c1b6980(puVar4,param_3,param_10);
    func_0x00010be75b40(param_2,param_3,puVar4);
    func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0xf0),param_3,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 107aef400; end: 107aef4fb; +[SCCommerceSession logAffiliateWebAttachmentWithEditionId:publisherId:mediaPlaybackSessionId:isTopSnap:blizzardUserLogger:] */

void FUN_107aef400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d66a0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar2);
  func_0x00010c206ea0();
  _objc_release(param_3);
  func_0x00010c185c40(puVar2,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c17f340(puVar2,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c17f240(puVar2,param_2,0xb);
  func_0x00010c17f280(puVar2,param_2,3);
  func_0x00010c17f2a0(puVar2,param_2,0x1b);
  uVar1 = 0x13;
  if (param_6 == 0) {
    uVar1 = 0x18;
  }
  func_0x00010c187720(puVar2,param_2,uVar1);
  func_0x00010c0b2e60(param_7,param_2,puVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107aef4fc; end: 107aef54b; -[SCCommerceSession logScreenshopSettingsUpdateWithOption:] */

void FUN_107aef4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d66a8;
  _objc_alloc_init(PTR_PTR_1126d66a8);
  func_0x00010c1c61c0();
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107aef54c; end: 107aef8a3; -[SCCommerceSession getCommerceSession] */

void FUN_107aef54c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d66b0;
  _objc_opt_new(PTR_PTR_1126d66b0);
  if (*(long *)(param_1 + 0x90) != 0) {
    puVar2 = PTR_PTR_1126d66b8;
    _objc_opt_new(PTR_PTR_1126d66b8);
    lVar3 = param_1;
    func_0x00010bf4eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4f080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fdf60(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf4eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4f120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205c40(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf4eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4f160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205c60(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf4eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4ea20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5700(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c1835c0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  lVar3 = param_1;
  func_0x00010c0ed2a0(param_1);
  func_0x00010baf0c7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f420(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf42660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f480(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c116320(param_1);
  func_0x00010baf1b3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f460(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c115e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3e40(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c247b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2072e0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c247800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2072c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c257800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c320(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c247520(param_1);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207300(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c278ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219480(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c2751c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217740(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c156360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9760(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c156040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9740(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107aef8a4; end: 107aefaab; -[SCCommerceSession updateCommerceSessionWithCommerceSession:] */

void FUN_107aef8a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1163c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c115e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3bc0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1e3bc0(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c257ec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c257800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c240(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c20c240(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2751c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c2751c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217740(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c217740(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c156a80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c156040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93a0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1f93a0(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c156aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c156360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9520(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c1f9520(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  func_0x00010bfc3dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107aefaac; end: 107aefab3; -[SCCommerceSession shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_107aefaac(void)

{
  return 0;
}



/* Entry: 107aefab4; end: 107aefabf; -[SCCommerceSession pushToValdiMarshaller:] */

undefined8 FUN_107aefab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126defb8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 107aefac0; end: 107aefb97; -[SCCommerceSession _logCategoryBaseEvent:categoryMetrics:] */

void FUN_107aefac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_4;
    func_0x00010bf33480(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a100(param_3,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bf33600(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a240(param_3,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bf334c0(param_4);
    func_0x00010c17a1e0(param_3,param_2,lVar1);
    lVar1 = param_4;
    func_0x00010c2761a0(param_4);
    _objc_release(param_4);
    func_0x00010c2180a0(param_3,param_2,lVar1);
    func_0x00010be507c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107aefb98; end: 107aefbdb; -[SCCommerceSession _logBaseEvent:] */

void FUN_107aefb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be75b40(param_1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0xf0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aefbdc; end: 107aefc47; -[SCCommerceSession _logBaseEvent:productId:] */

void FUN_107aefbdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be75b40(param_1,param_2,param_3);
  func_0x00010c1e3bc0(param_3,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0xf0),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aefc48; end: 107aefcdf; -[SCCommerceSession _logCommerceActionBaseEvent:currentCard:currentPage:] */

void FUN_107aefc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  _objc_retain(param_3);
  func_0x00010c187720(param_3,param_2,param_5);
  if (param_4 == -1) {
    func_0x00010baf125c(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010ba16cbc(param_4);
    _objc_retainAutoreleasedReturnValue();
    param_5 = param_4;
  }
  func_0x00010c181a20(param_3,param_2,param_5);
  _objc_release(param_5);
  func_0x00010be507c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aefce0; end: 107aefd97; -[SCCommerceSession _logCommerceActionBaseEvent:currentCard:currentPage:productId:] */

void FUN_107aefce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c187720(param_3,param_2,param_5);
  if (param_4 == -1) {
    func_0x00010baf125c(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010ba16cbc(param_4);
    _objc_retainAutoreleasedReturnValue();
    param_5 = param_4;
  }
  func_0x00010c181a20(param_3,param_2,param_5);
  _objc_release(param_5);
  func_0x00010be507e0(param_1,param_2,param_3,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107aefd98; end: 107af000f; -[SCCommerceSession _populateBasePropertiesForEvent:] */

void FUN_107aefd98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c17f340(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c206c40(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  lVar1 = param_1;
  func_0x00010c247800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ea0(param_3,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c17f2a0(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c17f240(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1;
  func_0x00010bf85820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fb80(param_3,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be6f7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8220(param_3,param_2,lVar1);
  _objc_release(lVar1);
  func_0x00010c16b360(param_3,param_2,*(undefined8 *)(param_1 + 0x88));
  func_0x00010c1aff20(param_3,param_2,*(undefined1 *)(param_1 + 9));
  lVar1 = param_1;
  func_0x00010c247b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c247b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207140(param_3,param_2,lVar1);
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x60) != -1) {
    func_0x00010c1e3ca0(param_3);
    if (*(long *)(param_1 + 0x60) == 1) {
      func_0x00010be75b60(param_1,param_2,param_3);
    }
  }
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c219300(param_3,param_2,*(undefined8 *)(param_1 + 0x58));
  }
  lVar1 = param_1;
  func_0x00010c2751c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c2751c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217740(param_3,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c156360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c156360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9520(param_3,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c156040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c156040(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b4ca0();
    func_0x00010c1f93a0(param_3,param_2,lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c115c80();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c115c80(param_1);
    func_0x00010c17f280(param_3,param_2,lVar1);
  }
  func_0x00010be75ec0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af0010; end: 107af032f; -[SCCommerceSession _populateOptionalPropertiesForEvent:] */

void FUN_107af0010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd0) == 0) {
    func_0x00010c1e3bc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
    func_0x00010c20c240(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
    lVar1 = param_1;
    func_0x00010bf4eb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf4eb60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4f080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1833c0(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf4eb60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4f160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183420(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf4eb60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4ea20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183180(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf4eb60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4f120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183400(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010bef3800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bef3800(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163720(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bef3800(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bef4200();
      func_0x00010c163f80(param_3,param_2,lVar2);
      _objc_release(lVar1);
      func_0x00010c1b48e0(param_3,param_2,1);
      func_0x00010c17f280(param_3,param_2,0);
    }
    lVar1 = param_1;
    func_0x00010c2437e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c2437e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c14f740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f65c0(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c2437e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c14f720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f65a0(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c2437e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c14f740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206ea0(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    if (*(long *)(param_1 + 0x20) == 0x31) {
      func_0x00010c17f280(param_3,param_2,5);
      func_0x00010c17f2a0(param_3,param_2,0x14);
    }
  }
  else {
    func_0x00010be76040(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af0330; end: 107af05f3; -[SCCommerceSession _populateSessionConfigurationPropertiesForEvent:] */

void FUN_107af0330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_107af05e0;
  func_0x00010c247960();
  FUN_107af1314();
  func_0x00010c17f240(param_3);
  lVar1 = param_1;
  func_0x00010c115c80();
  if (lVar1 == -1) {
    func_0x00010c247960(*(undefined8 *)(param_1 + 0xd0));
    func_0x000107af13b0();
    func_0x00010c17f280(param_3);
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  if (lVar1 == 0) {
    func_0x00010c247960(uVar3);
    func_0x000107af144c();
LAB_107af045c:
    func_0x00010c17f2a0(param_3);
  }
  else {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20db00(param_3);
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0xd0);
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar1 != 0) goto LAB_107af045c;
    lVar2 = *(long *)(param_1 + 0xd0);
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar1 != 0) goto LAB_107af045c;
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  func_0x00010c247800();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c247800(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206ea0(param_3);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  func_0x00010c247b60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c247b60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207140(param_3);
    _objc_release(uVar3);
  }
  func_0x00010c07f200(*(undefined8 *)(param_1 + 0xd0));
  func_0x00010c1b48e0(param_3);
  lVar2 = *(long *)(param_1 + 0xd0);
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010bf5b440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(param_3);
    _objc_release(uVar3);
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c115e60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3bc0(param_3);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c1e3bc0(param_3);
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c257800(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c240(param_3);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c20c240(param_3);
  }
LAB_107af05e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af05f4; end: 107af064f; -[SCCommerceSession _populateBitmojiPropertiesForEvent:] */

void FUN_107af05f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c1e2960(param_3,param_2,uVar1);
  func_0x00010c1f8ee0(param_3,param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c17ece0(param_3,param_2,*(undefined8 *)(param_1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af0650; end: 107af076b; -[SCCommerceSession _appendToJsonMetadataOnEvent:key:value:] */

void FUN_107af0650(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), param_5 != 0)) && (lVar1 != 0)) {
    func_0x00010be61960(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    lStack_48 = 0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,1,&lStack_48
                       );
    _objc_retainAutoreleasedReturnValue();
    if ((puVar2 != (undefined *)0x0) && (lStack_48 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      func_0x00010c1b6980(param_3,param_2,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107af076c; end: 107af08bf; -[SCCommerceSession _mutableJsonMetadataDictionaryForEvent:] */

void FUN_107af076c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf64920(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(puVar3);
    _objc_opt_class(puVar5);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar5);
    _objc_release(puVar3);
    if ((((ulong)puVar4 & 1) == 0) || (puVar3 == (undefined *)0x0)) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107af08c0; end: 107af0947; -[SCCommerceSession _logBaseAPIEvent:actionType:success:errorCode:] */

void FUN_107af08c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c161fe0(param_3,param_2,param_4);
  func_0x00010c20f8a0(param_3,param_2,param_5);
  func_0x00010c17f120(param_3,param_2,param_6);
  _objc_release(param_6);
  func_0x00010be507c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af0948; end: 107af0997; -[SCCommerceSession _logCommercePageBaseEvent:currentPage:] */

void FUN_107af0948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010c187720(param_3,param_2,param_4);
  func_0x00010be507c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af0998; end: 107af09db; -[SCCommerceSession _pageSessionId] */

void FUN_107af0998(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f12e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107af09dc; end: 107af09ff; -[SCCommerceSession _commerceEndpointForODPEndpoint:] */

undefined8 FUN_107af09dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 8) {
    return *(undefined8 *)(&UNK_10dee1070 + (param_3 - 2U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107af0a00; end: 107af0a23; -[SCCommerceSession _restActionForUserAction:] */

undefined8 FUN_107af0a00(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10dee10b0 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 107af0a24; end: 107af0a4b; -[SCCommerceSession _currencyTypeForCurrencyString:] */

long FUN_107af0a24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eac758);
  return (param_3 & 0xffffffff) - 1;
}



/* Entry: 107af0a4c; end: 107af0acb; -[SCCommerceSession _msSpentOnLastPage] */

void FUN_107af0a4c(double param_1,long param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_2 + 0xf8) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar1);
    func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107af0acc; end: 107af0b43; -[SCCommerceSession _preparePageCloseEventWithDestination:] */

void FUN_107af0acc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d66a0;
  _objc_alloc_init(PTR_PTR_1126d66a0);
  func_0x00010c18c340();
  func_0x00010be615c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c0b4ca0(param_1);
    func_0x00010c2150c0(puVar1,param_2,lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107af0b44; end: 107af0ba3; -[SCCommerceSession _logScanEventWithScanSource:currentPage:] */

void FUN_107af0b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d66c0;
  _objc_alloc_init(PTR_PTR_1126d66c0);
  func_0x00010c1f6500();
  func_0x00010c187720(puVar1,param_2,param_4);
  func_0x00010be507c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107af0ba4; end: 107af0d5f; +[SCCommerceSession _populateCommonFieldsWithImpressionData:event:commerceSessionId:] */

void FUN_107af0ba4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d66c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  lVar2 = param_3;
  func_0x00010c115e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c084640(param_3);
  func_0x00010c1b61a0(puVar1,param_2,lVar2);
  puVar3 = PTR_PTR_1126c8408;
  _objc_alloc_init(PTR_PTR_1126c8408);
  func_0x00010c1d8620();
  _objc_release(param_5);
  lVar2 = param_3;
  func_0x00010c247980(param_3);
  func_0x00010baf125c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8820(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d66d0;
  _objc_alloc_init(PTR_PTR_1126d66d0);
  lVar2 = param_3;
  func_0x00010c1563e0(param_3);
  func_0x00010c1f95a0(puVar4,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c156360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar5 != 0) {
    lVar2 = param_3;
    func_0x00010c156360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9660(puVar4,param_2,lVar2);
    _objc_release(lVar2);
  }
  func_0x00010c1d8360(param_4,param_2,puVar1);
  func_0x00010c1d8300(param_4,param_2,puVar3);
  func_0x00010c26fba0(param_3);
  func_0x00010c1ab480(param_4);
  func_0x00010c1d85e0(param_4,param_2,puVar4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af0d60; end: 107af0d67; -[SCCommerceSession displayId] */

undefined8 FUN_107af0d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107af0d68; end: 107af0d6f; -[SCCommerceSession commerceSessionId] */

undefined8 FUN_107af0d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107af0d70; end: 107af0d77; -[SCCommerceSession originType] */

undefined8 FUN_107af0d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107af0d78; end: 107af0d7f; -[SCCommerceSession source] */

undefined8 FUN_107af0d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107af0d80; end: 107af0d87; -[SCCommerceSession productType] */

undefined8 FUN_107af0d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107af0d88; end: 107af0d8f; -[SCCommerceSession setProductType:] */

void FUN_107af0d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107af0d90; end: 107af0d97; -[SCCommerceSession productArea] */

undefined8 FUN_107af0d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107af0d98; end: 107af0d9f; -[SCCommerceSession setProductArea:] */

void FUN_107af0d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107af0da0; end: 107af0da7; -[SCCommerceSession productId] */

undefined8 FUN_107af0da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107af0da8; end: 107af0dd7; -[SCCommerceSession setProductId:] */

void FUN_107af0da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af0dd8; end: 107af0ddf; -[SCCommerceSession storeId] */

undefined8 FUN_107af0dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107af0de0; end: 107af0e0f; -[SCCommerceSession setStoreId:] */

void FUN_107af0de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af0e10; end: 107af0e17; -[SCCommerceSession productSetId] */

undefined8 FUN_107af0e10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107af0e18; end: 107af0e47; -[SCCommerceSession setProductSetId:] */

void FUN_107af0e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af0e48; end: 107af0e4f; -[SCCommerceSession trackingId] */

undefined8 FUN_107af0e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107af0e50; end: 107af0e7f; -[SCCommerceSession setTrackingId:] */

void FUN_107af0e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af0e80; end: 107af0e87; -[SCCommerceSession productItemType] */

undefined8 FUN_107af0e80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107af0e88; end: 107af0e8f; -[SCCommerceSession setProductItemType:] */

void FUN_107af0e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107af0e90; end: 107af0e97; -[SCCommerceSession primaryAvatarType] */

undefined8 FUN_107af0e90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107af0e98; end: 107af0e9f; -[SCCommerceSession setPrimaryAvatarType:] */

void FUN_107af0e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 107af0ea0; end: 107af0ea7; -[SCCommerceSession secondaryAvatarType] */

undefined8 FUN_107af0ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107af0ea8; end: 107af0eaf; -[SCCommerceSession setSecondaryAvatarType:] */

void FUN_107af0ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 107af0eb0; end: 107af0eb7; -[SCCommerceSession comicId] */

undefined8 FUN_107af0eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



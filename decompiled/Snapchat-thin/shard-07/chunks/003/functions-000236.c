/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054384e8; end: 1054384fb;  */

undefined8 FUN_1054384e8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 1054384fc; end: 105438523;  */

void FUN_1054384fc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105438524; end: 1054385cb;  */

void FUN_105438524(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b90f0;
    _objc_alloc(PTR_PTR_1126b90f0);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054385cc; end: 1054386e7; -[SCAdTrackEventRepositoryImpl adLeadGenerationEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_1054385cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b90f8);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889c20,
                      &PTR___NSConcreteGlobalBlock_110889c60);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105438724;
  puStack_40 = &UNK_110889c80;
  uStack_38 = uVar2;
  _objc_retain();
  uVar3 = uVar1;
  func_0x000100504554(uVar1,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1054386e8; end: 1054386fb;  */

undefined8 FUN_1054386e8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 1054386fc; end: 105438723;  */

void FUN_1054386fc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105438724; end: 1054387cb;  */

void FUN_105438724(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b9100;
    _objc_alloc(PTR_PTR_1126b9100);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054387cc; end: 1054388df; -[SCAdTrackEventRepositoryImpl captionCtaImpressionEventsForAdIdentifier:viewSeqNum:] */

void FUN_1054387cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5940(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b9108);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889cd0,
                      &PTR___NSConcreteGlobalBlock_110889d10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10543891c;
  puStack_40 = &UNK_110889d30;
  uStack_38 = uVar2;
  _objc_retain();
  uVar3 = uVar1;
  func_0x000100504554(uVar1,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1054388e0; end: 1054388f3;  */

undefined8 FUN_1054388e0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 1054388f4; end: 10543891b;  */

void FUN_1054388f4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10543891c; end: 1054389c3;  */

void FUN_10543891c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b9110;
    _objc_alloc(PTR_PTR_1126b9110);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054389c4; end: 105438bab; -[SCAdTrackEventRepositoryImpl _onAdLifecycleEvent:] */

void FUN_1054389c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_105438b64;
    lVar5 = param_3;
    func_0x00010c2772e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be3cba0();
    _objc_release(lVar5);
    if ((int)lVar3 == 0) goto LAB_105438b64;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105438bac;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_105438b64:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105438bac; end: 105438cd7;  */

undefined * FUN_105438bac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    bVar8 = 0;
    bVar7 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uVar6 = 0;
    bVar9 = 0;
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    uStack_70 = *(undefined8 *)(lVar1 + 0x18);
    uStack_68 = *(undefined8 *)(lVar1 + 0x20);
    bVar7 = *(byte *)(lVar1 + 8);
    bVar9 = *(byte *)(lVar1 + 9);
    bVar8 = *(byte *)(lVar1 + 10);
    bVar4 = *(byte *)(lVar1 + 0xb);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
  }
  _objc_retain(uVar5);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  _objc_retain(uVar3);
  FUN_105445804(param_2,uVar2,uStack_70,uStack_68,uVar6,bVar7 & 1,bVar9 & 1,bVar8 & 1,bVar4 & 1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105438cd8; end: 105438e8b; -[SCAdTrackEventRepositoryImpl _onAdDeeplinkEvent:] */

void FUN_105438cd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_105438e44;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105438e8c;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_105438e44:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105438e8c; end: 105438f4b;  */

undefined * FUN_105438e8c(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
  }
  _objc_retain(uVar4);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
  }
  _objc_retain(uVar5);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    bVar1 = 0;
    bVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar3 + 8);
    bVar2 = *(byte *)(lVar3 + 9);
  }
  FUN_105445db4(param_2,uVar4,uVar6,uVar5,bVar1 & 1,bVar2 & 1);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105438f4c; end: 1054390ff; -[SCAdTrackEventRepositoryImpl _onAdAppInstallEvent:] */

void FUN_105438f4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_1054390b8;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105439100;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_1054390b8:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105439100; end: 1054391bf;  */

undefined * FUN_105439100(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
  }
  _objc_retain(uVar4);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
  }
  _objc_retain(uVar5);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    bVar1 = 0;
    bVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar3 + 8);
    bVar2 = *(byte *)(lVar3 + 9);
  }
  FUN_105445f68(param_2,uVar4,uVar6,uVar5,bVar1 & 1,bVar2 & 1);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 1054391c0; end: 105439367; -[SCAdTrackEventRepositoryImpl _onAdSKOverlayEvent:] */

void FUN_1054391c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_105439328;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
    }
  }
  _objc_release(lVar5);
LAB_105439328:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105439368; end: 105439443;  */

undefined * FUN_105439368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar5);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  FUN_105447ff0(uVar6,param_2,uVar2,uVar4,uVar3,uVar5);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105439444; end: 1054395f7; -[SCAdTrackEventRepositoryImpl _onAdAdToMessageEvent:] */

void FUN_105439444(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_1054395b0;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1054395f8;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_1054395b0:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054395f8; end: 105439673;  */

undefined * FUN_1054395f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  FUN_10544611c(param_2,uVar3,uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105439674; end: 105439827; -[SCAdTrackEventRepositoryImpl _onAdReportEvent:] */

void FUN_105439674(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_1054397e0;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105439828;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 200));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_1054397e0:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105439828; end: 10543998b;  */

undefined * FUN_105439828(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  _objc_retain(uVar3);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    bVar9 = 0;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    bVar9 = *(byte *)(lVar2 + 8);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
  }
  _objc_retain(uVar4);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain(uVar6);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  _objc_retain(uVar7);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  _objc_retain(uVar8);
  if (*(long *)(param_1 + 0x20) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 9);
  }
  FUN_105446260(param_2,uVar3,uVar5,bVar9 & 1,uVar4,uVar6,uVar7,uVar8,bVar1 & 1);
  _objc_release(param_2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543998c; end: 105439b3f; -[SCAdTrackEventRepositoryImpl _onAdPlayableEvent:] */

void FUN_10543998c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_105439af8;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xa8));
    }
  }
  _objc_release(lVar5);
LAB_105439af8:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105439b40; end: 105439c07;  */

undefined * FUN_105439b40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar4);
  FUN_105447c38(param_2,uVar2,uVar5,uVar3,uVar4);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105439c08; end: 105439daf; -[SCAdTrackEventRepositoryImpl _onTooltipImpressionEvent:] */

void FUN_105439c08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_105439d70;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
    }
  }
  _objc_release(lVar5);
LAB_105439d70:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105439db0; end: 105439eef;  */

undefined * FUN_105439db0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  _objc_retain(uVar7);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  _objc_retain(uVar8);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  _objc_retain(uVar4);
  FUN_1054481b8(uVar9,param_2,uVar2,uVar6,uVar5,uVar3,uVar7,uVar8,uVar4);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105439ef0; end: 10543a0eb; -[SCAdTrackEventRepositoryImpl _onAdReminderEvent:] */

void FUN_105439ef0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_10543a0a4;
    lVar5 = param_3;
    func_0x00010c2772e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      lVar5 = param_3;
      func_0x00010c2772e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3cba0(param_1);
      _objc_release(lVar5);
    }
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543a0ec;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543a0a4:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543a0ec; end: 10543a167;  */

undefined * FUN_10543a0ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  FUN_10544683c(param_2,uVar3,uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543a168; end: 10543a30f; -[SCAdTrackEventRepositoryImpl _onAdEndCardEvent:] */

void FUN_10543a168(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_10543a2d0;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
    }
  }
  _objc_release(lVar5);
LAB_10543a2d0:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543a310; end: 10543a407;  */

undefined * FUN_10543a310(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain(uVar3);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    uVar9 = *(undefined8 *)(lVar2 + 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar10 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
  }
  _objc_retain(uVar8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  }
  FUN_105447de4(param_2,uVar3,uVar5,uVar4,uVar9,uVar6,uVar10,uVar7,uVar8,uVar1);
  _objc_release(param_2);
  _objc_release(uVar8);
  _objc_release(uVar3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543a408; end: 10543a5af; -[SCAdTrackEventRepositoryImpl _onAdLiveReviewEvent:] */

void FUN_10543a408(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_10543a570;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
    }
  }
  _objc_release(lVar5);
LAB_10543a570:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543a5b0; end: 10543a677;  */

undefined * FUN_10543a5b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar4);
  FUN_105448ba8(param_2,uVar2,uVar5,uVar3,uVar4);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543a678; end: 10543a82b; -[SCAdTrackEventRepositoryImpl _onAdLeadGenerationEvent:] */

void FUN_10543a678(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_10543a7e4;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80));
    }
  }
  _objc_release(lVar5);
LAB_10543a7e4:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543a82c; end: 10543a8f3;  */

undefined * FUN_10543a82c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar4);
  FUN_1054489fc(param_2,uVar2,uVar5,uVar3,uVar4);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543a8f4; end: 10543aaa7; -[SCAdTrackEventRepositoryImpl _onAdStickersEvent:] */

void FUN_10543a8f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_10543aa60;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543aaa8;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x98));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543aa60:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543aaa8; end: 10543ab57;  */

undefined * FUN_10543aaa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 8);
  }
  _objc_retain(uVar4);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uVar1 = 0;
    uVar2 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar7 = *(undefined8 *)(lVar3 + 0x30);
    uVar8 = *(undefined8 *)(lVar3 + 0x38);
    uVar9 = *(undefined8 *)(lVar3 + 0x40);
    uVar10 = *(undefined8 *)(lVar3 + 0x48);
    uVar11 = *(undefined8 *)(lVar3 + 0x50);
    uVar12 = *(undefined8 *)(lVar3 + 0x58);
  }
  FUN_105446618(uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,param_2,uVar4,uVar1,uVar2);
  _objc_release(param_2);
  _objc_release(uVar4);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543ab58; end: 10543ad0b; -[SCAdTrackEventRepositoryImpl _onAdSubscribeEvent:] */

void FUN_10543ab58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_10543acc4;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543ad0c;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xa0));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543acc4:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543ad0c; end: 10543ad87;  */

undefined * FUN_10543ad0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  FUN_1054464d4(param_2,uVar3,uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543ad88; end: 10543b093; -[SCAdTrackEventRepositoryImpl _onWebviewUserEvent:] */

void FUN_10543ad88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar10);
    if (lVar2 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar11);
    uVar4 = uVar10;
    func_0x00010c0720c0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    if (((int)uVar4 == 0) || (lVar9 = param_1, func_0x00010be3cb80(), (int)lVar9 == 0))
    goto LAB_10543afb0;
    lVar9 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10543b094;
    puStack_70 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar9;
    lStack_68 = lVar2;
    func_0x00010b5edefc(lVar9,0,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = param_1;
    func_0x00010be30c20();
    if ((int)lVar9 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68));
      puVar5 = PTR_PTR_1126b9118;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x10) - 4U < 4) {
          puVar6 = PTR_PTR_1126b9118;
          func_0x00010c2a49c0(PTR_PTR_1126b9118);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar5;
          func_0x00010c2804a0();
          _objc_retainAutoreleasedReturnValue();
LAB_10543af44:
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar7 = puVar8;
        }
        else if (*(long *)(lVar2 + 0x10) == 3) {
          puVar6 = PTR_PTR_1126b9118;
          func_0x00010c2a49c0(PTR_PTR_1126b9118);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2804a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar6);
          if ((*(long *)(lVar2 + 0x18) == 0x17) && (*(long *)(lVar2 + 0x20) - 1U < 2)) {
            puVar6 = PTR_PTR_1126b9118;
            func_0x00010bef5bc0(PTR_PTR_1126b9118);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c2804a0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10543af44;
          }
        }
      }
      puVar5 = puVar7;
      func_0x00010c071780();
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = PTR_PTR_1126b9120;
        _objc_alloc(PTR_PTR_1126b9120);
        func_0x00010c0000c0();
        func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
        _objc_release(puVar5);
      }
      _objc_release(puVar7);
    }
    _objc_release(lVar3);
    lVar9 = lStack_68;
  }
  _objc_release(lVar9);
LAB_10543afb0:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543b094; end: 10543b1c7;  */

undefined * FUN_10543b094(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar4 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    uVar5 = *(undefined8 *)(lVar1 + 0x18);
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x28);
    uVar11 = *(undefined8 *)(lVar1 + 0x30);
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    uVar12 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = *(undefined8 *)(lVar1 + 0x48);
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
  }
  _objc_retain(uVar4);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  }
  _objc_retain(uVar3);
  FUN_105446980(uVar10,uVar11,uVar9,uVar12,uVar8,param_2,uVar2,uVar6,uVar5,uVar7,uVar4,uVar3);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543b1c8; end: 10543b36f; -[SCAdTrackEventRepositoryImpl _onWebviewLoadingEvent:] */

void FUN_10543b1c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (uVar6 = param_1, func_0x00010be3cb80(), (int)uVar6 == 0))
    goto LAB_10543b330;
    uVar6 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543b370;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    uVar7 = uVar6;
    lStack_58 = lVar2;
    func_0x00010b5edefc(uVar6,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010be30c20(param_1);
    _objc_release(uVar7);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543b330:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543b370; end: 10543b5d7;  */

undefined * FUN_10543b370(long param_1,undefined8 param_2)

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
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_88;
  
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar12 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar12 + 8);
  }
  _objc_retain();
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 == 0) {
    uStack_88 = 0;
    uVar11 = 0;
  }
  else {
    uStack_88 = *(undefined8 *)(lVar12 + 0x10);
    uVar11 = *(undefined8 *)(lVar12 + 0x18);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  }
  _objc_retain(uVar13);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  }
  _objc_retain(uVar14);
  FUN_105446be4(param_2,uVar1,uStack_88,uVar11,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
                uVar10,uVar13,uVar14);
  _objc_release(param_2);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543b5d8; end: 10543b78f; -[SCAdTrackEventRepositoryImpl _onWebviewNavigationEvent:] */

void FUN_10543b5d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_10543b748;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543b790;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010be30c20();
    if ((int)lVar5 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
    }
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543b748:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543b790; end: 10543b913;  */

undefined * FUN_10543b790(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar5);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain(uVar7);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 0x30);
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
  }
  _objc_retain(uVar8);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  _objc_retain(uVar10);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  }
  _objc_retain(uVar4);
  FUN_105446f78(param_2,uVar2,uVar6,uVar3,uVar5,uVar7,uVar9,uVar8,uVar10,uVar4);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543b914; end: 10543babb; -[SCAdTrackEventRepositoryImpl _onWebviewGaEvent:] */

void FUN_10543b914(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (uVar6 = param_1, func_0x00010be3cb80(), (int)uVar6 == 0))
    goto LAB_10543ba7c;
    uVar6 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543babc;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    uVar7 = uVar6;
    lStack_58 = lVar2;
    func_0x00010b5edefc(uVar6,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    func_0x00010be30c20(param_1);
    _objc_release(uVar7);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543ba7c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543babc; end: 10543bbc3;  */

undefined * FUN_10543babc(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
  }
  _objc_retain(uVar4);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain(uVar5);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar6);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain(uVar7);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    bVar1 = 0;
    bVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar3 + 8);
    bVar2 = *(byte *)(lVar3 + 9);
  }
  FUN_1054471fc(param_2,uVar4,uVar5,uVar6,uVar7,bVar1 & 1,bVar2 & 1);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543bbc4; end: 10543be3b; -[SCAdTrackEventRepositoryImpl _onInstantPageEvent:] */

void FUN_10543bbc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_10543bdfc;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac180();
  _objc_release(uVar2);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar7);
  lVar4 = lVar7;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
LAB_10543bde4:
    _objc_release(lVar7);
  }
  else {
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar2);
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 8);
    }
    _objc_retain(uVar8);
    uVar5 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(lVar7);
    if (((int)uVar5 != 0) && (lVar7 = param_1, func_0x00010be3cb80(), (int)lVar7 != 0)) {
      lVar7 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10543be3c;
      puStack_60 = &UNK_110889d60;
      _objc_retain(lVar3);
      lVar4 = lVar7;
      lStack_58 = lVar3;
      func_0x00010b5edefc(lVar7,0,&puStack_78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      func_0x00010be30c20(param_1);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xb0));
      lVar7 = param_3;
      func_0x00010bf9a520();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        _objc_release();
LAB_10543bdd0:
        _objc_release(lVar7);
      }
      else {
        uVar9 = *(ulong *)(lVar6 + 0x10);
        _objc_release();
        _objc_release(lVar7);
        if ((uVar9 & 0xfffffffffffffffd) == 1) {
          lVar7 = *(long *)(param_1 + 0x40);
          func_0x00010c269d40(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a8b80();
          goto LAB_10543bdd0;
        }
      }
      _objc_release(lVar4);
      lVar7 = lStack_58;
      goto LAB_10543bde4;
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
LAB_10543bdfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543be3c; end: 10543c01f;  */

undefined * FUN_10543be3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uVar4 = 0;
  }
  else {
    uStack_88 = *(undefined8 *)(lVar2 + 0x10);
    uStack_80 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
  }
  _objc_retain(uVar4);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain(uVar5);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uStack_90 = 0;
    uVar9 = 0;
  }
  else {
    uStack_90 = *(undefined8 *)(lVar2 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x38);
  }
  _objc_retain(uVar9);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar12 = 0;
  if (lVar2 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uVar3 = 0;
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    uStack_98 = *(undefined8 *)(lVar2 + 0x40);
    uStack_a0 = *(undefined8 *)(lVar2 + 0x48);
    uVar3 = *(undefined8 *)(lVar2 + 0x50);
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
    uVar11 = *(undefined8 *)(lVar2 + 0x60);
  }
  _objc_retain(uVar11);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar2 + 0x68);
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    uVar10 = *(undefined8 *)(lVar2 + 0x78);
    uVar7 = *(undefined8 *)(lVar2 + 0x80);
  }
  _objc_retain(uVar7);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  }
  _objc_retain(uVar6);
  FUN_1054473f4(uVar13,uVar12,param_2,uVar1,uStack_88,uStack_80,uVar4,uVar5,uStack_90,uVar9,
                uStack_98,uStack_a0,uVar3,uVar11,uVar8,uVar10,uVar7,uVar6);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543c020; end: 10543c06f; -[SCAdTrackEventRepositoryImpl _onInstantPageOperationalEvent:] */

void FUN_10543c020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8bc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10543c070; end: 10543c223; -[SCAdTrackEventRepositoryImpl _onSponsoredSnapEvent:] */

void FUN_10543c070(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_10543c1dc;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543c224;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xb8));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543c1dc:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543c224; end: 10543c3d3;  */

undefined * FUN_10543c224(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  _objc_retain(uVar3);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    uVar4 = 0;
  }
  else {
    uStack_68 = *(undefined8 *)(lVar2 + 0x18);
    uStack_78 = *(undefined8 *)(lVar2 + 0x20);
    uStack_70 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
  }
  _objc_retain(uVar4);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar10 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    bVar1 = 0;
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 8);
    uStack_80 = *(undefined8 *)(lVar2 + 0x38);
    uStack_88 = *(undefined8 *)(lVar2 + 0x40);
    uVar6 = *(undefined8 *)(lVar2 + 0x48);
    uVar10 = *(undefined8 *)(lVar2 + 0x50);
    uVar9 = *(undefined8 *)(lVar2 + 0x58);
  }
  _objc_retain(uVar9);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    bVar7 = 0;
    uVar11 = 0;
  }
  else {
    bVar7 = *(byte *)(lVar2 + 9);
    uVar11 = *(undefined8 *)(lVar2 + 0x60);
  }
  _objc_retain(uVar11);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  }
  _objc_retain(uVar5);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  }
  _objc_retain(uVar8);
  FUN_105447768(param_2,uVar3,uStack_68,uStack_78,uStack_70,uVar4,bVar1 & 1,uStack_80,uStack_88,
                uVar6,uVar10,uVar9,bVar7 & 1);
  _objc_release(param_2);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543c3d4; end: 10543c587; -[SCAdTrackEventRepositoryImpl _onSponsoredSnapBannerEvent:] */

void FUN_10543c3d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    if (((int)uVar4 == 0) || (lVar5 = param_1, func_0x00010be3cb80(), (int)lVar5 == 0))
    goto LAB_10543c540;
    lVar5 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10543c588;
    puStack_60 = &UNK_110889d60;
    _objc_retain(lVar2);
    lVar3 = lVar5;
    lStack_58 = lVar2;
    func_0x00010b5edefc(lVar5,0,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be30c20(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xc0));
    _objc_release(lVar3);
    lVar5 = lStack_58;
  }
  _objc_release(lVar5);
LAB_10543c540:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10543c588; end: 10543c63b;  */

undefined * FUN_10543c588(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
  }
  _objc_retain(uVar3);
  FUN_105447a84(param_2,uVar2,uVar4,uVar6,uVar5,uVar3);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543c63c; end: 10543c6bb; -[SCAdTrackEventRepositoryImpl _onWebviewAsmEvent:] */

void FUN_10543c63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3500();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac160();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10543c6bc; end: 10543c863; -[SCAdTrackEventRepositoryImpl _onDpaImpressionEvent:] */

void FUN_10543c6bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_10543c824;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
    }
  }
  _objc_release(lVar5);
LAB_10543c824:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543c864; end: 10543c8f3;  */

undefined * FUN_10543c864(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  _objc_retain(uVar3);
  FUN_105448400(param_2,uVar2,uVar3);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543c8f4; end: 10543cbb7; -[SCAdTrackEventRepositoryImpl _onAdModularLensEvent:] */

void FUN_10543c8f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar7);
    if (lVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar8);
    uVar4 = uVar7;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      uVar5 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(lVar6);
      if ((int)uVar5 == 0) goto LAB_10543ca70;
      uVar8 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      uStack_68 = 0x10543cab0;
      puStack_60 = &UNK_110889d60;
      _objc_retain(lVar2);
      uVar5 = uVar8;
      lStack_58 = lVar2;
      func_0x00010b5edefc(uVar8,0,&puStack_78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      func_0x00010be30c20(param_1);
      _objc_release(uVar5);
      lVar6 = lStack_58;
    }
  }
  _objc_release(lVar6);
LAB_10543ca70:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543cbb8; end: 10543cd5f; -[SCAdTrackEventRepositoryImpl _onAdCaptionCtaImpressionEvent:] */

void FUN_10543cbb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 8);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      lVar3 = param_1;
      func_0x00010be3cb80();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      if ((int)lVar3 == 0) goto LAB_10543cd20;
      lVar3 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010b5edefc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be30c20(param_1);
    }
  }
  _objc_release(lVar5);
LAB_10543cd20:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543cd60; end: 10543cd87;  */

undefined * FUN_10543cd60(long param_1,undefined8 param_2)

{
  func_0x00010be3c300(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543cd88; end: 10543cf37; -[SCAdTrackEventRepositoryImpl _insertCaptionCtaEvent:intoDb:] */

void FUN_10543cd88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar8 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 8);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_3 + 0x38);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar9);
    uVar1 = *(undefined8 *)(param_3 + 0x48);
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  FUN_105448758(param_4,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10543cf38; end: 10543cf6f; -[SCAdTrackEventRepositoryImpl initDatabase] */

void FUN_10543cf38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10543cf70; end: 10543cfa7; -[SCAdTrackEventRepositoryImpl transactor] */

void FUN_10543cf70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    func_0x00010bfee6e0();
    lVar1 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10543cfa8; end: 10543d097; -[SCAdTrackEventRepositoryImpl _adTrackCommonForAdIdentifier:viewSeqNum:] */

void FUN_10543cfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10543d098;
  puStack_58 = &UNK_110889dc0;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100589538(uVar1,0,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be2f6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10543d098; end: 10543d0a7;  */

void FUN_10543d098(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x10;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddac470,0x6c);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005fcb64(lVar3,FUN_10543faa4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10543f9e8;
    }
  }
  lVar3 = 0;
LAB_10543f9e8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10543d0a8; end: 10543d19f; -[SCAdTrackEventRepositoryImpl _adTrackCommonForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_10543d0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10543d1a0;
  puStack_60 = &UNK_110889df0;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100589538(uVar1,0,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be2f6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10543d1a0; end: 10543d1b3;  */

void FUN_10543d1a0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x18;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddac4dd,0x86);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005edcd4(lVar3,2,uVar4);
      func_0x0001005fcb64(lVar3,FUN_10543faa4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10543fe18;
    }
  }
  lVar3 = 0;
LAB_10543fe18:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10543d1b4; end: 10543d2a3; -[SCAdTrackEventRepositoryImpl _adTrackCommonForAdIdentifier:feedSeqNum:] */

void FUN_10543d1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10543d2a4;
  puStack_58 = &UNK_110889dc0;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100589538(uVar1,0,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be2f6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10543d2a4; end: 10543d2b3;  */

void FUN_10543d2a4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar3 = param_2 + 0x20;
      func_0x0001005fc990(lVar3,*(undefined8 *)(param_2 + 8),&UNK_10ddac564,0x6c);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar3,1,uVar2);
      func_0x0001005fcb64(lVar3,FUN_10543faa4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10543ff94;
    }
  }
  lVar3 = 0;
LAB_10543ff94:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10543d2b4; end: 10543d3c7; -[SCAdTrackEventRepositoryImpl _sqlEventsForCommons:adIdentifier:viewSeqNum:sqlClass:] */

void FUN_10543d2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110889e40);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10543d3dc;
  puStack_58 = &UNK_110889e60;
  uStack_50 = param_3;
  uStack_48 = param_6;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100589538(uVar1,0,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be2f6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10543d3c8; end: 10543d3db;  */

undefined8 FUN_10543d3c8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 10543d3dc; end: 10543d903;  */

void FUN_10543d3dc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = *(undefined **)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126b8fa8;
  _objc_opt_class();
  puVar2 = param_2;
  if (puVar3 == puVar1) {
    FUN_105440050(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126b8fb0;
    _objc_opt_class();
    if (puVar3 == puVar1) {
      FUN_105440654(param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x28);
      puVar1 = PTR_PTR_1126b8fc0;
      _objc_opt_class();
      if (puVar3 == puVar1) {
        FUN_105440acc(param_2,*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = *(undefined **)(param_1 + 0x28);
        puVar1 = PTR_PTR_1126b8fd0;
        _objc_opt_class();
        if (puVar3 == puVar1) {
          FUN_105440d74(param_2,*(undefined8 *)(param_1 + 0x20));
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar3 = *(undefined **)(param_1 + 0x28);
          puVar1 = PTR_PTR_1126b8ff0;
          _objc_opt_class();
          if (puVar3 == puVar1) {
            FUN_10544400c(param_2,*(undefined8 *)(param_1 + 0x20));
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar3 = *(undefined **)(param_1 + 0x28);
            puVar1 = PTR_PTR_1126b8fe0;
            _objc_opt_class();
            if (puVar3 == puVar1) {
              FUN_10544101c(param_2,*(undefined8 *)(param_1 + 0x20));
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar3 = *(undefined **)(param_1 + 0x28);
              puVar1 = PTR_PTR_1126b9000;
              _objc_opt_class();
              if (puVar3 == puVar1) {
                FUN_105441258(param_2,*(undefined8 *)(param_1 + 0x20));
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar3 = *(undefined **)(param_1 + 0x28);
                puVar1 = PTR_PTR_1126b9128;
                _objc_opt_class();
                if (puVar3 == puVar1) {
                  FUN_105441b30(param_2,*(undefined8 *)(param_1 + 0x20));
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  puVar3 = *(undefined **)(param_1 + 0x28);
                  puVar1 = PTR_PTR_1126b9010;
                  _objc_opt_class();
                  if (puVar3 == puVar1) {
                    FUN_105441818(param_2,*(undefined8 *)(param_1 + 0x20));
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    puVar3 = *(undefined **)(param_1 + 0x28);
                    puVar1 = PTR_PTR_1126b9020;
                    _objc_opt_class();
                    if (puVar3 == puVar1) {
                      FUN_1054415dc(param_2,*(undefined8 *)(param_1 + 0x20));
                      _objc_retainAutoreleasedReturnValue();
                    }
                    else {
                      puVar3 = *(undefined **)(param_1 + 0x28);
                      puVar1 = PTR_PTR_1126b9040;
                      _objc_opt_class();
                      if (puVar3 == puVar1) {
                        FUN_105441d6c(param_2,*(undefined8 *)(param_1 + 0x20));
                        _objc_retainAutoreleasedReturnValue();
                      }
                      else {
                        puVar3 = *(undefined **)(param_1 + 0x28);
                        puVar1 = PTR_PTR_1126b9050;
                        _objc_opt_class();
                        if (puVar3 == puVar1) {
                          FUN_1054420c8(param_2,*(undefined8 *)(param_1 + 0x20));
                          _objc_retainAutoreleasedReturnValue();
                        }
                        else {
                          puVar3 = *(undefined **)(param_1 + 0x28);
                          puVar1 = PTR_PTR_1126b9060;
                          _objc_opt_class();
                          if (puVar3 == puVar1) {
                            FUN_1054425cc(param_2,*(undefined8 *)(param_1 + 0x20));
                            _objc_retainAutoreleasedReturnValue();
                          }
                          else {
                            puVar3 = *(undefined **)(param_1 + 0x28);
                            puVar1 = PTR_PTR_1126b9070;
                            _objc_opt_class();
                            if (puVar3 == puVar1) {
                              FUN_105442974(param_2,*(undefined8 *)(param_1 + 0x20));
                              _objc_retainAutoreleasedReturnValue();
                            }
                            else {
                              puVar3 = *(undefined **)(param_1 + 0x28);
                              puVar1 = PTR_PTR_1126b9130;
                              _objc_opt_class();
                              if (puVar3 == puVar1) {
                                FUN_105442c78(param_2,*(undefined8 *)(param_1 + 0x20));
                                _objc_retainAutoreleasedReturnValue();
                              }
                              else {
                                puVar3 = *(undefined **)(param_1 + 0x28);
                                puVar1 = PTR_PTR_1126b9088;
                                _objc_opt_class();
                                if (puVar3 == puVar1) {
                                  FUN_1054433b0(param_2,*(undefined8 *)(param_1 + 0x20));
                                  _objc_retainAutoreleasedReturnValue();
                                }
                                else {
                                  puVar3 = *(undefined **)(param_1 + 0x28);
                                  puVar1 = PTR_PTR_1126b9090;
                                  _objc_opt_class();
                                  if (puVar3 == puVar1) {
                                    FUN_1054437b4(param_2,*(undefined8 *)(param_1 + 0x20));
                                    _objc_retainAutoreleasedReturnValue();
                                  }
                                  else {
                                    puVar3 = *(undefined **)(param_1 + 0x28);
                                    puVar1 = PTR_PTR_1126b9030;
                                    _objc_opt_class();
                                    if (puVar3 == puVar1) {
                                      FUN_105442f68(param_2,*(undefined8 *)(param_1 + 0x20));
                                      _objc_retainAutoreleasedReturnValue();
                                    }
                                    else {
                                      puVar3 = *(undefined **)(param_1 + 0x28);
                                      puVar1 = PTR_PTR_1126b9098;
                                      _objc_opt_class();
                                      if (puVar3 == puVar1) {
                                        FUN_105443a58(param_2,*(undefined8 *)(param_1 + 0x20));
                                        _objc_retainAutoreleasedReturnValue();
                                      }
                                      else {
                                        puVar3 = *(undefined **)(param_1 + 0x28);
                                        puVar1 = PTR_PTR_1126b90a8;
                                        _objc_opt_class();
                                        if (puVar3 == puVar1) {
                                          FUN_1054442c8(param_2,*(undefined8 *)(param_1 + 0x20));
                                          _objc_retainAutoreleasedReturnValue();
                                        }
                                        else {
                                          puVar3 = *(undefined **)(param_1 + 0x28);
                                          puVar1 = PTR_PTR_1126b90b8;
                                          _objc_opt_class();
                                          if (puVar3 == puVar1) {
                                            FUN_105443d08(param_2,*(undefined8 *)(param_1 + 0x20));
                                            _objc_retainAutoreleasedReturnValue();
                                          }
                                          else {
                                            puVar3 = *(undefined **)(param_1 + 0x28);
                                            puVar1 = PTR_PTR_1126b90c8;
                                            _objc_opt_class();
                                            if (puVar3 == puVar1) {
                                              FUN_105445210(param_2,*(undefined8 *)(param_1 + 0x20))
                                              ;
                                              _objc_retainAutoreleasedReturnValue();
                                            }
                                            else {
                                              puVar3 = *(undefined **)(param_1 + 0x28);
                                              puVar1 = PTR_PTR_1126b90d8;
                                              _objc_opt_class();
                                              if (puVar3 == puVar1) {
                                                FUN_105444618(param_2,*(undefined8 *)
                                                                       (param_1 + 0x20));
                                                _objc_retainAutoreleasedReturnValue();
                                              }
                                              else {
                                                puVar3 = *(undefined **)(param_1 + 0x28);
                                                puVar1 = PTR_PTR_1126b9108;
                                                _objc_opt_class();
                                                if (puVar3 == puVar1) {
                                                  FUN_105444b78(param_2,*(undefined8 *)
                                                                         (param_1 + 0x20));
                                                  _objc_retainAutoreleasedReturnValue();
                                                }
                                                else {
                                                  puVar3 = *(undefined **)(param_1 + 0x28);
                                                  puVar1 = PTR_PTR_1126b90f8;
                                                  _objc_opt_class();
                                                  if (puVar3 == puVar1) {
                                                    FUN_105444f60(param_2,*(undefined8 *)
                                                                           (param_1 + 0x20));
                                                    _objc_retainAutoreleasedReturnValue();
                                                  }
                                                  else {
                                                    puVar3 = *(undefined **)(param_1 + 0x28);
                                                    puVar1 = PTR_PTR_1126b90e8;
                                                    _objc_opt_class();
                                                    puVar2 = PTR____NSArray0__struct_11034ab48;
                                                    if (puVar3 == puVar1) {
                                                      puVar2 = param_2;
                                                      FUN_105444878(param_2,*(undefined8 *)
                                                                             (param_1 + 0x20));
                                                      _objc_retainAutoreleasedReturnValue();
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
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10543d904; end: 10543d9db; -[SCAdTrackEventRepositoryImpl _insertWithCommon:] */

undefined8 FUN_10543d904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10543d9dc;
  puStack_40 = &UNK_110889d60;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010b5edefc(uVar1,0,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be30c20(param_1);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10543d9dc; end: 10543dbb7;  */

undefined * FUN_10543d9dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
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
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain(uVar7);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain(uVar8);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain(uVar9);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar11 = 0;
  }
  else {
    uStack_90 = *(undefined8 *)(lVar3 + 0x30);
    uStack_98 = *(undefined8 *)(lVar3 + 0x38);
    uStack_a0 = *(undefined8 *)(lVar3 + 0x40);
    uVar11 = *(undefined8 *)(lVar3 + 0x48);
  }
  _objc_retain(uVar11);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    uVar5 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar10 = 0;
    uVar14 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar3 + 0x50);
    uVar13 = *(undefined8 *)(lVar3 + 0x58);
    uVar6 = *(undefined8 *)(lVar3 + 0x60);
    uVar5 = *(undefined8 *)(lVar3 + 0x68);
    uVar4 = *(undefined8 *)(lVar3 + 0x70);
    uVar14 = *(undefined8 *)(lVar3 + 0x78);
    uVar10 = *(undefined8 *)(lVar3 + 0x80);
  }
  _objc_retain(uVar10);
  FUN_1054454c0(uVar14,param_2,uVar1,uVar2,uVar7,uVar8,uVar9,uStack_90,uStack_98,uStack_a0,uVar11,
                uVar12,uVar13,uVar6,uVar5,uVar4,uVar10);
  _objc_release(param_2);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543dbb8; end: 10543dd3b; -[SCAdTrackEventRepositoryImpl _insertWithTouchPoint:common:] */

undefined8 FUN_10543dbb8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    param_1 = 1;
  }
  else {
    lVar3 = *(long *)(param_3 + 8);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 8);
      _objc_retain(uVar4);
      if (param_4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_4 + 8);
      }
      _objc_retain(uVar5);
      uVar2 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(lVar3);
      if ((int)uVar2 == 0) {
        param_1 = 0;
        goto LAB_10543dd04;
      }
      uVar4 = param_1;
      func_0x00010c2798c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10543dd3c;
      puStack_60 = &UNK_110889d60;
      _objc_retain(param_3);
      uVar5 = uVar4;
      lStack_58 = param_3;
      func_0x00010b5edefc(uVar4,0,&puStack_78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010be30c20(param_1);
      _objc_release(uVar5);
      lVar3 = lStack_58;
    }
    _objc_release(lVar3);
  }
LAB_10543dd04:
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10543dd3c; end: 10543df7b;  */

undefined * FUN_10543dd3c(long param_1,undefined8 param_2)

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
  long lVar14;
  undefined8 uVar15;
  
  lVar14 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar14 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar14 + 8);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  }
  _objc_retain(uVar15);
  lVar14 = *(long *)(param_1 + 0x20);
  if (lVar14 == 0) {
    uVar12 = 0;
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar14 + 0x60);
    uVar12 = *(undefined8 *)(lVar14 + 0x68);
    uVar13 = *(undefined8 *)(lVar14 + 0x70);
  }
  FUN_105445a58(param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar15,uVar11,
                uVar12,uVar13);
  _objc_release(param_2);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10543df7c; end: 10543e173; -[SCAdTrackEventRepositoryImpl _handleSQLFetchedResult:adIdentifier:viewSeqNum:] */

void FUN_10543df7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_c8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10543e174;
  uStack_70 = 0x10543e184;
  uStack_68 = 0;
  puStack_f0 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_10543e174;
  uStack_a0 = 0x10543e184;
  uStack_98 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10543e18c;
  puStack_d0 = &UNK_110850558;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10543e1c4;
  puStack_f8 = &UNK_11084d888;
  puStack_b8 = puStack_f0;
  puStack_88 = puStack_c8;
  func_0x00010c0c0800(param_3);
  _objc_initWeak(auStack_118,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_128,auStack_118);
  _objc_retain(param_4);
  uStack_120 = param_5;
  func_0x00010c0f7fc0(uVar1);
  uVar1 = puStack_88[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_118);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543e174; end: 10543e18b;  */

void FUN_10543e174(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10543e18c; end: 10543e1fb;  */

void FUN_10543e18c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10543e1fc; end: 10543e2f3;  */

void FUN_10543e1fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dddb98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2,param_2,uVar7,puVar3,puVar4,
                        &PTR____CFConstantStringClassReference_110ddd698,in_x6,in_x7,uVar8,uVar5,
                        uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543e2f4; end: 10543e48f; -[SCAdTrackEventRepositoryImpl _handleSqlMutationResult:common:] */

bool FUN_10543e2f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10543e174;
  uStack_60 = 0x10543e184;
  uStack_58 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10543e494;
  puStack_90 = &UNK_11084d888;
  puStack_78 = puStack_88;
  func_0x00010c0c0800(param_3);
  _objc_initWeak(auStack_b0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  lVar1 = puStack_78[5];
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1 == 0;
}



/* Entry: 10543e490; end: 10543e493;  */

void FUN_10543e490(void)

{
  return;
}



/* Entry: 10543e494; end: 10543e4cb;  */

void FUN_10543e494(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10543e4cc; end: 10543e5db;  */

void FUN_10543e4cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    }
    _objc_retain(uVar6);
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0xc);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dddbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2,param_2,uVar6,puVar3,puVar4,
                        &PTR____CFConstantStringClassReference_110ddd718,in_x6,in_x7,uVar7,uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10543e5dc; end: 10543e68f; -[SCAdTrackEventRepositoryImpl _adSQLToSponsoredSnapEventWithCommons:sqlEvents:] */

void FUN_10543e5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_110889f00,
                      &PTR___NSConcreteGlobalBlock_110889f40);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10543e6cc;
  puStack_40 = &UNK_110889f60;
  uStack_38 = param_4;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543e690; end: 10543e6a3;  */

undefined8 FUN_10543e690(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 10543e6a4; end: 10543e6cb;  */

void FUN_10543e6a4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10543e6cc; end: 10543e777;  */

void FUN_10543e6cc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b9138;
    _objc_alloc(PTR_PTR_1126b9138);
    func_0x00010c0000a0();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10543e778; end: 10543e82b; -[SCAdTrackEventRepositoryImpl _adSQLToSponsoredSnapBannerEventWithCommons:sqlEvents:] */

void FUN_10543e778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_110889fb0,
                      &PTR___NSConcreteGlobalBlock_110889ff0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10543e868;
  puStack_40 = &UNK_11088a010;
  uStack_38 = param_4;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543e82c; end: 10543e83f;  */

undefined8 FUN_10543e82c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 10543e840; end: 10543e867;  */

void FUN_10543e840(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10543e868; end: 10543e90f;  */

void FUN_10543e868(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b9140;
    _objc_alloc(PTR_PTR_1126b9140);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10543e910; end: 10543e93f; -[SCAdTrackEventRepositoryImpl setTransactor:] */

void FUN_10543e910(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10543e940; end: 10543e947; -[SCAdTrackEventRepositoryImpl adCrashLogger] */

undefined8 FUN_10543e940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10543e948; end: 10543e94f; -[SCAdTrackEventRepositoryImpl asmLogger] */

undefined8 FUN_10543e948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10543e950; end: 10543e957; -[SCAdTrackEventRepositoryImpl instantPageOperationalLogger] */

undefined8 FUN_10543e950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10543e958; end: 10543e95f; -[SCAdTrackEventRepositoryImpl instantPagePaymentEventLogger] */

undefined8 FUN_10543e958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10543e960; end: 10543e967; -[SCAdTrackEventRepositoryImpl performer] */

undefined8 FUN_10543e960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10543e968; end: 10543e96f; -[SCAdTrackEventRepositoryImpl adLifecycleEventSubjectV2] */

undefined8 FUN_10543e968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10543e970; end: 10543e99f; -[SCAdTrackEventRepositoryImpl setAdLifecycleEventSubjectV2:] */

void FUN_10543e970(long param_1,undefined8 param_2,undefined8 param_3)

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



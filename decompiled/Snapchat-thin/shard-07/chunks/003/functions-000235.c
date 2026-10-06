/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105435244; end: 10543526b; -[SCAdTrackEventRepositoryImpl adReminderEventObservableV2] */

void FUN_105435244(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543526c; end: 105435293; -[SCAdTrackEventRepositoryImpl adStickersEventObservableV2] */

void FUN_10543526c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105435294; end: 1054352bb; -[SCAdTrackEventRepositoryImpl adSubscribeEventObservableV2] */

void FUN_105435294(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054352bc; end: 1054352e3; -[SCAdTrackEventRepositoryImpl adPlayableEventObservable] */

void FUN_1054352bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054352e4; end: 10543530b; -[SCAdTrackEventRepositoryImpl adInstantPageEventObservable] */

void FUN_1054352e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10543530c; end: 10543549b; -[SCAdTrackEventRepositoryImpl adLifecycleEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_10543530c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b8fa8);
  uVar2 = param_1;
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b8fb0);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010050471c(uVar2,&PTR___NSConcreteGlobalBlock_110888d50,
                      &PTR___NSConcreteGlobalBlock_110888d90);
  uVar4 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110888dd0,
                      &PTR___NSConcreteGlobalBlock_110888e10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105435514;
  puStack_58 = &UNK_110888e30;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  _objc_retain();
  _objc_retain(uVar3);
  uVar5 = uVar1;
  func_0x000100504554(uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10543549c; end: 1054354af;  */

undefined8 FUN_10543549c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 1054354b0; end: 1054354d7;  */

void FUN_1054354b0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1054354d8; end: 1054354eb;  */

undefined8 FUN_1054354d8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 1054354ec; end: 105435513;  */

void FUN_1054354ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105435514; end: 105435603;  */

void FUN_105435514(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
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
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar3);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b8fb8;
    _objc_alloc(PTR_PTR_1126b8fb8);
    func_0x00010c000080();
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105435604; end: 10543571f; -[SCAdTrackEventRepositoryImpl adDeeplinkEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_105435604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b8fc0);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110888e80,
                      &PTR___NSConcreteGlobalBlock_110888ec0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10543575c;
  puStack_40 = &UNK_110888ee0;
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



/* Entry: 105435720; end: 105435733;  */

undefined8 FUN_105435720(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 105435734; end: 10543575b;  */

void FUN_105435734(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10543575c; end: 105435803;  */

void FUN_10543575c(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b8fc8;
    _objc_alloc(PTR_PTR_1126b8fc8);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105435804; end: 10543591f; -[SCAdTrackEventRepositoryImpl adAppInstallEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_105435804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b8fd0);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110888f30,
                      &PTR___NSConcreteGlobalBlock_110888f70);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10543595c;
  puStack_40 = &UNK_110888f90;
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



/* Entry: 105435920; end: 105435933;  */

undefined8 FUN_105435920(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 105435934; end: 10543595b;  */

void FUN_105435934(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10543595c; end: 105435a03;  */

void FUN_10543595c(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b8fd8;
    _objc_alloc(PTR_PTR_1126b8fd8);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105435a04; end: 105435b17; -[SCAdTrackEventRepositoryImpl adToMessageEventsForAdIdentifier:viewSeqNum:] */

void FUN_105435a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b8fe0);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110888fe0,
                      &PTR___NSConcreteGlobalBlock_110889020);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105435b54;
  puStack_40 = &UNK_110889040;
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



/* Entry: 105435b18; end: 105435b2b;  */

undefined8 FUN_105435b18(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105435b2c; end: 105435b53;  */

void FUN_105435b2c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105435b54; end: 105435bfb;  */

void FUN_105435b54(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b8fe8;
    _objc_alloc(PTR_PTR_1126b8fe8);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105435bfc; end: 105435d0f; -[SCAdTrackEventRepositoryImpl adSKOverlayEventsForAdIdentifier:viewSeqNum:] */

void FUN_105435bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b8ff0);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889090,
                      &PTR___NSConcreteGlobalBlock_1108890d0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105435d4c;
  puStack_40 = &UNK_1108890f0;
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



/* Entry: 105435d10; end: 105435d23;  */

undefined8 FUN_105435d10(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105435d24; end: 105435d4b;  */

void FUN_105435d24(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105435d4c; end: 105435df3;  */

void FUN_105435d4c(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b8ff8;
    _objc_alloc(PTR_PTR_1126b8ff8);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105435df4; end: 105435f07; -[SCAdTrackEventRepositoryImpl adReportEventsForAdIdentifier:viewSeqNum:] */

void FUN_105435df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9000);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889140,
                      &PTR___NSConcreteGlobalBlock_110889180);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105435f44;
  puStack_40 = &UNK_1108891a0;
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



/* Entry: 105435f08; end: 105435f1b;  */

undefined8 FUN_105435f08(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 105435f1c; end: 105435f43;  */

void FUN_105435f1c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105435f44; end: 105435feb;  */

void FUN_105435f44(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9008;
    _objc_alloc(PTR_PTR_1126b9008);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105435fec; end: 1054360ff; -[SCAdTrackEventRepositoryImpl adStickersEventsForAdIdentifier:viewSeqNum:] */

void FUN_105435fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9010);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_1108891f0,
                      &PTR___NSConcreteGlobalBlock_110889230);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10543613c;
  puStack_40 = &UNK_110889250;
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



/* Entry: 105436100; end: 105436113;  */

undefined8 FUN_105436100(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105436114; end: 10543613b;  */

void FUN_105436114(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10543613c; end: 1054361e3;  */

void FUN_10543613c(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9018;
    _objc_alloc(PTR_PTR_1126b9018);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054361e4; end: 1054362f7; -[SCAdTrackEventRepositoryImpl adSubscribeEventsForAdIdentifier:viewSeqNum:] */

void FUN_1054361e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9020);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_1108892a0,
                      &PTR___NSConcreteGlobalBlock_1108892e0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105436334;
  puStack_40 = &UNK_110889300;
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



/* Entry: 1054362f8; end: 10543630b;  */

undefined8 FUN_1054362f8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 10543630c; end: 105436333;  */

void FUN_10543630c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105436334; end: 1054363db;  */

void FUN_105436334(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9028;
    _objc_alloc(PTR_PTR_1126b9028);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054363dc; end: 1054364f7; -[SCAdTrackEventRepositoryImpl instantPageEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_1054363dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9030);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889350,
                      &PTR___NSConcreteGlobalBlock_110889390);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105436534;
  puStack_40 = &UNK_1108893b0;
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



/* Entry: 1054364f8; end: 10543650b;  */

undefined8 FUN_1054364f8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 10543650c; end: 105436533;  */

void FUN_10543650c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105436534; end: 10543663b;  */

void FUN_105436534(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *unaff_x22;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  if (param_2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = *(undefined **)(param_2 + 8);
  }
  _objc_retain(puVar5);
  puVar3 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    unaff_x22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = lVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b9038;
    _objc_alloc();
    puVar3 = param_2;
    func_0x00010c000100();
    _objc_release(unaff_x22);
  }
  _objc_release(lVar4);
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_10543663c;
    puStack_70 = unaff_x22;
    puStack_68 = puVar5;
    lStack_60 = lVar4;
    puStack_58 = param_2;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    puVar2 = puVar1;
    func_0x00010bdc5920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b9040);
    func_0x00010bebf180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010050471c(puVar1,&PTR___NSConcreteGlobalBlock_110889400,
                        &PTR___NSConcreteGlobalBlock_110889440);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105436794;
    puStack_80 = &UNK_110889460;
    puStack_78 = puVar3;
    _objc_retain();
    puVar5 = puVar2;
    func_0x000100504554(puVar2,&puStack_98);
    _objc_release(puStack_78);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10543663c; end: 105436757; -[SCAdTrackEventRepositoryImpl webviewUserEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_10543663c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9040);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889400,
                      &PTR___NSConcreteGlobalBlock_110889440);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105436794;
  puStack_40 = &UNK_110889460;
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



/* Entry: 105436758; end: 10543676b;  */

undefined8 FUN_105436758(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 10543676c; end: 105436793;  */

void FUN_10543676c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105436794; end: 10543683b;  */

void FUN_105436794(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9048;
    _objc_alloc(PTR_PTR_1126b9048);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10543683c; end: 105436957; -[SCAdTrackEventRepositoryImpl webviewLoadingEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_10543683c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9050);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_1108894b0,
                      &PTR___NSConcreteGlobalBlock_1108894f0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105436994;
  puStack_40 = &UNK_110889510;
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



/* Entry: 105436958; end: 10543696b;  */

undefined8 FUN_105436958(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 10543696c; end: 105436993;  */

void FUN_10543696c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105436994; end: 105436a3b;  */

void FUN_105436994(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9058;
    _objc_alloc(PTR_PTR_1126b9058);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105436a3c; end: 105436b57; -[SCAdTrackEventRepositoryImpl webviewNavigationEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_105436a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9060);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889560,
                      &PTR___NSConcreteGlobalBlock_1108895a0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105436b94;
  puStack_40 = &UNK_1108895c0;
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



/* Entry: 105436b58; end: 105436b6b;  */

undefined8 FUN_105436b58(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105436b6c; end: 105436b93;  */

void FUN_105436b6c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105436b94; end: 105436c3b;  */

void FUN_105436b94(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9068;
    _objc_alloc(PTR_PTR_1126b9068);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105436c3c; end: 105436d57; -[SCAdTrackEventRepositoryImpl webviewGaEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_105436c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9070);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889610,
                      &PTR___NSConcreteGlobalBlock_110889650);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105436d94;
  puStack_40 = &UNK_110889670;
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



/* Entry: 105436d58; end: 105436d6b;  */

undefined8 FUN_105436d58(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 105436d6c; end: 105436d93;  */

void FUN_105436d6c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105436d94; end: 105436e3b;  */

void FUN_105436d94(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9078;
    _objc_alloc(PTR_PTR_1126b9078);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105436e3c; end: 105437237; -[SCAdTrackEventRepositoryImpl webviewEventBundleForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_105436e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bdc5920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b9070);
  uVar3 = param_1;
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b9050);
  uVar4 = param_1;
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b9060);
  uVar5 = param_1;
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b9030);
  uVar6 = param_1;
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b9040);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = PTR_PTR_1126b9080;
  _objc_alloc();
  uVar8 = uVar3;
  func_0x00010050471c(uVar3,&PTR___NSConcreteGlobalBlock_1108896a0,
                      &PTR___NSConcreteGlobalBlock_1108896c0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105437274;
  puStack_88 = &UNK_110889670;
  uStack_80 = uVar8;
  _objc_retain();
  uVar9 = uVar2;
  func_0x000100504554(uVar2,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uVar8);
  uVar8 = uVar4;
  func_0x00010050471c(uVar4,&PTR___NSConcreteGlobalBlock_1108896e0,
                      &PTR___NSConcreteGlobalBlock_110889700);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105437358;
  puStack_b0 = &UNK_110889510;
  uStack_a8 = uVar8;
  _objc_retain();
  uVar10 = uVar2;
  func_0x000100504554(uVar2,&puStack_c8);
  _objc_release(uStack_a8);
  _objc_release(uVar8);
  uVar8 = uVar5;
  func_0x00010050471c(uVar5,&PTR___NSConcreteGlobalBlock_110889720,
                      &PTR___NSConcreteGlobalBlock_110889740);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10543743c;
  puStack_d8 = &UNK_1108895c0;
  uStack_d0 = uVar8;
  _objc_retain();
  uVar11 = uVar2;
  func_0x000100504554(uVar2,&puStack_f0);
  _objc_release(uStack_d0);
  _objc_release(uVar8);
  uVar8 = uVar6;
  func_0x00010050471c(uVar6,&PTR___NSConcreteGlobalBlock_110889760,
                      &PTR___NSConcreteGlobalBlock_110889780);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105437520;
  puStack_100 = &UNK_1108893b0;
  uStack_f8 = uVar8;
  _objc_retain();
  uVar12 = uVar2;
  func_0x000100504554(uVar2,&puStack_118);
  _objc_release(uStack_f8);
  _objc_release(uVar8);
  uVar8 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_1108897a0,
                      &PTR___NSConcreteGlobalBlock_1108897c0);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_105437664;
  puStack_128 = &UNK_110889460;
  uStack_120 = uVar8;
  _objc_retain();
  uVar13 = uVar2;
  func_0x000100504554(uVar2,&puStack_140);
  _objc_release(uStack_120);
  _objc_release(uVar8);
  func_0x00010c016d20(puVar7);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105437238; end: 10543724b;  */

undefined8 FUN_105437238(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 10543724c; end: 105437273;  */

void FUN_10543724c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105437274; end: 10543731b;  */

void FUN_105437274(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9078;
    _objc_alloc(PTR_PTR_1126b9078);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10543731c; end: 10543732f;  */

undefined8 FUN_10543731c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105437330; end: 105437357;  */

void FUN_105437330(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105437358; end: 1054373ff;  */

void FUN_105437358(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9058;
    _objc_alloc(PTR_PTR_1126b9058);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105437400; end: 105437413;  */

undefined8 FUN_105437400(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105437414; end: 10543743b;  */

void FUN_105437414(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10543743c; end: 1054374e3;  */

void FUN_10543743c(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9068;
    _objc_alloc(PTR_PTR_1126b9068);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054374e4; end: 1054374f7;  */

undefined8 FUN_1054374e4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 1054374f8; end: 10543751f;  */

void FUN_1054374f8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105437520; end: 105437627;  */

undefined * FUN_105437520(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar5);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b9038;
    _objc_alloc(PTR_PTR_1126b9038);
    func_0x00010c000100();
    _objc_release(puVar1);
  }
  _objc_release(lVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  if (lVar2 != 0) {
    return *(undefined **)(lVar2 + 8);
  }
  return (undefined *)0x0;
}



/* Entry: 105437628; end: 10543763b;  */

undefined8 FUN_105437628(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 10543763c; end: 105437663;  */

void FUN_10543763c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105437664; end: 10543770b;  */

void FUN_105437664(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b9048;
    _objc_alloc(PTR_PTR_1126b9048);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10543770c; end: 1054377c3; -[SCAdTrackEventRepositoryImpl sponsoredSnapEventsForAdIdentifier:feedSeqNum:] */

void FUN_10543770c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5900(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9088;
  _objc_opt_class(PTR_PTR_1126b9088);
  uVar3 = param_1;
  func_0x00010bebf180(param_1,param_2,uVar1,param_3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc57c0(param_1,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054377c4; end: 10543787b; -[SCAdTrackEventRepositoryImpl sponsoredSnapEventsForAdIdentifier:viewSeqNum:] */

void FUN_1054377c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5940(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9088;
  _objc_opt_class(PTR_PTR_1126b9088);
  uVar3 = param_1;
  func_0x00010bebf180(param_1,param_2,uVar1,param_3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc57c0(param_1,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10543787c; end: 105437933; -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventsForAdIdentifier:feedSeqNum:] */

void FUN_10543787c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5900(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9090;
  _objc_opt_class(PTR_PTR_1126b9090);
  uVar3 = param_1;
  func_0x00010bebf180(param_1,param_2,uVar1,param_3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc57a0(param_1,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105437934; end: 1054379eb; -[SCAdTrackEventRepositoryImpl sponsoredSnapBannerEventsForAdIdentifier:viewSeqNum:] */

void FUN_105437934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc5940(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9090;
  _objc_opt_class(PTR_PTR_1126b9090);
  uVar3 = param_1;
  func_0x00010bebf180(param_1,param_2,uVar1,param_3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc57a0(param_1,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054379ec; end: 105437aff; -[SCAdTrackEventRepositoryImpl playableEventsForAdIdentifier:viewSeqNum:] */

void FUN_1054379ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b9098);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889800,
                      &PTR___NSConcreteGlobalBlock_110889840);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105437b3c;
  puStack_40 = &UNK_110889860;
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



/* Entry: 105437b00; end: 105437b13;  */

undefined8 FUN_105437b00(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105437b14; end: 105437b3b;  */

void FUN_105437b14(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105437b3c; end: 105437be3;  */

void FUN_105437b3c(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b90a0;
    _objc_alloc(PTR_PTR_1126b90a0);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105437be4; end: 105437cf7; -[SCAdTrackEventRepositoryImpl tooltipImpressionEventsForAdIdentifier:viewSeqNum:] */

void FUN_105437be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b90a8);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_1108898b0,
                      &PTR___NSConcreteGlobalBlock_1108898f0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105437d34;
  puStack_40 = &UNK_110889910;
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



/* Entry: 105437cf8; end: 105437d0b;  */

undefined8 FUN_105437cf8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105437d0c; end: 105437d33;  */

void FUN_105437d0c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105437d34; end: 105437ddb;  */

void FUN_105437d34(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b90b0;
    _objc_alloc(PTR_PTR_1126b90b0);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105437ddc; end: 105437eef; -[SCAdTrackEventRepositoryImpl adEndCardEventsForAdIdentifier:viewSeqNum:] */

void FUN_105437ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b90b8);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889960,
                      &PTR___NSConcreteGlobalBlock_1108899a0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105437f2c;
  puStack_40 = &UNK_1108899c0;
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



/* Entry: 105437ef0; end: 105437f03;  */

undefined8 FUN_105437ef0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 105437f04; end: 105437f2b;  */

void FUN_105437f04(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105437f2c; end: 105437fd3;  */

void FUN_105437f2c(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b90c0;
    _objc_alloc(PTR_PTR_1126b90c0);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105437fd4; end: 1054380e7; -[SCAdTrackEventRepositoryImpl adLiveReviewEventsForAdIdentifier:viewSeqNum:] */

void FUN_105437fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b90c8);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889a10,
                      &PTR___NSConcreteGlobalBlock_110889a50);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105438124;
  puStack_40 = &UNK_110889a70;
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



/* Entry: 1054380e8; end: 1054380fb;  */

undefined8 FUN_1054380e8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 1054380fc; end: 105438123;  */

void FUN_1054380fc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105438124; end: 1054381cb;  */

void FUN_105438124(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b90d0;
    _objc_alloc(PTR_PTR_1126b90d0);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054381cc; end: 1054382e7; -[SCAdTrackEventRepositoryImpl dpaImpressionEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_1054381cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b90d8);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889ac0,
                      &PTR___NSConcreteGlobalBlock_110889b00);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105438324;
  puStack_40 = &UNK_110889b20;
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



/* Entry: 1054382e8; end: 1054382fb;  */

undefined8 FUN_1054382e8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 8);
  }
  return 0;
}



/* Entry: 1054382fc; end: 105438323;  */

void FUN_1054382fc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105438324; end: 1054383cb;  */

void FUN_105438324(long param_1,long param_2)

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
    puVar3 = PTR_PTR_1126b90e0;
    _objc_alloc(PTR_PTR_1126b90e0);
    func_0x00010c000060();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054383cc; end: 1054384e7; -[SCAdTrackEventRepositoryImpl adModularLensEventsForAdIdentifier:snapIndex:viewSeqNum:] */

void FUN_1054383cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  _objc_opt_class(PTR_PTR_1126b90e8);
  func_0x00010bebf180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_110889b70,
                      &PTR___NSConcreteGlobalBlock_110889bb0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105438524;
  puStack_40 = &UNK_110889bd0;
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



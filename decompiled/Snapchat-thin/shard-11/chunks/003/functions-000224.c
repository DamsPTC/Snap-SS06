/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108438064; end: 108438103; -[SCPollsVoteResult initWithVoteId:count:ratio:viewerVoted:] */

undefined1 *
FUN_108438064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fc858;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108438104; end: 108438127; -[SCPollsVoteResult copyWithZone:] */

undefined8 FUN_108438104(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108438128; end: 1084381b3; -[SCPollsVoteResult hash] */

ulong * FUN_108438128(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(uint *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_20 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108438270:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10843827c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((int)puVar3[1] == (int)param_3[1] && (puVar3[2] == param_3[2])))) {
      dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
      dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (ulong *)puVar3[4];
        if (puVar6 != (ulong *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10843827c;
        }
        goto LAB_108438270;
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_10843827c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1084381b4; end: 108438297; -[SCPollsVoteResult isEqual:] */

long FUN_1084381b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108438270:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10843827c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10843827c;
        }
        goto LAB_108438270;
      }
    }
    lVar4 = 0;
  }
LAB_10843827c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108438298; end: 10843829f; -[SCPollsVoteResult voteId] */

undefined4 FUN_108438298(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1084382a0; end: 1084382a7; -[SCPollsVoteResult count] */

undefined8 FUN_1084382a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1084382a8; end: 1084382af; -[SCPollsVoteResult ratio] */

undefined8 FUN_1084382a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1084382b0; end: 1084382b7; -[SCPollsVoteResult viewerVoted] */

undefined8 FUN_1084382b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1084382b8; end: 1084382cb; -[SCPollsVoteResult .cxx_destruct] */

void FUN_1084382b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1084382cc; end: 1084383f3;  */

void FUN_1084382cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110a48ac8);
  lVar1 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110a48ac8);
  lVar2 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110a48ac8);
  _objc_release(param_2);
  lVar3 = param_1;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar3 != 0) {
    func_0x00010bf09f80(PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar1;
  func_0x00010bf529e0();
  puVar5 = puVar4;
  if (lVar3 != 0) {
    func_0x00010bf09f80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  lVar3 = lVar2;
  func_0x00010bf529e0();
  puVar4 = puVar5;
  if (lVar3 != 0) {
    func_0x00010bf09f80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084383f4; end: 1084385db;  */

void FUN_1084383f4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110a48ac8);
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1084384b8;
    puStack_40 = &UNK_110854720;
    _objc_retain(param_2);
    puVar2 = param_1;
    uStack_38 = param_2;
    func_0x000100504554(param_1,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084385dc; end: 1084385eb;  */

void FUN_1084385dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1084385ec; end: 10843860b; +[SCSendToConfirmationViewModelConverter keysFromViewModels:] */

void FUN_1084385ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110a48b28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10843860c; end: 108438613;  */

void FUN_10843860c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_itemKey_1125febd0);
  return;
}



/* Entry: 108438614; end: 1084386b3;  */

void FUN_108438614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5170;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010901d7c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c020280(puVar1,param_2,uVar2,uVar3,&PTR____CFConstantStringClassReference_110f52c78);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084386b4; end: 1084386bb;  */

void FUN_1084386b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5170;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010901d7c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c020280(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084386bc; end: 1084388df;  */

void FUN_1084386bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108438774;
  puStack_48 = &UNK_110a48b88;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000100504554(param_1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1084388e0; end: 1084389bb;  */

void FUN_1084388e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5070;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c11ac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_1);
  func_0x00010c1143e0(param_1);
  func_0x00010c075620(param_1);
  uVar3 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c03bfc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084389bc; end: 108438aeb;  */

void FUN_1084389bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain(param_1);
  func_0x000108f5833c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc7d0;
  _objc_alloc(PTR_PTR_1126cc7d0);
  puVar3 = puVar2;
  func_0x000108f580b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d720(puVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108438aec; end: 108438b73;  */

void FUN_108438aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108438b74;
  puStack_30 = &UNK_110a48bd8;
  uStack_28 = param_1;
  _objc_retain(param_1);
  func_0x000100504554(param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108438b74; end: 108438c1f;  */

void FUN_108438b74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c084700(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010bf625c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar1 = uVar2;
  FUN_1084388e0(uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108438c20; end: 108438ceb;  */

void FUN_108438c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5170;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_release(param_2);
  FUN_108438cec(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020280(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108438cec; end: 108438d3b;  */

void FUN_108438cec(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_1 - 1U < 10) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a48c28)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR_PTR_110cb3020;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108438d3c; end: 108438eb7;  */

void FUN_108438d3c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c0ee300(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x108438df4;
    puStack_40 = &UNK_11086aa58;
    _objc_retain(param_1);
    puVar2 = puVar1;
    puStack_38 = param_1;
    func_0x000100504554(puVar1,&puStack_58);
    _objc_release(puStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108438eb8; end: 10843904f; -[EphemeralMedia initWithCurrentUsername:gallerySnapId:mediaEncryptionCoordinator:mediaDataIngestor:circumstanceEngine:] */

undefined1 *
FUN_108438eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fc860;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x118);
    *(undefined8 *)((long)puVar1 + 0x118) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar3);
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x000108ea5f8c(param_3,uVar3,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ce0(puVar1);
    func_0x00010c196d20(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108439050; end: 108439057; -[EphemeralMedia setTime:] */

void FUN_108439050(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xd8) = param_1;
  return;
}



/* Entry: 108439058; end: 1084390a7; -[EphemeralMedia animatedSnapType] */

long FUN_108439058(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((lVar1 == 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar1 = 0, lVar2 != 0)) {
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_108441a70();
    *(long *)(param_1 + 0x78) = lVar1;
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x78);
  }
  return lVar1;
}



/* Entry: 1084390a8; end: 1084390f7; -[EphemeralMedia commonLoggingParamsBuilder] */

void FUN_1084390a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x0001008e4748();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1084390f8; end: 10843914f; -[EphemeralMedia eventLoggingParams] */

void FUN_1084390f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1a8);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined **)(param_1 + 0x1a8) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x1a8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108439150; end: 1084391ef; -[EphemeralMedia typeParams] */

void FUN_108439150(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **ppuStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dad058;
  func_0x00010c27dd80();
  func_0x00010b67b220();
  _objc_retainAutoreleasedReturnValue();
  plVar3 = &lStack_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_30 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,plVar3,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(plVar3);
  lVar2 = *(long *)(param_1 + 0x1a0);
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined **)(param_1 + 0x1a0) = puVar1;
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + 0x1a0);
  }
  func_0x00010bef7f60(lVar2,param_2,plVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar3);
  return;
}



/* Entry: 1084391f0; end: 108439253; -[EphemeralMedia addShareLoggingParameters:] */

void FUN_1084391f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x1a0);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined **)(param_1 + 0x1a0) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x1a0);
  }
  func_0x00010bef7f60(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108439254; end: 1084392bb; -[EphemeralMedia shareLoggingParameters] */

void FUN_108439254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c0d3c80(uVar1);
  func_0x00010c27df60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar1,param_2,param_1);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084392bc; end: 10843932f; -[EphemeralMedia storiesAnimatedSnapType] */

undefined8 FUN_1084392bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf03740();
  uVar1 = 2;
  if (param_1 != 0x611b69de) {
    uVar1 = 0;
  }
  uVar3 = 4;
  if (param_1 != -0x333a5d42) {
    uVar3 = uVar1;
  }
  uVar1 = 3;
  if (param_1 != -0x412f2be8) {
    uVar1 = 0;
  }
  uVar2 = 1;
  if (param_1 != -0x51fa9f08) {
    uVar2 = uVar1;
  }
  if (param_1 < -0x333a5d42) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 108439330; end: 108439393; -[EphemeralMedia addSecretShareLoggingParameters:] */

void FUN_108439330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x198);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x198);
    *(undefined **)(param_1 + 0x198) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x198);
  }
  func_0x00010bef7f60(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108439394; end: 1084393ab; -[EphemeralMedia secretShareLoggingParameters] */

void FUN_108439394(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084393ac; end: 1084393c3; -[EphemeralMedia eventLoggingParameters] */

void FUN_1084393ac(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084393c4; end: 10843941b; -[EphemeralMedia addEventLoggingParameters:] */

void FUN_1084393c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf9a040(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10843941c; end: 10843948b; -[EphemeralMedia setLoggingParameters:forEvent:] */

void FUN_10843941c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf9a040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10843948c; end: 108439c8b; -[EphemeralMedia initWithCoder:] */

undefined1 * FUN_10843948c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc860;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227d40(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c214bc0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1ac2c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4020(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(puVar1);
    _objc_release(lVar2);
    func_0x00010bf66f40(param_3);
    func_0x00010c167f00(puVar1);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df220(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179000(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc380(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2bc0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195a40(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d140(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d420(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d400(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c176700(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc1e0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bd60(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166200(puVar1);
    _objc_release(lVar2);
    func_0x00010bf66f40(param_3);
    func_0x00010c2056c0(puVar1);
    func_0x00010bf66f40(param_3);
    func_0x00010c196d20(puVar1);
    func_0x00010bf66ce0(param_3);
    func_0x00010c1ee860(puVar1);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x188);
    *(long *)((long)puVar1 + 0x188) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 400);
    *(long *)((long)puVar1 + 400) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(long *)((long)puVar1 + 0x58) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010bf66f40();
    *(long *)((long)puVar1 + 0xe0) = lVar2;
    lVar2 = param_3;
    func_0x00010bf66f40();
    *(long *)((long)puVar1 + 0x100) = lVar2;
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x1a0);
    *(long *)((long)puVar1 + 0x1a0) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x198);
    *(long *)((long)puVar1 + 0x198) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar5 = param_3;
      func_0x00010bf67000(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      FUN_10843ecb8();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c4588;
      func_0x00010c23f8a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
      *(undefined **)((long)puVar1 + 0x38) = puVar3;
      _objc_release(uVar4);
    }
    else {
      puVar3 = PTR_PTR_1126c4588;
      func_0x00010c23f8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)((long)puVar1 + 0x38);
      *(undefined **)((long)puVar1 + 0x38) = puVar3;
    }
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x148);
    *(long *)((long)puVar1 + 0x148) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x108);
    *(long *)((long)puVar1 + 0x108) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x110);
    *(long *)((long)puVar1 + 0x110) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0xf8);
    *(long *)((long)puVar1 + 0xf8) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(long *)((long)puVar1 + 0x68) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1c) = (char)lVar5;
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x150);
    *(long *)((long)puVar1 + 0x150) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x180);
    *(long *)((long)puVar1 + 0x180) = lVar5;
    _objc_release(uVar4);
    func_0x00010bf66f40(param_3);
    func_0x00010c1e6d40(puVar1);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(long *)((long)puVar1 + 0x48) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(long *)((long)puVar1 + 0x50) = lVar5;
    _objc_release(uVar4);
    lVar5 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183080(puVar1);
    _objc_release(lVar5);
    func_0x00010be0ad00(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108439c8c; end: 10843a27f; -[EphemeralMedia encodeWithCoder:] */

void FUN_108439c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010be0ad20(param_1);
  lVar1 = param_1;
  func_0x00010be36bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110dbf6f8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db9578);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c297e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8a38);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db9458);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf0d6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8a78);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf03740(param_1);
  func_0x00010bf92fc0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8a98);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f000(param_1);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110ea2878);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bfed740(param_1);
  func_0x00010c0df6e0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110ed8a58);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c1048c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110dad538);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf30e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8ab8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0fd0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e32618);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfc11c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea25b8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf93ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea2098);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c259b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea2178);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25a0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea2078);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb1aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8ad8);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bf298a0(param_1);
  func_0x00010c0df6e0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110ed8af8);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010bf983a0(param_1);
  func_0x00010bf92fc0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8b38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xe0),
                      &PTR____CFConstantStringClassReference_110dad058);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x100),
                      &PTR____CFConstantStringClassReference_110e29738);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x1a0),
                      &PTR____CFConstantStringClassReference_110ed8bd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x198),
                      &PTR____CFConstantStringClassReference_110ed8bf8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf21f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar3,&PTR____CFConstantStringClassReference_110ed8c18);
  _objc_release(uVar3);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x160),
                      &PTR____CFConstantStringClassReference_110e77cf8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x168),
                      &PTR____CFConstantStringClassReference_110ed8b18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x148),
                      &PTR____CFConstantStringClassReference_110ed8c58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x108),
                      &PTR____CFConstantStringClassReference_110ed8c78);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x110),
                      &PTR____CFConstantStringClassReference_110ed8c98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x158),
                      &PTR____CFConstantStringClassReference_110ed89f8);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8a18);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c243400();
  func_0x00010bf92fc0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea0638);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1b),
                      &PTR____CFConstantStringClassReference_110ed8b58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x188),
                      &PTR____CFConstantStringClassReference_110ed8b78);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 400),
                      &PTR____CFConstantStringClassReference_110ed8b98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110ed8bb8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0xf8),
                      &PTR____CFConstantStringClassReference_110e5bcb8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110ea21f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1c),
                      &PTR____CFConstantStringClassReference_110ed8cb8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x150),
                      &PTR____CFConstantStringClassReference_110ed8cd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ed8cf8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x180),
                      &PTR____CFConstantStringClassReference_110ed8d18);
  lVar1 = param_1;
  func_0x00010c11ee20();
  func_0x00010bf92fc0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110ed8d38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110ed8d58);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110ed8d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10843a280; end: 10843a283; -[EphemeralMedia _ephemeralMediaWillEncodeObject] */

void FUN_10843a280(void)

{
  return;
}



/* Entry: 10843a284; end: 10843a37b; -[EphemeralMedia _ephemeralMediaDidDecodeObject] */

void FUN_10843a284(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1b0);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    _objc_release(uVar1);
  }
  func_0x00010c196ce0(param_1,param_2,*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0x110));
  lVar2 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1750e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ccc0();
  _objc_release(lVar2);
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10843a37c; end: 10843a403; -[EphemeralMedia setMedia:] */

void FUN_10843a37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  func_0x00010c1750e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  func_0x00010c21ccc0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  func_0x00010c1aa780(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10843a404; end: 10843a48f; -[EphemeralMedia media] */

void FUN_10843a404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d5200;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    func_0x00010c1750e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    func_0x00010c21ccc0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    func_0x00010c1aa780(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10843a490; end: 10843a50b; -[EphemeralMedia setThumbnailMedia:] */

void FUN_10843a490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
  func_0x00010c1750e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
  func_0x00010c1b5040(*(undefined8 *)(param_1 + 0x28),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10843a50c; end: 10843a58b; -[EphemeralMedia thumbnailMedia] */

void FUN_10843a50c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d5200;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar2);
    func_0x00010c189840(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    func_0x00010c1750e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    func_0x00010c1b5040(*(undefined8 *)(param_1 + 0x28),param_2,1);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10843a58c; end: 10843a61f; -[EphemeralMedia setVideoFilter:] */

void FUN_10843a58c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0xe8);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == param_1) {
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xe8),param_2,0);
    }
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(long *)(param_1 + 0xe8) = param_3;
    _objc_release(uVar1);
    func_0x00010c18b5e0(param_3,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10843a620; end: 10843a64f; -[EphemeralMedia targetSetVideoFilter:] */

void FUN_10843a620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843a650; end: 10843a69f; -[EphemeralMedia updateAnnouncer] */

void FUN_10843a650(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x120);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d95f8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *(undefined **)(param_1 + 0x120) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x120);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10843a6a0; end: 10843a76f; -[EphemeralMedia setEphemeralMediaKey:ephemeralMediaIv:] */

void FUN_10843a6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  func_0x00010c020b60();
  func_0x00010c195620(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x80));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10843a770; end: 10843a7cf; -[EphemeralMedia rotationLocked] */

byte FUN_10843a770(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010c27dd80();
  bVar2 = 0;
  if ((uVar1 < 0x1b) && ((1L << (uVar1 & 0x3f) & 0x7e7fc60U) != 0)) {
    FUN_108544644();
    if ((uint)uVar1 < 0xc) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1b);
    }
  }
  return bVar2 & 1;
}



/* Entry: 10843a7d0; end: 10843a7d7; -[EphemeralMedia isStoryMedia] */

undefined8 FUN_10843a7d0(void)

{
  return 0;
}



/* Entry: 10843a7d8; end: 10843a837; -[EphemeralMedia endpointForMedia:] */

undefined8
FUN_10843a7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10843a838; end: 10843a897; -[EphemeralMedia mediaIdForMedia:] */

undefined8
FUN_10843a838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10843a898; end: 10843a903; -[EphemeralMedia decryptData:forMedia:] */

undefined8
FUN_10843a898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 10843a904; end: 10843a90b; -[EphemeralMedia encryptionDictionaryForMedia:] */

undefined8 FUN_10843a904(void)

{
  return 0;
}



/* Entry: 10843a90c; end: 10843a95f; -[EphemeralMedia persist] */

void FUN_10843a90c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843a960; end: 10843a9b3; -[EphemeralMedia encrypt] */

void FUN_10843a960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843a9b4; end: 10843aa07; -[EphemeralMedia needsAuthToFetch] */

void FUN_10843a9b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843aa08; end: 10843aa5b; -[EphemeralMedia requestContexts] */

void FUN_10843aa08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843aa5c; end: 10843aabb; -[EphemeralMedia expirationForMedia:] */

void FUN_10843aa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843aabc; end: 10843ab1b; -[EphemeralMedia encryptionKeyForMedia:] */

void FUN_10843aabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843ab1c; end: 10843ab7b; -[EphemeralMedia encryptionIvForMedia:] */

void FUN_10843ab1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843ab7c; end: 10843abdb; -[EphemeralMedia shouldEncryptOnDiskForMedia:] */

void FUN_10843ab7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843abdc; end: 10843ac3b; -[EphemeralMedia isMediaAlreadyEncrypted:] */

void FUN_10843abdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10843ac3c; end: 10843ac3f; -[EphemeralMedia mediaType] */

void FUN_10843ac3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_type_11267d188);
  return;
}



/* Entry: 10843ac40; end: 10843ac8f; -[EphemeralMedia durationMs] */

void FUN_10843ac40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0830a0();
  if ((int)lVar1 != 0) {
    func_0x00010c0df720(*(double *)(param_1 + 0xd8) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10843ac90; end: 10843ace7; -[EphemeralMedia isVideo] */

uint FUN_10843ac90(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x00010c27dd80();
  uVar1 = param_1 + 1;
  uVar2 = 1;
  if (uVar1 < 0x1b) {
    uVar2 = 0x1394288 >> (ulong)((uint)uVar1 & 0x1f);
  }
  if (0x1b < uVar1 || (1L << (uVar1 & 0x3f) & 0xb4b5dbbU) == 0) {
    uVar2 = 1;
  }
  return uVar2 & 1;
}



/* Entry: 10843ace8; end: 10843ad1b; -[EphemeralMedia isVideoWithSound] */

uint FUN_10843ace8(long param_1)

{
  func_0x00010c27dd80();
  return (uint)(0x1b < param_1 + 1U) | 0x4b4a244U >> (ulong)((uint)(param_1 + 1U) & 0x1f) & 1;
}



/* Entry: 10843ad1c; end: 10843ad4f; -[EphemeralMedia isImage] */

uint FUN_10843ad1c(long param_1)

{
  func_0x00010c27dd80();
  return (uint)(0x1b < param_1 + 1U) | 0x2721a02U >> (ulong)((uint)(param_1 + 1U) & 0x1f) & 1;
}



/* Entry: 10843ad50; end: 10843ad57; -[EphemeralMedia isVideoStreaming] */

undefined8 FUN_10843ad50(void)

{
  return 0;
}



/* Entry: 10843ad58; end: 10843adf3; -[EphemeralMedia isSpectaclesVideo] */

uint FUN_10843ad58(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x00010c27dd80();
  uVar1 = param_1 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xb4b5dbbU) == 0) {
      uVar2 = (uint)((1L << (uVar1 & 0x3f) & 0x484a040U) != 0);
      goto LAB_10843ade8;
    }
    if (param_1 < 0x1b) {
      uVar2 = 0;
      if (((uint)(param_1 + 1 < 0x1b) & 0x6c6bd77U >> (ulong)((uint)(param_1 + 1) & 0x1f)) == 0) {
        uVar2 = 0x7e7fc60 >> (ulong)((uint)param_1 & 0x1f);
      }
      goto LAB_10843ade8;
    }
  }
  uVar2 = 0;
LAB_10843ade8:
  return uVar2 & 1;
}



/* Entry: 10843adf4; end: 10843ae1f; -[EphemeralMedia isSpectaclesImage] */

uint FUN_10843adf4(ulong param_1)

{
  func_0x00010c27dd80();
  return (uint)(param_1 < 0x19) & 0x1210c00U >> (ulong)((uint)param_1 & 0x1f);
}



/* Entry: 10843ae20; end: 10843ae3b; -[EphemeralMedia isCheeriosImage] */

bool FUN_10843ae20(long param_1)

{
  func_0x00010c27dd80();
  return param_1 == 0x18;
}



/* Entry: 10843ae3c; end: 10843ae7b; -[EphemeralMedia isCheeriosVideo] */

bool FUN_10843ae3c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c27dd80();
  if (lVar2 == 0x19) {
    bVar1 = true;
  }
  else {
    func_0x00010c27dd80(param_1);
    bVar1 = param_1 == 0x1a;
  }
  return bVar1;
}



/* Entry: 10843ae7c; end: 10843aec7; -[EphemeralMedia isCircularMedia] */

bool FUN_10843ae7c(ulong param_1)

{
  bool bVar1;
  
  func_0x00010c27dd80();
  bVar1 = false;
  if ((param_1 < 0x1b) && ((1L << (param_1 & 0x3f) & 0x7e7fc60U) != 0)) {
    FUN_108544644(param_1);
    bVar1 = (uint)param_1 < 9;
  }
  return bVar1;
}



/* Entry: 10843aec8; end: 10843aee3; -[EphemeralMedia isAudioStitch] */

bool FUN_10843aec8(long param_1)

{
  func_0x00010c27dd80();
  return param_1 == 9;
}



/* Entry: 10843aee4; end: 10843aee7; -[EphemeralMedia uploadMediaIdForMedia:] */

void FUN_10843aee4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clientId_1125acd80);
  return;
}



/* Entry: 10843aee8; end: 10843af2b; -[EphemeralMedia mediaUploadDidSucceedForMedia:] */

void FUN_10843aee8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c196d20(param_1,param_2,0xfffffffffffffffe);
  func_0x00010c2836a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10843af2c; end: 10843af63; -[EphemeralMedia mediaUploadDidStart:] */

void FUN_10843af2c(undefined8 param_1)

{
  func_0x00010c2836a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf983e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10843af64; end: 10843af93; -[EphemeralMedia encryptionKey] */

void FUN_10843af64(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c125940();
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10843af94; end: 10843afc3; -[EphemeralMedia encryptionIv] */

void FUN_10843af94(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c125940();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10843afc4; end: 10843b007; -[EphemeralMedia captureSessionId] */

void FUN_10843afc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10843b008; end: 10843b09b; -[EphemeralMedia regenerateKeyIvIfNeeded] */

void FUN_10843b008(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0x108) != 0) && (*(long *)(param_1 + 0x110) != 0)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ce0(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10843b09c; end: 10843b0df; -[EphemeralMedia mediaUploadDidFailForMedia:] */

void FUN_10843b09c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c196d20(param_1,param_2,0xfffffffffffffffb);
  func_0x00010c2836a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf983c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10843b0e0; end: 10843b11f; -[EphemeralMedia uploadMedia] */

void FUN_10843b0e0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c196d20(param_1,param_2,0xfffffffffffffffc);
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10843b120; end: 10843b1f7; -[EphemeralMedia imageProcessingDidCompleteForMedia:] */

void FUN_10843b120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe8680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == param_1) {
    lVar1 = param_1;
    func_0x00010c2836a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98300();
    _objc_release(lVar1);
    func_0x00010c28e1c0(param_1);
  }
  else {
    func_0x00010c0c3fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfe8680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe86a0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10843b1f8; end: 10843b29f; -[EphemeralMedia timeToSendHasExpired] */

bool FUN_10843b1f8(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0xc0f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfb1aa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bfb1aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf433a0(puVar2,param_2,param_1);
    bVar1 = puVar4 == (undefined *)0x1;
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10843b2a0; end: 10843b2f3; -[EphemeralMedia logId] */

void FUN_10843b2a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10843b2f4; end: 10843b437; -[EphemeralMedia requestKeyWithIds] */

void FUN_10843b2f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf42a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = lVar3;
    func_0x00010bf31200(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,param_1);
    _objc_release(param_1);
    lVar4 = param_1;
  }
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  puVar5 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10843b438; end: 10843b68f; -[EphemeralMedia fallbackToSendAsImageWithFilter:error:] */

void FUN_10843b438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10843b508;
  puStack_50 = &UNK_1108497e0;
  uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc0320(param_3,param_2,&uStack_80,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10843b690; end: 10843b73b;  */

void FUN_10843b690(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c3fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe86c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843b73c; end: 10843b7bf; -[EphemeralMedia videoProcessingDidFinishMultiSnapOverlay:] */

void FUN_10843b73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7540();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d77a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10843b7c0; end: 10843bad7; -[EphemeralMedia videoProcessingDidSucceedForSnapVideoFilter:data:] */

void FUN_10843b7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c077480(PTR__OBJC_CLASS___NSThread_1126b47e0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10843b884;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10843bad8; end: 10843bc33; -[EphemeralMedia videoProcessingDidFailForSnapVideoFilter:retriable:error:] */

void FUN_10843bad8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c077480(PTR__OBJC_CLASS___NSThread_1126b47e0);
  lVar1 = param_3;
  func_0x00010c241520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c196d20(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x000108552d14(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76260(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10843bc34;
    puStack_60 = &UNK_110842e18;
    lStack_58 = param_1;
    func_0x000107c312d0("APPSTORE",&puStack_78);
  }
  else {
    func_0x00010bfa05e0(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10843bc34; end: 10843bc7b;  */

void FUN_10843bc34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c196d20(*(undefined8 *)(param_1 + 0x20),param_2,0xfffffffffffffff9);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2836a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10843bc7c; end: 10843bd2b; -[EphemeralMedia videoProcessingDone] */

void FUN_10843bc7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c29a0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf64840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c2836a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98440();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uploadMedia_112681298);
    return;
  }
  return;
}



/* Entry: 10843bd2c; end: 10843bd33; -[EphemeralMedia rankingSignalsBase64String] */

undefined8 FUN_10843bd2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10843bd34; end: 10843bd3b; -[EphemeralMedia setRankingSignalsBase64String:] */

void FUN_10843bd34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10843bd3c; end: 10843bd6b; -[EphemeralMedia setCommonLoggingParamsBuilder:] */

void FUN_10843bd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



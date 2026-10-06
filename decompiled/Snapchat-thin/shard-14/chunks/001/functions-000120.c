/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afffe20; end: 10afffe27; -[SCPremiumPublisherStory hasCuratedSnaps] */

undefined1 FUN_10afffe20(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afffe28; end: 10afffe2f; -[SCPremiumPublisherStory isShareable] */

undefined1 FUN_10afffe28(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afffe30; end: 10afffe37; -[SCPremiumPublisherStory totalNumSnaps] */

undefined8 FUN_10afffe30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afffe38; end: 10afffe3f; -[SCPremiumPublisherStory maxSequence] */

undefined8 FUN_10afffe38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afffe40; end: 10afffe47; -[SCPremiumPublisherStory storyViewCount] */

undefined8 FUN_10afffe40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10afffe48; end: 10afffe4f; -[SCPremiumPublisherStory indicatorType] */

undefined8 FUN_10afffe48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10afffe50; end: 10afffe57; -[SCPremiumPublisherStory contentToken] */

undefined8 FUN_10afffe50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10afffe58; end: 10afffe5f; -[SCPremiumPublisherStory originalPublishTimestampMsecs] */

undefined8 FUN_10afffe58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10afffe60; end: 10afffecb; -[SCPremiumPublisherStory .cxx_destruct] */

void FUN_10afffe60(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afffecc; end: 10afffee7; +[SCPremiumPublisherStoryBuilder premiumPublisherStory] */

void FUN_10afffecc(void)

{
  _objc_alloc_init(PTR_PTR_1126ceed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afffee8; end: 10b0002e7; +[SCPremiumPublisherStoryBuilder premiumPublisherStoryFromExistingPremiumPublisherStory:] */

void FUN_10afffee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  
  puVar1 = PTR_PTR_1126ceed0;
  _objc_retain(param_3);
  func_0x00010c108de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b6480(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf8c980(param_3);
  puVar5 = puVar3;
  func_0x00010c2acc80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c158300(param_3);
  puVar6 = puVar5;
  func_0x00010c2b8020(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2af6c0(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2af940(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c11b6a0(param_3);
  puVar11 = puVar9;
  func_0x00010c2b6580(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c076ae0(param_3);
  puVar12 = puVar11;
  func_0x00010c2b0d40(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2b9a60(puVar12,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2bcc20(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c2387e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b8e20(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bfd5fc0(param_3);
  puVar19 = puVar17;
  func_0x00010c2af200(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c07dbe0(param_3);
  puVar20 = puVar19;
  func_0x00010c2b14a0(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c2768e0(param_3);
  puVar21 = puVar20;
  func_0x00010c2bb900(puVar20,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c0c2d60(param_3);
  puVar22 = puVar21;
  func_0x00010c2b3700(puVar21,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c25b900(param_3);
  puVar23 = puVar22;
  func_0x00010c2ba760(puVar22,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bfed580(param_3);
  puVar24 = puVar23;
  func_0x00010c2afc40(puVar23,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf4d8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c2aaf40(puVar24,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c0ed800(param_3);
  _objc_release(param_3);
  puVar27 = puVar25;
  func_0x00010c2b5180(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  _objc_release(uVar18);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 10b0002e8; end: 10b00035b; -[SCPremiumPublisherStoryBuilder build] */

void FUN_10b0002e8(void)

{
  _objc_alloc(PTR_PTR_1126ced68);
  func_0x00010c03c020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b00035c; end: 10b000393; -[SCPremiumPublisherStoryBuilder withPublisher:] */

long FUN_10b00035c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b000394; end: 10b00039b; -[SCPremiumPublisherStoryBuilder withEditionId:] */

void FUN_10b000394(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b00039c; end: 10b0003a3; -[SCPremiumPublisherStoryBuilder withSegmentId:] */

void FUN_10b00039c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b0003a4; end: 10b0003db; -[SCPremiumPublisherStoryBuilder withHeadline:] */

long FUN_10b0003a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0003dc; end: 10b000413; -[SCPremiumPublisherStoryBuilder withIconURL:] */

long FUN_10b0003dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b000414; end: 10b00041b; -[SCPremiumPublisherStoryBuilder withPublisherTimestampMsecs:] */

void FUN_10b000414(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b00041c; end: 10b000423; -[SCPremiumPublisherStoryBuilder withIsLive:] */

void FUN_10b00041c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b000424; end: 10b00045b; -[SCPremiumPublisherStoryBuilder withSnaps:] */

long FUN_10b000424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b00045c; end: 10b000493; -[SCPremiumPublisherStoryBuilder withWatchedState:] */

long FUN_10b00045c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b000494; end: 10b0004cb; -[SCPremiumPublisherStoryBuilder withShowMetadata:] */

long FUN_10b000494(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0004cc; end: 10b0004d3; -[SCPremiumPublisherStoryBuilder withHasCuratedSnaps:] */

void FUN_10b0004cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b0004d4; end: 10b0004db; -[SCPremiumPublisherStoryBuilder withIsShareable:] */

void FUN_10b0004d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 10b0004dc; end: 10b0004e3; -[SCPremiumPublisherStoryBuilder withTotalNumSnaps:] */

void FUN_10b0004dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b0004e4; end: 10b0004eb; -[SCPremiumPublisherStoryBuilder withMaxSequence:] */

void FUN_10b0004e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b0004ec; end: 10b0004f3; -[SCPremiumPublisherStoryBuilder withStoryViewCount:] */

void FUN_10b0004ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10b0004f4; end: 10b0004fb; -[SCPremiumPublisherStoryBuilder withIndicatorType:] */

void FUN_10b0004f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10b0004fc; end: 10b000533; -[SCPremiumPublisherStoryBuilder withContentToken:] */

long FUN_10b0004fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b000534; end: 10b00053b; -[SCPremiumPublisherStoryBuilder withOriginalPublishTimestampMsecs:] */

void FUN_10b000534(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10b00053c; end: 10b0005a7; -[SCPremiumPublisherStoryBuilder .cxx_destruct] */

void FUN_10b00053c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0005a8; end: 10b000697; -[SCLongformAdInterval initWithCoder:] */

undefined1 *
FUN_10b0005a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127041a0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    fVar4 = (float)param_1;
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x28) = (double)fVar4;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b000698; end: 10b000763; -[SCLongformAdInterval initWithStartTime:snapId:adPlacementMetadata:isOptionalAdSlot:score:] */

undefined1 *
FUN_10b000698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127041a0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
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
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b000764; end: 10b000787; -[SCLongformAdInterval copyWithZone:] */

undefined8 FUN_10b000764(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b000788; end: 10b000827; -[SCLongformAdInterval encodeWithCoder:] */

void FUN_10b000788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110efd9d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f4a258);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f4a458);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x28),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e89378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b000828; end: 10b0008e7; -[SCLongformAdInterval hash] */

ulong * FUN_10b000828(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar3;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_10b0009e0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0009ec;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)((long)puVar4 + 8) == param_3[8])) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
        dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if ((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
          if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b0009ec;
          }
          goto LAB_10b0009e0;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b0009ec:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 10b0008e8; end: 10b000a07; -[SCLongformAdInterval isEqual:] */

long FUN_10b0008e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0009e0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0009ec;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b0009ec;
          }
          goto LAB_10b0009e0;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b0009ec:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b000a08; end: 10b000a0f; -[SCLongformAdInterval startTime] */

undefined8 FUN_10b000a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b000a10; end: 10b000a17; -[SCLongformAdInterval snapId] */

undefined8 FUN_10b000a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b000a18; end: 10b000a1f; -[SCLongformAdInterval adPlacementMetadata] */

undefined8 FUN_10b000a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b000a20; end: 10b000a27; -[SCLongformAdInterval isOptionalAdSlot] */

undefined1 FUN_10b000a20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b000a28; end: 10b000a2f; -[SCLongformAdInterval score] */

undefined8 FUN_10b000a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b000a30; end: 10b000a5f; -[SCLongformAdInterval .cxx_destruct] */

void FUN_10b000a30(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b000a60; end: 10b000b23; -[SCLongformShowWatchedState initWithCoder:] */

undefined1 * FUN_10b000a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127041a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b000b24; end: 10b000bbf; -[SCLongformShowWatchedState initWithLastWatchedVideoId:videoProgressMsecs:approximateProgress:isFullyViewed:] */

undefined1 *
FUN_10b000b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1127041a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b000bc0; end: 10b000be3; -[SCLongformShowWatchedState copyWithZone:] */

undefined8 FUN_10b000bc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b000be4; end: 10b000c6b; -[SCLongformShowWatchedState encodeWithCoder:] */

void FUN_10b000be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f4a478);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4a498);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f49db8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f491f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b000c6c; end: 10b000ce7; -[SCLongformShowWatchedState hash] */

undefined8 * FUN_10b000c6c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_48;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b000d8c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((puVar2[3] != param_3[3] || (puVar2[4] != param_3[4])) ||
        (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b000d8c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b000d8c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b000d8c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b000ce8; end: 10b000da7; -[SCLongformShowWatchedState isEqual:] */

long FUN_10b000ce8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b000d8c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) ||
        (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))))) {
      lVar3 = 0;
      goto LAB_10b000d8c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b000d8c;
    }
  }
  lVar3 = 1;
LAB_10b000d8c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b000da8; end: 10b000daf; -[SCLongformShowWatchedState lastWatchedVideoId] */

undefined8 FUN_10b000da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b000db0; end: 10b000db7; -[SCLongformShowWatchedState videoProgressMsecs] */

undefined8 FUN_10b000db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b000db8; end: 10b000dbf; -[SCLongformShowWatchedState approximateProgress] */

undefined8 FUN_10b000db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b000dc0; end: 10b000dc7; -[SCLongformShowWatchedState isFullyViewed] */

undefined1 FUN_10b000dc0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b000dc8; end: 10b000dd3; -[SCLongformShowWatchedState .cxx_destruct] */

void FUN_10b000dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b000dd4; end: 10b000f4b; -[SCLongformSnap initWithCoder:] */

undefined1 *
FUN_10b000dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127041b0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b000f4c; end: 10b0010cf; -[SCLongformSnap initWithVideoId:videoUrl:chapterIntervals:adIntervals:optionalAdIntervals:durationMs:hostUserId:garmBrandSafety:] */

undefined1 *
FUN_10b000f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1127041b0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0010d0; end: 10b0010f3; -[SCLongformSnap copyWithZone:] */

undefined8 FUN_10b0010d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0010f4; end: 10b0011cb; -[SCLongformSnap encodeWithCoder:] */

void FUN_10b0010f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f4a4b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f4a4d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4a4f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f4a518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4a538);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x30),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f4a558);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ed3538);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110ed3738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0011cc; end: 10b00129f; -[SCLongformSnap hash] */

undefined8 * FUN_10b0011cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_48 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x40);
  lStack_30 = -lVar7;
  if (-1 < lVar7) {
    lStack_30 = lVar7;
  }
  puVar5 = &uStack_68;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10b0013c4:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0013d0;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (puVar5[8] == param_3[8])) {
      dVar11 = ABS((double)puVar5[6] - (double)param_3[6]);
      dVar10 = ABS((double)puVar5[6] + (double)param_3[6]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if ((((bVar1) &&
           ((lVar7 = puVar5[1], lVar7 == param_3[1] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
          && ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
         && ((((lVar7 = puVar5[3], lVar7 == param_3[3] || (func_0x00010c071ae0(), (int)lVar7 != 0))
              && ((lVar7 = puVar5[4], lVar7 == param_3[4] ||
                  (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             ((lVar7 = puVar5[5], lVar7 == param_3[5] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
            )) {
        puVar9 = (undefined8 *)puVar5[7];
        if (puVar9 != (undefined8 *)param_3[7]) {
          func_0x00010c071ae0();
          goto LAB_10b0013d0;
        }
        goto LAB_10b0013c4;
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10b0013d0:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10b0012a0; end: 10b0013eb; -[SCLongformSnap isEqual:] */

long FUN_10b0012a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0013c4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0013d0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_10b0013d0;
        }
        goto LAB_10b0013c4;
      }
    }
    lVar4 = 0;
  }
LAB_10b0013d0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0013ec; end: 10b0013f3; -[SCLongformSnap videoId] */

undefined8 FUN_10b0013ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0013f4; end: 10b0013fb; -[SCLongformSnap videoUrl] */

undefined8 FUN_10b0013f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0013fc; end: 10b001403; -[SCLongformSnap chapterIntervals] */

undefined8 FUN_10b0013fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b001404; end: 10b00140b; -[SCLongformSnap adIntervals] */

undefined8 FUN_10b001404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b00140c; end: 10b001413; -[SCLongformSnap optionalAdIntervals] */

undefined8 FUN_10b00140c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b001414; end: 10b00141b; -[SCLongformSnap durationMs] */

undefined8 FUN_10b001414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b00141c; end: 10b001423; -[SCLongformSnap hostUserId] */

undefined8 FUN_10b00141c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b001424; end: 10b00142b; -[SCLongformSnap garmBrandSafety] */

undefined8 FUN_10b001424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b00142c; end: 10b00148b; -[SCLongformSnap .cxx_destruct] */

void FUN_10b00142c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b00148c; end: 10b001523; +[SCLongformSnapAttachment cameraAttachmentWithCameraAttachment:callToActionText:] */

void FUN_10b00148c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cc750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b001524; end: 10b0015e7; +[SCLongformSnapAttachment commerceAttachmentWithStoreId:productIds:callToActionText:] */

void FUN_10b001524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cc750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0015e8; end: 10b00167f; +[SCLongformSnapAttachment longformAttachmentWithLongformAttachment:callToActionText:] */

void FUN_10b0015e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cc750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b001680; end: 10b0017e7; +[SCLongformSnapAttachment webPageAttachmentWithUrl:attachmentId:blockExternalSharing:allowWebStorage:allowedWebviewMacros:sharingMethod:callToActionText:remoteWebBridgeCapabilities:remoteWebAllowAutoDetectAutofill:isAffiliate:] */

void FUN_10b001680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126cc750;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  puVar2[0x38] = param_5;
  puVar2[0x39] = param_6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x48) = param_8;
  *(undefined8 *)(puVar2 + 0x50) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_10;
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x60] = (undefined1)param_11;
  puVar2[0x61] = param_11._1_1_;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0017e8; end: 10b001bc3; -[SCLongformSnapAttachment initWithCoder:] */

undefined8 * FUN_10b0017e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1127041b8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = unaff_x21;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) goto LAB_10b001b50;
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[0xf];
          puVar1[0xf] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[0x10];
          puVar1[0x10] = uVar4;
          _objc_release(uVar3);
          uVar4 = 3;
        }
        else {
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[0xd];
          puVar1[0xd] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[0xe];
          puVar1[0xe] = uVar4;
          _objc_release(uVar3);
          uVar4 = 2;
        }
      }
      else {
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[5];
        puVar1[5] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[6];
        puVar1[6] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf66ce0();
        *(char *)(puVar1 + 7) = (char)uVar4;
        uVar4 = param_3;
        func_0x00010bf66ce0();
        *(char *)((long)puVar1 + 0x39) = (char)uVar4;
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[8];
        puVar1[8] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[9] = uVar4;
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[10];
        puVar1[10] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[0xb];
        puVar1[0xb] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf66ce0();
        *(char *)(puVar1 + 0xc) = (char)uVar4;
        uVar4 = param_3;
        func_0x00010bf66ce0();
        *(char *)((long)puVar1 + 0x61) = (char)uVar4;
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[2];
      puVar1[2] = uVar4;
      _objc_release(uVar3);
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[3];
      puVar1[3] = uVar4;
      _objc_release(uVar3);
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[4];
      puVar1[4] = uVar4;
      _objc_release(uVar3);
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b001b50:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b001bc4; end: 10b001be7; -[SCLongformSnapAttachment copyWithZone:] */

undefined8 FUN_10b001bc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b001be8; end: 10b001dcb; -[SCLongformSnapAttachment encodeWithCoder:] */

void FUN_10b001be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                          &PTR____CFConstantStringClassReference_110f4a598);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                          &PTR____CFConstantStringClassReference_110f4a5b8);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                          &PTR____CFConstantStringClassReference_110f4a5d8);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f4a578;
    }
    else {
      if (lVar2 != 1) goto LAB_10b001dbc;
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                          &PTR____CFConstantStringClassReference_110f4a618);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                          &PTR____CFConstantStringClassReference_110f4a638);
      func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x38),
                          &PTR____CFConstantStringClassReference_110f4a658);
      func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x39),
                          &PTR____CFConstantStringClassReference_110f4a678);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                          &PTR____CFConstantStringClassReference_110f4a698);
      func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                          &PTR____CFConstantStringClassReference_110f4a6b8);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                          &PTR____CFConstantStringClassReference_110f4a6d8);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                          &PTR____CFConstantStringClassReference_110f4a6f8);
      func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x60),
                          &PTR____CFConstantStringClassReference_110f4a718);
      func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x61),
                          &PTR____CFConstantStringClassReference_110f4a738);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f4a5f8;
    }
  }
  else if (lVar2 == 2) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                        &PTR____CFConstantStringClassReference_110f4a778);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                        &PTR____CFConstantStringClassReference_110f4a798);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f4a758;
  }
  else {
    if (lVar2 != 3) goto LAB_10b001dbc;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                        &PTR____CFConstantStringClassReference_110f4a7d8);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                        &PTR____CFConstantStringClassReference_110f4a7f8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f4a7b8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b001dbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b001dcc; end: 10b001edf; -[SCLongformSnapAttachment hash] */

void FUN_10b001dcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 0x38);
  uStack_80 = (ulong)*(byte *)(param_1 + 0x39);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x48);
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  lStack_70 = -lVar1;
  if (-1 < lVar1) {
    lStack_70 = lVar1;
  }
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 0x60);
  uStack_50 = (ulong)*(byte *)(param_1 + 0x61);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_b8;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar4,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_e8 = PTR_PTR_1127041b8;
  puStack_f0 = puVar4;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b001ee0; end: 10b001f23; -[SCLongformSnapAttachment internalInit] */

void FUN_10b001ee0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127041b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b001f24; end: 10b00211b; -[SCLongformSnapAttachment isEqual:] */

long FUN_10b001f24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0020f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b002100;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
           (*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38))) &&
          (*(char *)(param_1 + 0x39) == *(char *)(param_3 + 0x39))) &&
         ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(char *)(param_1 + 0x60) == *(char *)(param_3 + 0x60))))))) &&
       (*(char *)(param_1 + 0x61) == *(char *)(param_3 + 0x61))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x78);
                          if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x80);
                            if (lVar3 != *(long *)(param_3 + 0x80)) {
                              func_0x00010c071ae0();
                              goto LAB_10b002100;
                            }
                            goto LAB_10b0020f4;
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
LAB_10b002100:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b00211c; end: 10b00223b; -[SCLongformSnapAttachment matchCommerceAttachment:webPageAttachment:cameraAttachment:longformAttachment:] */

void FUN_10b00211c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20));
      }
    }
    else if ((lVar3 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined1 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x39),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                 *(undefined2 *)(param_1 + 0x60));
    }
  }
  else {
    if (lVar3 == 2) {
      if (param_5 == 0) goto LAB_10b002208;
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      pcVar4 = *(code **)(param_5 + 0x10);
      lVar3 = param_5;
    }
    else {
      if ((lVar3 != 3) || (param_6 == 0)) goto LAB_10b002208;
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    (*pcVar4)(lVar3,uVar1,uVar2);
  }
LAB_10b002208:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b00223c; end: 10b0022e3; -[SCLongformSnapAttachment .cxx_destruct] */

void FUN_10b00223c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0022e4; end: 10b00241f; -[SCLongformSnapInterval initWithCoder:] */

undefined1 *
FUN_10b0022e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127041c0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b002420; end: 10b002567; -[SCLongformSnapInterval initWithStartTime:snapId:attachment:boostMetadata:firstFrameContentObject:overlayImageContentObject:] */

undefined1 *
FUN_10b002420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127041c0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b002568; end: 10b00258b; -[SCLongformSnapInterval copyWithZone:] */

undefined8 FUN_10b002568(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b00258c; end: 10b00263b; -[SCLongformSnapInterval encodeWithCoder:] */

void FUN_10b00258c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92e80(uVar1,param_3,param_2,&PTR____CFConstantStringClassReference_110efd9d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f4a818);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ed36b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4a838);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f4a858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b00263c; end: 10b0026f7; -[SCLongformSnapInterval hash] */

ulong * FUN_10b00263c(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  double dVar8;
  double dVar9;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_58;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b0027f4:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b002800;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((ulong)puVar5 & 1) != 0) {
      dVar9 = ABS((double)puVar4[1] - (double)param_3[1]);
      dVar8 = ABS((double)puVar4[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if ((((bVar1) &&
           ((uVar6 = puVar4[2], uVar6 == param_3[2] || (func_0x00010c071ae0(), (int)uVar6 != 0))))
          && ((uVar6 = puVar4[3], uVar6 == param_3[3] || (func_0x00010c071ae0(), (int)uVar6 != 0))))
         && (((uVar6 = puVar4[4], uVar6 == param_3[4] || (func_0x00010c071ae0(), (int)uVar6 != 0))
             && ((uVar6 = puVar4[5], uVar6 == param_3[5] || (func_0x00010c071ae0(), (int)uVar6 != 0)
                 ))))) {
        puVar7 = (ulong *)puVar4[6];
        if (puVar7 != (ulong *)param_3[6]) {
          func_0x00010c071ae0();
          goto LAB_10b002800;
        }
        goto LAB_10b0027f4;
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b002800:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b0026f8; end: 10b00281b; -[SCLongformSnapInterval isEqual:] */

long FUN_10b0026f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0027f4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b002800;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b002800;
        }
        goto LAB_10b0027f4;
      }
    }
    lVar4 = 0;
  }
LAB_10b002800:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b00281c; end: 10b002823; -[SCLongformSnapInterval startTime] */

undefined8 FUN_10b00281c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b002824; end: 10b00282b; -[SCLongformSnapInterval snapId] */

undefined8 FUN_10b002824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b00282c; end: 10b002833; -[SCLongformSnapInterval attachment] */

undefined8 FUN_10b00282c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b002834; end: 10b00283b; -[SCLongformSnapInterval boostMetadata] */

undefined8 FUN_10b002834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b00283c; end: 10b002843; -[SCLongformSnapInterval firstFrameContentObject] */

undefined8 FUN_10b00283c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b002844; end: 10b00284b; -[SCLongformSnapInterval overlayImageContentObject] */

undefined8 FUN_10b002844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b00284c; end: 10b00289f; -[SCLongformSnapInterval .cxx_destruct] */

void FUN_10b00284c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0028a0; end: 10b00299b; -[SCDiscoverFeedShowsWatchState initWithEpisodeId:showId:lastWatchedSnapId:lastWatchedSnapProgressMs:approximateProgress:clientTimestampMs:] */

undefined1 *
FUN_10b0028a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1127041c8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
    *(undefined4 *)((long)puVar1 + 8) = param_7;
    *(undefined4 *)((long)puVar1 + 0xc) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b00299c; end: 10b0029bf; -[SCDiscoverFeedShowsWatchState copyWithZone:] */

undefined8 FUN_10b00299c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0029c0; end: 10b002a73; -[SCDiscoverFeedShowsWatchState hash] */

undefined8 * FUN_10b0029c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  lStack_40 = (long)(int)*(undefined8 *)(param_1 + 8);
  lStack_38 = (long)(int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b002b60:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b002b6c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(int *)(puVar4 + 1) == *(int *)(param_3 + 1) &&
        (*(int *)((long)puVar4 + 0xc) == *(int *)((long)param_3 + 0xc))))) {
      dVar10 = ABS((double)puVar4[5] - (double)param_3[5]);
      dVar9 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[4];
        if (puVar8 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b002b6c;
        }
        goto LAB_10b002b60;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b002b6c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b002a74; end: 10b002b87; -[SCDiscoverFeedShowsWatchState isEqual:] */

long FUN_10b002a74(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b002b60:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b002b6c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b002b6c;
        }
        goto LAB_10b002b60;
      }
    }
    lVar4 = 0;
  }
LAB_10b002b6c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b002b88; end: 10b002b8f; -[SCDiscoverFeedShowsWatchState episodeId] */

undefined8 FUN_10b002b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b002b90; end: 10b002b97; -[SCDiscoverFeedShowsWatchState showId] */

undefined8 FUN_10b002b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



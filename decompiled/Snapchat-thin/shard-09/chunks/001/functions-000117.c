/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a2a13c; end: 106a2a247;  */

void FUN_106a2a13c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(uVar3,uVar4);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar1);
  _objc_release(puVar2);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1fe840(0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2a248; end: 106a2a283; -[SCChatInputAudioNoteTrack _createViews] */

void FUN_106a2a248(undefined8 param_1)

{
  func_0x00010bdeb680();
  func_0x00010bdeaf60(param_1);
  func_0x00010bdebc80(param_1);
  func_0x00010bdebfa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdf35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createSlideLabel_11255a718);
  return;
}



/* Entry: 106a2a284; end: 106a2a6ff; -[SCChatInputAudioNoteTrack _createBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2a284(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar6 = (long)_DAT_1127560d4;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar5);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar6),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c274200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ee20(puVar1,param_2,puVar3);
  lVar7 = (long)_DAT_1127560ec;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
  _objc_release(puVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar7));
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c2793a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c274200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c274200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf1ff80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a2a700; end: 106a2a71f; -[SCChatInputAudioNoteTrack _audioNoteRecordingIconImage] */

void FUN_106a2a700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4041000000000000,0x4041000000000000,PTR_PTR_1126b0c40,
             PTR_s_imageFromIconType_size_sigColor__1125d7888,0x2e7,0x9e);
  return;
}



/* Entry: 106a2a720; end: 106a2a7b3; -[SCChatInputAudioNoteTrack _createAudioNoteIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2a720(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bdd1280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  lVar4 = (long)_DAT_1127560dc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 106a2a7b4; end: 106a2a84b; -[SCChatInputAudioNoteTrack _createCancelIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2a7b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e67a98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar4 = (long)_DAT_1127560d8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a2a84c; end: 106a2a993; -[SCChatInputAudioNoteTrack _createChevron] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2a84c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e67c38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar4 = (long)_DAT_1127560e4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4));
  FUN_106a2a994(&uStack_70,*(undefined8 *)(param_1 + lVar4));
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar4));
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar4 = (long)_DAT_1127560e0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4));
  FUN_106a2a994(&uStack_d0,*(undefined8 *)(param_1 + lVar4));
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a2a994; end: 106a2aa03;  */

void FUN_106a2a994(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0(param_2);
  func_0x00010c292b00();
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (puVar2 == (undefined *)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbaaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGAffineTransformMakeRotation_110347020)(param_1,0x400921fb54442d18);
    return;
  }
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar3;
  return;
}



/* Entry: 106a2aa04; end: 106a2aaf3; -[SCChatInputAudioNoteTrack _createSlideLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2aa04(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar4 = (long)_DAT_1127560e8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e67c58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67c58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(ppuVar2);
  func_0x00010c1c83a0(0x3fe6666666666666,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 106a2aaf4; end: 106a2ab27; -[SCChatInputAudioNoteTrack _constructConstraints] */

void FUN_106a2aaf4(undefined8 param_1)

{
  func_0x00010bde6900();
  func_0x00010bde6960(param_1);
  func_0x00010bde6f60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bde68d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constructAudioNoteIconConstrain_1125573d0);
  return;
}



/* Entry: 106a2ab28; end: 106a2ad27; -[SCChatInputAudioNoteTrack _constructCancelIconConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2ab28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127560d8;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4010000000000000,uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c274200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4008000000000000,uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf1ff80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0xc008000000000000,uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49420(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2ad28; end: 106a2af67; -[SCChatInputAudioNoteTrack _constructChevronConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2ad28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_1127560e4;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127560d8);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4026000000000000,uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2a5060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49420(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf348e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(uVar1);
  lVar5 = (long)_DAT_1127560e0;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49420(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf348e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2af68; end: 106a2b12b; -[SCChatInputAudioNoteTrack _constructSlideLabelConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2af68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127560e8;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127560e0);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4020000000000000,uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c274200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf1ff80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127560dc);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0xc020000000000000,uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2b12c; end: 106a2b32b; -[SCChatInputAudioNoteTrack _constructAudioNoteIconConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2b12c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127560dc;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0xc010000000000000,uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c274200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4008000000000000,uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf1ff80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0xc008000000000000,uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49420(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe0660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2a5060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2b32c; end: 106a2b33b; -[SCChatInputAudioNoteTrack cancelIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a2b32c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127560d8);
}



/* Entry: 106a2b33c; end: 106a2b37b; -[SCChatInputAudioNoteTrack setCancelIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2b33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127560d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2b37c; end: 106a2b38b; -[SCChatInputAudioNoteTrack audioNoteIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a2b37c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127560dc);
}



/* Entry: 106a2b38c; end: 106a2b3cb; -[SCChatInputAudioNoteTrack setAudioNoteIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2b38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127560dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2b3cc; end: 106a2b3db; -[SCChatInputAudioNoteTrack trailingChevron] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a2b3cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127560e0);
}



/* Entry: 106a2b3dc; end: 106a2b41b; -[SCChatInputAudioNoteTrack setTrailingChevron:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2b3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127560e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2b41c; end: 106a2b42b; -[SCChatInputAudioNoteTrack leadingChevron] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a2b41c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127560e4);
}



/* Entry: 106a2b42c; end: 106a2b46b; -[SCChatInputAudioNoteTrack setLeadingChevron:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2b42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127560e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2b46c; end: 106a2b47b; -[SCChatInputAudioNoteTrack slideLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106a2b46c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127560e8);
}



/* Entry: 106a2b47c; end: 106a2b4bb; -[SCChatInputAudioNoteTrack setSlideLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2b47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127560e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2b4bc; end: 106a2b54b; -[SCChatInputAudioNoteTrack .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2b4bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127560e8,0);
  _objc_storeStrong(param_1 + _DAT_1127560e4,0);
  _objc_storeStrong(param_1 + _DAT_1127560e0,0);
  _objc_storeStrong(param_1 + _DAT_1127560dc,0);
  _objc_storeStrong(param_1 + _DAT_1127560d8,0);
  _objc_storeStrong(param_1 + _DAT_1127560d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127560ec,0);
  return;
}



/* Entry: 106a2b54c; end: 106a2b5bf; -[SCGrapheneAudioNoteMetric2 init] */

undefined1 * FUN_106a2b54c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a2b5c0; end: 106a2b637;  */

void FUN_106a2b5c0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953b38,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b638; end: 106a2b6af;  */

void FUN_106a2b638(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953b88,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b6b0; end: 106a2b727;  */

void FUN_106a2b6b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953bd8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b728; end: 106a2b79f;  */

void FUN_106a2b728(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953c28,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b7a0; end: 106a2b817;  */

void FUN_106a2b7a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953c78,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b818; end: 106a2b88f;  */

void FUN_106a2b818(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953cc8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b890; end: 106a2b907;  */

void FUN_106a2b890(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953d18,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b908; end: 106a2b97f;  */

void FUN_106a2b908(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953d68,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b980; end: 106a2b9f7;  */

void FUN_106a2b980(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953db8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2b9f8; end: 106a2ba6f;  */

void FUN_106a2b9f8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953e08,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2ba70; end: 106a2bae7;  */

void FUN_106a2ba70(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110953e58,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106a2bae8; end: 106a2bc27; +[SCAudioNoteWaveformAnimation waveformAnimationFramesWithAnimationData:waveformCount:] */

void FUN_106a2bae8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined6 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar2 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_72 = 0;
      if (param_4 != 0) {
        puVar5 = &uStack_78;
        uVar6 = uVar8;
        lVar7 = param_4;
        do {
          if (uVar2 <= uVar6) break;
          *(undefined1 *)puVar5 = *(undefined1 *)(uVar1 + uVar6);
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + -1;
          puVar5 = (undefined6 *)((long)puVar5 + 1);
        } while (lVar7 != 0);
      }
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
      uVar8 = uVar8 + param_4;
    } while (uVar8 < uVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2a2af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106a2bc28; end: 106a2bc2f; +[SCAudioNoteWaveformAnimation waveformAnimationFramesWithAnimationData:] */

void FUN_106a2bc28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a2af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_waveformAnimationFramesWithAnima_1126864e0,param_3,0xe);
  return;
}



/* Entry: 106a2bc30; end: 106a2bdcf; +[SCAudioNoteWaveformAnimation generateAnimationDataWithLinearPCMData:sampleRate:waveformCount:] */

void FUN_106a2bc30(double param_1,undefined8 param_2,undefined8 param_3,short *param_4,ulong param_5
                  )

{
  ulong uVar1;
  short sVar2;
  ulong uVar3;
  short *psVar4;
  short *psVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  undefined1 uStack_71;
  
  _objc_retain(param_4);
  psVar4 = param_4;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  psVar5 = param_4;
  func_0x00010c08fa60();
  uVar14 = (ulong)psVar5 >> 1;
  fVar18 = 1.0;
  if ((short *)0x1 < psVar5) {
    iVar8 = 1;
    psVar5 = psVar4;
    uVar15 = uVar14;
    do {
      sVar2 = *psVar5;
      iVar12 = -(int)sVar2;
      if (-1 < sVar2) {
        iVar12 = (int)sVar2;
      }
      sVar2 = (short)iVar8;
      iVar8 = (int)sVar2;
      if (sVar2 <= iVar12) {
        iVar8 = iVar12;
      }
      uVar15 = uVar15 - 1;
      psVar5 = psVar5 + 1;
    } while (uVar15 != 0);
    fVar18 = (float)(int)(short)iVar8;
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  uVar15 = (ulong)(param_1 / 15.0);
  if ((long)uVar15 <= (long)uVar14) {
    uVar16 = 0;
    uVar3 = 0;
    uVar1 = uVar15;
    if (param_5 != 0) {
      uVar3 = uVar15 / param_5;
    }
    do {
      uVar9 = uVar1;
      if (0 < (long)uVar15) {
        lVar17 = 0;
        do {
          uStack_71 = 0;
          if (param_5 <= uVar15) {
            lVar10 = 0;
            uVar11 = 0;
            do {
              sVar2 = psVar4[uVar16 + lVar17 + lVar10];
              uVar13 = -(int)sVar2;
              if (-1 < sVar2) {
                uVar13 = (uint)sVar2;
              }
              uVar13 = (uint)(((float)uVar13 / fVar18) * 255.0);
              uVar11 = uVar11 & 0xff;
              if (uVar11 <= uVar13) {
                uVar11 = uVar13;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < (long)uVar3);
            uStack_71 = (undefined1)uVar11;
          }
          func_0x00010bf06a40(puVar6,param_3,&uStack_71,1);
          lVar17 = lVar17 + uVar3;
        } while (lVar17 < (long)uVar15);
      }
      uVar1 = uVar9 + uVar15;
      uVar16 = uVar9;
    } while ((long)uVar1 <= (long)uVar14);
  }
  puVar7 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106a2bdd0; end: 106a2bdd7; +[SCAudioNoteWaveformAnimation generateAnimationDataWithLinearPCMData:sampleRate:] */

void FUN_106a2bdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_generateAnimationDataWithLinearP_1125cd578,param_3,0xe);
  return;
}



/* Entry: 106a2bdd8; end: 106a2be4b; -[SCAudioNoteWaveformAnimation initWithAnimationFrames:] */

undefined1 * FUN_106a2bdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4468;
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



/* Entry: 106a2be4c; end: 106a2bfa7; -[SCAudioNoteWaveformAnimation _animationFrameForTime:waveformCount:] */

void FUN_106a2be4c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  byte abStack_66 [14];
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  if (0.0 <= param_1) {
    uVar6 = (ulong)(param_1 * 15.0);
    uVar1 = *(ulong *)(param_2 + 8);
    func_0x00010bf529e0();
    if (uVar6 < uVar1) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcbfc0();
      _objc_release(uVar2);
      lVar3 = *(long *)(param_2 + 8);
      func_0x00010bf529e0();
      if (uVar6 < lVar3 - 1U) {
        uVar2 = *(undefined8 *)(param_2 + 8);
        func_0x00010c0dfd40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfcbfc0();
        _objc_release(uVar2);
        if (0 < param_4) {
          dVar7 = (param_1 - (double)uVar6 / 15.0) * 15.0;
          pbVar4 = abStack_66;
          pbVar5 = (byte *)&uStack_58;
          do {
            dVar8 = (double)NEON_ucvtf((ulong)*pbVar5);
            *pbVar5 = (byte)(int)(dVar7 * (double)*pbVar4 + dVar8 * (1.0 - dVar7));
            param_4 = param_4 + -1;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
          } while (param_4 != 0);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail(CONCAT26(uStack_52,uStack_58));
  func_0x00010bdcb5e0();
  return;
}



/* Entry: 106a2bfa8; end: 106a2bfc3; -[SCAudioNoteWaveformAnimation animationFrameForTime:] */

void FUN_106a2bfa8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bdcb5e0(param_1,param_2,0xe);
  return;
}



/* Entry: 106a2bfc4; end: 106a2bfe7; -[SCAudioNoteWaveformAnimation duration] */

double FUN_106a2bfc4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0(uVar1);
  return (double)uVar1 / 15.0;
}



/* Entry: 106a2bfe8; end: 106a2c2a3; -[SCAudioNoteWaveformAnimation samplesForSampleCount:] */

void FUN_106a2bfe8(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  ulong uVar17;
  double dVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf8b160();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_alloc();
  func_0x00010c0138c0(0x437f0000);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_alloc();
  fVar12 = 0.0;
  func_0x00010c0138c0(0);
  if ((0 < param_4) && (0.0 < param_1)) {
    dVar18 = 0.0;
    puVar6 = puVar4;
    puVar7 = puVar5;
    lVar11 = 1;
    do {
      dVar16 = dVar18;
      func_0x00010bdcb5e0(dVar18,param_2);
      fVar12 = SUB84(dVar16,0);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_alloc();
      func_0x00010c0594c0();
      puVar5 = puVar6;
      func_0x00010bf433a0();
      puVar4 = puVar6;
      if (puVar5 != (undefined *)0xffffffffffffffff) {
        puVar4 = puVar10;
      }
      _objc_retain(puVar4);
      _objc_release(puVar6);
      puVar6 = puVar7;
      func_0x00010bf433a0();
      puVar5 = puVar7;
      if (puVar6 != (undefined *)0x1) {
        puVar5 = puVar10;
      }
      _objc_retain(puVar5);
      _objc_release(puVar7);
      func_0x00010befa120(puVar3);
      _objc_release(puVar10);
      dVar18 = param_1 / (double)param_4 + dVar18;
      bVar2 = param_4 != lVar11;
      bVar1 = lVar11 <= param_4;
      puVar6 = puVar4;
      puVar7 = puVar5;
      lVar11 = lVar11 + 1;
    } while ((param_1 > dVar18 && bVar2) && (param_1 <= dVar18 || bVar1));
  }
  func_0x00010bfb2c80(puVar5);
  fVar13 = fVar12;
  func_0x00010bfb2c80(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 0;
  _objc_retain(puVar3);
  puVar7 = puVar3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (puVar7 != (undefined *)0x0) {
    do {
      puVar10 = (undefined *)0x0;
      do {
        fVar14 = (float)uVar17;
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010bfb2c80(*(undefined8 *)((long)puVar10 * 8));
        fVar15 = fVar14;
        func_0x00010bfb2c80(puVar4);
        uVar17 = (ulong)(uint)((fVar14 - fVar15) / (fVar12 - fVar13));
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0138c0(uVar17);
        func_0x00010befa120(puVar6);
        _objc_release(puVar8);
        puVar10 = puVar10 + 1;
      } while (puVar7 != puVar10);
      puVar7 = puVar3;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 106a2c2a4; end: 106a2c2af; -[SCAudioNoteWaveformAnimation .cxx_destruct] */

void FUN_106a2c2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a2c2b0; end: 106a2c34b; -[SCChatAudioNoteDecoder audioNoteDecodingPerformer] */

void FUN_106a2c2b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3a8524);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar4 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106a2c34c; end: 106a2c49b; -[SCChatAudioNoteDecoder getAudioNoteLinearPCMWithMediaData:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_106a2c34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010bf0f420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a2c49c;
  puStack_88 = &UNK_1108b24d8;
  uStack_80 = param_3;
  uStack_78 = param_1;
  uStack_70 = param_5;
  uStack_68 = param_4;
  uStack_60 = param_7;
  uStack_58 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106a2c49c; end: 106a2c847;  */

void FUN_106a2c49c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010be63cc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dbab38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
    func_0x00010c14e060(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010bdd1200(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      puVar3 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
      _objc_alloc();
      uStack_d8 = 0;
      func_0x00010bff4200();
      uVar10 = uStack_d8;
      _objc_retain(uStack_d8);
      if (puVar3 == (undefined *)0x0) {
        func_0x00010bdd1200(*(undefined8 *)(param_1 + 0x28));
      }
      else {
        puVar4 = puVar2;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        if (puVar5 == (undefined *)0x0) {
          func_0x00010bdd1200(*(undefined8 *)(param_1 + 0x28));
        }
        else {
          uStack_d0 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
          uStack_c8 = *(undefined8 *)PTR__AVLinearPCMIsBigEndianKey_11034cf40;
          ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c48;
          ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c60;
          uStack_c0 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
          uStack_b8 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
          ppuStack_90 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184bf0;
          ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c78;
          uStack_b0 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_11034cf38;
          uStack_a8 = *(undefined8 *)PTR__AVLinearPCMIsFloatKey_11034cf48;
          ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c90;
          ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c60;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
          func_0x00010bf0b5e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa4c0(puVar3);
          func_0x00010c250140(puVar3);
          puVar4 = puVar7;
          func_0x00010bf52120();
          puVar8 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
          _objc_alloc_init();
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_f0 = 0;
          while (puVar4 != (undefined *)0x0) {
            puVar9 = puVar3;
            func_0x00010c252d60();
            _CMSampleBufferGetDataBuffer(puVar4);
            _CMBlockBufferGetDataPointer();
            func_0x00010bf06a40(puVar8);
            _CFRelease(puVar4);
            if (puVar9 != (undefined *)0x1) break;
            puVar4 = puVar7;
            func_0x00010bf52120();
          }
          func_0x00010be8d9e0(*(undefined8 *)(param_1 + 0x28));
          lVar12 = *(long *)(param_1 + 0x48);
          if (lVar12 != 0) {
            uVar11 = *(undefined8 *)(param_1 + 0x38);
            puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_118 = 0xc2000000;
            pcStack_110 = FUN_106a2c848;
            puStack_108 = &UNK_11084aaa8;
            _objc_retain(lVar12);
            lStack_f8 = lVar12;
            _objc_retain(puVar8);
            puStack_100 = puVar8;
            func_0x00010007380c(uVar11,&puStack_120);
            _objc_release(puStack_100);
            _objc_release(lStack_f8);
          }
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar3);
      _objc_release(uVar10);
    }
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    lVar1 = *(long *)(lVar1 + 0x28);
    func_0x00010bf51e00(uVar10);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
  return;
}



/* Entry: 106a2c848; end: 106a2c87f;  */

void FUN_106a2c848(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a2c880; end: 106a2c933; -[SCChatAudioNoteDecoder _audioNoteDecoderFailureHandlerWithFileURL:failureQueue:failureBlock:] */

void FUN_106a2c880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be8d9e0(param_1);
  if (param_5 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106a2c934;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_38 = param_5;
    func_0x00010007380c(param_4,&puStack_58);
    _objc_release(lStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106a2c934; end: 106a2c93f;  */

void FUN_106a2c934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a2c93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106a2c940; end: 106a2ca37; -[SCChatAudioNoteDecoder _nextTempFileUrlWithExtension:] */

void FUN_106a2c940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e04938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a2ca38; end: 106a2ca97; -[SCChatAudioNoteDecoder _removeTempFile:] */

void FUN_106a2ca38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf69bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106a2ca98; end: 106a2caa3; -[SCChatAudioNoteDecoder .cxx_destruct] */

void FUN_106a2ca98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a2caa4; end: 106a2cc13; -[SCChatInputPasteObserverPlugin initWithDrawerMediaSender:storyReplySender:storyShareSender:groupFetcher:activeConversationInformation:replyAllGroupId:] */

undefined1 *
FUN_106a2caa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f4470;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
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



/* Entry: 106a2cc14; end: 106a2cc3f; -[SCChatInputPasteObserverPlugin registerWithInputContext:] */

void FUN_106a2cc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 0x40,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bec8030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeToPasteEvents_11258f9b0);
  return;
}



/* Entry: 106a2cc40; end: 106a2cdeb; -[SCChatInputPasteObserverPlugin _subscribeToPasteEvents] */

void FUN_106a2cc40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c0f5680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c2b2440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar5 = *(long *)(param_1 + 0x38);
  lVar2 = lVar4;
  if (lVar5 != 0) {
    _objc_retain(lVar5);
    puStack_70 = puVar1;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106a2cf98;
    puStack_58 = &UNK_110952358;
    lStack_50 = lVar5;
    func_0x00010bfb26a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  _objc_copyWeak(auStack_78,auStack_48);
  lVar5 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106a2cdec; end: 106a2ce5b;  */

void FUN_106a2cdec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf9a8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0056e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a2ce5c; end: 106a2cf97;  */

byte FUN_106a2ce5c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf50540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar4 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x00010c0f5660(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    func_0x00010c0be100(lVar3);
    bVar4 = *(byte *)(puStack_58 + 3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return bVar4 & 1;
}



/* Entry: 106a2cf98; end: 106a2d02f;  */

void FUN_106a2cf98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a2d030; end: 106a2d0cf;  */

void FUN_106a2d030(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cf9a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f5660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0056e0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a2d0d0; end: 106a2d117;  */

void FUN_106a2d0d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dc80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a2d118; end: 106a2d1cb; -[SCChatInputPasteObserverPlugin _handlePasteEvent:] */

void FUN_106a2d118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0f5660(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a2d1cc;
  puStack_48 = &UNK_11084a078;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0be100(uVar1,param_2,0,&puStack_60,0,&PTR___NSConcreteGlobalBlock_110953f30);
  _objc_release(uVar1);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a2d1cc; end: 106a2d1df;  */

void FUN_106a2d1cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendImage_forPasteEvent__1125856d8,param_2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106a2d1e0; end: 106a2d5b7; -[SCChatInputPasteObserverPlugin _sendImage:forPasteEvent:] */

void FUN_106a2d1e0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar7 = param_4;
  func_0x00010bf50540();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010bfb50e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = param_4;
  func_0x00010c1319e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = puVar7;
  func_0x00010c0ec5e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be74420(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar7);
  lVar4 = param_1;
  func_0x00010bddd0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cfd18;
  _objc_alloc(PTR_PTR_1126cfd18);
  puVar7 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad60(puVar2);
  _objc_release(puVar7);
  func_0x00010c1a9f00(puVar2);
  func_0x00010c23d0a0(param_3);
  func_0x00010c1c56e0(puVar2);
  func_0x00010c23d0a0(param_3);
  _objc_release(param_3);
  func_0x00010c1c4860(puVar2);
  puVar5 = PTR_PTR_1126cfb00;
  _objc_alloc();
  puVar7 = puVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  FUN_106e0c1a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028f80();
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar6 = puVar1;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR_PTR_1126b6078;
  puVar8 = puVar1;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15bb60(puVar7);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9e400(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25a520(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf50280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cd40(puVar6);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar7 = PTR_PTR_1126b6120;
  func_0x00010c0f5700(PTR_PTR_1126b6120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04500(param_1);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_e0;
  pcStack_98 = FUN_106a2d5b8;
  lStack_b0 = param_1;
  puStack_a8 = puVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_b8,puVar7);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106a2d640;
  puStack_c8 = &UNK_110850658;
  _objc_copyWeak(auStack_c0,auStack_b8);
  _objc_retainBlock(&puStack_e0);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 106a2d5b8; end: 106a2d63f; -[SCChatInputPasteObserverPlugin _chatSendResultCompletion] */

void FUN_106a2d5b8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106a2d640;
  puStack_38 = &UNK_110850658;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a2d640; end: 106a2d6c3;  */

void FUN_106a2d640(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR_PTR_1126b6120;
    func_0x00010c0f5700(PTR_PTR_1126b6120);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04520(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a2d6c4; end: 106a2d957; -[SCChatInputPasteObserverPlugin _platformAnalyticsForConversationInformation:replyAllGroupId:] */

void FUN_106a2d6c4(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf36840(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar2 = param_4;
  }
  puVar3 = param_3;
  func_0x00010c10ad20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0df180();
  puVar5 = param_3;
  func_0x00010c10ad20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0df160();
  puVar7 = puVar1;
  func_0x000108606910(puVar1,puVar2,puVar4,puVar6,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c11eca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000108606d64();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010bf37160(param_3);
  func_0x00010c2b9b80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac2e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c2aa640(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c2aad40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010bfdb620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2af3e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106a2d958; end: 106a2d9cb; -[SCChatInputPasteObserverPlugin .cxx_destruct] */

void FUN_106a2d958(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106a2d9cc; end: 106a2d9df;  */

void FUN_106a2d9cc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106a2d9e0; end: 106a2dadb; -[SCChatInputPasteObserverPluginProvider initWithDrawerMediaSender:storyReplySender:storyShareSender:groupFetcher:] */

undefined1 *
FUN_106a2d9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f4478;
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



/* Entry: 106a2dadc; end: 106a2dae3; -[SCChatInputPasteObserverPluginProvider providerType] */

undefined8 FUN_106a2dadc(void)

{
  return 2;
}



/* Entry: 106a2dae4; end: 106a2daeb; -[SCChatInputPasteObserverPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

undefined8 FUN_106a2dae4(void)

{
  return 0;
}



/* Entry: 106a2daec; end: 106a2db63; -[SCChatInputPasteObserverPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_106a2daec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cfd20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00e580();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a2db64; end: 106a2dbab; -[SCChatInputPasteObserverPluginProvider .cxx_destruct] */

void FUN_106a2db64(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a2dbac; end: 106a2de0b; -[SCChatInputScaleTextController initWithGraphene:featureSettingsService:messagingExperimentService:activeConversationInformation:] */

undefined8 *
FUN_106a2dbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126f4480;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106a2de0c;
    puStack_90 = &UNK_1108429c8;
    _objc_retain(param_5);
    uStack_88 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_d0 = puVar4;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106a2de68;
    puStack_b8 = &UNK_1108429c8;
    _objc_retain(param_5);
    uStack_b0 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_d8,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_e0,auStack_d8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar2);
    func_0x00010bec7200(puVar1);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(uStack_b0);
    _objc_release(uStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a2de0c; end: 106a2df03;  */

void FUN_106a2de0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf37540();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106a2df04; end: 106a2e0f7; -[SCChatInputScaleTextController _initializeTooltip] */

void FUN_106a2df04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  if ((int)uVar2 < 1) {
    func_0x000106a2f524();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106a2f554();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b09c0;
  _objc_alloc();
  func_0x00010c051660();
  func_0x00010c219b60();
  lVar4 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar3;
  func_0x00010bf323c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010beef8c0(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c1cbe20(puVar3);
  func_0x00010c08cdc0(puVar3);
  uVar1 = uVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_106a2e0f8;
  puStack_a0 = puVar6;
  lStack_98 = param_1;
  puStack_90 = puVar3;
  uStack_88 = uVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  _objc_initWeak(auStack_a8,uVar1);
  _objc_copyWeak(auStack_b0,auStack_a8);
  puVar10 = puVar11;
  func_0x00010c25ff60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar11);
  return;
}



/* Entry: 106a2e0f8; end: 106a2e1d3; -[SCChatInputScaleTextController _subscribeToActiveConversationInformation:] */

void FUN_106a2e0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a2e1d4; end: 106a2e23f;  */

void FUN_106a2e1d4(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a2e240; end: 106a2e2b3; -[SCChatInputScaleTextController _addPanGestureToItem:] */

void FUN_106a2e240(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c050900();
    func_0x00010bef9040(param_3,param_2,puVar1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106a2e2b4; end: 106a2e6a3; -[SCChatInputScaleTextController _didPanOrDrag:] */

/* WARNING: Possible PIC construction at 0x000106a2e534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106a2e538) */

void FUN_106a2e2b4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  lVar2 = param_3 + 0x68;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  dVar8 = param_2;
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x68;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar2 < 3) {
    if (lVar2 != 1) {
      if (lVar2 == 2) {
        if (30.0 <= ABS(param_2)) {
          if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
            lVar2 = param_3 + 0x68;
            _objc_loadWeakRetained(lVar2);
            lVar3 = lVar2;
            func_0x000106a2f53c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c237ea0(lVar2);
            _objc_release(lVar3);
            _objc_release(lVar2);
            puVar6 = PTR_PTR_1126affa8;
            func_0x00010c22bc20(PTR_PTR_1126affa8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f8760();
            _objc_release(puVar6);
            *(undefined1 *)(param_3 + 0x10) = 1;
          }
          dVar7 = -30.0;
          if (param_2 <= 0.0) {
            dVar7 = 30.0;
          }
          param_2 = param_2 + dVar7;
          dVar7 = param_2 / -75.0 + 1.0;
          if (dVar7 <= 0.5) {
            dVar7 = 0.5;
          }
          dVar9 = 10.0;
          if (dVar7 <= 10.0) {
            dVar9 = dVar7;
          }
          lVar2 = param_3;
          func_0x00010c065880();
          iVar1 = (int)lVar2;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f5fe0(dVar9);
          _objc_release();
          FUN_1070a600c(param_2,*(undefined8 *)(param_3 + 8),dVar8,dVar9);
          if (iVar1 != 0) {
            puVar6 = PTR_PTR_1126affa8;
            func_0x00010c22bc20(PTR_PTR_1126affa8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f8760();
            _objc_release(puVar6);
          }
          *(double *)(param_3 + 8) = param_2;
        }
        else {
          lVar2 = param_3;
          func_0x00010c065880(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f5fe0(0x3ff0000000000000);
          _objc_release(lVar2);
          if (*(char *)(param_3 + 0x10) == '\x01') {
            lVar2 = param_3 + 0x68;
            _objc_loadWeakRetained(lVar2);
            func_0x00010bfe2140();
            _objc_release(lVar2);
            puVar6 = PTR_PTR_1126affa8;
            func_0x00010c22bc20(PTR_PTR_1126affa8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f8760();
            _objc_release(puVar6);
            *(undefined1 *)(param_3 + 0x10) = 0;
          }
        }
      }
      return;
    }
    uVar4 = *(undefined8 *)(param_3 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x00010be93fc0(param_3);
      lVar2 = param_3 + 0x68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bfe2140();
      _objc_release(lVar2);
    }
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82f40();
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010be581d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__logScaleTextButtonPressed_112573a10);
    return;
  }
  if (lVar2 == 3) {
    if (30.0 <= ABS(param_2)) {
      func_0x00010be8a560(param_3);
      func_0x00010be58200(param_3);
      *(undefined8 *)(param_3 + 8) = 0;
      *(undefined1 *)(param_3 + 0x10) = 0;
      param_3 = param_3 + 0x68;
      _objc_loadWeakRetained(param_3);
      func_0x00010bfe2140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
    lVar2 = param_3;
    func_0x00010c065880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(0x3ff0000000000000);
    _objc_release(lVar2);
  }
  else {
    if (lVar2 != 4) {
      return;
    }
    lVar2 = param_3;
    func_0x00010c065880(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(0x3ff0000000000000);
    _objc_release(lVar2);
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined1 *)(param_3 + 0x10) = 0;
    lVar2 = param_3 + 0x68;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfe2140();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be581f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__logScaleTextCanceled_112573a18);
  return;
}



/* Entry: 106a2e6a4; end: 106a2e75f; -[SCChatInputScaleTextController _releaseToSendText] */

void FUN_106a2e6a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c065880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101dc0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010becd320(param_1);
  lVar2 = param_1;
  func_0x00010beb5a80(param_1,param_2,lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067ec0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar4 < 1) {
      func_0x00010c1990e0();
    }
    else {
      func_0x00010c199100();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106a2e760; end: 106a2e7af; -[SCChatInputScaleTextController setInputItem:] */

void FUN_106a2e760(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x60,param_3);
  _objc_retain();
  func_0x00010bdc7c40(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a2e7b0; end: 106a2e7eb; -[SCChatInputScaleTextController _hideTapHint] */

void FUN_106a2e7b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfe2140();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a2e7ec; end: 106a2e827; -[SCChatInputScaleTextController _resetTapHintTimer] */

void FUN_106a2e7ec(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a2e828; end: 106a2e8a7; -[SCChatInputScaleTextController _tooltipSeenCount] */

undefined8 FUN_106a2e828(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  if ((int)uVar2 < 1) {
    func_0x00010bf9d900();
  }
  else {
    func_0x00010bf9d920();
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106a2e8a8; end: 106a2e93b; -[SCChatInputScaleTextController _shouldShow:] */

bool FUN_106a2e8a8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  if ((int)uVar3 < 1) {
    bVar1 = param_3 != -1 && param_3 < 3;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c067ec0();
    bVar1 = param_3 != -1 && param_3 < (int)uVar3;
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106a2e93c; end: 106a2ea57; -[SCChatInputScaleTextController didSelectInputItem:] */

void FUN_106a2e93c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010be93fc0(param_1);
    lVar3 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x000106a2f554();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237ea0(lVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x4014000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s__hideTapHint_112532b88,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar5;
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106a2ea58; end: 106a2ea5b; -[SCChatInputScaleTextController didDeselectInputItem:] */

void FUN_106a2ea58(void)

{
  return;
}



/* Entry: 106a2ea5c; end: 106a2ea8f; -[SCChatInputScaleTextController didCollapseInputItem:] */

void FUN_106a2ea5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a2ea90; end: 106a2ec3b; -[SCChatInputScaleTextController didUncollapseInputItem:] */

void FUN_106a2ea90(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    lVar1 = param_2;
    func_0x00010becd320(param_2);
    lVar2 = param_2;
    func_0x00010beb5a80(param_2,param_3,lVar1);
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c067ec0();
      _objc_release(uVar3);
      lVar1 = param_2 + 0x60;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0ed1a0();
      lVar2 = param_2 + 0x60;
      dVar6 = param_1;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar7 = 0.5;
      lVar5 = param_2 + 0x60;
      _objc_loadWeakRetained(lVar5);
      func_0x00010c0ed1a0();
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2 + 0x60;
      _objc_loadWeakRetained(lVar1);
      uVar8 = 0x4020000000000000;
      if ((int)uVar4 < 1) {
        uVar8 = 0x4024000000000000;
      }
      func_0x00010c10c340(param_1 + dVar6 * 0.5,dVar7 + -25.0,uVar8,uVar3,param_3,lVar1);
      _objc_release(lVar1);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c067ec0();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar4 < 1) {
        func_0x00010c1990e0();
      }
      else {
        func_0x00010c199100();
      }
      _objc_release(uVar3);
      *(undefined1 *)(param_2 + 0x40) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a2ec3c; end: 106a2ecb7; -[SCChatInputScaleTextController _logScaleTextButtonPressed] */

void FUN_106a2ec3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010c26c700(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a2ecb8; end: 106a2ed33; -[SCChatInputScaleTextController _logScaleTextCanceled] */

void FUN_106a2ecb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010c26c6e0(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a2ed34; end: 106a2edaf; -[SCChatInputScaleTextController _logScaleTextSent] */

void FUN_106a2ed34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010c26c720(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a2edb0; end: 106a2edc7; -[SCChatInputScaleTextController inputItem] */

void FUN_106a2edb0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a2edc8; end: 106a2eddf; -[SCChatInputScaleTextController inputController] */

void FUN_106a2edc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a2ede0; end: 106a2edeb; -[SCChatInputScaleTextController setInputController:] */

void FUN_106a2ede0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



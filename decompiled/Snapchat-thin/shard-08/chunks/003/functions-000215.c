/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fc2ec8; end: 105fc2f2b; -[SCVoiceNoteTranscriptionFeedbackView _createDescriptionLabel] */

void FUN_105fc2ec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdeeea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  uVar1 = param_1;
  func_0x00010c1cfce0(param_1,param_2,0);
  func_0x000105fc401c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fc2f2c; end: 105fc305f; -[SCVoiceNoteTranscriptionFeedbackView _createFeedbackButton] */

void FUN_105fc2f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4041800000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c21e900(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4051800000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2a5060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4051800000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc3060; end: 105fc30c3; -[SCVoiceNoteTranscriptionFeedbackView _createLikeButton] */

void FUN_105fc3060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bdedac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fc30c4; end: 105fc3127; -[SCVoiceNoteTranscriptionFeedbackView _createDislikeButton] */

void FUN_105fc30c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bdedac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fc3128; end: 105fc3233; -[SCVoiceNoteTranscriptionFeedbackView _createFeedbackButtonImageView] */

void FUN_105fc3128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0648;
  _objc_opt_new(PTR_PTR_1126b0648);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar2 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2a5060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4045000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc3234; end: 105fc342f; -[SCVoiceNoteTranscriptionFeedbackView _createFeedbackButtonShadow] */

void FUN_105fc3234(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c19f0e0(0,0,0x4051800000000000,0x4051800000000000);
  func_0x00010c17d4c0(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(puVar1);
  func_0x00010bf19a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
  _objc_opt_new(PTR__OBJC_CLASS___CALayer_1126b1750);
  puVar4 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1fe820(puVar3,param_2,puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xca);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c1fe740(puVar3,param_2,puVar5);
  _objc_release(puVar4);
  func_0x00010c1fe800(0x3f800000,puVar3);
  func_0x00010c1fe840(0x4010000000000000,puVar3);
  func_0x00010c1fe7a0(0,0x3ff0000000000000,puVar3);
  func_0x00010bf20c00(puVar1);
  func_0x00010c1739e0(puVar3);
  func_0x00010bf345e0(puVar1);
  func_0x00010c1dee80(puVar3);
  puVar4 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c2a5060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x4066c00000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c219b60(puVar1,param_2,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc3430; end: 105fc34c3; -[SCVoiceNoteTranscriptionFeedbackView _createFeedbackOptionsScrollView] */

void FUN_105fc3430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_new(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2025c0(puVar1,param_2,0);
  func_0x00010c2026e0(puVar1,param_2,0);
  func_0x00010c181f80(0,0x4028000000000000,0,0x4028000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc34c4; end: 105fc38af; -[SCVoiceNoteTranscriptionFeedbackView _createNegativeFeedbackOptionWithTitle:] */

void FUN_105fc34c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126c6c70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c216260();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(puVar1,param_2,puVar2,4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e34fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1,param_2,puVar2,4);
  _objc_release(puVar2);
  dVar5 = 0.0;
  func_0x00010c1aa240(0,0xc024000000000000,0,0,puVar1);
  puVar2 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c271420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f00(0x447a0000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe199999999999a);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = puVar1;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(0x408f400000000000,0x4040000000000000,param_3,param_2,1,puVar4,0);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(dVar5 + 40.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4036000000000000);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1,param_2,0);
    puVar2 = puVar1;
    func_0x00010bfe0660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf49420(0x4046000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c2a5060(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf49420(0x4066c00000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc38b0; end: 105fc39a3; -[SCVoiceNoteTranscriptionFeedbackView _createActionbutton] */

void FUN_105fc38b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4036000000000000);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar2 = puVar1;
  func_0x00010bfe0660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2a5060(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf49420(0x4066c00000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fc39a4; end: 105fc3a47; -[SCVoiceNoteTranscriptionFeedbackView _createSendButton] */

void FUN_105fc39a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bdea540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480();
  func_0x00010c16e480(uVar1,param_2,0x6f,2);
  uVar2 = uVar1;
  func_0x00010c216380(uVar1,param_2,0xbc,0);
  func_0x000105fc4034();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  func_0x00010befbd60(uVar1,param_2,param_1,PTR_s__didTapSendButton_11252e448,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fc3a48; end: 105fc3adb; -[SCVoiceNoteTranscriptionFeedbackView _createCancelButton] */

void FUN_105fc3a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bdea540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480();
  uVar2 = uVar1;
  func_0x00010c216380(uVar1,param_2,0x6c,0);
  func_0x000105fc404c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  func_0x00010befbd60(uVar1,param_2,param_1,PTR_s__didTapCancelButton_1125281b8,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fc3adc; end: 105fc3c33; -[SCVoiceNoteTranscriptionFeedbackView _showFeedbackOptionsDrawer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc3adc(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar2 = 0x4040000000000000;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x4038000000000000;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  func_0x00010c181140(uVar2,*(undefined8 *)(param_1 + _DAT_11273c038));
  func_0x00010c181140(uVar3,*(undefined8 *)(param_1 + _DAT_11273c03c));
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105fc3c34;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_78 = (undefined1)param_3;
  _objc_copyWeak(auStack_80,auStack_48);
  func_0x00010bf03440(0x3fc3333333333333,0,puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105fc3c34; end: 105fc3cbf;  */

void FUN_105fc3c34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc3cc0; end: 105fc3ce7; -[SCVoiceNoteTranscriptionFeedbackView _didTapLikeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc3cc0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273c04c);
  if (uVar1 < 3) {
    *(undefined8 *)(param_1 + _DAT_11273c04c) = *(undefined8 *)(&UNK_10ddd1ce0 + uVar1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtons_112592b48);
  return;
}



/* Entry: 105fc3ce8; end: 105fc3d0f; -[SCVoiceNoteTranscriptionFeedbackView _didTapDislikeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc3ce8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273c04c);
  if (uVar1 < 3) {
    *(undefined8 *)(param_1 + _DAT_11273c04c) = *(undefined8 *)(&UNK_10ddd1cf8 + uVar1 * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtons_112592b48);
  return;
}



/* Entry: 105fc3d10; end: 105fc3e5b; -[SCVoiceNoteTranscriptionFeedbackView _updateButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc3d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x15,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + _DAT_11273c04c);
  if (lVar4 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    ppuVar7 = &PTR____CFConstantStringClassReference_110e34ff8;
LAB_105fc3dac:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e34fd8;
  }
  else {
    if (lVar4 == 2) {
      uVar5 = 1;
      ppuVar7 = &PTR____CFConstantStringClassReference_110e35038;
      uVar6 = 1;
      goto LAB_105fc3dac;
    }
    if (lVar4 != 1) goto LAB_105fc3e40;
    uVar5 = 0;
    uVar6 = 1;
    ppuVar7 = &PTR____CFConstantStringClassReference_110e34ff8;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e35018;
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bfe8280(PTR_PTR_1126ae6b8,param_2,ppuVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(*(undefined8 *)(param_1 + _DAT_11273c030),param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bfe8280(PTR_PTR_1126ae6b8,param_2,ppuVar7,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620(*(undefined8 *)(param_1 + _DAT_11273c034),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010beb9200(param_1,param_2,uVar5);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11273c048),param_2,uVar6);
LAB_105fc3e40:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105fc3e5c; end: 105fc3f0f; -[SCVoiceNoteTranscriptionFeedbackView _didTapSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc3e5c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_11273c04c);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (lVar3 != 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273c040);
    func_0x00010c07d660();
    if (iVar1 != 0) {
      func_0x00010befa120(puVar2);
    }
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273c044);
    func_0x00010c07d660();
    if (iVar1 != 0) {
      func_0x00010befa120(puVar2);
    }
  }
  (**(code **)(*(long *)(param_1 + _DAT_11273c028) + 0x10))
            (*(long *)(param_1 + _DAT_11273c028),lVar3 == 1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105fc3f10; end: 105fc3f23; -[SCVoiceNoteTranscriptionFeedbackView _didTapCancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc3f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105fc3f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_11273c02c) + 0x10))();
  return;
}



/* Entry: 105fc3f24; end: 105fc3fd3; -[SCVoiceNoteTranscriptionFeedbackView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fc3f24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c048,0);
  _objc_storeStrong(param_1 + _DAT_11273c034,0);
  _objc_storeStrong(param_1 + _DAT_11273c030,0);
  _objc_storeStrong(param_1 + _DAT_11273c044,0);
  _objc_storeStrong(param_1 + _DAT_11273c040,0);
  _objc_storeStrong(param_1 + _DAT_11273c03c,0);
  _objc_storeStrong(param_1 + _DAT_11273c038,0);
  _objc_storeStrong(param_1 + _DAT_11273c02c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c028,0);
  return;
}



/* Entry: 105fc3fd4; end: 105fc40ab;  */

void FUN_105fc3fd4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e35078;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e35078,
                      &PTR____CFConstantStringClassReference_110e35058,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105fc40ac; end: 105fc4183; -[SCVoiceNotePlaybackEvent initWithMessageOrderKey:conversationId:messageSenderUserId:] */

undefined1 *
FUN_105fc40ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eeb58;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc4184; end: 105fc41a7; -[SCVoiceNotePlaybackEvent copyWithZone:] */

undefined8 FUN_105fc4184(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105fc41a8; end: 105fc4227; -[SCVoiceNotePlaybackEvent hash] */

undefined8 * FUN_105fc41a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105fc42c0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105fc42cc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105fc42cc;
          }
          goto LAB_105fc42c0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105fc42cc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105fc4228; end: 105fc42e7; -[SCVoiceNotePlaybackEvent isEqual:] */

long FUN_105fc4228(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105fc42c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105fc42cc;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105fc42cc;
          }
          goto LAB_105fc42c0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105fc42cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105fc42e8; end: 105fc42ef; -[SCVoiceNotePlaybackEvent messageOrderKey] */

undefined8 FUN_105fc42e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105fc42f0; end: 105fc42f7; -[SCVoiceNotePlaybackEvent conversationId] */

undefined8 FUN_105fc42f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105fc42f8; end: 105fc42ff; -[SCVoiceNotePlaybackEvent messageSenderUserId] */

undefined8 FUN_105fc42f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105fc4300; end: 105fc433b; -[SCVoiceNotePlaybackEvent .cxx_destruct] */

void FUN_105fc4300(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fc433c; end: 105fc4347; +[SCCChatCTItemView componentPath] */

undefined ** FUN_105fc433c(void)

{
  return &PTR____CFConstantStringClassReference_110e35198;
}



/* Entry: 105fc4348; end: 105fc4367; -[SCCChatCTItemView initWithViewModel:componentContext:runtime:] */

void FUN_105fc4348(void)

{
  FUN_105fc4504(PTR_PTR_1126eeb60);
  return;
}



/* Entry: 105fc4368; end: 105fc439b; -[SCCChatCTItemView setViewModel:] */

void FUN_105fc4368(void)

{
  func_0x000105fc4518();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4528();
  func_0x000105fc4540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fc439c; end: 105fc43d3; -[SCCChatCTItemView viewModel] */

void FUN_105fc439c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc43d4; end: 105fc43df; +[SCCChatCustomStickerView componentPath] */

undefined ** FUN_105fc43d4(void)

{
  return &PTR____CFConstantStringClassReference_110e351b8;
}



/* Entry: 105fc43e0; end: 105fc43ff; -[SCCChatCustomStickerView initWithViewModel:componentContext:runtime:] */

void FUN_105fc43e0(void)

{
  FUN_105fc4504(PTR_PTR_1126eeb68);
  return;
}



/* Entry: 105fc4400; end: 105fc4433; -[SCCChatCustomStickerView setViewModel:] */

void FUN_105fc4400(void)

{
  func_0x000105fc4518();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4528();
  func_0x000105fc4540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fc4434; end: 105fc446b; -[SCCChatCustomStickerView viewModel] */

void FUN_105fc4434(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc446c; end: 105fc4477; +[SCCQuotedChatStickerView componentPath] */

undefined ** FUN_105fc446c(void)

{
  return &PTR____CFConstantStringClassReference_110e351d8;
}



/* Entry: 105fc4478; end: 105fc4497; -[SCCQuotedChatStickerView initWithViewModel:componentContext:runtime:] */

void FUN_105fc4478(void)

{
  FUN_105fc4504(PTR_PTR_1126eeb70);
  return;
}



/* Entry: 105fc4498; end: 105fc44cb; -[SCCQuotedChatStickerView setViewModel:] */

void FUN_105fc4498(void)

{
  func_0x000105fc4518();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4528();
  func_0x000105fc4540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fc44cc; end: 105fc4503; -[SCCQuotedChatStickerView viewModel] */

void FUN_105fc44cc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc4504; end: 105fc455f;  */

void FUN_105fc4504(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fc4560; end: 105fc457f; -[SCCChatCTItemContext initWithCtItemInstanceViewFactory:] */

void FUN_105fc4560(void)

{
  func_0x000105fc46d0(PTR_PTR_1126eeb78);
  return;
}



/* Entry: 105fc4580; end: 105fc4593; +[SCCChatCTItemContext valdiMarshallableObjectDescriptor] */

void FUN_105fc4580(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904030;
  param_1[1] = &PTR_s_SCValdiViewFactory_110904060;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4594; end: 105fc45d3; -[SCCChatCTItemViewModel initWithNativeCTItemInstance:height:width:] */

void FUN_105fc4594(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeb80;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fc45d4; end: 105fc45e7; +[SCCChatCTItemViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc45d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904070;
  param_1[1] = &PTR_DAT_1109040d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc45e8; end: 105fc460b; -[SCCChatCustomStickerContext init] */

void FUN_105fc45e8(void)

{
  func_0x000105fc46ec(PTR_PTR_1126eeb88);
  return;
}



/* Entry: 105fc460c; end: 105fc461f; +[SCCChatCustomStickerContext valdiMarshallableObjectDescriptor] */

void FUN_105fc460c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109040e0;
  param_1[1] = &PTR_DAT_110904128;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4620; end: 105fc4643; -[SCCChatCustomStickerViewModel init] */

void FUN_105fc4620(void)

{
  func_0x000105fc46ec(PTR_PTR_1126eeb90);
  return;
}



/* Entry: 105fc4644; end: 105fc4657; +[SCCChatCustomStickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc4644(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904140;
  param_1[1] = &PTR_DAT_110904188;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4658; end: 105fc4677; -[SCCQuotedChatStickerContext initWithCtItemInstanceViewFactory:] */

void FUN_105fc4658(void)

{
  func_0x000105fc46d0(PTR_PTR_1126eeb98);
  return;
}



/* Entry: 105fc4678; end: 105fc468b; +[SCCQuotedChatStickerContext valdiMarshallableObjectDescriptor] */

void FUN_105fc4678(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904198;
  param_1[1] = &PTR_s_SCValdiViewFactory_1109041c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc468c; end: 105fc46ab; -[SCCQuotedChatStickerViewModel initWithNativeCTItemInstance:] */

void FUN_105fc468c(void)

{
  func_0x000105fc46d0(PTR_PTR_1126eeba0);
  return;
}



/* Entry: 105fc46ac; end: 105fc4707; +[SCCQuotedChatStickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc46ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109041d8;
  param_1[1] = &PTR_DAT_110904208;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4708; end: 105fc4713; +[SCCReactionMessage componentPath] */

undefined ** FUN_105fc4708(void)

{
  return &PTR____CFConstantStringClassReference_110e351f8;
}



/* Entry: 105fc4714; end: 105fc4747; -[SCCReactionMessage initWithViewModel:componentContext:runtime:] */

void FUN_105fc4714(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eeba8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fc4748; end: 105fc4797; -[SCCReactionMessage setViewModel:] */

void FUN_105fc4748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc4798; end: 105fc47db; -[SCCReactionMessage viewModel] */

void FUN_105fc4798(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fc47dc; end: 105fc480f; -[SCCReactionMessageContext init] */

void FUN_105fc47dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eebb0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105fc4810; end: 105fc4823; +[SCCReactionMessageContext valdiMarshallableObjectDescriptor] */

void FUN_105fc4810(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904218;
  param_1[1] = &PTR_s_SCValdiViewFactory_110904260;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4824; end: 105fc485f; -[SCCReactionMessageViewModel initWithChatReactionType:] */

void FUN_105fc4824(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eebb8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fc4860; end: 105fc4883; +[SCCReactionMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc4860(undefined8 *param_1)

{
  *param_1 = &PTR_s_avatarId_110904278;
  param_1[1] = &PTR_DAT_1109042c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4884; end: 105fc488f; +[SCCChatMediaView componentPath] */

undefined ** FUN_105fc4884(void)

{
  return &PTR____CFConstantStringClassReference_110e35218;
}



/* Entry: 105fc4890; end: 105fc48b3; -[SCCChatMediaView initWithViewModel:componentContext:runtime:] */

void FUN_105fc4890(void)

{
  FUN_105fc49d4(PTR_PTR_1126eebc0);
  return;
}



/* Entry: 105fc48b4; end: 105fc48eb; -[SCCChatMediaView setViewModel:] */

void FUN_105fc48b4(void)

{
  func_0x000105fc49f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4a00();
  func_0x000105fc49e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fc48ec; end: 105fc492b; -[SCCChatMediaView viewModel] */

void FUN_105fc48ec(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc49e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fc492c; end: 105fc4937; +[SCCQuotedChatMediaView componentPath] */

undefined ** FUN_105fc492c(void)

{
  return &PTR____CFConstantStringClassReference_110e35238;
}



/* Entry: 105fc4938; end: 105fc495b; -[SCCQuotedChatMediaView initWithViewModel:componentContext:runtime:] */

void FUN_105fc4938(void)

{
  FUN_105fc49d4(PTR_PTR_1126eebc8);
  return;
}



/* Entry: 105fc495c; end: 105fc4993; -[SCCQuotedChatMediaView setViewModel:] */

void FUN_105fc495c(void)

{
  func_0x000105fc49f0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc4a00();
  func_0x000105fc49e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105fc4994; end: 105fc49d3; -[SCCQuotedChatMediaView viewModel] */

void FUN_105fc4994(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105fc49e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fc49d4; end: 105fc4a0b;  */

void FUN_105fc49d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fc4a0c; end: 105fc4abf; -[SCCChatMediaContext initWithMediasObservable:onTap:snapPlayerViewFactory:] */

undefined8 *
FUN_105fc4a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126eebd0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105fc4ac0; end: 105fc4ae3; +[SCCChatMediaContext valdiMarshallableObjectDescriptor] */

void FUN_105fc4ac0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110904300;
  param_1[1] = &PTR_s_SCBridgeObservable_110904420;
  param_1[2] = &PTR_DAT_1109042d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4ae4; end: 105fc4b0b;  */

undefined8 FUN_105fc4ae4(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2,param_2[2]);
  return 0;
}



/* Entry: 105fc4b0c; end: 105fc4b8b;  */

void FUN_105fc4b0c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fc4c38;
  puStack_30 = &UNK_1109045d0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105fc4b8c; end: 105fc4bab; -[SCCChatMediaViewModel init] */

void FUN_105fc4b8c(void)

{
  FUN_105fc4c68(PTR_PTR_1126eebd8);
  return;
}



/* Entry: 105fc4bac; end: 105fc4bbf; +[SCCChatMediaViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc4bac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110904460;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4bc0; end: 105fc4bdf; -[SCCQuotedChatMediaContext init] */

void FUN_105fc4bc0(void)

{
  FUN_105fc4c68(PTR_PTR_1126eebe0);
  return;
}



/* Entry: 105fc4be0; end: 105fc4c03; +[SCCQuotedChatMediaContext valdiMarshallableObjectDescriptor] */

void FUN_105fc4be0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109044c0;
  param_1[1] = &PTR_s_SCBridgeObservable_110904568;
  param_1[2] = &PTR_DAT_110904490;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4c04; end: 105fc4c23; -[SCCQuotedChatMediaViewModel init] */

void FUN_105fc4c04(void)

{
  FUN_105fc4c68(PTR_PTR_1126eebe8);
  return;
}



/* Entry: 105fc4c24; end: 105fc4c37; +[SCCQuotedChatMediaViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fc4c24(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109045a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fc4c38; end: 105fc4c67;  */

void FUN_105fc4c38(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105fc4c68; end: 105fc4c8b;  */

void FUN_105fc4c68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105fc4c8c; end: 105fc4dcb; -[SCConversationRetentionMessagePlugin initWithActionHandler:tracker:actionSheetPresenterFactory:userId:userProvider:] */

undefined1 *
FUN_105fc4c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eebf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fc4dcc; end: 105fc5223; -[SCConversationRetentionMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fc4dcc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x0001070b1c70();
  uVar7 = param_3;
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126c6c78;
  _objc_opt_new(PTR_PTR_1126c6c78);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b18e0(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b42e0(puVar2);
  _objc_release(puVar3);
  uVar7 = param_3;
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcb80(puVar2);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126c6c80;
  _objc_opt_new(PTR_PTR_1126c6c80);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c13e060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed800(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf50780(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183c20(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fc5224;
  puStack_88 = &UNK_11085df68;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1d3200(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar6);
  uVar7 = uVar5;
  func_0x00010c0b7620(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161e00(puVar3);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f040(puVar3);
  _objc_release(uVar7);
  if ((uVar1 & 1) == 0) {
    uVar7 = param_3;
    func_0x00010bf4df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c253320();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf34dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar7);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf01d80(uVar8);
    func_0x00010c0df6e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167880(puVar2);
    _objc_release(puVar9);
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c1d3680(puVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar8);
  }
  puVar9 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar10 = PTR_PTR_1126c6c88;
  func_0x00010bf44480(PTR_PTR_1126c6c88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar9);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105fc5224; end: 105fc528b;  */

void FUN_105fc5224(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc528c; end: 105fc53a7; -[SCConversationRetentionMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fc528c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fc53a8; end: 105fc53ef;  */

void FUN_105fc53a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be278a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fc53f0; end: 105fc541f; -[SCConversationRetentionMessagePlugin identifier] */

void FUN_105fc53f0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeb9b8);
  return;
}



/* Entry: 105fc5420; end: 105fc5427; -[SCConversationRetentionMessagePlugin pluginType] */

undefined8 FUN_105fc5420(void)

{
  return 1;
}



/* Entry: 105fc5428; end: 105fc54a7; -[SCConversationRetentionMessagePlugin _handleRetentionModeChange:] */

void FUN_105fc5428(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bef0700();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 2) && (lVar1 != 0)) {
    if (param_3 - 1U < 6) {
      uVar2 = *(undefined8 *)(&UNK_10ddd1d10 + (ulong)(param_3 - 1U) * 8);
    }
    else {
      uVar2 = 0;
    }
    func_0x00010c0d0500(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,uVar2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fc54a8; end: 105fc5507; -[SCConversationRetentionMessagePlugin _handleSnapViewabilityChangeToRetentionType:] */

void FUN_105fc54a8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bef0700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c284a40(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,param_3 != 0,2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fc5508; end: 105fc556f; -[SCConversationRetentionMessagePlugin _handleConversationId:] */

void FUN_105fc5508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf3ab80(uVar1);
  uVar1 = param_3;
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c162620(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fc5570; end: 105fc5577; -[SCConversationRetentionMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fc5570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105fc5578; end: 105fc557f; -[SCConversationRetentionMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fc5578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105fc5580; end: 105fc55af; -[SCConversationRetentionMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fc5580(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105fc55b0; end: 105fc55c7; -[SCConversationRetentionMessagePlugin uiContainer] */

void FUN_105fc55b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc55c8; end: 105fc55d3; -[SCConversationRetentionMessagePlugin setUiContainer:] */

void FUN_105fc55c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105fc55d4; end: 105fc55eb; -[SCConversationRetentionMessagePlugin presentingViewController] */

void FUN_105fc55d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fc55ec; end: 105fc55f7; -[SCConversationRetentionMessagePlugin setPresentingViewController:] */

void FUN_105fc55ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105fc55f8; end: 105fc567f; -[SCConversationRetentionMessagePlugin .cxx_destruct] */

void FUN_105fc55f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
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



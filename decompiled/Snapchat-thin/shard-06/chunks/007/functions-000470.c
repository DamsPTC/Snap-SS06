/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cfac38; end: 104cfad43; -[SCOneTapLoginLoggerImpl _logOneTapLoginLandingPageViewWithAccountsCount:] */

void FUN_104cfac38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126af598;
  _objc_opt_new(PTR_PTR_1126af598);
  func_0x00010c1c0c20();
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c072f80(uVar2);
  func_0x00010c1b10c0(puVar1,param_2,uVar2);
  func_0x00010c1cf880(puVar1,param_2,param_3);
  func_0x00010be50980(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126af588;
  func_0x00010c0ee0c0(PTR_PTR_1126af588);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daea58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be547e0(param_1,param_2,puVar3,&PTR____CFConstantStringClassReference_110daf538,puVar4
                     );
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfad44; end: 104cfadbf; -[SCOneTapLoginLoggerImpl _logOneTapLoginLandingPageAction:position:] */

void FUN_104cfad44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126af588;
  func_0x00010c0ee0a0(PTR_PTR_1126af588);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 - 1U < 5) {
    ppuVar2 = (undefined **)(&PTR_PTR_110849e30)[param_3 - 1U];
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daf5f8;
  }
  func_0x00010be547c0(param_1,param_2,puVar1,ppuVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfadc0; end: 104cfaf5f; -[SCOneTapLoginLoggerImpl _logOneTapLoginLoginAttemptPosition:userId:username:optInSource:networkRequestId:] */

void FUN_104cfadc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af5a0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1dee80();
  func_0x00010c21e620(puVar1,param_2,param_5);
  func_0x00010c21e4c0(puVar1,param_2,param_4);
  func_0x00010c1c0a40(puVar1,param_2,param_4);
  func_0x000106bfe91c(param_6);
  func_0x00010c206c40(puVar1,param_2,param_6);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b42c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010c17ce20(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010be509c0(param_1,param_2,puVar1,param_5,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfaf60; end: 104cfb0ff; -[SCOneTapLoginLoggerImpl _logOneTapLoginLoginFailurePosition:userId:username:optInSource:networkRequestId:] */

void FUN_104cfaf60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af5a8;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1dee80();
  func_0x00010c21e620(puVar1,param_2,param_5);
  func_0x00010c21e4c0(puVar1,param_2,param_4);
  func_0x00010c1c0a40(puVar1,param_2,param_4);
  func_0x000106bfe91c(param_6);
  func_0x00010c206c40(puVar1,param_2,param_6);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x48));
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b42c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010c17ce20(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010be509c0(param_1,param_2,puVar1,param_5,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfb100; end: 104cfb20f; -[SCOneTapLoginLoggerImpl _logOneTapLoginFailureDialogAction:position:userId:username:] */

void FUN_104cfb100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5b0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c161620();
  func_0x00010c1dee80(puVar1,param_2,param_4);
  func_0x00010c21e620(puVar1,param_2,param_6);
  func_0x00010c21e4c0(puVar1,param_2,param_5);
  func_0x00010c1c0a40(puVar1,param_2,param_5);
  func_0x00010be509c0(param_1,param_2,puVar1,param_6,param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126af588;
  func_0x00010c0ee020(PTR_PTR_1126af588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efdfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be547c0(param_1,param_2,puVar2,param_3,param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfb210; end: 104cfb347; -[SCOneTapLoginLoggerImpl _logOneTapLoginAuthenticateFailureWithReason:details:] */

void FUN_104cfb210(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af588;
  func_0x00010c0edfc0(PTR_PTR_1126af588);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 - 1U < 6) {
    ppuVar6 = (undefined **)(&PTR_PTR_110849e58)[param_3 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daf6b8;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf558,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daee18,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_4;
  func_0x00010c08fa60();
  puVar1 = puVar4;
  if (lVar5 != 0) {
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daf578,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  func_0x00010be541e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cfb348; end: 104cfb45f; -[SCOneTapLoginLoggerImpl _logRemoveOneTapLoginUserDialog:position:userId:username:optInSource:] */

void FUN_104cfb348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af5b8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1c0c20();
  func_0x00010c1c08c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c161620(puVar1,param_2,param_3);
  func_0x000106bfe91c(param_7);
  func_0x00010c206c40(puVar1,param_2,param_7);
  func_0x00010be509c0(param_1,param_2,puVar1,param_6,param_5);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126af588;
  func_0x00010c0ee120(PTR_PTR_1126af588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3d30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be547c0(param_1,param_2,puVar2,param_3,param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfb460; end: 104cfb4cf; -[SCOneTapLoginLoggerImpl _logBlizzardEvent:username:userGuid:] */

void FUN_104cfb460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a00();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cfb4d0; end: 104cfb51f; -[SCOneTapLoginLoggerImpl _logBlizzardEvent:] */

void FUN_104cfb4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cfb520; end: 104cfb5e3; -[SCOneTapLoginLoggerImpl _logGrapheneWithMetric:action:position:] */

void FUN_104cfb520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110daea58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110daf598,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010be547a0(param_1,param_2,uVar2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cfb5e4; end: 104cfb5f3; -[SCOneTapLoginLoggerImpl _logGrapheneWithMetric:action:] */

void FUN_104cfb5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be547f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGrapheneWithMetric_dimension_112572b98,param_3,
             &PTR____CFConstantStringClassReference_110daf5b8,param_4);
  return;
}



/* Entry: 104cfb5f4; end: 104cfb6eb; -[SCOneTapLoginLoggerImpl _logGrapheneWithMetric:dimensionKey:dimensionValue:] */

void FUN_104cfb5f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c2ac460(param_3,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c072f80(uVar1);
  func_0x00010c25d8c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110daf5d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined1 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110dae8b8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar2);
  func_0x00010be541e0(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104cfb6ec; end: 104cfb75b; -[SCOneTapLoginLoggerImpl _logGrapheneEvent:] */

void FUN_104cfb6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cfb75c; end: 104cfb7df; -[SCOneTapLoginLoggerImpl .cxx_destruct] */

void FUN_104cfb75c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104cfb7e0; end: 104cfb883; -[SCOneTapLoginProviderImpl initWithMultiAccountRepositories:bitmojiImageFetcher:] */

undefined1 *
FUN_104cfb7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3ce8;
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



/* Entry: 104cfb884; end: 104cfb973; -[SCOneTapLoginProviderImpl displayData] */

void FUN_104cfb884(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104cfb974;
  puStack_60 = &UNK_110849e88;
  uVar3 = uVar2;
  lStack_58 = param_1;
  func_0x000100504554();
  uVar4 = uVar3;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104cfba08;
  puStack_88 = &UNK_110849ef8;
  uVar3 = uVar4;
  lStack_80 = param_1;
  func_0x000100504554(uVar4,&puStack_a0);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104cfb974; end: 104cfb983;  */

void FUN_104cfb974(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_oneTapLoginRespositoryForUserId__112617c18,param_2);
  return;
}



/* Entry: 104cfb984; end: 104cfba07;  */

undefined8 FUN_104cfb984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c0e86a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0e86a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104cfba08; end: 104cfbbbf;  */

void FUN_104cfba08(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0e8460();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_2;
    func_0x00010c0e84a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010c0e8860(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108ffe710();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 1;
  func_0x000108ffef38(1,lVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126af5c0;
  if (bVar1) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be0ff00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1aec0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    func_0x00010c23c640(PTR_PTR_1126af5c0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126af5c8;
  _objc_alloc(PTR_PTR_1126af5c8);
  lVar2 = param_2;
  func_0x00010c0e8820(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0e8860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8720(param_2);
  func_0x00010c05c200(puVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104cfbbc0; end: 104cfbd8b; -[SCOneTapLoginProviderImpl _fetchBitmojiForOneTapLogin:] */

void FUN_104cfbbc0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0e8420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af5d0;
  puVar2 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126af5d8;
    _objc_alloc(PTR_PTR_1126af5d8);
    puVar2 = param_3;
    func_0x00010c0e8460(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c0e84a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6040(puVar1,param_2,puVar2,puVar3,0,1,0x14);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bfaa100();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104cfbd8c;
    puStack_50 = &UNK_110849f28;
    _objc_retain(param_3);
    puVar2 = puVar3;
    puStack_48 = param_3;
    func_0x00010bf87460(puVar3,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_48);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    puVar1 = param_3;
    func_0x00010c0e8420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cfbd8c; end: 104cfbdff;  */

void FUN_104cfbd8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cfbe00; end: 104cfbe03;  */

void FUN_104cfbe00(void)

{
  return;
}



/* Entry: 104cfbe04; end: 104cfbe33; -[SCOneTapLoginProviderImpl .cxx_destruct] */

void FUN_104cfbe04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cfbe34; end: 104cfbf5b; -[SCOneTapLoginMultiAccountLandingPage initWithScreen:currentPageTracker:oAuthTypes:ghostImageService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cfbe34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e3cf0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112710ff4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710ff8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710ffc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112711000;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cfbf5c; end: 104cfbf63; -[SCOneTapLoginMultiAccountLandingPage pageViewName] */

undefined8 FUN_104cfbf5c(void)

{
  return 0xaa;
}



/* Entry: 104cfbf64; end: 104cfbfd3; -[SCOneTapLoginMultiAccountLandingPage viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfbf64(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3cf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710ff8);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  func_0x00010beb0340(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 104cfbfd4; end: 104cfc033; -[SCOneTapLoginMultiAccountLandingPage viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfbfd4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3cf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710ff8);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104cfc034; end: 104cfc03f; -[SCOneTapLoginMultiAccountLandingPage supportedInterfaceOrientations] */

undefined8 FUN_104cfc034(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 104cfc040; end: 104cfc0ef; -[SCOneTapLoginMultiAccountLandingPage _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc040(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cfc0f0; end: 104cfc137;  */

void FUN_104cfc0f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfc138; end: 104cfc19f; -[SCOneTapLoginMultiAccountLandingPage _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711004);
  *(undefined8 *)(param_1 + _DAT_112711004) = param_3;
  _objc_release(uVar1);
  func_0x00010bed6fa0(param_1);
  func_0x00010be26160(param_1);
  func_0x00010bedb0c0(param_1);
  func_0x00010beb9b60(param_1);
  func_0x00010beb9b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beba870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showReactivationAlertsIfNecessa_11258c3c0);
  return;
}



/* Entry: 104cfc1a0; end: 104cfc247; -[SCOneTapLoginMultiAccountLandingPage _handleAutoLoginIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc1a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112711004;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf11860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_112711008;
    if (*(long *)(param_1 + lVar1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf11860();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2827c0();
      _objc_release(uVar2);
      func_0x00010c1d8bc0(*(undefined8 *)(param_1 + lVar1));
      *(undefined8 *)(param_1 + _DAT_11271100c) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010be5ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loginButtonPressed_1125744a0);
      return;
    }
  }
  return;
}



/* Entry: 104cfc248; end: 104cfc63f; -[SCOneTapLoginMultiAccountLandingPage _updateDisplayDataIfNecessary] */

/* WARNING: Possible PIC construction at 0x000104cfc68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104cfc6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104cfc6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cfc6ac) */
/* WARNING: Removing unreachable block (ram,0x000104cfc690) */
/* WARNING: Removing unreachable block (ram,0x000104cfc6c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc248(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112711010;
  puVar1 = *(undefined **)(param_1 + lVar15);
  func_0x00010bf529e0();
  lVar18 = (long)_DAT_112711004;
  puVar2 = *(undefined **)(param_1 + lVar18);
  func_0x00010bf85560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release();
  if (puVar1 != puVar3) {
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf85560();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined8 *)(param_1 + lVar15) = uVar4;
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar16 = *(long *)(param_1 + lVar15);
    _objc_retain(lVar16);
    lVar15 = lVar16;
    func_0x00010bf52a60();
    lVar19 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar19) {
          _objc_enumerationMutation(lVar16);
        }
        puVar1 = PTR_PTR_1126af5e0;
        _objc_alloc(PTR_PTR_1126af5e0);
        func_0x00010c00d280();
        func_0x00010c219b60();
        func_0x00010c18b5e0(puVar1);
        func_0x00010befa120(puVar2);
        puVar5 = puVar1;
        func_0x00010bfe0660(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf49420(0x4067c00000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar1);
        lVar17 = lVar17 + 1;
      } while (lVar15 != lVar17);
      lVar15 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    puVar1 = PTR_PTR_1126af5e8;
    _objc_alloc();
    func_0x00010c033660();
    lVar19 = (long)_DAT_112711008;
    uVar4 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar1;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar19));
    lVar15 = (long)_DAT_112711014;
    func_0x00010c066580(*(undefined8 *)(param_1 + lVar15));
    uVar7 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf49420(0x4067c00000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2793a0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar3);
    _objc_release(puVar1);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar4 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c063ec0(*(undefined8 *)(param_1 + lVar18));
    func_0x00010c1d8bc0(uVar4);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = (long)_DAT_112711004;
  func_0x00010c076f60(*(undefined8 *)(puVar2 + lVar13));
  lVar15 = (long)_DAT_112711018;
  func_0x00010c1beb60(*(undefined8 *)(puVar2 + lVar15));
  uVar4 = *(undefined8 *)(puVar2 + lVar13);
  func_0x00010c076f60(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + lVar15),PTR_s_setEnabled__112642f38,(uint)uVar4 ^ 1);
  return;
}



/* Entry: 104cfc640; end: 104cfc6ef; -[SCOneTapLoginMultiAccountLandingPage _updateLoginLoadingState] */

/* WARNING: Possible PIC construction at 0x000104cfc68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104cfc6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104cfc6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cfc6ac) */
/* WARNING: Removing unreachable block (ram,0x000104cfc690) */
/* WARNING: Removing unreachable block (ram,0x000104cfc6c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc640(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112711004;
  func_0x00010c076f60(*(undefined8 *)(param_1 + lVar2));
  lVar3 = (long)_DAT_112711018;
  func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c076f60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setEnabled__112642f38,(uint)uVar1 ^ 1);
  return;
}



/* Entry: 104cfc6f0; end: 104cfc777; -[SCOneTapLoginMultiAccountLandingPage _showLogInAlertIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc6f0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112711004;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010beff5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010beff5c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb9ba0(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104cfc778; end: 104cfc7ff; -[SCOneTapLoginMultiAccountLandingPage _showLogInAlertWithOptionsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc778(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112711004;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010beff8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010beff8e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb9bc0(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104cfc800; end: 104cfc8d7; -[SCOneTapLoginMultiAccountLandingPage _showReactivationAlertsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc800(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112711004;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c121080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c121080(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba840(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c121040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c121040(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba880(param_1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104cfc8d8; end: 104cfc933; -[SCOneTapLoginMultiAccountLandingPage _loginButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc8d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010bf10ae0(PTR_PTR_1126af5f0,param_2,*(undefined8 *)(param_1 + _DAT_11271100c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfc934; end: 104cfc97f; -[SCOneTapLoginMultiAccountLandingPage _signUpButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c23be00(PTR_PTR_1126af5f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfc980; end: 104cfc9cb; -[SCOneTapLoginMultiAccountLandingPage _switchAccountButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc980(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c265520(PTR_PTR_1126af5f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfc9cc; end: 104cfca27; -[SCOneTapLoginMultiAccountLandingPage _removeAccountConfirmed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfc9cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c12d6a0(PTR_PTR_1126af5f0,param_2,*(undefined8 *)(param_1 + _DAT_11271100c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfca28; end: 104cfca83; -[SCOneTapLoginMultiAccountLandingPage _passwordInsteadConfirmed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfca28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c290760(PTR_PTR_1126af5f0,param_2,*(undefined8 *)(param_1 + _DAT_11271100c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfca84; end: 104cfcb07; -[SCOneTapLoginMultiAccountLandingPage _alertDismissed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfca84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711024);
  *(undefined8 *)(param_1 + _DAT_112711024) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711028);
  *(undefined8 *)(param_1 + _DAT_112711028) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar2 = PTR_PTR_1126af5f0;
  func_0x00010beff560(PTR_PTR_1126af5f0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cfcb08; end: 104cfcb53; -[SCOneTapLoginMultiAccountLandingPage _reactivationDeclined] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfcb08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c121060(PTR_PTR_1126af5f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfcb54; end: 104cfcb9f; -[SCOneTapLoginMultiAccountLandingPage _reactivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfcb54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c120f80(PTR_PTR_1126af5f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfcba0; end: 104cfcbeb; -[SCOneTapLoginMultiAccountLandingPage _selectLinkWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfcba0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c159b60(PTR_PTR_1126af5f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfcbec; end: 104cfce93; -[SCOneTapLoginMultiAccountLandingPage _showRemoveAccountAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfcbec(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108b9a8ac();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104cfce94;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108b9a87c();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000104d056a4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000104d056bc();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c18b5e0(puVar4);
  puVar5 = puVar4;
  _objc_storeWeak(param_1 + _DAT_11271102c,puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  puVar1 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar5);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be8b320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfce94; end: 104cfcf17;  */

void FUN_104cfce94(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfcf18; end: 104cfd0ef; -[SCOneTapLoginMultiAccountLandingPage _showLogInErrorAlert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfcf18(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb6e40();
  if ((int)lVar1 != 0) {
    puVar2 = auStack_58;
    _objc_initWeak(puVar2,param_1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000108b9a8dc();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104cfd0f0;
    puStack_68 = &UNK_1108482a8;
    param_2 = auStack_58;
    _objc_copyWeak(auStack_60,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bdc9b60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112711024;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar1;
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c10eda0(param_1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    unaff_x23 = &puStack_80;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdc9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cfd0f0; end: 104cfd133;  */

void FUN_104cfd0f0(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfd134; end: 104cfd3a7; -[SCOneTapLoginMultiAccountLandingPage _showLogInErrorWithOptionsAlert:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfd134(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb6e40();
  if ((int)lVar1 != 0) {
    puVar2 = auStack_80;
    _objc_initWeak(puVar2,param_1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000104d056ec();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104cfd3a8;
    puStack_90 = &UNK_1108482a8;
    unaff_x24 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000104d05704();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar5;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x104cfd3e8;
    puStack_b8 = &UNK_1108482a8;
    param_2 = auStack_80;
    _objc_copyWeak(auStack_b0,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bdc9b60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112711024;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar1;
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c10eda0(param_1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    unaff_x25 = &puStack_d0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x20));
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be70980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cfd3a8; end: 104cfd42b;  */

void FUN_104cfd3a8(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfd42c; end: 104cfd603; -[SCOneTapLoginMultiAccountLandingPage _showReactivationAlertWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfd42c(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb6e40();
  if ((int)lVar1 != 0) {
    puVar2 = auStack_58;
    _objc_initWeak(puVar2,param_1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000108b9a8dc();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104cfd604;
    puStack_68 = &UNK_1108482a8;
    param_2 = auStack_58;
    _objc_copyWeak(auStack_60,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bdc9b60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112711024;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar1;
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c10eda0(param_1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    unaff_x23 = &puStack_80;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be86280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cfd604; end: 104cfd643;  */

void FUN_104cfd604(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfd644; end: 104cfd8b7; -[SCOneTapLoginMultiAccountLandingPage _showReactivationConfirmationAlertWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfd644(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long lVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb6e40();
  if ((int)lVar1 != 0) {
    puVar2 = auStack_80;
    _objc_initWeak(puVar2,param_1);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000108b9a8ac();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104cfd8b8;
    puStack_90 = &UNK_1108482a8;
    unaff_x24 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000108b9a87c();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar5;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x104cfd8f8;
    puStack_b8 = &UNK_1108482a8;
    param_2 = auStack_80;
    _objc_copyWeak(auStack_b0,param_2);
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bdc9b60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112711024;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar1;
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c10eda0(param_1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    unaff_x25 = &puStack_d0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x20));
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be86200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cfd8b8; end: 104cfd937;  */

void FUN_104cfd8b8(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfd938; end: 104cfd987; -[SCOneTapLoginMultiAccountLandingPage paginationWillBeginDragging] */

/* WARNING: Possible PIC construction at 0x000104cfd95c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cfd960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfd938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711018),PTR_s_setEnabled__112642f38,0);
  return;
}



/* Entry: 104cfd988; end: 104cfd9df; -[SCOneTapLoginMultiAccountLandingPage paginationDidEndDragging:] */

/* WARNING: Possible PIC construction at 0x000104cfd9b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104cfd9b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfd988(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11271100c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711018),PTR_s_setEnabled__112642f38,1);
  return;
}



/* Entry: 104cfd9e0; end: 104cfd9e3; -[SCOneTapLoginMultiAccountLandingPage didTapRemoveAccount] */

void FUN_104cfd9e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beba9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showRemoveAccountAlert_11258c410);
  return;
}



/* Entry: 104cfd9e4; end: 104cfd9e7; -[SCOneTapLoginMultiAccountLandingPage didTapAvatar] */

void FUN_104cfd9e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loginButtonPressed_1125744a0);
  return;
}



/* Entry: 104cfd9e8; end: 104cfda4b; -[SCOneTapLoginMultiAccountLandingPage dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfd9e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271102c;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained(lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__alertDismissed__112550080,param_3 == lVar1);
  return;
}



/* Entry: 104cfda4c; end: 104cfeb97; -[SCOneTapLoginMultiAccountLandingPage _setupSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cfda4c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  undefined *puVar40;
  undefined *puVar41;
  long lVar42;
  long lVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  long lVar49;
  undefined *puVar50;
  undefined8 uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar53);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711000);
  func_0x00010c271120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c219b60(puVar2,param_2,0);
  lVar53 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar53);
  puVar4 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_112711018;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar53);
  *(undefined **)(param_1 + lVar53) = puVar4;
  _objc_release();
  func_0x00010b88a460();
  if ((iVar1 != 0) && (lRam00000001138466f0 < 3)) {
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar53),param_2,99,0);
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar53),param_2,99,4);
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar53),param_2,0x52,0);
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar53),param_2,0x52,4);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar53);
  func_0x00010c219b60(uVar3,param_2,0);
  uVar51 = *(undefined8 *)(param_1 + lVar53);
  func_0x000104d0565c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar51,param_2,uVar3,0);
  _objc_release(uVar3);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar53),param_2,param_1,
                      PTR_s__loginButtonPressed_1125744a0,0x40);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar53),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar53),param_2,
                      &PTR____CFConstantStringClassReference_110e78d18);
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c219b60();
  lVar49 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar49);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010bef6d60(puVar4,param_2,puVar5);
  puVar6 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_11271101c;
  uVar3 = *(undefined8 *)(param_1 + lVar55);
  *(undefined **)(param_1 + lVar55) = puVar6;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010c219b60(uVar3,param_2,0);
  uVar51 = *(undefined8 *)(param_1 + lVar55);
  func_0x000104d05674();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar51,param_2,uVar3,0);
  _objc_release(uVar3);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar55),param_2,0xd4,0);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar55),param_2,0xd6,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar55),param_2,param_1,
                      PTR_s__signUpButtonPressed_112525c48,0x40);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar55),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar55),param_2,
                      &PTR____CFConstantStringClassReference_110daf7f8);
  func_0x00010bef6d60(puVar4,param_2,*(undefined8 *)(param_1 + lVar55));
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf414e0(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar6,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010bef6d60(puVar4,param_2,puVar6);
  puVar7 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar52 = (long)_DAT_112711020;
  uVar3 = *(undefined8 *)(param_1 + lVar52);
  *(undefined **)(param_1 + lVar52) = puVar7;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar52);
  func_0x00010c219b60(uVar3,param_2,0);
  uVar51 = *(undefined8 *)(param_1 + lVar52);
  func_0x000104d0568c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar51,param_2,uVar3,0);
  _objc_release(uVar3);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar52),param_2,0xd4,0);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar52),param_2,0xd6,0);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar52),param_2,param_1,
                      PTR_s__switchAccountButtonPressed_112525c50,0x40);
  func_0x00010c198080(*(undefined8 *)(param_1 + lVar52),param_2,1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar52),param_2,
                      &PTR____CFConstantStringClassReference_110daf7d8);
  func_0x00010bef6d60(puVar4,param_2,*(undefined8 *)(param_1 + lVar52));
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  func_0x00010bef6d60(puVar4,param_2,puVar7);
  func_0x00010c16e060(puVar4,param_2,0);
  func_0x00010c166c00(puVar4,param_2,3);
  func_0x00010c190b80(puVar4,param_2,3);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar9 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar49;
  func_0x00010c08cee0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf493c0(0x4034000000000000,puVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  puStack_e8 = puVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar14;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar13;
  func_0x00010bf493a0(puVar13,param_2,lVar54);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  puStack_e0 = puVar50;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  puStack_d8 = puVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar5;
  puStack_d0 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493a0(puVar19,param_2,puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar5;
  puStack_c8 = puVar21;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010bf49420(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar6;
  puStack_c0 = puVar23;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar6;
  puStack_b8 = puVar25;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar26;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar7;
  puStack_b0 = puVar27;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493a0(puVar28,param_2,puVar29);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar7;
  puStack_a8 = puVar30;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar31;
  func_0x00010bf49420(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar4;
  puStack_a0 = puVar32;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd5520(param_1);
  puVar36 = puVar33;
  func_0x00010bf493c0(puVar33,param_2,lVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar4;
  puStack_98 = puVar36;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar37;
  func_0x00010bf493a0(puVar37,param_2,lVar39);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = puVar4;
  puStack_90 = puVar40;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar41;
  func_0x00010bf493a0(puVar41,param_2,lVar43);
  _objc_retainAutoreleasedReturnValue();
  puVar45 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar44;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e8,0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar8,param_2,puVar45);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar50);
  _objc_release(lVar54);
  _objc_release(lVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar49);
  _objc_release(puVar9);
  uVar46 = *(undefined8 *)(param_1 + lVar55);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar46;
  func_0x00010bf493a0(uVar46,param_2,puVar50);
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(param_1 + lVar52);
  uStack_100 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar47;
  func_0x00010bf493a0(uVar47,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  uStack_f8 = uVar51;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(uVar51);
  _objc_release(puVar15);
  _objc_release(uVar47);
  _objc_release(uVar3);
  _objc_release(puVar50);
  _objc_release(uVar46);
  puVar9 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar54 = (long)_DAT_112711014;
  uVar3 = *(undefined8 *)(param_1 + lVar54);
  *(undefined **)(param_1 + lVar54) = puVar9;
  _objc_release(uVar3);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar54),param_2,1);
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar54),param_2,3);
  func_0x00010c207380(0x4034000000000000,*(undefined8 *)(param_1 + lVar54));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar54),param_2,0);
  lVar49 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar49);
  uVar3 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar49;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar49);
  _objc_release(uVar3);
  func_0x00010c1e3380(0x443b8000,uVar46);
  uVar47 = *(undefined8 *)(param_1 + lVar54);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar47;
  func_0x00010bf493a0(uVar47,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar48 = *(undefined8 *)(param_1 + lVar54);
  uStack_118 = uVar51;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar49;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar48;
  func_0x00010bf493a0(uVar48,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_110 = uVar3;
  uStack_108 = uVar46;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(lVar10);
  _objc_release(lVar49);
  _objc_release(uVar48);
  _objc_release(uVar51);
  _objc_release(lVar14);
  _objc_release(lVar11);
  _objc_release(uVar47);
  lVar49 = *(long *)(param_1 + _DAT_112710ffc);
  func_0x00010bf529e0();
  if (lVar49 == 0) {
    lVar49 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar49);
    puVar50 = *(undefined **)(param_1 + lVar53);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar49;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar50;
    func_0x00010bf493a0(puVar50,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar51 = *(undefined8 *)(param_1 + lVar53);
    puStack_148 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010c274200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar47 = 0xc030000000000000;
    uVar3 = uVar51;
    func_0x00010bf493c0(0xc030000000000000,uVar51,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_140 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_148,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar8,param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(uVar3);
    _objc_release(puVar12);
    _objc_release(uVar51);
    _objc_release(puVar9);
    _objc_release(lVar10);
    _objc_release(lVar49);
  }
  else {
    func_0x00010c216380(*(undefined8 *)(param_1 + lVar53),param_2,0xd5,0);
    func_0x00010c16e480(*(undefined8 *)(param_1 + lVar53),param_2,0xd4,0);
    func_0x00010c1732a0(*(undefined8 *)(param_1 + lVar53),param_2,0xd6,0);
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar54),param_2,*(undefined8 *)(param_1 + lVar53))
    ;
    puVar50 = PTR_PTR_1126af048;
    _objc_alloc();
    func_0x00010c030680();
    func_0x00010c219b60();
    lVar53 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar53);
    puVar9 = puVar50;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = lVar53;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bf493a0(puVar9,param_2,lVar49);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar50;
    puStack_138 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493c0(0x403e000000000000,puVar13,param_2,lVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar50;
    puStack_130 = puVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    func_0x00010c274200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar16;
    func_0x00010bf493c0(0xc03c000000000000,puVar16,param_2,puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar50;
    puStack_128 = puVar28;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar54);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar29;
    func_0x00010bf49480(0x403c000000000000,puVar29,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar30;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_138,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar8,param_2,puVar31);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(uVar3);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar49);
    _objc_release(lVar53);
    _objc_release(puVar9);
    uVar47 = 0x447a0000;
    func_0x00010c181cc0(0x447a0000,puVar50,param_2,1);
  }
  _objc_release(puVar50);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar8);
  _objc_release(uVar46);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  iVar1 = (int)puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar47;
  }
  ___stack_chk_fail();
  func_0x0001008522a8();
  uVar3 = 0xc041000000000000;
  if (iVar1 == 0) {
    uVar3 = 0xc034000000000000;
  }
  return uVar3;
}



/* Entry: 104cfeb98; end: 104cfebbf; -[SCOneTapLoginMultiAccountLandingPage _bottomMargin] */

undefined8 FUN_104cfeb98(int param_1)

{
  undefined8 uVar1;
  
  func_0x0001008522a8();
  uVar1 = 0xc041000000000000;
  if (param_1 == 0) {
    uVar1 = 0xc034000000000000;
  }
  return uVar1;
}



/* Entry: 104cfebc0; end: 104cfecc3; -[SCOneTapLoginMultiAccountLandingPage _alertDialogWithParsedLinks:actions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfebc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  lVar2 = (long)_DAT_112711028;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cfecc4;
  puStack_48 = &UNK_110849f88;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000105c59ed4(param_3,param_4,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104cfecc4; end: 104cfed13;  */

undefined8 FUN_104cfecc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9da00();
  _objc_release(param_2);
  _objc_release(param_1);
  return 1;
}



/* Entry: 104cfed14; end: 104cfed73; -[SCOneTapLoginMultiAccountLandingPage _shouldUpdateAlertDialogWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104cfed14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112711028);
    func_0x00010c0720c0(uVar2,param_2,param_3);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 104cfed74; end: 104cfedc3; -[SCOneTapLoginMultiAccountLandingPage oAuthListView:didSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfed74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710ff4);
  puVar1 = PTR_PTR_1126af5f0;
  func_0x00010c158ea0(PTR_PTR_1126af5f0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfedc4; end: 104cfedd3; -[SCOneTapLoginMultiAccountLandingPage alertDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cfedc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112711024);
}



/* Entry: 104cfedd4; end: 104cfeecf; -[SCOneTapLoginMultiAccountLandingPage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfedd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711024,0);
  _objc_storeStrong(param_1 + _DAT_112711000,0);
  _objc_storeStrong(param_1 + _DAT_112710ff8,0);
  _objc_storeStrong(param_1 + _DAT_112711028,0);
  _objc_destroyWeak(param_1 + _DAT_11271102c);
  _objc_storeStrong(param_1 + _DAT_112711014,0);
  _objc_storeStrong(param_1 + _DAT_112711020,0);
  _objc_storeStrong(param_1 + _DAT_11271101c,0);
  _objc_storeStrong(param_1 + _DAT_112711018,0);
  _objc_storeStrong(param_1 + _DAT_112711008,0);
  _objc_storeStrong(param_1 + _DAT_112711010,0);
  _objc_storeStrong(param_1 + _DAT_112710ffc,0);
  _objc_storeStrong(param_1 + _DAT_112711004,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710ff4,0);
  return;
}



/* Entry: 104cfeed0; end: 104cff237; -[SCOneTapLoginLandingPageBusinessLogic initWithInitialUserId:initialIndex:displayData:reactivationStatus:oneTapLoginAuthenticator:applicationPreferences:loginLogger:loginStateTransitionLogger:oneTapLoginLogger:autoOneTapLoginEventService:circumstanceEngine:performer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cfeed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
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
  puStack_68 = PTR_PTR_1126e3cf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_104cff1b4;
  lVar5 = (long)_DAT_112711030;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_3;
  _objc_release(uVar2);
  *(undefined8 *)((long)puVar1 + (long)_DAT_112711034) = param_4;
  lVar5 = (long)_DAT_112711038;
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_5;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11271103c;
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_7;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_112711040;
  _objc_retain(param_8);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_8;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_112711044;
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_9;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_112711048;
  _objc_retain(param_10);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_10;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11271104c;
  _objc_retain(param_11);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_11;
  _objc_release(uVar2);
  uVar3 = param_6;
  func_0x00010c121100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112711050);
  *(ulong *)((long)puVar1 + (long)_DAT_112711050) = uVar3;
  _objc_release(uVar2);
  _objc_storeWeak((long)puVar1 + (long)_DAT_112711054,param_15);
  *(undefined1 *)((long)puVar1 + (long)_DAT_112711058) = 0;
  uVar3 = param_6;
  func_0x00010c0d74c0();
  if ((uVar3 & 1) == 0) {
    if (param_6 != 0) {
      piVar4 = (int *)&DAT_112711060;
      goto LAB_104cff134;
    }
  }
  else {
    piVar4 = (int *)&DAT_11271105c;
LAB_104cff134:
    uVar3 = param_6;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)*piVar4);
    *(ulong *)((long)puVar1 + (long)*piVar4) = uVar3;
    _objc_release(uVar2);
  }
  lVar5 = (long)_DAT_112711064;
  _objc_retain(param_12);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_12;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_112711068;
  _objc_retain(param_13);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_13;
  _objc_release(uVar2);
  lVar5 = (long)_DAT_11271106c;
  _objc_retain(param_14);
  uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined8 *)((long)puVar1 + lVar5) = param_14;
  _objc_release(uVar2);
LAB_104cff1b4:
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104cff238; end: 104cff287; -[SCOneTapLoginLandingPageBusinessLogic dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cff238(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112711070));
  puStack_28 = PTR_PTR_1126e3cf8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104cff288; end: 104cff3b3; -[SCOneTapLoginLandingPageBusinessLogic _handleAutoOneTapLoginWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cff288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  double dVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf3b6a0(*(undefined8 *)(param_1 + _DAT_112711064));
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  dVar2 = 1.60807493534087e-314;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cff3b4;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  uStack_48 = param_3;
  _objc_retainBlock();
  func_0x00010c247520(param_3);
  func_0x00010bdd1740(param_1);
  if (dVar2 <= 0.0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010c0f7fe0(*(undefined8 *)(param_1 + _DAT_11271106c));
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cff3b4; end: 104cff407;  */

void FUN_104cff3b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0a1c0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cff408; end: 104cff41f; -[SCOneTapLoginLandingPageBusinessLogic _autoOneTapLoginDelayForSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104cff408(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (param_4 != 0) {
    return param_1;
  }
  lVar1 = *(long *)(param_2 + _DAT_112711068);
  _objc_retain();
  if (lRam00000001136c6d88 != -1) {
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  dVar3 = 0.0;
  if ((bRam00000001136c6d52 & 1) == 0) {
    lVar2 = lVar1;
    func_0x00010c0b5020(lVar1);
    dVar3 = (double)lVar2 / 1000.0;
  }
  _objc_release(lVar1);
  return dVar3;
}



/* Entry: 104cff420; end: 104cff51b; -[SCOneTapLoginLandingPageBusinessLogic _enqueueProcessAutoOneTapLoginOnQueueWithUserId:] */

void FUN_104cff420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cff51c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_68);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cff51c; end: 104cff54f;  */

void FUN_104cff51c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cff550; end: 104cff65f; -[SCOneTapLoginLandingPageBusinessLogic _processAutoOneTapLoginOnQueueWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cff550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_112711058) & 1) == 0) {
    lVar3 = *(long *)(param_1 + _DAT_112711038);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104cff660;
    puStack_40 = &UNK_110849fb8;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bfece40(lVar3,param_2,&puStack_58);
    if (lVar3 != 0x7fffffffffffffff) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_112711074;
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar2);
      lVar3 = param_1;
      func_0x00010bf8e1a0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      _objc_release(lVar3);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
    }
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cff660; end: 104cff6a7;  */

undefined8 FUN_104cff660(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104cff6a8; end: 104cff79f; -[SCOneTapLoginLandingPageBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cff6a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711064);
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711070);
  *(undefined8 *)(param_1 + _DAT_112711070) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cff7a0; end: 104cff7e7;  */

void FUN_104cff7a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cff7e8; end: 104cff85b; -[SCOneTapLoginLandingPageBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cff7e8(void)

{
  _objc_alloc(PTR_PTR_1126af5f8);
  func_0x00010c00d2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cff85c; end: 104cff9b7; -[SCOneTapLoginLandingPageBusinessLogic handleAction:] */

void FUN_104cff85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104cff9b8;
  puStack_30 = &UNK_1108484c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104cffa44;
  puStack_58 = &UNK_1108484c8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104cffbe0;
  puStack_80 = &UNK_1108484c8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104cffd84;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104cffdbc;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104cffe2c;
  puStack_f8 = &UNK_1108480c8;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104cffe84;
  puStack_120 = &UNK_1108484c8;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_104cffe90;
  puStack_148 = &UNK_110842e18;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x104cffefc;
  puStack_170 = &UNK_110842e18;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_104cfff5c;
  puStack_198 = &UNK_1108480f8;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bc980(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0);
  return;
}



/* Entry: 104cff9b8; end: 104cffa43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cff9b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711080) = param_2;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711038);
  func_0x00010c0dfd40(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711030);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711030) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__authenticateWithOneTapLoginWith_112551f00,0);
  return;
}



/* Entry: 104cffa44; end: 104cffd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cffa44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711080) = param_2;
  lVar5 = (long)_DAT_112711038;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c0dfd40(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711030);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711030) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271104c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c0dfd40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ebea0();
  func_0x00010c0ae060(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271103c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d6c0();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_112711054;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c0e8620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104cffd84; end: 104cffdbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cffd84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711054;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23be40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cffdbc; end: 104cffe83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cffdbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711044);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9ce0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112711054;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0a8720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cffe84; end: 104cffe8f;  */

void FUN_104cffe84(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be258d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleAlertDismissed__112566fd0,param_2);
  return;
}



/* Entry: 104cffe90; end: 104cfff5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cffe90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711060);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112711060) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271105c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271105c) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104cfff5c; end: 104cfffb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfff5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_112711054;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0e8640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cfffb4; end: 104d002bf; -[SCOneTapLoginLandingPageBusinessLogic _handleAlertDismissed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cfffb4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112711078);
    *(undefined8 *)(param_1 + _DAT_112711078) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112711060);
    *(undefined8 *)(param_1 + _DAT_112711060) = 0;
    _objc_release(uVar1);
    lVar7 = *(long *)(param_1 + _DAT_11271105c);
    *(undefined8 *)(param_1 + _DAT_11271105c) = 0;
  }
  else {
    if (param_3 == 1) {
      lVar7 = *(long *)(param_1 + _DAT_11271104c);
      func_0x00010c269d40(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_112711080;
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      lVar11 = (long)_DAT_112711038;
      uVar5 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c0dfd40(uVar5,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c0dfd40(uVar6,param_2,*(undefined8 *)(param_1 + lVar10));
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c0dfd40(uVar8,param_2,*(undefined8 *)(param_1 + lVar10));
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      func_0x00010c0ebea0();
      func_0x00010c0ae060(lVar7,param_2,1,uVar9,uVar1,uVar3,uVar4);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar1);
    }
    else {
      if ((param_3 != 2) || (*(char *)(param_1 + _DAT_112711084) != '\x01')) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + _DAT_11271103c);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_112711030;
      func_0x00010c12d680();
      _objc_release(uVar1);
      lVar10 = (long)_DAT_112711038;
      uVar2 = *(ulong *)(param_1 + lVar10);
      func_0x00010bf529e0();
      if (uVar2 < 2) {
        lVar7 = param_1 + _DAT_112711054;
        _objc_loadWeakRetained(lVar7);
        uVar5 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c0dfd40(uVar5,param_2,*(undefined8 *)(param_1 + _DAT_112711080));
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar5;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e8580(lVar7,param_2,uVar1);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + _DAT_11271104c);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = (long)_DAT_112711080;
        uVar6 = *(undefined8 *)(param_1 + lVar11);
        uVar8 = *(undefined8 *)(param_1 + lVar7);
        uVar4 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c0dfd40(uVar4,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ab720(uVar3,param_2,1,uVar6,uVar8,uVar1);
        _objc_release(uVar1);
        _objc_release(uVar4);
        _objc_release(uVar3);
        lVar7 = param_1 + _DAT_112711054;
        _objc_loadWeakRetained(lVar7);
        uVar5 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c0dfd40(uVar5,param_2,*(undefined8 *)(param_1 + lVar11));
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar5;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e8620(lVar7,param_2,uVar1);
      }
      _objc_release(uVar1);
    }
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 104d002c0; end: 104d0064f; -[SCOneTapLoginLandingPageBusinessLogic _authenticateWithOneTapLoginWithConfirmReactivation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d002c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if (*(char *)(param_1 + _DAT_112711058) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271104c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112711058) = 1;
  lVar6 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_release(lVar6);
  lVar6 = (long)_DAT_112711044;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9ce0();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9c40();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_112711048;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11271104c;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab760();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112711038;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0dfd40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ebea0();
  func_0x00010c0ab7a0(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271103c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d00650;
  puStack_90 = &UNK_110848ae8;
  _objc_copyWeak(auStack_80,auStack_78);
  uStack_88 = uVar2;
  _objc_copyWeak(auStack_b0,auStack_78);
  func_0x00010bf10b40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  return;
}



/* Entry: 104d00650; end: 104d006f7;  */

void FUN_104d00650(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd1560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d006f8; end: 104d007cf; -[SCOneTapLoginLandingPageBusinessLogic _authenticateWithOneTapLoginSuccess:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d006f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112711044);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfcfaa0(param_3);
  uVar2 = param_3;
  func_0x00010c119500(param_3);
  func_0x00010c0a9c00(uVar3,param_2,1,0,uVar1,uVar2,1,param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_112711054;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e8400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d007d0; end: 104d00ba7; -[SCOneTapLoginLandingPageBusinessLogic _authenticateWithOneTapLoginFailure:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d007d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271104c);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112711080;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112711030);
  lVar9 = (long)_DAT_112711038;
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0dfd40(uVar1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + lVar8));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ebea0();
  func_0x00010c0ab7c0(uVar5,param_2,uVar6,uVar7,uVar4,uVar3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar4 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar4);
  lVar8 = (long)_DAT_112711044;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000106b78380();
  uVar3 = param_3;
  func_0x00010bfcfaa0();
  uVar4 = param_3;
  func_0x00010c119500();
  func_0x00010c0a9c80(uVar1,param_2,1,0,uVar5,uVar3,uVar4,1);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfcfaa0();
  uVar4 = param_3;
  func_0x00010c119500();
  _objc_release(param_3);
  func_0x00010c0a9c00(uVar5,param_2,1,0,uVar3,uVar4,0,param_4);
  _objc_release(param_4);
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + _DAT_112711058) = 0;
  lVar8 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_release(lVar8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112711078);
  *(undefined8 *)(param_1 + _DAT_112711078) = 0;
  _objc_release(uVar4);
  return;
}



/* Entry: 104d00ba8; end: 104d00bd7;  */

void FUN_104d00ba8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed79f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateErrorMessage_hasUnretryab_112593820,
             param_2,1);
  return;
}



/* Entry: 104d00bd8; end: 104d00c33;  */

/* WARNING: Possible PIC construction at 0x000104d00c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104d00c24) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_104d00bd8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x000104d0571c();
    _objc_retainAutoreleasedReturnValue();
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed79f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__updateErrorMessage_hasUnretryab_112593820,param_2,0);
  return;
}



/* Entry: 104d00c34; end: 104d00ca3;  */

void FUN_104d00c34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed79f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateErrorMessage_hasUnretryab_112593820,
             param_2,0);
  return;
}



/* Entry: 104d00ca4; end: 104d00d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d00ca4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010bed79e0();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112711054;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0e8700();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d00d1c; end: 104d00d3b;  */

void FUN_104d00d1c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed79f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateErrorMessage_hasUnretryab_112593820,
             param_2,1);
  return;
}



/* Entry: 104d00d3c; end: 104d00ddb; -[SCOneTapLoginLandingPageBusinessLogic _updateErrorMessage:hasUnretryableError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d00d3c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  *(char *)(param_1 + _DAT_112711084) = (char)param_4;
  if (param_4 != 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112711038);
    func_0x00010bf529e0();
    if (1 < uVar1) {
      func_0x000104d056d4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_11271107c);
      *(ulong *)(param_1 + _DAT_11271107c) = uVar1;
      goto LAB_104d00dc4;
    }
  }
  lVar3 = (long)_DAT_112711078;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
LAB_104d00dc4:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



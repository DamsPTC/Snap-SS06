/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d2d81c; end: 104d2d91b; -[SCUnauthenticatedWorkflow _updateRegistrationSource] */

void FUN_104d2d81c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_98 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d2d91c;
  puStack_50 = &UNK_110847658;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x104d2d92c;
  puStack_78 = &UNK_110847658;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104d2d940;
  puStack_a0 = &UNK_11084b850;
  puStack_70 = puStack_98;
  puStack_48 = puStack_98;
  puStack_38 = puStack_98;
  func_0x00010c0bd3c0(*(undefined8 *)(param_1 + 0xa0),param_2,&puStack_68,&puStack_90,&puStack_b8);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9980();
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_40,8);
  return;
}



/* Entry: 104d2d91c; end: 104d2d93f;  */

void FUN_104d2d91c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104d2d940; end: 104d2d9d3;  */

void FUN_104d2d940(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d2d9d4; end: 104d2d9fb;  */

void FUN_104d2d9d4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 104d2d9fc; end: 104d2dabb; -[SCUnauthenticatedWorkflow _startNewRegistration:] */

void FUN_104d2d9fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bd40();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104d2dabc;
  puStack_40 = &UNK_11084b470;
  lStack_38 = param_1;
  func_0x00010bef6960(param_3,param_2,&puStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2dabc; end: 104d2dac7;  */

void FUN_104d2dabc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_startPreRegistration__112671a08,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d2dac8; end: 104d2db5f; -[SCUnauthenticatedWorkflow _startVerificationFlow:bootstrapData:verificationFlowMethod:] */

void FUN_104d2dac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d2db60;
  puStack_50 = &UNK_11084b880;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_4);
  func_0x00010bef6960(param_3,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 104d2db60; end: 104d2dcbb;  */

void FUN_104d2db60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c293740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c293740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf10a60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af958;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3f120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaee0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251720(param_2);
  _objc_release(param_2);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 104d2dcbc; end: 104d2dd93; -[SCUnauthenticatedWorkflow didFinishOAuthLoginWithType:result:] */

void FUN_104d2dcbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c1429e0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11084b8b0);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d2dd9c;
  puStack_48 = &UNK_11084b8d0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d2df10;
  puStack_70 = &UNK_11084b900;
  lStack_68 = param_1;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0c0960(param_4,param_2,&puStack_60,&puStack_88,&PTR___NSConcreteGlobalBlock_11084b930
                     );
  _objc_release(param_4);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d2dd94; end: 104d2dd9b;  */

void FUN_104d2dd94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endOAuthSignIn_1125c2d28);
  return;
}



/* Entry: 104d2dd9c; end: 104d2df0f;  */

void FUN_104d2dd9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af848;
  func_0x00010c0df9e0(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af350;
  _objc_alloc(PTR_PTR_1126af350);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x00010c0bc8a0(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uVar3);
  func_0x00010c027a80(puVar2);
  func_0x00010be54c00(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d2df10; end: 104d2df1f;  */

void FUN_104d2df10(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be657b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__oAuthSignInExitedAndRequiredReg_112576f88,
             param_2);
  return;
}



/* Entry: 104d2df20; end: 104d2df67; -[SCUnauthenticatedWorkflow _oAuthSignInExitedAndRequiredRegisteringNewAccount:] */

void FUN_104d2df20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af848;
  func_0x00010c0df9e0(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79220(param_1,param_2,*(undefined8 *)(param_1 + 0x98),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2df68; end: 104d2e05f; -[SCUnauthenticatedWorkflow phoneEmailFirstLogInFinishedWithBootstrapData:optedIn1TL:] */

void FUN_104d2df68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af350;
  _objc_alloc(PTR_PTR_1126af350);
  func_0x00010c027a80();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfe010();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126af848;
  func_0x00010bf69c80(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54c00(param_1);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2e060; end: 104d2e0f7; -[SCUnauthenticatedWorkflow phoneEmailFirstLogInRedirectToRegistrationWithLogInIdentifier:] */

void FUN_104d2e060(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c9a0();
    _objc_release(uVar1);
  }
  func_0x00010be73320(param_1,param_2,param_3);
  puVar2 = PTR_PTR_1126af848;
  func_0x00010bf69c80(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79220(param_1,param_2,4,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d2e0f8; end: 104d2e2a3; -[SCUnauthenticatedWorkflow phoneEmailFirstLogInRedirectToUsernamePasswordLoginWithLogInIdentifier:] */

void FUN_104d2e0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104d2e2a4;
  uStack_70 = 0x104d2e2b4;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_104d2e2a4;
  uStack_a0 = 0x104d2e2b4;
  uStack_98 = 0;
  func_0x00010c0c1360(param_3);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(uVar1);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2e2a4; end: 104d2e2bb;  */

void FUN_104d2e2a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d2e2bc; end: 104d2e3bb;  */

void FUN_104d2e2bc(long param_1,undefined8 param_2)

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



/* Entry: 104d2e3bc; end: 104d2e427; -[SCUnauthenticatedWorkflow phoneEmailFirstLogInWithOAuthSelectedWithOAuthType:] */

void FUN_104d2e3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af950;
  _objc_retain(param_3);
  func_0x00010c27f5a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc0a0(param_1,param_2,4,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2e428; end: 104d2e607; -[SCUnauthenticatedWorkflow _persistLogInIdentifierIntoResumeRegistrationData:] */

void FUN_104d2e428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar6 = *(undefined **)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010c127dc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126af968;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar6);
    puVar2 = puVar6;
  }
  _objc_release(puVar6);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d2e60c;
  puStack_60 = &UNK_1108450c8;
  _objc_retain(puVar2);
  puStack_a0 = puVar6;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104d2e674;
  puStack_88 = &UNK_11084b9a0;
  puStack_80 = puVar2;
  puStack_58 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c0c1360(param_3,param_2,&PTR___NSConcreteGlobalBlock_11084b980,&puStack_78,&puStack_a0
                     );
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126af840;
  _objc_alloc(PTR_PTR_1126af840);
  puVar3 = puVar1;
  func_0x00010c127d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c1279e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03dc20(puVar6,param_2,puVar2,puVar3,puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed660();
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_80);
  _objc_release(puStack_58);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2e608; end: 104d2e60b;  */

void FUN_104d2e608(void)

{
  return;
}



/* Entry: 104d2e60c; end: 104d2e673;  */

void FUN_104d2e60c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af988;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c00f420();
  _objc_release(param_2);
  func_0x00010c194080(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2e674; end: 104d2e76b;  */

void FUN_104d2e674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126af2d8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0cf4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf53280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bf536a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c420(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126af990;
  _objc_alloc(PTR_PTR_1126af990);
  func_0x00010c035aa0();
  func_0x00010c1db1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2e76c; end: 104d2e8d7; -[SCUnauthenticatedWorkflow .cxx_destruct] */

void FUN_104d2e76c(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d2e8d8; end: 104d2e98b;  */

void FUN_104d2e8d8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x2b;
  return;
}



/* Entry: 104d2e98c; end: 104d2e9e7;  */

void FUN_104d2e98c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af998;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1279e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e80(puVar2,param_2,uVar1);
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2e9e8; end: 104d2ea37;  */

void FUN_104d2e9e8(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xffffffffffffffff;
  return;
}



/* Entry: 104d2ea38; end: 104d2ea7f; +[SCUnauthenticatedLandingPageUserAction logInSelected] */

void FUN_104d2ea38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af940;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d2ea80; end: 104d2eae7; +[SCUnauthenticatedLandingPageUserAction signInWithOAuthSelectedWithOAuthType:] */

void FUN_104d2ea80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af940;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d2eae8; end: 104d2eb33; +[SCUnauthenticatedLandingPageUserAction signUpSelected] */

void FUN_104d2eae8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af940;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d2eb34; end: 104d2eb57; -[SCUnauthenticatedLandingPageUserAction copyWithZone:] */

undefined8 FUN_104d2eb34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d2eb58; end: 104d2ebb7; -[SCUnauthenticatedLandingPageUserAction hash] */

void FUN_104d2eb58(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e3ee8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d2ebb8; end: 104d2ebfb; -[SCUnauthenticatedLandingPageUserAction internalInit] */

void FUN_104d2ebb8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3ee8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d2ebfc; end: 104d2ec9b; -[SCUnauthenticatedLandingPageUserAction isEqual:] */

long FUN_104d2ebfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d2ec80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104d2ec80;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104d2ec80;
    }
  }
  lVar3 = 1;
LAB_104d2ec80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d2ec9c; end: 104d2ed47; -[SCUnauthenticatedLandingPageUserAction matchLogInSelected:signUpSelected:signInWithOAuthSelected:] */

void FUN_104d2ec9c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_104d2ed24;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_104d2ed24;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_104d2ed24:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d2ed48; end: 104d2ed53; -[SCUnauthenticatedLandingPageUserAction .cxx_destruct] */

void FUN_104d2ed48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d2ed54; end: 104d2edc7; -[SCRegistrationAgeVerificationServices initWithAgeVerificationInfoProvider:] */

undefined1 * FUN_104d2ed54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3ef0;
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



/* Entry: 104d2edc8; end: 104d2edcf; -[SCRegistrationAgeVerificationServices ageVerificationInfoProvider] */

undefined8 FUN_104d2edc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d2edd0; end: 104d2eddb; -[SCRegistrationAgeVerificationServices .cxx_destruct] */

void FUN_104d2edd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d2eddc; end: 104d2ee77; -[SCTIVNonceLoginScope initWithTIVNonce:delegate:] */

undefined1 *
FUN_104d2eddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3ef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d2ee78; end: 104d2ee7f; -[SCTIVNonceLoginScope tivNonce] */

undefined8 FUN_104d2ee78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d2ee80; end: 104d2ee97; -[SCTIVNonceLoginScope delegate] */

void FUN_104d2ee80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d2ee98; end: 104d2eec3; -[SCTIVNonceLoginScope .cxx_destruct] */

void FUN_104d2ee98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d2eec4; end: 104d2eecf; -[SCSplashPageProdSegmentConfig studyExposureName] */

undefined ** FUN_104d2eec4(void)

{
  return &PTR____CFConstantStringClassReference_110db04b8;
}



/* Entry: 104d2eed0; end: 104d2eee3; -[SCSplashPageProdSegmentConfig expirationTime] */

void FUN_104d2eed0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x41d92aeb1c000000,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 104d2eee4; end: 104d2eeef; -[SCSplashPageProdSegmentConfig seed] */

undefined ** FUN_104d2eee4(void)

{
  return &PTR____CFConstantStringClassReference_110db04b8;
}



/* Entry: 104d2eef0; end: 104d2eef7; -[SCSplashPageProdSegmentConfig version] */

undefined8 FUN_104d2eef0(void)

{
  return 2;
}



/* Entry: 104d2eef8; end: 104d2ef03; -[SCSplashPageProdSegmentConfig userRange] */

undefined1  [16] FUN_104d2eef8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4b;
  auVar1._0_8_ = 0x32;
  return auVar1;
}



/* Entry: 104d2ef04; end: 104d2ef0f; -[SCSplashPageLayoutProdConfig treatments] */

void FUN_104d2ef04(void)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117e280;
  while( true ) {
    ppuVar2 = ppuVar3;
    *(undefined ***)(puVar1 + -0x60) = unaff_x28;
    *(undefined ***)(puVar1 + -0x58) = unaff_x27;
    *(undefined **)(puVar1 + -0x50) = unaff_x26;
    *(undefined ***)(puVar1 + -0x48) = unaff_x25;
    *(undefined ***)(puVar1 + -0x40) = unaff_x24;
    *(undefined ***)(puVar1 + -0x38) = unaff_x23;
    *(undefined ***)(puVar1 + -0x30) = unaff_x22;
    *(undefined ***)(puVar1 + -0x28) = unaff_x21;
    *(undefined ***)(puVar1 + -0x20) = unaff_x20;
    *(undefined ***)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    ppuVar3 = ppuVar2;
    func_0x00010bf529e0();
    if (ppuVar3 == (undefined **)0x5) {
      ppuVar4 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0x98) = ppuVar4;
      ppuVar3 = &PTR____CFConstantStringClassReference_110db04d8;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db04d8,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0xa0) = ppuVar3;
      *(undefined ***)(puVar1 + -0x90) = ppuVar3;
      unaff_x22 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = &PTR____CFConstantStringClassReference_110db04f8;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db04f8,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0x88) = unaff_x23;
      unaff_x24 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = &PTR____CFConstantStringClassReference_110db0518;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0518,unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0x80) = unaff_x25;
      unaff_x27 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = &PTR____CFConstantStringClassReference_110db0538;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0538,unaff_x27);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0x78) = unaff_x28;
      unaff_x20 = ppuVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = &PTR____CFConstantStringClassReference_110db0558;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0558,unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0x70) = unaff_x21;
      unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x21);
      _objc_release(unaff_x20);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(*(undefined8 *)(puVar1 + -0xa0));
      _objc_release(*(undefined8 *)(puVar1 + -0x98));
    }
    else {
      unaff_x26 = (undefined *)0x0;
    }
    _objc_release(ppuVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x68)) break;
    unaff_x30 = FUN_104d2f130;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0xa0;
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
    unaff_x19 = ppuVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 104d2ef10; end: 104d2f12f;  */

void FUN_104d2ef10(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    ppuVar1 = param_1;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    ppuVar2 = ppuVar1;
    func_0x00010bf529e0();
    if (ppuVar2 == (undefined **)0x5) {
      ppuVar3 = ppuVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar3;
      ppuVar2 = &PTR____CFConstantStringClassReference_110db04d8;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db04d8,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0xa0) = ppuVar2;
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar2;
      unaff_x22 = ppuVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = &PTR____CFConstantStringClassReference_110db04f8;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db04f8,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x88) = unaff_x23;
      unaff_x24 = ppuVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = &PTR____CFConstantStringClassReference_110db0518;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0518,unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x80) = unaff_x25;
      unaff_x27 = ppuVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = &PTR____CFConstantStringClassReference_110db0538;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0538,unaff_x27);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x78) = unaff_x28;
      unaff_x20 = ppuVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = &PTR____CFConstantStringClassReference_110db0558;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0558,unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x70) = unaff_x21;
      unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x21);
      _objc_release(unaff_x20);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0xa0));
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x98));
    }
    else {
      unaff_x26 = (undefined *)0x0;
    }
    _objc_release(ppuVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_104d2f130;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    param_1 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
    unaff_x19 = ppuVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 104d2f130; end: 104d2f13b; -[SCSplashPageSignUpStringProdConfig treatments] */

void FUN_104d2f130(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
    func_0x00010bf529e0();
    if (ppuVar1 == (undefined **)0x5) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar2;
      ppuVar1 = &PTR____CFConstantStringClassReference_110db04d8;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db04d8,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0xa0) = ppuVar1;
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar1;
      unaff_x22 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = &PTR____CFConstantStringClassReference_110db04f8;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db04f8,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x88) = unaff_x23;
      unaff_x24 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = &PTR____CFConstantStringClassReference_110db0518;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0518,unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x80) = unaff_x25;
      unaff_x27 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = &PTR____CFConstantStringClassReference_110db0538;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0538,unaff_x27);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x78) = unaff_x28;
      unaff_x20 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = &PTR____CFConstantStringClassReference_110db0558;
      FUN_104d2f44c(&PTR____CFConstantStringClassReference_110db0558,unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)register0x00000008 + -0x70) = unaff_x21;
      unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x21);
      _objc_release(unaff_x20);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0xa0));
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x98));
    }
    else {
      unaff_x26 = (undefined *)0x0;
    }
    _objc_release(&PTR__OBJC_CLASS___NSConstantArray_11117e298);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_104d2f130;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = &PTR__OBJC_CLASS___NSConstantArray_11117e298;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 104d2f13c; end: 104d2f1af; -[SCSplashPageABRetriever initWithClientHardcodedABValueRetriever:] */

undefined1 * FUN_104d2f13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3f00;
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



/* Entry: 104d2f1b0; end: 104d2f2c7; -[SCSplashPageABRetriever registerConfigs] */

void FUN_104d2f1b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af9a0;
  _objc_opt_new(PTR_PTR_1126af9a0);
  puVar3 = PTR_PTR_1126af9a0;
  _objc_opt_new(PTR_PTR_1126af9a0);
  puVar4 = PTR_PTR_1126af9a0;
  _objc_opt_new(PTR_PTR_1126af9a0);
  func_0x00010c125e40(uVar1,param_2,&PTR____CFConstantStringClassReference_110db0478,puVar2,puVar3,
                      puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af9a8;
  _objc_opt_new(PTR_PTR_1126af9a8);
  puVar3 = PTR_PTR_1126af9a8;
  _objc_opt_new(PTR_PTR_1126af9a8);
  puVar4 = PTR_PTR_1126af9a8;
  _objc_opt_new(PTR_PTR_1126af9a8);
  func_0x00010c125e40(uVar1,param_2,&PTR____CFConstantStringClassReference_110db0498,puVar2,puVar3,
                      puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2f2c8; end: 104d2f303; -[SCSplashPageABRetriever startUsingAB] */

void FUN_104d2f2c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2f304; end: 104d2f33f; -[SCSplashPageABRetriever doneUsingAB] */

void FUN_104d2f304(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2f340; end: 104d2f3b3; -[SCSplashPageABRetriever layoutVariant] */

void FUN_104d2f340(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c297000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104d2f3b4; end: 104d2f43f; -[SCSplashPageABRetriever signUpStringCopy] */

void FUN_104d2f3b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b84e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104d2f440; end: 104d2f44b; -[SCSplashPageABRetriever .cxx_destruct] */

void FUN_104d2f440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d2f44c; end: 104d2f4f7;  */

void FUN_104d2f44c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126af9b0;
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126af9b8;
  _objc_retain(param_2);
  _objc_opt_new(puVar2);
  func_0x00010c20e860();
  _objc_release(param_2);
  func_0x00010c055080(puVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d2f4f8; end: 104d2f5f3; -[SCLogInScope initWithDelegate:uiContainer:lastLoginUsername:lastLoginPhoneNumber:isFromPhoneEmailFirstPage:] */

undefined1 *
FUN_104d2f4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_1126e3f08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d2f5f4; end: 104d2f60b; -[SCLogInScope delegate] */

void FUN_104d2f5f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d2f60c; end: 104d2f613; -[SCLogInScope uiContainer] */

undefined8 FUN_104d2f60c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d2f614; end: 104d2f61b; -[SCLogInScope lastLoginUsername] */

undefined8 FUN_104d2f614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d2f61c; end: 104d2f623; -[SCLogInScope lastLoginPhoneNumber] */

undefined8 FUN_104d2f61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d2f624; end: 104d2f62b; -[SCLogInScope isFromPhoneEmailFirstPage] */

undefined1 FUN_104d2f624(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d2f62c; end: 104d2f633; -[SCLogInScope setIsFromPhoneEmailFirstPage:] */

void FUN_104d2f62c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104d2f634; end: 104d2f677; -[SCLogInScope .cxx_destruct] */

void FUN_104d2f634(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 104d2f678; end: 104d2f713; -[SCNGORegistrationScope initWithUIContainer:delegate:] */

undefined1 *
FUN_104d2f678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3f10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d2f714; end: 104d2f72b; -[SCNGORegistrationScope delegate] */

void FUN_104d2f714(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d2f72c; end: 104d2f733; -[SCNGORegistrationScope uiContainer] */

undefined8 FUN_104d2f72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d2f734; end: 104d2f75f; -[SCNGORegistrationScope .cxx_destruct] */

void FUN_104d2f734(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d2f760; end: 104d2f7fb; -[SCOneTapLoginScope initWithDelegate:uiContainer:] */

undefined1 *
FUN_104d2f760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d2f7fc; end: 104d2f813; -[SCOneTapLoginScope delegate] */

void FUN_104d2f7fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d2f814; end: 104d2f81b; -[SCOneTapLoginScope uiContainer] */

undefined8 FUN_104d2f814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d2f81c; end: 104d2f847; -[SCOneTapLoginScope .cxx_destruct] */

void FUN_104d2f81c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d2f848; end: 104d2f8bb; -[SCRegistrationContactPrepromptServices initWithPrepromptInfoProvider:] */

undefined1 * FUN_104d2f848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3f20;
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



/* Entry: 104d2f8bc; end: 104d2f8c3; -[SCRegistrationContactPrepromptServices contactPrepromptInfoProvider] */

undefined8 FUN_104d2f8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d2f8c4; end: 104d2f8db; -[SCRegistrationContactPrepromptServices .cxx_destruct] */

void FUN_104d2f8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d2f8dc; end: 104d2fd0b;  */

void FUN_104d2f8dc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c7420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uStack_c0 = param_5;
  func_0x00010c01bf60();
  func_0x00010c182220();
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(param_3,param_2,puVar1);
  dVar15 = 0.0;
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bf495a0(0x3fd72b020c49ba5e,PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      puVar1,10,0,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3380(0x44794000);
  puVar3 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c149040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf49480(0x4030000000000000,puVar3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1e3380(0x4479c000,puVar6);
  puVar3 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  puVar4 = puVar3;
  func_0x00010bf49420(dVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1e3380(0x44798000,puVar4);
  puVar3 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_b8 = puVar6;
  puStack_b0 = puVar2;
  puStack_a0 = puVar7;
  puStack_98 = puVar2;
  puStack_90 = puVar6;
  puStack_88 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  dVar14 = 262.0;
  puVar6 = puVar8;
  func_0x00010bf49520(0x4070600000000000,puVar8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 5;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  uVar12 = uStack_c0;
  _objc_release(puVar3);
  func_0x00010c23d0a0(uVar12);
  if (0.0 < dVar15) {
    puVar8 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(uVar12);
    func_0x00010c23d0a0(uVar12);
    puVar2 = puVar8;
    func_0x00010bf493e0(dVar14 / dVar15,puVar8,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar10,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  puVar3 = puStack_a8;
  if (puStack_a8 != (undefined *)0x0) {
    puVar8 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf49520(0xc030000000000000,puVar8,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar10,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  puVar6 = puVar10;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puStack_b8);
  _objc_release(puStack_b0);
  _objc_release(uVar12);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar11 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    uStack_110 = uVar12;
    puStack_f8 = puVar3;
    pcStack_c8 = FUN_104d2fd0c;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_120 = puVar7;
    puStack_118 = puVar5;
    puStack_108 = puVar10;
    puStack_100 = puVar4;
    puStack_f0 = puVar2;
    puStack_e8 = puVar1;
    puStack_e0 = puVar9;
    puStack_d8 = puVar8;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar13);
    _objc_retain(puVar6);
    _objc_alloc();
    uVar12 = uVar13;
    func_0x00010c0c7420(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    func_0x00010c01bf60(puVar11,param_2,uVar12);
    _objc_release(uVar12);
    func_0x00010befbb60(puVar6,param_2,puVar11);
    func_0x00010c219b60(puVar11,param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    puStack_138 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf348e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bf493a0(puVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_130 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_138,2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010beef8c0(puVar1,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = puVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_retain(puVar9);
      _objc_alloc(puVar1);
      puVar2 = puVar9;
      func_0x00010c0c7420(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c01bf60(puVar1,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d2fd0c; end: 104d2feef;  */

void FUN_104d2fd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c0c7420(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c01bf60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010befbb60(param_3,param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_78 = puVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf348e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010beef8c0(puVar9,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_retain(puVar10);
    _objc_alloc(puVar1);
    puVar9 = puVar10;
    func_0x00010c0c7420(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    func_0x00010c01bf60(puVar1,param_2,puVar9);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d2fef0; end: 104d3001b;  */

void FUN_104d2fef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0c7420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01bf60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d3001c; end: 104d302c7; -[SCLogInServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3001c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
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
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  lVar1 = param_1 + _DAT_112711814;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010540bb44();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112711818);
  *(long *)(param_1 + _DAT_112711818) = lVar2;
  _objc_release(uVar8);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d302c8;
  puStack_90 = &UNK_11084ba00;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104d30308;
  puStack_b8 = &UNK_11084ba30;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_f8 = puVar6;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x104d30348;
  puStack_e0 = &UNK_11084ba60;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af9c0;
  _objc_alloc(PTR_PTR_1126af9c0);
  func_0x00010c021ec0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11271181c));
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 104d302c8; end: 104d303c7;  */

void FUN_104d302c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5aca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d303c8; end: 104d307eb; -[SCLogInServicesEntryPoint _loginService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d303c8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  lVar33 = (long)_DAT_112711820;
  lVar1 = param_1 + lVar33;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfd7d0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af9c8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112711824;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711828;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_11271182c;
  lVar6 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar8 = lVar31;
  func_0x00010bf10d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112711830;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112711834;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfac320();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112711838;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271183c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar18 = lVar33;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112711840;
  lVar19 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar21 = lVar32;
  func_0x00010bfe6100();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112711844;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = (undefined *)(param_1 + _DAT_112711848);
  _objc_loadWeakRetained();
  puVar25 = puVar24;
  if (puVar24 == (undefined *)0x0) {
    puVar25 = PTR_PTR_1126af570;
    _objc_opt_new();
  }
  lVar26 = param_1 + _DAT_11271184c;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112711850;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0d7c20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112711854;
  _objc_loadWeakRetained();
  lVar30 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058ee0();
  _objc_release(lVar30);
  _objc_release(param_1);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  if (puVar24 == (undefined *)0x0) {
    _objc_release(puVar25);
  }
  _objc_release(puVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar32);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar33);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar31);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d307ec; end: 104d30a93; -[SCLogInServicesEntryPoint _channelVerificationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d307ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar19 = (long)_DAT_112711820;
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfd7d0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af9d0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112711824;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711828;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271182c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112711830;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112711838;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar13 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112711840;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfe6100();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112711844;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271184c;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058f00();
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d30a94; end: 104d30d3b; -[SCLogInServicesEntryPoint _odlvService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d30a94(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar19 = (long)_DAT_112711820;
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfd7d0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af9d8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112711824;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711828;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271182c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112711830;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112711838;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar13 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112711840;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfe6100();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112711844;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271184c;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058f00();
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d30d3c; end: 104d30fe3; -[SCLogInServicesEntryPoint _twoFAService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d30d3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar19 = (long)_DAT_112711820;
  lVar1 = param_1 + lVar19;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfd7d0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af9e0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112711824;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112711828;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271182c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112711830;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112711838;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar13 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112711840;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfe6100();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112711844;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271184c;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058f00();
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d30fe4; end: 104d310f3; -[SCLogInServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d30fe4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271181c,0);
  _objc_destroyWeak(param_1 + _DAT_112711854);
  _objc_destroyWeak(param_1 + _DAT_112711850);
  _objc_destroyWeak(param_1 + _DAT_11271184c);
  _objc_destroyWeak(param_1 + _DAT_112711844);
  _objc_destroyWeak(param_1 + _DAT_11271182c);
  _objc_destroyWeak(param_1 + _DAT_11271183c);
  _objc_destroyWeak(param_1 + _DAT_112711838);
  _objc_destroyWeak(param_1 + _DAT_112711848);
  _objc_destroyWeak(param_1 + _DAT_112711828);
  _objc_destroyWeak(param_1 + _DAT_112711814);
  _objc_destroyWeak(param_1 + _DAT_112711834);
  _objc_destroyWeak(param_1 + _DAT_112711824);
  _objc_destroyWeak(param_1 + _DAT_112711830);
  _objc_destroyWeak(param_1 + _DAT_112711820);
  _objc_destroyWeak(param_1 + _DAT_112711840);
  _objc_destroyWeak(param_1 + _DAT_112711858);
  _objc_storeStrong(param_1 + _DAT_11271185c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711818,0);
  return;
}



/* Entry: 104d310f4; end: 104d31373; -[SCChannelVerificationJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:preLoginAttestationProvider:circumstanceEngine:identityRequestLogger:clientIdProvider:cloudAccountIdProvider:] */

undefined8 *
FUN_104d310f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e3f28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d31374; end: 104d314eb; -[SCChannelVerificationJanusService requestChannelVerificationCodeWithVerification:networkRequestId:successBlock:failureBlock:] */

void FUN_104d31374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfa6480(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d314ec; end: 104d31543;  */

void FUN_104d314ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d31544; end: 104d31877; -[SCChannelVerificationJanusService _requestChannelVerificationCodeWithDeviceCheckToken:verification:networkRequestId:successBlock:failureBlock:] */

void FUN_104d31544(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR_PTR_1126af9e8;
  func_0x00010c0cb140(PTR_PTR_1126af9e8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010bfb2ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17abc0(puVar3);
  _objc_release(uVar9);
  func_0x00010c17abe0(puVar3);
  uVar9 = param_5;
  func_0x00010bf8d6c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194080(puVar3);
  _objc_release(uVar9);
  uVar4 = param_5;
  func_0x00010c294660(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf71140(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x11;
  func_0x00010540c48c(0x11,uVar4,uVar5,param_4,uVar9,uVar1,uVar11,uVar10,uVar2,uVar7,param_6,
                      *(undefined8 *)(param_2 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0900(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _CACurrentMediaTime();
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b20();
  _objc_release(uVar9);
  _objc_initWeak(auStack_80,param_2);
  uVar9 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010540bd48(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_80);
  uStack_88 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c15b800(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d31878; end: 104d318e7;  */

void FUN_104d31878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be90b60(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d318e8; end: 104d31b83; -[SCChannelVerificationJanusService _requestChannelVerificationCodeWithResponse:error:submitRequestTime:successBlock:failureBlock:] */

void FUN_104d318e8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == (undefined *)0x0) {
    iVar2 = 0;
  }
  else {
    puVar4 = param_3;
    func_0x00010540d228(param_3);
    iVar2 = (int)puVar4;
  }
  _CACurrentMediaTime();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar5);
  _objc_release(uVar5);
  if (param_4 == (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010c252ee0();
    uVar3 = (uint)puVar4;
    puVar4 = param_3;
    if (uVar3 < 0x11) {
      uVar1 = 1 << (ulong)(uVar3 & 0x1f);
      if ((uVar1 & 0xd405) != 0) goto LAB_104d31a34;
      if ((uVar1 & 0x12800) == 0) {
        if (uVar3 == 1) {
          (**(code **)(param_5 + 0x10))(param_5);
          goto LAB_104d31b1c;
        }
        goto LAB_104d31b70;
      }
      uVar5 = 0;
      func_0x00010bf3ec40(0);
      puVar7 = PTR_PTR_1126af9f0;
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13fb20(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_104d31b70:
      if (uVar3 != 0xfbadbeef) goto LAB_104d31b1c;
LAB_104d31a34:
      uVar5 = 0;
      func_0x00010bf3ec40(0);
      puVar7 = PTR_PTR_1126af9f0;
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282380(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    (**(code **)(param_6 + 0x10))(param_6,uVar5,(long)iVar2,puVar7);
    _objc_release(puVar7);
  }
  else {
    puVar7 = param_4;
    func_0x00010bf3ec40(param_4);
    puVar6 = PTR_PTR_1126af9f0;
    puVar4 = puVar7;
    FUN_104d3b258();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fb20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar7,(long)iVar2,puVar6);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
LAB_104d31b1c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d31b84; end: 104d31c1f; -[SCChannelVerificationJanusService .cxx_destruct] */

void FUN_104d31b84(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104d31c20; end: 104d32027; -[SCLoginJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:authenticationSessionPayloadProvider:deviceIdManager:deviceCheckManager:fideliusClientInitInfoProvider:preLoginAttestationProvider:networkConnectivityMonitor:circumstanceEngine:loginStateTransitionLogger:identityRequestLogger:clientIdProvider:configVersionProvider:cloudAccountIdProvider:networkLoggingService:performerProvider:] */

undefined8 *
FUN_104d31c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e3f30;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x12];
    puVar1[0x12] = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d32028; end: 104d32203; -[SCLoginJanusService logInWithUsername:passwordSource:networkRequestId:success:failure:] */

void FUN_104d32028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be79040(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d32204; end: 104d3267f;  */

void FUN_104d32204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_104d32680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af9f8;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x000106b78280();
    if ((int)uVar13 == 0) {
      uVar13 = uVar2;
      func_0x000106b78300();
      if ((int)uVar13 == 0) {
        func_0x00010c21f760(puVar3);
      }
      else {
        func_0x00010c1db1c0(puVar3);
      }
    }
    else {
      func_0x00010c194080(puVar3);
    }
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(puVar3);
    _objc_retain(puVar3);
    _objc_retain(puVar3);
    func_0x00010c0c1380(uVar13);
    func_0x00010c17dfe0(puVar3);
    func_0x00010c19b6c0(puVar3);
    func_0x00010c083b00(PTR_PTR_1126afa00);
    func_0x00010c1b5b20(puVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf71140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar1 + 0x10);
    uVar8 = *(undefined8 *)(lVar1 + 0x18);
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar11 = *(undefined8 *)(lVar1 + 0x48);
    uVar12 = *(undefined8 *)(lVar1 + 0x58);
    uVar5 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0xb;
    func_0x00010540c48c(0xb,uVar2,uVar4,param_2,uVar13,uVar8,uVar10,uVar11,uVar12,uVar9,
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar1 + 0x80));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar13 = *(undefined8 *)(lVar1 + 0x60);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
    _objc_release(uVar13);
    _CACurrentMediaTime();
    uVar13 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar13);
    _objc_release(puVar7);
    _objc_release(uVar13);
    uVar13 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010540bd48(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    _objc_retain(uVar2);
    func_0x00010c0b4500(uVar13);
    _objc_release(uVar8);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d32680; end: 104d3276f;  */

void FUN_104d32680(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d32770; end: 104d327ab;  */

void FUN_104d32770(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be5ad40(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),param_2,
                      param_2,param_3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



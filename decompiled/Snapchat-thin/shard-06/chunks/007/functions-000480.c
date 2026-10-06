/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d29d98; end: 104d29de3; -[SCUnauthenticatedWorkflow logInSelected] */

void FUN_104d29d98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010be2bb80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d29de4; end: 104d29deb;  */

void FUN_104d29de4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endOneTapLogin_1125c2d68);
  return;
}



/* Entry: 104d29dec; end: 104d29e57; -[SCUnauthenticatedWorkflow signUpSelected] */

void FUN_104d29dec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = *(ulong *)(param_1 + 0xa8);
  (**(code **)(uVar1 + 0x10))();
  puVar2 = PTR_PTR_1126af848;
  if ((uVar1 & 1) == 0) {
    func_0x00010bf69c80(PTR_PTR_1126af848);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be79220(param_1,param_2,2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d29e58; end: 104d29ec3; -[SCUnauthenticatedWorkflow signInWithOAuthSelectedWithOAuthType:] */

void FUN_104d29e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af950;
  _objc_retain(param_3);
  func_0x00010c27f5a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc0a0(param_1,param_2,2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d29ec4; end: 104d29f6b; -[SCUnauthenticatedWorkflow oneTapLoginExitedWithUsername:] */

void FUN_104d29ec4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d060();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d29f6c; end: 104d29f73;  */

void FUN_104d29f6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endOneTapLogin_1125c2d68);
  return;
}



/* Entry: 104d29f74; end: 104d29fe7; -[SCUnauthenticatedWorkflow oneTapLoginExitedWithPasswordLogInInstead:] */

void FUN_104d29f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d060();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logInSelected_112607bd8);
  return;
}



/* Entry: 104d29fe8; end: 104d2a077; -[SCUnauthenticatedWorkflow oneTapLoginFinishedWithBootstrapData:] */

void FUN_104d29fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af350;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c027a80();
  puVar2 = PTR_PTR_1126af848;
  func_0x00010bf69c80(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54c00(param_1,param_2,param_3,puVar1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2a078; end: 104d2a0c3; -[SCUnauthenticatedWorkflow preRegistrationDisallowed] */

void FUN_104d2a078(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2a0c4; end: 104d2a0cb;  */

void FUN_104d2a0c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endPreRegistration_1125c2df0);
  return;
}



/* Entry: 104d2a0cc; end: 104d2a123; -[SCUnauthenticatedWorkflow preRegistrationFinished] */

void FUN_104d2a0cc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d2a124;
  puStack_20 = &UNK_11084b470;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d2a124; end: 104d2a233;  */

void FUN_104d2a124(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010bf95120(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bd3c0(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d2a234; end: 104d2a25f;  */

void FUN_104d2a234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_startRegistration_registrationMe_112671af0,
             *(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0));
  return;
}



/* Entry: 104d2a260; end: 104d2a307; -[SCUnauthenticatedWorkflow preRegistrationDidStart] */

void FUN_104d2a260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ade60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c23c580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d2a308; end: 104d2a3eb; -[SCUnauthenticatedWorkflow ngoRegistrationFinishedWithBirthday:email:registrationPhoneNumber:] */

void FUN_104d2a308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d2a3ec;
  puStack_68 = &UNK_11084b5d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2a3ec; end: 104d2a433;  */

void FUN_104d2a3ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf94de0(param_2);
  func_0x00010c250300(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d2a434; end: 104d2a47f; -[SCUnauthenticatedWorkflow ngoRegistrationExited] */

void FUN_104d2a434(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2a480; end: 104d2a487;  */

void FUN_104d2a480(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endNGORegistration_1125c2d20);
  return;
}



/* Entry: 104d2a488; end: 104d2a4df; -[SCUnauthenticatedWorkflow ngoRegistrationSkipped] */

void FUN_104d2a488(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d2a4e0;
  puStack_20 = &UNK_11084b470;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d2a4e0; end: 104d2a523;  */

void FUN_104d2a4e0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf94de0(param_2);
  func_0x00010c250320(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d2a524; end: 104d2a637; -[SCUnauthenticatedWorkflow ngoRegistrationFinishedWithBootstrapData:] */

void FUN_104d2a524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104d2a5b4;
  puStack_48 = &UNK_11084b620;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2a638; end: 104d2a6fb; -[SCUnauthenticatedWorkflow registrationExited] */

void FUN_104d2a638(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104d2a704;
  puStack_38 = &UNK_110841f80;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d2a710;
  puStack_68 = &UNK_110841f80;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104d2a788;
  puStack_98 = &UNK_11084b5a0;
  lStack_90 = param_1;
  uStack_88 = uVar1;
  uStack_60 = uVar1;
  lStack_58 = param_1;
  lStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x00010c0bd3c0(*(undefined8 *)(param_1 + 0xa0),param_2,&puStack_50,&puStack_80,&puStack_b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2a6fc; end: 104d2a70f;  */

void FUN_104d2a6fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endRegistration_1125c2e38);
  return;
}



/* Entry: 104d2a710; end: 104d2a77b;  */

void FUN_104d2a710(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d2a77c;
  puStack_30 = &UNK_11084b470;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef6960(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d2a77c; end: 104d2a793;  */

void FUN_104d2a77c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_startNGORegistrationWithDelegate_112671798,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104d2a794; end: 104d2a7df; -[SCUnauthenticatedWorkflow registrationExitedWithUserUnderageError] */

void FUN_104d2a794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2a7e0; end: 104d2a7e7;  */

void FUN_104d2a7e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endRegistration_1125c2e38);
  return;
}



/* Entry: 104d2a7e8; end: 104d2a833; -[SCUnauthenticatedWorkflow registrationExitedWithChallengeError] */

void FUN_104d2a7e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2a834; end: 104d2a83b;  */

void FUN_104d2a834(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endRegistration_1125c2e38);
  return;
}



/* Entry: 104d2a83c; end: 104d2a887; -[SCUnauthenticatedWorkflow registrationExitedWithInvalidAppleIdentityToken] */

void FUN_104d2a83c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2a888; end: 104d2a88f;  */

void FUN_104d2a888(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endRegistration_1125c2e38);
  return;
}



/* Entry: 104d2a890; end: 104d2a99f; -[SCUnauthenticatedWorkflow registrationAccountCreatedWithRegistrationSuccess:password:optedIn1TL:] */

void FUN_104d2a890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010be73400(param_1);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfe010();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be8a000(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d2a9a0; end: 104d2ac3f; -[SCUnauthenticatedWorkflow _registrationAccountCreatedWithJanusBootstrapData:] */

void FUN_104d2a9a0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bee7120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  uVar3 = param_3;
  func_0x00010c156e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c156e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126340(lVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bedb0a0(param_1);
  uVar3 = param_3;
  func_0x00010c293a60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c298400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c127de0();
  if ((uVar3 & 1) == 0) {
    _objc_retain(param_3);
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = param_3;
    _objc_release(uVar10);
    func_0x00010be735c0(param_1);
    *(undefined8 *)(param_1 + 0x88) = 2;
    uVar3 = uVar4;
    func_0x00010c294180();
    func_0x000106bfdedc();
    _objc_initWeak(auStack_68,param_1);
    _objc_retain(param_3);
    uStack_70 = uVar3;
    _objc_copyWeak(auStack_78,auStack_68);
    func_0x00010bef6960(uVar9);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010be2e4c0(param_1);
  }
  func_0x00010bde0dc0(param_1);
  func_0x00010c142680(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2ac40; end: 104d2ac47;  */

void FUN_104d2ac40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endRegistration_1125c2e38);
  return;
}



/* Entry: 104d2ac48; end: 104d2adb7;  */

void FUN_104d2ac48(long param_1,undefined8 param_2)

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
  func_0x00010bfbad00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c251720(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
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



/* Entry: 104d2adb8; end: 104d2afab; -[SCUnauthenticatedWorkflow _handlePreRegRegistrationCompleteWithBootstrapData:userSession:] */

void FUN_104d2adb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c127dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c127dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x88) = 0;
  func_0x00010bde11c0(param_1);
  lVar4 = param_1;
  func_0x00010bee7240(param_1,param_2,uVar2,uVar7);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adec0(uVar5,param_2,uVar1,lVar4);
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar4 = param_1;
  func_0x00010bee7260(param_1,param_2,uVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af960;
  _objc_alloc(PTR_PTR_1126af960);
  func_0x00010c060940();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c291740();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d2afac; end: 104d2b017; -[SCUnauthenticatedWorkflow logInExited] */

void FUN_104d2afac(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x90) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a82b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logInExitedAndRequiredRegisterin_112607ab8,0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2b018; end: 104d2b01f;  */

void FUN_104d2b018(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endLogIn_1125c2cf0);
  return;
}



/* Entry: 104d2b020; end: 104d2b0df; -[SCUnauthenticatedWorkflow logInExitedAndRequiredRegisteringNewAccount:] */

void FUN_104d2b020(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bde0da0(param_1);
    func_0x00010bde11c0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c9a0();
    _objc_release(uVar1);
  }
  uVar2 = *(ulong *)(param_1 + 0xa8);
  (**(code **)(uVar2 + 0x10))();
  puVar3 = PTR_PTR_1126af848;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf69c80(PTR_PTR_1126af848);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be79220(param_1,param_2,3,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d2b0e0; end: 104d2b163; -[SCUnauthenticatedWorkflow logInWithOAuthSelectedWithOAuthType:optedIn1TL:] */

void FUN_104d2b0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af950;
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    func_0x00010c0ebfe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0ebf80();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bebc0a0(param_1,param_2,3,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2b164; end: 104d2b27f; -[SCUnauthenticatedWorkflow logInFinishedWithBootstrapData:optedIn1TL:password:loginInfo:] */

void FUN_104d2b164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfe010();
  _objc_release(uVar2);
  if (param_5 != 0) {
    func_0x00010be73400(param_1);
  }
  puVar3 = PTR_PTR_1126af848;
  func_0x00010bf69c80(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54c00(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104d2b280; end: 104d2b69b; -[SCUnauthenticatedWorkflow _logInFinishedWithJanusBootstrapData:loginInfo:registrationMethod:] */

void FUN_104d2b280(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bd40();
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c293a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c298400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c127de0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = param_5;
    _objc_release(uVar1);
    func_0x00010be735c0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251080();
    _objc_release(uVar1);
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c250460(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0b43e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
    _objc_release(uVar1);
    _objc_release(uVar11);
    lVar12 = param_4;
    func_0x00010c0b4440();
    if ((lVar12 != 8) && (lVar12 = param_4, func_0x00010c0b4440(), lVar12 != 7)) {
      func_0x00010bef6960(uVar10);
    }
    *(undefined8 *)(param_1 + 0x88) = 1;
    uVar2 = uVar3;
    func_0x00010c294180();
    _objc_initWeak(auStack_68,param_1);
    _objc_retain(param_3);
    uStack_70 = uVar2;
    _objc_copyWeak(auStack_78,auStack_68);
    func_0x00010bef6960(uVar10);
    func_0x00010c142680(uVar10);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar10);
  }
  else {
    if (*(long *)(param_1 + 0x90) == 1) {
      func_0x00010bde1280(param_1);
    }
    lVar4 = param_1;
    func_0x00010bee7120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar12);
    uVar2 = param_3;
    func_0x00010c156e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf71140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c156e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf71140();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3f60(lVar12);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(lVar12);
    lVar12 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar12);
    func_0x00010c291720();
    _objc_release(lVar12);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0b43e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c293740(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e80(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_release(lVar4);
  }
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2b69c; end: 104d2b6a3;  */

void FUN_104d2b69c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endLogIn_1125c2cf0);
  return;
}



/* Entry: 104d2b6a4; end: 104d2b813;  */

void FUN_104d2b6a4(long param_1,undefined8 param_2)

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
  func_0x00010bfbad00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c251720(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
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



/* Entry: 104d2b814; end: 104d2b8f7; -[SCUnauthenticatedWorkflow _updateLoginInfoRepositoryWithRegistrationBootstrapData:] */

void FUN_104d2b814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c293a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c298400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c127de0();
  func_0x00010c28d060(uVar6,param_2,uVar2,0,0,0,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 104d2b8f8; end: 104d2b953; -[SCUnauthenticatedWorkflow userVerificationExited] */

void FUN_104d2b8f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bde1280();
  func_0x00010bde0da0(param_1);
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010bdfbc00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2b954; end: 104d2b95b;  */

void FUN_104d2b954(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endUserVerification_1125c3050);
  return;
}



/* Entry: 104d2b95c; end: 104d2bb13; -[SCUnauthenticatedWorkflow userVerificationFinishedWithResult:] */

void FUN_104d2b95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar10);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bee7120(param_1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  uVar3 = uVar10;
  func_0x00010c156e00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c156e00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3f60(lVar2,param_2,lVar1,uVar5,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  *(undefined8 *)(param_1 + 0x88) = 0;
  func_0x00010bde11c0(param_1);
  func_0x00010bde0d00(param_1);
  func_0x00010bde0da0(param_1);
  puVar9 = PTR_PTR_1126af960;
  _objc_alloc(PTR_PTR_1126af960);
  func_0x00010c060940();
  _objc_release(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c291740();
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d2bb14; end: 104d2bb17; -[SCUnauthenticatedWorkflow userVerificationExitedToLogInWithEmail:] */

void FUN_104d2bb14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__rerouteToLoginWithLoginUsername_112582178);
  return;
}



/* Entry: 104d2bb18; end: 104d2bbc3; -[SCUnauthenticatedWorkflow userVerificationExitedToLogInWithPhoneNumber:] */

void FUN_104d2bb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126aed98;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cf3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfb5d20(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be91f60(param_1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104d2bbc4; end: 104d2bc53; -[SCUnauthenticatedWorkflow userVerificationFinishedWithBootstrapData:] */

void FUN_104d2bbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af350;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c027a80();
  puVar2 = PTR_PTR_1126af848;
  func_0x00010bf69c80(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54c00(param_1,param_2,param_3,puVar1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2bc54; end: 104d2bcd7; -[SCUnauthenticatedWorkflow _persistPasswordWithUserId:password:source:] */

void FUN_104d2bc54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdea40();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d2bcd8; end: 104d2bd53; -[SCUnauthenticatedWorkflow _clearPersistedPasswordIfNeeded] */

void FUN_104d2bcd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d840();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d2bd54; end: 104d2bdcf; -[SCUnauthenticatedWorkflow _clearOneTapLoginOptInStatus] */

void FUN_104d2bd54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c293740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfe15c(uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2bdd0; end: 104d2be9b; -[SCUnauthenticatedWorkflow _persistUnverifiedBootstrapData:] */

void FUN_104d2bdd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  
  uVar4 = *(ulong *)(param_1 + 0xa8);
  pcVar5 = *(code **)(uVar4 + 0x10);
  _objc_retain(param_3);
  (*pcVar5)();
  puVar1 = PTR_PTR_1126af848;
  if ((uVar4 & 1) == 0) {
    func_0x00010bf69c80(PTR_PTR_1126af848);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0da0e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126af838;
  _objc_alloc(PTR_PTR_1126af838);
  func_0x00010c0596c0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed6e0();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2be9c; end: 104d2bed3; -[SCUnauthenticatedWorkflow _clearUnverifiedLogInResponseAndBootstrapData] */

void FUN_104d2be9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2bed4; end: 104d2bf0b; -[SCUnauthenticatedWorkflow _clearResumeRegistrationData] */

void FUN_104d2bed4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2bf0c; end: 104d2c087; -[SCUnauthenticatedWorkflow _clearResumeRegistrationDataExceptUser] */

void FUN_104d2bf0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126af968;
  _objc_opt_new(PTR_PTR_1126af968);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c127dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 != 0) {
    func_0x00010c1db1c0(puVar1,param_2,lVar5);
  }
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c127dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  if (lVar2 != 0) {
    func_0x00010c194080(puVar1,param_2,lVar2);
  }
  puVar7 = PTR_PTR_1126af840;
  _objc_alloc(PTR_PTR_1126af840);
  func_0x00010c03dc20();
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed660();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2c088; end: 104d2c0bb; -[SCUnauthenticatedWorkflow _clearRedirectToRegInfo] */

void FUN_104d2c088(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3be80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2c0bc; end: 104d2c10f; -[SCUnauthenticatedWorkflow _clearUserRegistrationInfo] */

void FUN_104d2c0bc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde0b40();
  func_0x00010bde0a40(param_1);
  func_0x00010bde11c0(param_1);
  func_0x00010bde0d00(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2c110; end: 104d2c263; -[SCUnauthenticatedWorkflow _userSessionFromBootstrapData:] */

void FUN_104d2c110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126af970;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf10a60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar8;
  func_0x00010c087b20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bf80(puVar1,param_2,uVar3,uVar5,uVar7,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d2c264; end: 104d2c363; -[SCUnauthenticatedWorkflow _rerouteToLoginWithLoginUsername:] */

void FUN_104d2c264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x90) = 1;
  func_0x00010c0f5480(*(undefined8 *)(param_1 + 0xd8));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b43e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9ce0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d2c364;
  puStack_48 = &UNK_11084b620;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2c364; end: 104d2c3ab;  */

void FUN_104d2c364(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf95aa0(param_2);
  func_0x00010c24f2a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d2c3ac; end: 104d2c517; -[SCUnauthenticatedWorkflow _userVerificationResult:phoneNumber:] */

void FUN_104d2c3ac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be3ff80(param_1,param_2,param_3);
  func_0x00010be42a00(param_1,param_2,param_4);
  puVar4 = PTR_PTR_1126af978;
  puVar3 = PTR_PTR_1126af980;
  if (((int)param_1 == 0) || ((int)uVar1 == 0)) {
    if ((int)uVar1 == 0) {
      if ((int)param_1 == 0) {
        func_0x00010c0db160(PTR_PTR_1126af978);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104d2c4d8;
      }
      _objc_alloc(PTR_PTR_1126af980);
      func_0x00010c01f720();
      func_0x00010c0fb320(puVar4,param_2,param_4,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_3;
      func_0x00010bf8d6c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8db20(puVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_alloc(PTR_PTR_1126af980);
    func_0x00010c01f720();
    puVar2 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fe80(puVar4,param_2,param_4,puVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
LAB_104d2c4d8:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d2c518; end: 104d2c58f; -[SCUnauthenticatedWorkflow _userVerificationChannel:phoneNumber:] */

undefined8
FUN_104d2c518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar4 = param_1;
  func_0x00010be3ff80(param_1,param_2,param_3);
  func_0x00010be42a00(param_1,param_2,param_4);
  _objc_release(param_4);
  bVar3 = (int)param_1 == 0;
  uVar2 = 2;
  if (bVar3) {
    uVar2 = 0;
  }
  uVar1 = 0xffffffffffffffff;
  if (!bVar3) {
    uVar1 = 1;
  }
  if ((int)uVar4 == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 104d2c590; end: 104d2c603; -[SCUnauthenticatedWorkflow _isEmailSubmitted:] */

bool FUN_104d2c590(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c252440(param_3);
    bVar1 = lVar3 == 1;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104d2c604; end: 104d2c697; -[SCUnauthenticatedWorkflow _isPhoneVerified:] */

bool FUN_104d2c604(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c252440(), lVar2 != 2)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0faf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104d2c698; end: 104d2c74f; -[SCUnauthenticatedWorkflow tivNonceLoginSucceededWithBootstrapData:] */

void FUN_104d2c698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af350;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c027a80();
  puVar2 = PTR_PTR_1126af848;
  func_0x00010bf69c80(PTR_PTR_1126af848);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54c00(param_1,param_2,param_3,puVar1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10bc0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d2c750; end: 104d2c79f; -[SCUnauthenticatedWorkflow tivNonceLoginFailed] */

void FUN_104d2c750(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_11084b780);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d2c7a0; end: 104d2c7a7;  */

void FUN_104d2c7a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endTIVNonceLogin_1125c2f48);
  return;
}



/* Entry: 104d2c7a8; end: 104d2c88b; -[SCUnauthenticatedWorkflow tivNonceLoginRequiresCOSChallenge:authSessionPayload:networkRequestId:] */

void FUN_104d2c7a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d2c88c;
  puStack_68 = &UNK_11084b5d0;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  lStack_48 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2c88c; end: 104d2c89b;  */

void FUN_104d2c88c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCOSChallenge_authSessionPayl_11266b338,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104d2c89c; end: 104d2c89f; -[SCUnauthenticatedWorkflow COSChallengeAbandoned] */

void FUN_104d2c89c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2718d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tivNonceLoginFailed_11267a058);
  return;
}



/* Entry: 104d2c8a0; end: 104d2c8a3; -[SCUnauthenticatedWorkflow COSChallengeErrorWithError:] */

void FUN_104d2c8a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2718d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_tivNonceLoginFailed_11267a058);
  return;
}



/* Entry: 104d2c8a4; end: 104d2c957; -[SCUnauthenticatedWorkflow COSChallengeCompletedWithBootStrapData:] */

void FUN_104d2c8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c293740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d60(uVar3,param_2,8,0,uVar2,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c271900(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d2c958; end: 104d2c95b; -[SCUnauthenticatedWorkflow logOnCOSChallengeReceivedWithChallengeType:] */

void FUN_104d2c958(void)

{
  return;
}



/* Entry: 104d2c95c; end: 104d2c95f; -[SCUnauthenticatedWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_104d2c95c(void)

{
  return;
}



/* Entry: 104d2c960; end: 104d2c963; -[SCUnauthenticatedWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:] */

void FUN_104d2c960(void)

{
  return;
}



/* Entry: 104d2c964; end: 104d2ca4b; -[SCUnauthenticatedWorkflow _startObservingTIVNonce] */

void FUN_104d2c964(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c2718a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d2ca4c; end: 104d2ca93;  */

void FUN_104d2ca4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d2ca94; end: 104d2cb97; -[SCUnauthenticatedWorkflow _handleTIVNonce:] */

void FUN_104d2ca94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d2cb98;
  puStack_50 = &UNK_11084b7a0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  uStack_48 = param_3;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b500();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104d2cb98; end: 104d2cc33;  */

void FUN_104d2cb98(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      func_0x00010c1429e0(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 104d2cc34; end: 104d2cc3f;  */

void FUN_104d2cc34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c250e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_startTIVNonceLogin_delegate__112671db0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104d2cc40; end: 104d2ccd7; -[SCUnauthenticatedWorkflow challengeDataResumed] */

void FUN_104d2cc40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_11084b7d0);
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 < 3) {
    if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be302d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleSignUpFromSplashPage_112569a50);
      return;
    }
    if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be30290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__handleSignUpFromOneTapLoginTpag_112569a40);
      return;
    }
  }
  else {
    if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be302b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__handleSignUpFromPhoneEmailFirst_112569a48);
      return;
    }
    if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be30270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleSignUpFromLoginPage_112569a38);
      return;
    }
  }
  return;
}



/* Entry: 104d2ccd8; end: 104d2ccdf;  */

void FUN_104d2ccd8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endResumeRegistrationData_1125c2e48);
  return;
}



/* Entry: 104d2cce0; end: 104d2cd37; -[SCUnauthenticatedWorkflow _handleSignUpFromPhoneEmailFirstPage] */

void FUN_104d2cce0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d2cd38;
  puStack_20 = &UNK_11084b470;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d2cd38; end: 104d2cd5f;  */

void FUN_104d2cd38(long param_1,undefined8 param_2)

{
  func_0x00010bf95020(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bec1910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startSignUp_11258dfe8);
  return;
}



/* Entry: 104d2cd60; end: 104d2cdb7; -[SCUnauthenticatedWorkflow _handleSignUpFromLoginPage] */

void FUN_104d2cd60(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d2cdb8;
  puStack_20 = &UNK_11084b470;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d2cdb8; end: 104d2cddf;  */

void FUN_104d2cdb8(long param_1,undefined8 param_2)

{
  func_0x00010bf94d20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bec1910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startSignUp_11258dfe8);
  return;
}



/* Entry: 104d2cde0; end: 104d2ce37; -[SCUnauthenticatedWorkflow _handleSignUpFromOneTapLoginTpage] */

void FUN_104d2cde0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104d2ce38;
  puStack_20 = &UNK_11084b470;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104d2ce38; end: 104d2ce5f;  */

void FUN_104d2ce38(long param_1,undefined8 param_2)

{
  func_0x00010bf94f00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bec1910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startSignUp_11258dfe8);
  return;
}



/* Entry: 104d2ce60; end: 104d2ce8b; -[SCUnauthenticatedWorkflow _handleSignUpFromSplashPage] */

void FUN_104d2ce60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startSignUp_11258dfe8);
  return;
}



/* Entry: 104d2ce8c; end: 104d2d0af; -[SCUnauthenticatedWorkflow _startSignUp] */

void FUN_104d2ce8c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x00010c23be20(*(undefined8 *)(param_1 + 0xd8));
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251080();
  _objc_release(uVar2);
  func_0x00010bede700(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d2d0b0;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104d2d0e4;
  puStack_c8 = &UNK_110848218;
  lStack_c0 = param_1;
  uStack_b8 = uVar3;
  uStack_88 = uVar3;
  _objc_copyWeak(auStack_b0,auStack_78);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_104d2d4ac;
  puStack_100 = &UNK_110848218;
  lStack_f8 = param_1;
  uStack_f0 = uVar3;
  _objc_copyWeak(auStack_e8,auStack_78);
  _objc_copyWeak(auStack_120,auStack_78);
  func_0x00010c0bef40(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010c142680(uVar3);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar3);
  return;
}



/* Entry: 104d2d0b0; end: 104d2d0e3;  */

void FUN_104d2d0b0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec07e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d2d0e4; end: 104d2d20b;  */

void FUN_104d2d0e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_104d2d20c();
  func_0x00010c0ada80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bd40();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010bef6960(uVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d2d20c; end: 104d2d45f;  */

undefined8 FUN_104d2d20c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_1;
    func_0x00010c127d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar2 = 0x1e;
    }
    else {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 0xffffffffffffffff;
      lVar1 = param_1;
      func_0x00010c127d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_1);
      func_0x00010c0bd8c0(lVar1);
      _objc_release(lVar1);
      uVar2 = puStack_68[3];
      _objc_release(param_1);
      __Block_object_dispose(&uStack_70,8);
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104d2d460; end: 104d2d4ab;  */

void FUN_104d2d460(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24ff80(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d2d4ac; end: 104d2d5b7;  */

void FUN_104d2d4ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_104d2d20c();
  func_0x00010c0ada80(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010bef6960(uVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d2d5b8; end: 104d2d613;  */

void FUN_104d2d5b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c250320(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d2d614; end: 104d2d81b;  */

void FUN_104d2d614(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c13dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c282c40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = uVar7;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = 2;
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(uVar6);
  uVar2 = uVar6;
  func_0x00010c293a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c298400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c294180();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 < 6) {
    uVar7 = *(undefined8 *)(&UNK_10dd8b340 + uVar2 * 8);
  }
  else {
    uVar7 = 0x2d;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  func_0x00010c293740(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada80(uVar4,param_2,2,uVar7,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c13dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c07ce60(uVar4,param_2,uVar7);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if ((int)uVar4 == 0) {
    func_0x00010bec07e0();
  }
  else {
    func_0x00010bec20a0();
  }
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



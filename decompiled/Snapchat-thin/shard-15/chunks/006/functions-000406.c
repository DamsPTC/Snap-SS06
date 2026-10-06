/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bae66b4; end: 10bae66bb; -[SCAWeb3RemoveWalletAction getPayloadIdentifier] */

undefined8 FUN_10bae66b4(void)

{
  return 0xfd4;
}



/* Entry: 10bae66bc; end: 10bae66c7; -[SCAWeb3WalletPageDismissed getEventName] */

undefined ** FUN_10bae66bc(void)

{
  return &PTR____CFConstantStringClassReference_110ff6af8;
}



/* Entry: 10bae66c8; end: 10bae66cf; -[SCAWeb3WalletPageDismissed getEventQoS] */

undefined8 FUN_10bae66c8(void)

{
  return 2;
}



/* Entry: 10bae66d0; end: 10bae66db; -[SCAWeb3WalletPageDismissed getPerUserSamplingRate] */

undefined8 FUN_10bae66d0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bae66dc; end: 10bae66e7; -[SCAWeb3WalletPageDismissed getPerUserSamplingRateV2] */

undefined8 FUN_10bae66dc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bae66e8; end: 10bae66ff; -[SCAWeb3WalletPageDismissed setLensId:] */

void FUN_10bae66e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,2,param_3,0);
  return;
}



/* Entry: 10bae6700; end: 10bae6717; -[SCAWeb3WalletPageDismissed setPageType:] */

void FUN_10bae6700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dcad78,3,param_3,0);
  return;
}



/* Entry: 10bae6718; end: 10bae672f; -[SCAWeb3WalletPageDismissed setSource:] */

void FUN_10bae6718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,4,param_3,0);
  return;
}



/* Entry: 10bae6730; end: 10bae6783; -[SCAWeb3WalletPageDismissed setTimestampMs:] */

void FUN_10bae6730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bae6784; end: 10bae6787; -[SCAWeb3WalletPageDismissed getFieldNumberToFieldDict] */

void FUN_10bae6784(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bae6788; end: 10bae6793; -[SCAWeb3WalletPageDismissed toProtoWithAllowedFields:] */

void FUN_10bae6788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bae6794; end: 10bae679b; -[SCAWeb3WalletPageDismissed getPayloadIdentifier] */

undefined8 FUN_10bae6794(void)

{
  return 0xfd5;
}



/* Entry: 10bae679c; end: 10bae67a7; -[SCAWeb3WalletPageDisplayed getEventName] */

undefined ** FUN_10bae679c(void)

{
  return &PTR____CFConstantStringClassReference_110ff6b18;
}



/* Entry: 10bae67a8; end: 10bae67af; -[SCAWeb3WalletPageDisplayed getEventQoS] */

undefined8 FUN_10bae67a8(void)

{
  return 2;
}



/* Entry: 10bae67b0; end: 10bae67bb; -[SCAWeb3WalletPageDisplayed getPerUserSamplingRate] */

undefined8 FUN_10bae67b0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bae67bc; end: 10bae67c7; -[SCAWeb3WalletPageDisplayed getPerUserSamplingRateV2] */

undefined8 FUN_10bae67bc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bae67c8; end: 10bae67df; -[SCAWeb3WalletPageDisplayed setLensId:] */

void FUN_10bae67c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,2,param_3,0);
  return;
}



/* Entry: 10bae67e0; end: 10bae67f7; -[SCAWeb3WalletPageDisplayed setPageType:] */

void FUN_10bae67e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dcad78,3,param_3,0);
  return;
}



/* Entry: 10bae67f8; end: 10bae680f; -[SCAWeb3WalletPageDisplayed setSource:] */

void FUN_10bae67f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,4,param_3,0);
  return;
}



/* Entry: 10bae6810; end: 10bae6863; -[SCAWeb3WalletPageDisplayed setTimestampMs:] */

void FUN_10bae6810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bae6864; end: 10bae6867; -[SCAWeb3WalletPageDisplayed getFieldNumberToFieldDict] */

void FUN_10bae6864(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bae6868; end: 10bae6873; -[SCAWeb3WalletPageDisplayed toProtoWithAllowedFields:] */

void FUN_10bae6868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bae6874; end: 10bae68bb; -[SCAWeb3WalletPageDisplayed getPayloadIdentifier] */

undefined8 FUN_10bae6874(void)

{
  return 0xfd6;
}



/* Entry: 10bae68bc; end: 10bae693b;  */

undefined8 FUN_10bae68bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6ab58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ab58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff6b38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6b38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae693c; end: 10bae695b;  */

undefined * FUN_10bae693c(ulong param_1)

{
  if (param_1 < 100) {
    return (&PTR_PTR_110d89280)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae695c; end: 10bae7477;  */

undefined8 FUN_10bae695c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db00f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fd5738;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd5738,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff6b58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6b58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff6b78;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6b78,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff6b98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6b98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff6bb8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6bb8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff6bd8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6bd8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ff6bf8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6bf8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x15;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff6c18;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6c18,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x17;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff6c38;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6c38,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x16;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ff6c58;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6c58,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 7;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ff6c78;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6c78,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 8;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ff6c98;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6c98,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 9;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ff6cb8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6cb8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 10;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ff6cd8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6cd8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xb;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ff6cf8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff6cf8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xc;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff6d18;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6d18,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xd;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff6d38;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6d38,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xe;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ff6d58;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6d58,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0xf;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ff6d78;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6d78,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x10;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ff6d98
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6d98,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x11;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6db8;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6db8,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x12;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6dd8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6dd8,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x13;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6df8;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6df8,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x14;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6e18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6e18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x34;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6e38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6e38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6e58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6e58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6e78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6e78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f5a898;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f5a898,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6e98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6e98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6eb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6eb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6ed8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6ed8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6ef8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6ef8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6fb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6fb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x40;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6fd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x41;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6ff8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6ff8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x42;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7018;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7018,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7038;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7038,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7058;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7058,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x25;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7078;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7078,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7098;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7098,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x27;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff70b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff70b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff70d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff70d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x29;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff70f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff70f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x43;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7118;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7118,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x44;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7138;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7138,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7158;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7158,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7178;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7178,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7198;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7198,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff71b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff71b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff71d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff71d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x45;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff71f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff71f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7218;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7218,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7238;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7238,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x47;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7258;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7258,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7278;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7278,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7298;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7298,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff72b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff72b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff72d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff72d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x30;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff72f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff72f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x46;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6c618;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6c618,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x31;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6c058;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6c058,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x32;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7318;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7318,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x33;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7338;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7338,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x35;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7358;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7358,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x36;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7378;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7378,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x37;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7398;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7398,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x38;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff73b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff73b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x39;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff73d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff73d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff73f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff73f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7418;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7418,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7438;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7438,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7458;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7458,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x48;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7478;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7478,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x54;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7498;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7498,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x49;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff74b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff74b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff74d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff74d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff74f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff74f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7518;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7518,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x50;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7538;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7538,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x51;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7558;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7558,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x52;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7578;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7578,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x53;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7598;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7598,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x55;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff75b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff75b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x56;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff75d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff75d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x57;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff75f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff75f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x58;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7618;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7618,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x59;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7638;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7638,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x62;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7658;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7658,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7678;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7678,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7698;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7698,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x61;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff76b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff76b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff76d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff76d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff76f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff76f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x60;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7718;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7718,
                                                  param_2,param_1);
                                                  uVar2 = 99;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae7478; end: 10bae749b;  */

undefined ** FUN_10bae7478(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e81c38;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ff7738;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bae749c; end: 10bae74ff;  */

undefined8 FUN_10bae749c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff7738;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7738,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e81c38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e81c38,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae7500; end: 10bae751f;  */

undefined * FUN_10bae7500(ulong param_1)

{
  if (param_1 < 0x19) {
    return (&PTR_PTR_110d895a0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae7520; end: 10bae7807;  */

undefined8 FUN_10bae7520(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e301d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e301d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f6aa98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6aa98,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f6aab8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6aab8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f6aad8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6aad8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f6aaf8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6aaf8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e2a058;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2a058,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110e31df8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e31df8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f6ab18;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ab18,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7858;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc7858,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f6ab38;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ab38,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6ab58;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ab58,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f6ab78;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ab78,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f6ab98;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ab98,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f6abb8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6abb8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f6abd8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6abd8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f6abf8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6abf8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f6ac18;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6ac18,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f6ac38;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6ac38,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6ac58;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6ac58,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f6ac78;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6ac78,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ff7758
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7758,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7778;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7778,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e4a5d8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e4a5d8,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7798;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7798,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff77b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff77b8,
                                                  param_2,param_1);
                                                  uVar2 = 0x18;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae7808; end: 10bae78a7;  */

undefined * FUN_10bae7808(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d89668)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae78a8; end: 10bae7997;  */

undefined8 FUN_10bae78a8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff7a98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7a98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7ab8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7ab8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff7ad8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7ad8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff7af8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7af8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff7b18;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7b18,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff7b38;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7b38,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff7b58;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7b58,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae7998; end: 10bae79b7;  */

undefined * FUN_10bae7998(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d89788)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae79b8; end: 10bae7a6f;  */

undefined8 FUN_10bae79b8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7b78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7b78,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff7b98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7b98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff7bb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7bb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff7bd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7bd8,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae7a70; end: 10bae7a8f;  */

undefined * FUN_10bae7a70(ulong param_1)

{
  if (param_1 < 0x10) {
    return (&PTR_PTR_110d897b0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae7a90; end: 10bae7c7b;  */

undefined8 FUN_10bae7a90(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fcac18;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fcac18,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7bf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7bf8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1cc58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e1cc58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7cc98;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7cc98,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff7c18;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7c18,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f13918;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13918,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f4a318;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f4a318,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110dad198;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dad198,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110eb3818;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb3818,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xc;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fa5db8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa5db8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 8;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fa5dd8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa5dd8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 9;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fa5df8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa5df8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 10;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ee1798;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee1798,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xb;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e0dbf8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e0dbf8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110e1f9d8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e1f9d8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ff7c38;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7c38
                                                    ,param_2,param_1);
                                uVar2 = 0xf;
                                if (ppuVar1 != (undefined **)0x0) {
                                  uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae7c7c; end: 10bae7cbf;  */

undefined ** FUN_10bae7c7c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110fd4578;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110fa05d8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bae7cc0; end: 10bae7f1b;  */

undefined8 FUN_10bae7cc0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ede218;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede218,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ede238;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede238,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ede258;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede258,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ede278;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede278,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ede298;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede298,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ede2b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede2b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ede2d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede2d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ede2f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede2f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ede318;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede318,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ede338;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede338,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ede358;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede358,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ede378;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede378,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ede398;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede398,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ede3b8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede3b8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ede3d8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede3d8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ede3f8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede3f8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ede438;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede438,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ede458;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede458,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ede478;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede478,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ede498;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede498,
                                                  param_2,param_1);
                                        uVar2 = 0x13;
                                        if (ppuVar1 != (undefined **)0x0) {
                                          uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae7f1c; end: 10bae7f3b;  */

undefined * FUN_10bae7f1c(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d898d0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae7f3c; end: 10bae8063;  */

undefined8 FUN_10bae7f3c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df9b38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9b38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df9b18;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9b18,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df9b58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9b58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110df9b78;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9b78,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110df9b98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9b98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110df9bb8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9bb8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110df9bf8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9bf8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110df9bd8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df9bd8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff7c58;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7c58,param_2,
                                      param_1);
                  uVar2 = 8;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0xffffffffffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8064; end: 10bae8083;  */

undefined * FUN_10bae8064(ulong param_1)

{
  if (param_1 < 0x14) {
    return (&PTR_PTR_110d89918)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8084; end: 10bae82df;  */

undefined8 FUN_10bae8084(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2f618;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2f618,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fb0838;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb0838,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea458,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e10b58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e10b58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e99bf8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e99bf8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e08c78;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e08c78,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff7c78;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7c78,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110db81f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db81f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fa6718;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa6718,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7c98;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7c98,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fd9958;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd9958,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f77e38;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f77e38,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fd93b8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd93b8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fbeed8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fbeed8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ff7cb8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7cb8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x13;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ff7cd8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7cd8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xe;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff7cf8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7cf8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xf;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e1b8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f7e1b8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x10;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e78,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x11;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110dbe6d8;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbe6d8,
                                                  param_2,param_1);
                                        uVar2 = 0x12;
                                        if (ppuVar1 != (undefined **)0x0) {
                                          uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae82e0; end: 10bae82ff;  */

undefined * FUN_10bae82e0(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d899b8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8300; end: 10bae840b;  */

undefined8 FUN_10bae8300(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c2b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c2b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f30798;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f30798,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e79df8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e79df8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e04238;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e04238,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbb6b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7c2d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c2d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7c2f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7c2f8,param_2,param_1
                                   );
                uVar2 = 7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0xffffffffffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae840c; end: 10bae842f;  */

undefined ** FUN_10bae840c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f30798;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bae8430; end: 10bae8493;  */

undefined8 FUN_10bae8430(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f30798;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f30798,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8494; end: 10bae84b3;  */

undefined * FUN_10bae8494(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d899f8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae84b4; end: 10bae856b;  */

undefined8 FUN_10bae84b4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fb0838;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb0838,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad1d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dad1d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff7d18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7d18,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e79118;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e79118,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f6c1f8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6c1f8,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae856c; end: 10bae858b;  */

undefined * FUN_10bae856c(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d89a20)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae858c; end: 10bae8697;  */

undefined8 FUN_10bae858c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff7d38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7d38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7d58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7d58,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fb8e38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb8e38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fdc578;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdc578,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fa8158;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa8158,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff7d78;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7d78,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110db9e38;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9e38,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ff7d98;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7d98,param_2,param_1
                                   );
                uVar2 = 7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0xffffffffffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8698; end: 10bae86ab;  */

undefined ** FUN_10bae8698(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb4a98;
  if (param_1 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10bae86ac; end: 10bae86d3;  */

long FUN_10bae86ac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb4a98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb4a98,param_2,param_1);
  return -(ulong)(ppuVar1 != (undefined **)0x0);
}



/* Entry: 10bae86d4; end: 10bae86f3;  */

undefined * FUN_10bae86d4(ulong param_1)

{
  if (param_1 < 7) {
    return (&PTR_PTR_110d89a60)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae86f4; end: 10bae87e3;  */

undefined8 FUN_10bae86f4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea458,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff7db8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7db8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff7dd8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7dd8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff7df8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7df8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff7e18;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7e18,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f55a38;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f55a38,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae87e4; end: 10bae8803;  */

undefined * FUN_10bae87e4(ulong param_1)

{
  if (param_1 < 0x11) {
    return (&PTR_PTR_110d89a98)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8804; end: 10bae8a0b;  */

undefined8 FUN_10bae8804(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45778;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e45778,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7e38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7e38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff7e58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7e58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff7e78;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7e78,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff7e98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7e98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff7eb8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7eb8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff7ed8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7ed8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110dcbef8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dcbef8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3638;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd3638,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7ef8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7ef8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ff7f18;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7f18,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110e69998;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e69998,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ff7f38;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7f38,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ff7f58;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7f58,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ff7f78;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7f78,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ff7f98;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7f98
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff7fb8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7fb8,
                                                  param_2,param_1);
                                  uVar2 = 0x10;
                                  if (ppuVar1 != (undefined **)0x0) {
                                    uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8a0c; end: 10bae8a2b;  */

undefined * FUN_10bae8a0c(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89b20)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8a2c; end: 10bae8aab;  */

undefined8 FUN_10bae8a2c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e53058;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e53058,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff7fd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7fd8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff7ff8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff7ff8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8aac; end: 10bae8acb;  */

undefined * FUN_10bae8aac(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d89b38)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8acc; end: 10bae8bf3;  */

undefined8 FUN_10bae8acc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8018;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8018,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8038;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8038,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8058;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8058,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8078;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8078,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff8098;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8098,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff80b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff80b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff80d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff80d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ff80f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff80f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8118;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8118,param_2,
                                      param_1);
                  uVar2 = 8;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0xffffffffffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8bf4; end: 10bae8c13;  */

undefined * FUN_10bae8bf4(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d89b80)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8c14; end: 10bae8caf;  */

undefined8 FUN_10bae8c14(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8138;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8138,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaab8,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8cb0; end: 10bae8ccf;  */

undefined * FUN_10bae8cb0(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d89ba0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8cd0; end: 10bae8d6b;  */

undefined8 FUN_10bae8cd0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fb8918;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb8918,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8158;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8158,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaab8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8138;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8138,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8d6c; end: 10bae8d8b;  */

undefined * FUN_10bae8d6c(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89bc0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8d8c; end: 10bae8e0b;  */

undefined8 FUN_10bae8d8c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3638;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd3638,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8178;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8178,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8198;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8198,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8e0c; end: 10bae8e2b;  */

undefined * FUN_10bae8e0c(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89bd8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8e2c; end: 10bae8eab;  */

undefined8 FUN_10bae8e2c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff81b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff81b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff81d8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff81d8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8eac; end: 10bae8ecb;  */

undefined * FUN_10bae8eac(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d89bf0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae8ecc; end: 10bae8f67;  */

undefined8 FUN_10bae8ecc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaab8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 3;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff81f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff81f8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 1;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8218;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8218,param_2,param_1);
        uVar2 = 2;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8f68; end: 10bae8f8b;  */

undefined ** FUN_10bae8f68(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6a778;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db78d8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bae8f8c; end: 10bae8fef;  */

undefined8 FUN_10bae8f8c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f6a778;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6a778,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae8ff0; end: 10bae900f;  */

undefined * FUN_10bae8ff0(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d89c10)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9010; end: 10bae9137;  */

undefined8 FUN_10bae9010(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8238;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8238,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8258;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8258,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8278;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8278,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff8298;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8298,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff82b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff82b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff82d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff82d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ff82f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff82f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3638;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd3638,param_2,
                                      param_1);
                  uVar2 = 8;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0xffffffffffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9138; end: 10bae9157;  */

undefined * FUN_10bae9138(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89c58)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9158; end: 10bae91d7;  */

undefined8 FUN_10bae9158(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dacbf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dacbf8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f6a778;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6a778,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae91d8; end: 10bae91f7;  */

undefined * FUN_10bae91d8(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89c70)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae91f8; end: 10bae9277;  */

undefined8 FUN_10bae91f8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8318;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8318,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8338;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8338,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fcfad8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fcfad8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9278; end: 10bae9297;  */

undefined * FUN_10bae9278(ulong param_1)

{
  if (param_1 < 0x17) {
    return (&PTR_PTR_110d89c88)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9298; end: 10bae9547;  */

undefined8 FUN_10bae9298(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8358;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8358,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f16ef8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16ef8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8378;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8378,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8398;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8398,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e35d58;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e35d58,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff83b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff83b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff83d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff83d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ff83f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff83f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8418;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8418,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8438;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8438,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8458;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8458,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8478;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8478,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ff8498;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8498,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ff84b8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff84b8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ff84d8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff84d8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ff84f8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff84f8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8518;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff8518,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8538;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff8538,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8558;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff8558,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8578;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff8578,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ff8598
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff8598,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff85b8;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff85b8,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff85d8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff85d8,
                                                  param_2,param_1);
                                              uVar2 = 0x16;
                                              if (ppuVar1 != (undefined **)0x0) {
                                                uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9548; end: 10bae9567;  */

undefined * FUN_10bae9548(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d89d40)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9568; end: 10bae968f;  */

undefined8 FUN_10bae9568(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3e0d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3e0d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e3e058;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3e058,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e1cc58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e1cc58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e3e078;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3e078,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff85f8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff85f8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110e3e0b8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3e0b8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110e3e098;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3e098,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8618;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8618,param_2,
                                      param_1);
                  uVar2 = 8;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0xffffffffffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9690; end: 10bae96af;  */

undefined * FUN_10bae9690(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89d88)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae96b0; end: 10bae972f;  */

undefined8 FUN_10bae96b0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8638;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8638,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8658;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8658,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8678;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8678,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9730; end: 10bae976f;  */

undefined * FUN_10bae9730(ulong param_1)

{
  if (param_1 < 0xc) {
    return (&PTR_PTR_110d89dc8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9770; end: 10bae99cb;  */

undefined8 FUN_10bae9770(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8858;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8858,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fdc0f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdc0f8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7df98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7df98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e69c58;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e69c58,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ff8878;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8878,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 10;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ff8898;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8898,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xb;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff88b8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff88b8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xc;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff88d8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff88d8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0xd;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ff88f8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff88f8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xe;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8918;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8918,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xf;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ff8938;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8938,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x10;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ff8958;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8958,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x11;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ff8978;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8978,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 9;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ff8998;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8998
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x12;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ff89b8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff89b8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x13;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ff89d8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff89d8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x14;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ff89f8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff89f8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 6;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8a18;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff8a18,
                                                  param_2,param_1);
                                        uVar2 = 0x15;
                                        if (ppuVar1 != (undefined **)0x0) {
                                          uVar2 = 0xffffffffffffffff;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae99cc; end: 10bae99eb;  */

undefined * FUN_10bae99cc(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89ed8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae99ec; end: 10bae9a6b;  */

undefined8 FUN_10bae99ec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8a38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8a38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8a58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8a58,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8a78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8a78,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9a6c; end: 10bae9a8b;  */

undefined * FUN_10bae9a6c(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d89ef0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9a8c; end: 10bae9b5f;  */

undefined8 FUN_10bae9a8c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ff8a98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8a98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8ab8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8ab8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8ad8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8ad8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8af8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8af8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff8b18;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8b18,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff8b38;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8b38,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9b60; end: 10bae9b7f;  */

undefined * FUN_10bae9b60(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89f20)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9b80; end: 10bae9bff;  */

undefined8 FUN_10bae9b80(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2698;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2698,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8b58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8b58,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9c00; end: 10bae9c23;  */

undefined ** FUN_10bae9c00(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ebd538;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db9d58;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bae9c24; end: 10bae9c87;  */

undefined8 FUN_10bae9c24(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9d58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9d58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ebd538;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ebd538,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9c88; end: 10bae9ca7;  */

undefined * FUN_10bae9c88(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d89f38)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9ca8; end: 10bae9d27;  */

undefined8 FUN_10bae9ca8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db00f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8b78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8b78,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8b98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8b98,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9d28; end: 10bae9dab;  */

undefined ** FUN_10bae9d28(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3658;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daed58;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bae9dac; end: 10bae9e7f;  */

undefined8 FUN_10bae9dac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ff8bd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8bd8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8bf8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8bf8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8c18;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8c18,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ff8c38;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8c38,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ff8c58;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8c58,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bae9e80; end: 10bae9e9f;  */

undefined * FUN_10bae9e80(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d89fc8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bae9ea0; end: 10bae9f3b;  */

undefined8 FUN_10bae9ea0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f5aed8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f5aed8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ff8c78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8c78,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ff8c98;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ff8c98,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



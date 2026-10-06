/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084a43a8; end: 1084a44f3; -[SCAdProtoImpressionDataBuilder getProtoAdFlagData:] */

void FUN_1084a43a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1060;
  _objc_opt_new(PTR_PTR_1126d1060);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_3;
  func_0x00010bef2a20(param_3);
  func_0x00010bff91e0(puVar2,param_2,lVar3);
  func_0x00010c163600(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d1068;
  lVar3 = param_3;
  func_0x00010bef2a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118f80(puVar2,param_2,lVar3);
  func_0x00010c163640(puVar1,param_2,puVar2);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar3 = param_3;
  func_0x00010bef2a40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010bef2a40(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar2,param_2,lVar5);
  func_0x00010c163620(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (lVar4 != 0) {
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a44f4; end: 1084a45a3; -[SCAdProtoImpressionDataBuilder getProtoAdHideData:] */

void FUN_1084a44f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d9a20;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar3 = param_3;
  func_0x00010bef2ac0(param_3);
  func_0x00010bff91e0(puVar2,param_2,uVar3);
  func_0x00010c1636c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bef2ba0(param_3);
  _objc_release(param_3);
  func_0x00010c118fa0(param_1,param_2,uVar3);
  func_0x00010c1e8080(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a45a4; end: 1084a45b3; -[SCAdProtoImpressionDataBuilder protoAdHiddenReasonFromReason:] */

int FUN_1084a45a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 5) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084a45b4; end: 1084a4827; +[SCAdProtoImpressionDataBuilderUtils protoAdFlaggedDataAdFlaggedReasonFromString:] */

undefined4 FUN_1084a45b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ede218;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede218,param_2,param_3);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 1;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ede238;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede238,param_2,param_3);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 2;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ede258;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede258,param_2,param_3);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 3;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ede278;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede278,param_2,param_3);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 4;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ede298;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede298,param_2,param_3);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 5;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ede2b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede2b8,param_2,param_3);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 6;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ede2d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede2d8,param_2,param_3);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 7;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ede2f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede2f8,param_2,param_3
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 8;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ede318;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede318,param_2,
                                      param_3);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 9;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ede338;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede338,param_2,
                                        param_3);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 10;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ede358;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede358,param_2,
                                          param_3);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xb;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ede378;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede378,param_2
                                            ,param_3);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xc;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ede398;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede398,
                                              param_2,param_3);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xd;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ede3b8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede3b8,
                                                param_2,param_3);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xe;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ede3d8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede3d8,
                                                  param_2,param_3);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xf;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ede3f8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede3f8
                                                    ,param_2,param_3);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x10;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ede418;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede418,
                                                  param_2,param_3);
                                  if (ppuVar1 != (undefined **)0x0) {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ede438;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede438,
                                                  param_2,param_3);
                                    if (ppuVar1 != (undefined **)0x0) {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ede458;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede458,
                                                  param_2,param_3);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ede478;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede478,
                                                  param_2,param_3);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ede498
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ede498,
                                                  param_2,param_3);
                                          uVar2 = 0x14;
                                          if (ppuVar1 != (undefined **)0x0) {
                                            uVar2 = 0;
                                          }
                                        }
                                      }
                                      goto LAB_1084a4800;
                                    }
                                  }
                                  uVar2 = 0x11;
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
LAB_1084a4800:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1084a4828; end: 1084a48f7; -[SCAdProtoImpressionDataBuilder _protoAdToLensImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a4828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d9a28;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010be83720(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164b20(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010be83580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a48f8; end: 1084a49f3; -[SCAdProtoImpressionDataBuilder _protoAdToCallImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a48f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d9a30;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be83580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar3 = param_4;
  func_0x00010bef5980(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010bf72aa0(uVar3);
  func_0x00010bff91e0(puVar2,param_3,uVar4);
  func_0x00010c18d540(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a49f4; end: 1084a4aef; -[SCAdProtoImpressionDataBuilder _protoAdToMessageImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a49f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d9a38;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be83580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar3 = param_4;
  func_0x00010bef5a40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010bf77e40(uVar3);
  func_0x00010bff91e0(puVar2,param_3,uVar4);
  func_0x00010c18d8e0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a4af0; end: 1084a4d53; -[SCAdProtoImpressionDataBuilder _protoAdToPlaceImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a4af0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x27;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  puVar1 = PTR_PTR_1126d9a40;
  _objc_retain(param_4);
  _objc_opt_new();
  lVar2 = param_2;
  func_0x00010be83580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c17f580(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar2 = param_2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bef5aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0fd0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  if (lVar10 == 0) {
    lVar12 = 0;
    lVar11 = param_2;
  }
  else {
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = param_2;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = uStack_a8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    param_5 = lVar11;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = param_5;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    param_4 = unaff_x27;
    func_0x00010bef5aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_4;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = param_2;
  }
  func_0x00010c04e820(puVar3,param_3,lVar12);
  func_0x00010c1dc720(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  if (lVar10 != 0) {
    _objc_release(lVar12);
    _objc_release(param_4);
    _objc_release(unaff_x27);
    _objc_release(param_5);
    _objc_release(lVar11);
    _objc_release(uStack_a8);
    _objc_release(uStack_a0);
  }
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a4d54; end: 1084a569b; -[SCAdProtoImpressionDataBuilder _protoAppInstallImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a4d54(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9a48;
  _objc_opt_new();
  _objc_retain(param_4);
  uVar9 = param_2;
  func_0x00010bde2540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_4;
  func_0x00010bf05500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c980();
  func_0x00010bff91e0(puVar2);
  func_0x00010c1bea20(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_4;
  func_0x00010bf05500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c9a0();
  func_0x00010bff91e0(puVar2);
  func_0x00010c1beac0(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar2 = PTR_PTR_1126afec0;
  lVar3 = param_4;
  func_0x00010bf05500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ff80();
  func_0x00010c155420(puVar2);
  dVar13 = (double)(ulong)(uint)(float)param_1;
  func_0x00010c0138c0(dVar13,puVar4);
  func_0x00010c223b00(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  func_0x00010c17f580(puVar1);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_4;
  func_0x00010bf05500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf61aa0();
  func_0x00010bff91e0(puVar2);
  func_0x00010c1886e0(puVar1);
  _objc_release(puVar2);
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010bf05500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf056e0();
  func_0x00010be83480(param_2);
  func_0x00010c168ca0(puVar1);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126d9a50;
  _objc_opt_new();
  lVar3 = param_4;
  func_0x00010bf05500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf053c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar5 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar13 = 0.0;
    lVar3 = param_4;
    func_0x00010bf05500();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf053c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar6);
        }
        uVar12 = *(undefined8 *)(lVar11 * 8);
        puVar7 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c067fc0(uVar12);
        func_0x00010c01e4e0(puVar7);
        func_0x00010befa120(puVar4);
        _objc_release(puVar7);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    func_0x00010c168bc0(puVar2);
    _objc_release(puVar4);
  }
  lVar3 = param_4;
  func_0x00010bf05500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c23db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar5;
  func_0x00010c108b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar3 = lVar5;
    func_0x00010c108b40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c01e4e0(puVar4);
    func_0x00010c1e0880(puVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010c108c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar3 = lVar5;
    func_0x00010c108c80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c01e4e0(puVar4);
    func_0x00010c1e0900(puVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010c10eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar3 = lVar5;
    func_0x00010c10eb20(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c01e4e0(puVar4);
    func_0x00010c21a3e0(puVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010c10f8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    lVar3 = lVar5;
    func_0x00010c10f8a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c01e4e0(puVar4);
    func_0x00010c1e13a0(puVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010bf99500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar5;
    func_0x00010bf99500(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    puVar4 = puVar2;
    func_0x00010bf99520(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010c09b420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar5;
    func_0x00010c09b420(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf987e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190e60();
    _objc_release(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010c09b420(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    puVar4 = puVar2;
    func_0x00010bf987e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17dba0();
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010bf5ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar5;
    func_0x00010bf5ddc0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    puVar4 = puVar2;
    func_0x00010bf5ddc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(dVar13);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  func_0x00010c202e20(puVar1);
  lVar3 = param_4;
  func_0x00010bf05500();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c23de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = lVar3;
    func_0x00010c23de00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    puVar4 = puVar1;
    func_0x00010c23de20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar4);
    _objc_release(lVar6);
  }
  lVar6 = lVar3;
  func_0x00010c23ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = lVar3;
    func_0x00010c23ddc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    puVar4 = puVar1;
    func_0x00010c23dda0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar4);
    _objc_release(lVar6);
  }
  lVar6 = lVar3;
  func_0x00010c23de60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = lVar3;
    func_0x00010c23de60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar13 = (double)(ulong)(uint)(float)dVar13;
    puVar4 = puVar1;
    func_0x00010c23de40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(dVar13);
    _objc_release(puVar4);
    _objc_release(lVar6);
  }
  uVar12 = param_2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010bf8f8c0();
  _objc_release(uVar12);
  if ((int)uVar8 != 0) {
    lVar6 = param_4;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be39100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac3a0(puVar1);
    _objc_release(param_2);
    _objc_release(lVar6);
  }
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar9 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010bf42b60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010bff91e0(puVar2);
  func_0x00010c2109c0(param_3);
  _objc_release(puVar2);
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar9 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010bf42b60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c01e4a0(puVar2);
  func_0x00010c210580(param_3);
  _objc_release(puVar2);
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar2 = PTR_PTR_1126afec0;
  uVar9 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010bf42b60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5240();
  func_0x00010c0cd480(puVar2);
  dVar13 = (double)(ulong)(uint)(float)dVar13;
  func_0x00010c0138c0(dVar13,puVar1);
  func_0x00010c1c0e20(param_3);
  _objc_release(puVar1);
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(param_4 + 0x28);
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010bf8f2a0();
  _objc_release(uVar12);
  if ((int)uVar9 != 0) {
    puVar1 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar2 = PTR_PTR_1126afec0;
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bf42b60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275d00();
    func_0x00010c0cd480(puVar2);
    dVar13 = (double)(ulong)(uint)(float)dVar13;
    func_0x00010c0138c0(dVar13,puVar1);
    func_0x00010c217d00(param_3);
    _objc_release(puVar1);
    _objc_release(uVar9);
    puVar1 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar2 = PTR_PTR_1126afec0;
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bf42b60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fc80();
    func_0x00010c0cd480(puVar2);
    func_0x00010c0138c0((float)dVar13,puVar1);
    func_0x00010c1edc20(param_3);
    _objc_release(puVar1);
    _objc_release(uVar9);
  }
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c1b0ce0(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084a569c; end: 1084a58f7;  */

void FUN_1084a569c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010bff91e0(puVar1);
  func_0x00010c2109c0(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c01e4a0(puVar1);
  func_0x00010c210580(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar1 = PTR_PTR_1126afec0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5240();
  func_0x00010c0cd480(puVar1);
  fVar5 = (float)(double)CONCAT44(uVar6,uVar7);
  uVar7 = 0;
  func_0x00010c0138c0(fVar5,puVar3);
  func_0x00010c1c0e20(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf8f2a0();
  _objc_release(uVar4);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar1 = PTR_PTR_1126afec0;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf42b60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275d00();
    func_0x00010c0cd480(puVar1);
    fVar5 = (float)(double)CONCAT44(uVar7,fVar5);
    uVar7 = 0;
    func_0x00010c0138c0(fVar5,puVar3);
    func_0x00010c217d00(param_3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar1 = PTR_PTR_1126afec0;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf42b60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fc80();
    func_0x00010c0cd480(puVar1);
    func_0x00010c0138c0((float)(double)CONCAT44(uVar7,fVar5),puVar3);
    func_0x00010c1edc20(param_3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c1b0ce0(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084a58f8; end: 1084a6e67; -[SCAdProtoImpressionDataBuilder _protoCollectionImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a58f8(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined1 *param_5,undefined8 param_6)

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
  double dVar12;
  undefined8 unaff_d9;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  double dStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  uint uStack_18c;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_168 = param_2;
  _objc_retain(param_4);
  puVar11 = PTR_PTR_1126d9a58;
  _objc_opt_new();
  dVar12 = param_1;
  func_0x00010bde2540(param_1,param_2,param_3,param_4,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c217bc0(puVar11);
  puStack_148 = param_4;
  func_0x00010bf400a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010c068820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar3 = puStack_168;
  if (puVar9 != (undefined *)0x0) {
    puVar1 = puStack_168;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf1f480();
    _objc_release(puVar1);
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uStack_18c = (uint)puVar2;
    puStack_1a0 = param_2;
    puStack_198 = puVar11;
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = puVar3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = puStack_148;
      func_0x00010bf42b60();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c2415a0();
      puVar4 = puVar3;
      func_0x00010bef52e0(puVar3,param_3,puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar11 = puVar4;
    func_0x00010bf3fd80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c067fc0();
    puStack_188 = puVar3;
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    dVar12 = 0.0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar3 = puStack_148;
    puStack_158 = puVar11;
    func_0x00010bf400a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c068820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    param_5 = auStack_100;
    param_6 = 0x10;
    puStack_178 = puVar11;
    func_0x00010bf52a60(puVar11,param_3,&uStack_140,param_5,0x10);
    puStack_150 = puVar11;
    if (puVar11 != (undefined *)0x0) {
      lStack_160 = *plStack_130;
      unaff_d9 = 0x408f400000000000;
      puStack_180 = puVar4;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_130 != lStack_160) {
            _objc_enumerationMutation(puStack_178);
          }
          puVar10 = *(undefined **)(lStack_138 + (long)puVar11 * 8);
          puVar1 = PTR_PTR_1126d9a60;
          _objc_opt_new();
          puVar9 = PTR_PTR_1126c0320;
          _objc_alloc(PTR_PTR_1126c0320);
          puVar3 = puVar10;
          func_0x00010bf3fec0(puVar10);
          func_0x00010c01e4a0(puVar9,param_3,puVar3);
          func_0x00010c1deee0(puVar1,param_3,puVar9);
          _objc_release(puVar9);
          puVar3 = puVar4;
          func_0x00010c242040();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          func_0x00010c274c60();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar9;
          func_0x00010c0c6c20();
          _objc_release(puVar9);
          _objc_release(puVar3);
          if (puVar2 == (undefined *)0x3) {
            func_0x00010c222c40(puVar1,param_3,1);
          }
          puVar3 = puVar10;
          func_0x00010bf0d600();
          if ((long)puVar3 < 5) {
            if (puVar3 == (undefined *)0x3) {
              func_0x00010c16b360(puVar1,param_3,4);
              puVar3 = PTR_PTR_1126d9a68;
              _objc_opt_new(PTR_PTR_1126d9a68);
              puVar2 = puVar10;
              func_0x00010c2a3d20();
              _objc_retainAutoreleasedReturnValue();
              if (puVar2 != (undefined *)0x0) {
                puVar9 = PTR_PTR_1126c0308;
                _objc_alloc(PTR_PTR_1126c0308);
                puVar4 = puVar2;
                func_0x00010c09c980(puVar2);
                func_0x00010bff91e0(puVar9,param_3,puVar4);
                func_0x00010c1bea20(puVar3,param_3,puVar9);
                _objc_release(puVar9);
                puVar9 = PTR_PTR_1126c0308;
                _objc_alloc(PTR_PTR_1126c0308);
                puVar4 = puVar2;
                func_0x00010c09c9a0(puVar2);
                func_0x00010bff91e0(puVar9,param_3,puVar4);
                func_0x00010c1beac0(puVar3,param_3,puVar9);
                _objc_release(puVar9);
                puVar9 = PTR_PTR_1126c0300;
                _objc_alloc(PTR_PTR_1126c0300);
                func_0x00010c29ff80(puVar2);
                dVar12 = (double)(ulong)(uint)(float)dVar12;
                func_0x00010c0138c0(puVar9);
                func_0x00010c223ae0(puVar3,param_3,puVar9);
                _objc_release(puVar9);
              }
              puVar9 = puVar2;
              func_0x00010c0640c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar9 != (undefined *)0x0) {
                puVar9 = PTR_PTR_1126c0320;
                _objc_alloc(PTR_PTR_1126c0320);
                puVar4 = puVar2;
                func_0x00010c0640c0(puVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0304c0(puVar9,param_3,puVar4);
                func_0x00010c1ac760(puVar3,param_3,puVar9);
                _objc_release(puVar9);
                _objc_release(puVar4);
              }
              puVar4 = PTR_PTR_1126d0f68;
              _objc_opt_new();
              puVar8 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar9 = PTR_PTR_1126afec0;
              func_0x00010c0b54e0(puVar10);
              func_0x00010c0cd480(puVar9);
              dVar12 = (double)(ulong)(uint)(float)dVar12;
              func_0x00010c0138c0(puVar8);
              func_0x00010c1c0e20(puVar4,param_3,puVar8);
              _objc_release(puVar8);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              puVar8 = puVar10;
              func_0x00010c2a3d20(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar8;
              func_0x00010bf21840();
              func_0x00010bff91e0(puVar9,param_3,puVar5 == (undefined *)0x3);
              puStack_170 = puVar4;
              func_0x00010c1b0ce0(puVar4,param_3,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar8);
              puVar9 = puStack_148;
              func_0x00010bf42b60();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar9;
              func_0x00010c2415a0();
              _objc_release(puVar9);
              puVar8 = puStack_168;
              func_0x00010bef4a60();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar8;
              func_0x00010bef52c0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar5;
              func_0x00010bf529e0();
              if ((long)puVar4 < (long)puVar9) {
                puVar4 = puStack_168;
                func_0x00010bef4a60();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar4;
                func_0x00010bef52c0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar6;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar6);
                _objc_release(puVar4);
              }
              else {
                puVar9 = (undefined *)0x0;
              }
              _objc_release(puVar5);
              _objc_release(puVar8);
              puVar8 = puVar9;
              func_0x00010c13dee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar4 = puStack_170;
              if ((puVar2 != (undefined *)0x0) && (puVar8 != (undefined *)0x0)) {
                puVar8 = PTR_PTR_1126c0308;
                _objc_alloc(PTR_PTR_1126c0308);
                func_0x00010bff91e0();
                puVar5 = puVar4;
                func_0x00010c13dfc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1ed7e0();
                _objc_release(puVar5);
                _objc_release(puVar8);
                puVar8 = puVar2;
                func_0x00010c13df40(puVar2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0b4ca0();
                puVar5 = puVar4;
                func_0x00010c13dfc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1e4d40();
                _objc_release(puVar5);
                _objc_release(puVar8);
                puVar8 = puVar2;
                func_0x00010c13de20();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar8 != (undefined *)0x0) {
                  puVar8 = PTR_PTR_1126c0350;
                  _objc_alloc(PTR_PTR_1126c0350);
                  puVar5 = puVar2;
                  func_0x00010c13de20(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0304c0(puVar8,param_3,puVar5);
                  func_0x00010c13dfc0(puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1e4d20();
                  _objc_release(puVar4);
                  _objc_release(puVar8);
                  _objc_release(puVar5);
                }
                puVar4 = puVar2;
                func_0x00010c13dea0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar4 != (undefined *)0x0) {
                  puVar4 = PTR_PTR_1126c0350;
                  _objc_alloc(PTR_PTR_1126c0350);
                  puVar8 = puVar2;
                  func_0x00010c13dea0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0304c0(puVar4,param_3,puVar8);
                  puVar5 = puStack_170;
                  func_0x00010c13dfc0(puStack_170);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1e4d60();
                  _objc_release(puVar5);
                  _objc_release(puVar4);
                  _objc_release(puVar8);
                }
                puVar5 = puVar2;
                func_0x00010c13dfe0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puVar4 = puStack_170;
                puVar8 = puStack_170;
                if (puVar5 != (undefined *)0x0) {
                  puVar5 = PTR_PTR_1126b1df0;
                  _objc_alloc(PTR_PTR_1126b1df0);
                  puVar6 = puVar2;
                  func_0x00010c13dfe0(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c04e820(puVar5,param_3,puVar6);
                  func_0x00010c13dfc0(puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1e4f60();
                  puVar8 = puStack_170;
                  _objc_release(puVar4);
                  _objc_release(puVar5);
                  _objc_release(puVar6);
                }
                puVar5 = puVar2;
                func_0x00010c13df80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puVar4 = puVar8;
                if (puVar5 != (undefined *)0x0) {
                  puVar5 = PTR_PTR_1126c0350;
                  _objc_alloc(PTR_PTR_1126c0350);
                  puVar6 = puVar2;
                  func_0x00010c13df80(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0304c0(puVar5,param_3,puVar6);
                  func_0x00010c13dfc0(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1e4f00();
                  puVar4 = puStack_170;
                  _objc_release(puVar8);
                  _objc_release(puVar5);
                  _objc_release(puVar6);
                }
              }
              func_0x00010c17f580(puVar3,param_3,puVar4);
              puVar8 = puStack_148;
              func_0x00010bf42b60(puStack_148);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar8;
              func_0x00010c2415a0();
              func_0x00010bf3fec0(puVar10);
              puVar6 = puStack_168;
              func_0x00010c119680(puStack_168,param_3,puVar2,puVar5,puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c225280(puVar3,param_3,puVar6);
              _objc_release(puVar6);
              _objc_release(puVar8);
              func_0x00010c1ea3a0(puVar1,param_3,puVar3);
              _objc_release(puVar9);
              _objc_release(puVar4);
              puVar4 = puStack_180;
              goto LAB_1084a6ce0;
            }
            if (puVar3 == (undefined *)0x4) {
              func_0x00010c16b360(puVar1,param_3,3);
              puVar3 = PTR_PTR_1126d9a48;
              _objc_opt_new(PTR_PTR_1126d9a48);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              puVar2 = puVar10;
              func_0x00010bf05600(puVar10);
              func_0x00010bff91e0(puVar9,param_3,puVar2);
              func_0x00010c1bea20(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              puVar2 = puVar10;
              func_0x00010bf05620(puVar10);
              func_0x00010bff91e0(puVar9,param_3,puVar2);
              func_0x00010c1beac0(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              puVar2 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar9 = PTR_PTR_1126afec0;
              func_0x00010bf05720(puVar10);
              func_0x00010c155420(puVar9);
              dVar12 = (double)(ulong)(uint)(float)dVar12;
              func_0x00010c0138c0(puVar2);
              func_0x00010c223b00(puVar3,param_3,puVar2);
              _objc_release(puVar2);
              puVar2 = PTR_PTR_1126d0f68;
              _objc_opt_new(PTR_PTR_1126d0f68);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              func_0x00010bff91e0();
              func_0x00010c1b0ce0(puVar2,param_3,puVar9);
              _objc_release(puVar9);
              puVar4 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar9 = PTR_PTR_1126afec0;
              func_0x00010c0b54e0(puVar10);
              func_0x00010c0cd480(puVar9);
              dVar12 = (double)(ulong)(uint)(float)dVar12;
              func_0x00010c0138c0(puVar4);
              func_0x00010c1c0e20(puVar2,param_3,puVar4);
              _objc_release(puVar4);
              func_0x00010c17f580(puVar3,param_3,puVar2);
              func_0x00010bf3fec0();
              if (puVar10 == puStack_188) {
                puVar4 = puStack_148;
                func_0x00010bf400a0(puStack_148);
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar4;
                func_0x00010bf056e0();
                puVar8 = puStack_168;
                func_0x00010be83480(puStack_168,param_3,puVar10);
                func_0x00010c168ca0(puVar3,param_3,puVar8);
                _objc_release(puVar4);
              }
              func_0x00010c168c20(puVar1,param_3,puVar3);
              puVar4 = puStack_180;
              goto LAB_1084a6ce0;
            }
          }
          else {
            if (puVar3 == (undefined *)0x5) {
              func_0x00010c16b360(puVar1,param_3,10);
              puVar3 = PTR_PTR_1126d9a70;
              _objc_opt_new(PTR_PTR_1126d9a70);
              puVar9 = PTR_PTR_1126c0320;
              _objc_alloc(PTR_PTR_1126c0320);
              puVar2 = puVar10;
              func_0x00010bf67e60(puVar10);
              func_0x00010c01e4a0(puVar9,param_3,puVar2);
              func_0x00010c18aac0(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0320;
              _objc_alloc(PTR_PTR_1126c0320);
              puVar2 = puVar10;
              func_0x00010bf67ce0(puVar10);
              func_0x00010c01e4a0(puVar9,param_3,puVar2);
              func_0x00010c18aae0(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              puVar2 = puVar10;
              func_0x00010bf67d40(puVar10);
              func_0x00010bff91e0(puVar9,param_3,puVar2);
              func_0x00010c18a800(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              puVar2 = puVar10;
              func_0x00010bf67d20(puVar10);
              func_0x00010bff91e0(puVar9,param_3,puVar2);
              func_0x00010c18a7e0(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              puVar9 = puVar10;
              func_0x00010bf68260();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar9 != (undefined *)0x0) {
                puVar9 = puVar10;
                func_0x00010bf68260(puVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c18ad80(puVar3,param_3,puVar9);
                _objc_release(puVar9);
              }
              puVar2 = PTR_PTR_1126d0f68;
              _objc_opt_new(PTR_PTR_1126d0f68);
              puVar8 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar9 = PTR_PTR_1126afec0;
              func_0x00010c0b54e0(puVar10);
              func_0x00010c0cd480(puVar9);
              dVar12 = (double)(ulong)(uint)(float)dVar12;
              func_0x00010c0138c0(puVar8);
              func_0x00010c1c0e20(puVar2,param_3,puVar8);
              _objc_release(puVar8);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc();
              puVar8 = puVar10;
              func_0x00010bf67e60();
              if (((ulong)puVar8 & 1) == 0) {
                puVar8 = puVar10;
                func_0x00010bf67d20(puVar10);
              }
              else {
                puVar8 = (undefined *)0x1;
              }
              puVar5 = puVar9;
              func_0x00010bff91e0(puVar9,param_3,puVar8);
              func_0x00010c1b0ce0(puVar2,param_3,puVar5);
              _objc_release(puVar5);
              func_0x00010c17f580(puVar3,param_3,puVar2);
              puVar8 = puStack_148;
              func_0x00010c2a4720();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar8 != (undefined *)0x0) {
                puVar4 = PTR_PTR_1126c0300;
                puStack_170 = puVar1;
                _objc_alloc(PTR_PTR_1126c0300);
                puVar1 = puStack_148;
                puVar9 = PTR_PTR_1126afec0;
                puVar8 = puStack_148;
                func_0x00010bf42b60(puStack_148);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0b5240();
                func_0x00010c0cd480(puVar9);
                param_1 = (double)(ulong)(uint)(float)dVar12;
                func_0x00010c0138c0(puVar4);
                func_0x00010c1c0e20(puVar2,param_3,puVar4);
                _objc_release(puVar4);
                _objc_release(puVar8);
                puVar9 = PTR_PTR_1126d9a68;
                _objc_opt_new();
                puVar4 = PTR_PTR_1126c0308;
                _objc_alloc(PTR_PTR_1126c0308);
                puVar8 = puVar1;
                func_0x00010c2a4720(puVar1);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar8;
                func_0x00010c09c980();
                func_0x00010bff91e0(puVar4,param_3,puVar5);
                func_0x00010c1bea20(puVar9,param_3,puVar4);
                _objc_release(puVar4);
                _objc_release(puVar8);
                puVar4 = PTR_PTR_1126c0308;
                _objc_alloc(PTR_PTR_1126c0308);
                puVar8 = puVar1;
                func_0x00010c2a4720(puVar1);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar8;
                func_0x00010c09c9a0();
                func_0x00010bff91e0(puVar4,param_3,puVar5);
                func_0x00010c1beac0(puVar9,param_3,puVar4);
                _objc_release(puVar4);
                _objc_release(puVar8);
                func_0x00010c2a4720(puVar1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c29ff80();
                _objc_release(puVar1);
                if ((uStack_18c & 1) == 0) {
                  func_0x00010c155420(PTR_PTR_1126afec0);
                }
                puVar1 = PTR_PTR_1126c0300;
                _objc_alloc(PTR_PTR_1126c0300);
                dVar12 = (double)(ulong)(uint)(float)param_1;
                func_0x00010c0138c0();
                func_0x00010c223ae0(puVar9,param_3,puVar1);
                _objc_release(puVar1);
                func_0x00010c17f580(puVar9,param_3,puVar2);
                puVar4 = PTR_PTR_1126c0308;
                _objc_alloc(PTR_PTR_1126c0308);
                puVar1 = puStack_148;
                puVar8 = puStack_148;
                func_0x00010c2a4720(puStack_148);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar8;
                func_0x00010c07a180();
                func_0x00010bff91e0(puVar4,param_3,puVar5);
                func_0x00010c1dc080(puVar9,param_3,puVar4);
                _objc_release(puVar4);
                _objc_release(puVar8);
                func_0x00010c2a4720();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar1;
                func_0x00010c0640c0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar1);
                puVar1 = puStack_170;
                if (puVar4 != (undefined *)0x0) {
                  puVar4 = PTR_PTR_1126c0320;
                  _objc_alloc(PTR_PTR_1126c0320);
                  puVar8 = puStack_148;
                  func_0x00010c2a4720(puStack_148);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = puVar8;
                  func_0x00010c0640c0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar5;
                  func_0x00010c067fc0();
                  func_0x00010c01e4a0(puVar4,param_3,puVar6);
                  func_0x00010c1ac760(puVar9,param_3,puVar4);
                  _objc_release(puVar4);
                  _objc_release(puVar5);
                  _objc_release(puVar8);
                }
                puVar4 = puStack_148;
                puVar8 = puStack_148;
                func_0x00010c2a4720(puStack_148);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf42b60(puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010c2415a0();
                puVar6 = puVar10;
                func_0x00010bf3fec0(puVar10);
                puVar7 = puStack_168;
                func_0x00010c119680(puStack_168,param_3,puVar8,puVar5,puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c225280(puVar9,param_3,puVar7);
                _objc_release(puVar7);
                _objc_release(puVar4);
                _objc_release(puVar8);
                func_0x00010c1ea3e0(puVar3,param_3,puVar9);
                _objc_release(puVar9);
                puVar4 = puStack_180;
              }
              func_0x00010bf3fec0();
              if (puVar10 == puStack_188) {
                puVar10 = puStack_148;
                func_0x00010bf400a0(puStack_148);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar10;
                func_0x00010bf056e0();
                puVar5 = puStack_168;
                func_0x00010be83480(puStack_168,param_3,puVar8);
                func_0x00010c168ca0(puVar3,param_3,puVar5);
                _objc_release(puVar10);
              }
              func_0x00010c18a720(puVar1,param_3,puVar3);
            }
            else if (puVar3 == (undefined *)0xc) {
              func_0x00010c16b360(puVar1,param_3,0x16);
              puVar3 = PTR_PTR_1126d9a78;
              _objc_opt_new(PTR_PTR_1126d9a78);
              puVar9 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              puVar2 = puVar10;
              func_0x00010c23b160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c276d20();
              func_0x00010bff91e0(puVar9,param_3,0.0 < dVar12);
              func_0x00010c20c2a0(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar2);
              puVar9 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar2 = puVar10;
              func_0x00010c23b160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c276d20();
              dVar12 = (double)(ulong)(uint)(float)(dVar12 * 1000.0);
              func_0x00010c0138c0(puVar9);
              func_0x00010c2189c0(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar2);
              puVar9 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar2 = puVar10;
              func_0x00010c23b160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c276b40();
              dVar12 = (double)(ulong)(uint)(float)(dVar12 * 1000.0);
              func_0x00010c0138c0(puVar9);
              func_0x00010c218880(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar2);
              puVar9 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar2 = puVar10;
              func_0x00010c23b160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c276180();
              dVar12 = (double)(ulong)(uint)(float)(dVar12 * 1000.0);
              func_0x00010c0138c0(puVar9);
              func_0x00010c218080(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar2);
              puVar9 = PTR_PTR_1126c0320;
              _objc_alloc(PTR_PTR_1126c0320);
              puVar2 = puVar10;
              func_0x00010c23b160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              func_0x00010c116460();
              func_0x00010c01e4a0(puVar9,param_3,puVar8);
              func_0x00010c1e3ea0(puVar3,param_3,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar2);
              puVar9 = puVar10;
              func_0x00010c23b160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar9;
              func_0x00010c115fa0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              FUN_1084b30a4();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1e3c80(puVar3,param_3,puVar8);
              _objc_release(puVar8);
              _objc_release(puVar2);
              _objc_release(puVar9);
              puVar2 = PTR_PTR_1126d0f68;
              _objc_opt_new(PTR_PTR_1126d0f68);
              puVar8 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar9 = PTR_PTR_1126afec0;
              func_0x00010c0b54e0(puVar10);
              func_0x00010c0cd480(puVar9);
              dVar12 = (double)(ulong)(uint)(float)dVar12;
              func_0x00010c0138c0(puVar8);
              func_0x00010c1c0e20(puVar2,param_3,puVar8);
              _objc_release(puVar8);
              func_0x00010c17f580(puVar3,param_3,puVar2);
              func_0x00010c202240(puVar1,param_3,puVar3);
            }
            else {
              if (puVar3 != (undefined *)0xe) goto LAB_1084a6cf0;
              func_0x00010c16b360(puVar1,param_3,4);
              puVar3 = PTR_PTR_1126d9a68;
              _objc_opt_new(PTR_PTR_1126d9a68);
              puVar2 = PTR_PTR_1126d0f68;
              _objc_opt_new(PTR_PTR_1126d0f68);
              puVar8 = PTR_PTR_1126c0300;
              _objc_alloc(PTR_PTR_1126c0300);
              puVar9 = PTR_PTR_1126afec0;
              func_0x00010c0b54e0(puVar10);
              func_0x00010c0cd480(puVar9);
              dVar12 = (double)(ulong)(uint)(float)dVar12;
              func_0x00010c0138c0(puVar8);
              func_0x00010c1c0e20(puVar2,param_3,puVar8);
              _objc_release(puVar8);
              func_0x00010c17f580(puVar3,param_3,puVar2);
              func_0x00010c1ea3a0(puVar1,param_3,puVar3);
            }
LAB_1084a6ce0:
            _objc_release(puVar2);
            _objc_release(puVar3);
          }
LAB_1084a6cf0:
          func_0x00010befa120(puStack_158,param_3,puVar1);
          _objc_release(puVar1);
          puVar11 = puVar11 + 1;
        } while (puStack_150 != puVar11);
        param_5 = auStack_100;
        param_6 = 0x10;
        puVar11 = puStack_178;
        func_0x00010bf52a60(puStack_178,param_3,&uStack_140,param_5,0x10);
        puStack_150 = puVar11;
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puStack_178);
    puVar3 = puStack_158;
    puVar11 = puStack_198;
    puVar2 = puStack_158;
    func_0x00010c17e620(puStack_198);
    _objc_release(puVar3);
    _objc_release(puVar4);
    param_2 = puStack_1a0;
  }
  puVar3 = puStack_168;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf8f8c0();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    puVar3 = PTR_PTR_1126d9a80;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc();
    puVar1 = puStack_148;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c106c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4,param_3,puVar9);
    func_0x00010c1e0060(puVar3,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar1);
    puVar2 = puVar3;
    func_0x00010c17e500(puVar11);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  puVar10 = puStack_148;
  _objc_release(puStack_148);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_1a8 = FUN_1084a6e68;
    uStack_1f0 = unaff_d9;
    dStack_1e8 = param_1;
    puStack_1e0 = param_2;
    puStack_1d8 = puVar11;
    puStack_1d0 = puVar9;
    puStack_1c8 = puVar1;
    puStack_1c0 = puVar4;
    puStack_1b8 = puVar3;
    puStack_1b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puVar11 = PTR_PTR_1126d9a68;
    _objc_opt_new(PTR_PTR_1126d9a68);
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_1084a6f54;
    puStack_200 = &UNK_110a4b108;
    puStack_1f8 = puVar2;
    _objc_retain(puVar2);
    func_0x00010bde2540(dVar12,puVar10,param_3,puVar2,param_5,param_6,&puStack_218);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f580(puVar11,param_3,puVar10);
    _objc_release(puVar10);
    _objc_release(puStack_1f8);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1084a6e68; end: 1084a6f53; -[SCAdProtoImpressionDataBuilder _protoCommercePdpImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a6e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9a68;
  _objc_opt_new(PTR_PTR_1126d9a68);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084a6f54;
  puStack_60 = &UNK_110a4b108;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bde2540(param_1,param_2,param_3,param_4,param_5,param_6,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
  _objc_release(uStack_58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a6f54; end: 1084a709b;  */

void FUN_1084a6f54(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_PTR_1126c0308;
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010bff91e0(puVar1);
  func_0x00010c2109c0(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c01e4a0(puVar1);
  func_0x00010c210580(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar1 = PTR_PTR_1126afec0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5240();
  func_0x00010c0cd480(puVar1);
  func_0x00010c0138c0((float)(double)CONCAT44(uVar5,uVar4),puVar3);
  func_0x00010c1c0e20(param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084a709c; end: 1084a7213; -[SCAdProtoImpressionDataBuilder _protoPromoImpressionTrack:] */

void FUN_1084a709c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d9a88;
  _objc_opt_new(PTR_PTR_1126d9a88);
  puVar3 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar4 = param_3;
  func_0x00010bf81300();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_3;
    func_0x00010bf81300(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar3,param_2,lVar6);
  func_0x00010c1e4a20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  if (lVar5 != 0) {
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar4 = param_3;
  func_0x00010bf3ec40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_3;
    func_0x00010bf3ec40(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar3,param_2,lVar6);
  func_0x00010c1e4a00(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  if (lVar5 != 0) {
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c09ea00();
  iVar1 = 0;
  if (lVar4 - 1U < 3) {
    iVar1 = (int)(lVar4 - 1U) + 1;
  }
  func_0x00010c1e4a80(puVar2,param_2,iVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084a7214; end: 1084a72c3; -[SCAdProtoImpressionDataBuilder _commonSnapAdImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:additionalSettings:] */

void FUN_1084a7214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d0f68;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be75fa0(param_1,param_2);
  _objc_release(param_4);
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,puVar1);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084a72c4; end: 1084ab9f3; -[SCAdProtoImpressionDataBuilder _populateProtoCommonSnapAdTopSnapImpressionTrack:adSnapTrackInfo:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084a72c4(double param_1,double param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

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
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  double dVar24;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar20 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185820(param_5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar20);
  puVar20 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  puVar2 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d2a0();
  func_0x00010c01e4e0(puVar20);
  func_0x00010c18bac0(param_5);
  _objc_release(puVar20);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar20 = PTR_PTR_1126afec0;
  puVar3 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c274dc0();
  dVar24 = (double)(long)puVar4;
  func_0x00010c0cd480(dVar24,puVar20);
  dVar24 = (double)(ulong)(uint)(float)dVar24;
  func_0x00010c0138c0(dVar24,puVar2);
  func_0x00010c217ce0(param_5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar20 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar2 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a22e0();
  func_0x00010bff91e0(puVar20);
  func_0x00010c224800(param_5);
  _objc_release(puVar20);
  _objc_release(puVar2);
  puVar20 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010bf44a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar20);
  if (puVar2 != (undefined *)0x0) {
    puVar20 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    func_0x00010bf44a80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_1084add10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar20);
    func_0x00010c1914a0(param_5);
    _objc_release(puVar3);
  }
  puVar20 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010bf9b760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar20);
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf9b760();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126d9af8;
    _objc_retain();
    _objc_opt_new(puVar20);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c1982c0(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c1982a0(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b6c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c198300(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b6a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c1982e0(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c198240(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b5e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c198220(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    func_0x00010c198280(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar5 = puVar3;
    func_0x00010bf9b620(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0304c0(puVar4);
    func_0x00010c198260(puVar20);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010bef5de0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c158380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      func_0x00010c0304c0();
      func_0x00010c1faa60(puVar20);
      _objc_release(puVar2);
    }
    func_0x00010c1983a0(param_5);
    _objc_release(puVar4);
    _objc_release(puVar20);
  }
  puVar20 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010bf6f7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar20);
  if (puVar2 != (undefined *)0x0) {
    puVar20 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    func_0x00010bf6f7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    puVar20 = PTR_PTR_1126d9a90;
    _objc_opt_new(PTR_PTR_1126d9a90);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c250ce0(puVar2);
    func_0x00010c0138c0((float)dVar24,puVar3);
    func_0x00010c209940(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c250ce0(puVar2);
    dVar24 = (double)(ulong)(uint)(float)param_2;
    func_0x00010c0138c0(dVar24,puVar3);
    func_0x00010c209980(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c250d00(puVar2);
    func_0x00010c0138c0((float)dVar24,puVar3);
    func_0x00010c209960(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c250d00(puVar2);
    dVar24 = (double)(ulong)(uint)(float)param_2;
    func_0x00010c0138c0(dVar24,puVar3);
    func_0x00010c2099a0(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010bf95600(puVar2);
    func_0x00010c0138c0((float)dVar24,puVar3);
    func_0x00010c196160(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010bf95600(puVar2);
    dVar24 = (double)(ulong)(uint)(float)param_2;
    func_0x00010c0138c0(dVar24,puVar3);
    func_0x00010c1961a0(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010bf95620(puVar2);
    func_0x00010c0138c0((float)dVar24,puVar3);
    func_0x00010c196180(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010bf95620(puVar2);
    dVar24 = (double)(ulong)(uint)(float)param_2;
    func_0x00010c0138c0(dVar24,puVar3);
    func_0x00010c1961c0(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c264e40(puVar2);
    dVar24 = (double)(ulong)(uint)(float)dVar24;
    func_0x00010c0138c0(dVar24,puVar3);
    func_0x00010c210820(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c154ca0(puVar2);
    func_0x00010c0138c0((float)dVar24,puVar3);
    func_0x00010c1f8e40(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c154ca0(puVar2);
    dVar24 = (double)(ulong)(uint)(float)param_2;
    func_0x00010c0138c0(dVar24,puVar3);
    func_0x00010c1f8e80(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c154cc0(puVar2);
    func_0x00010c0138c0((float)dVar24,puVar3);
    func_0x00010c1f8e60(puVar20);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c154cc0(puVar2);
    func_0x00010c0138c0((float)param_2,puVar3);
    func_0x00010c1f8ea0(puVar20);
    _objc_release(puVar3);
    func_0x00010c268d60(puVar2);
    func_0x00010848b698();
    func_0x00010c211b20(puVar20);
    func_0x00010c210760(param_5);
    _objc_release(puVar20);
    _objc_release(puVar2);
  }
  puVar20 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar20;
  func_0x00010c2415a0();
  _objc_release(puVar20);
  if ((long)puVar2 < 0) {
LAB_1084a7cc0:
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar20 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar20;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar20);
    if (puVar4 <= puVar2) goto LAB_1084a7cc0;
    puVar3 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  puVar4 = param_3;
  func_0x00010bef2520(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010bef2560(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010bf89440();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  _objc_retain(puVar20);
  func_0x00010bef60a0(puVar20);
  func_0x00010bf44a40();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar20);
  func_0x00010c1633c0(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084c6f7c();
  func_0x00010848b674();
  func_0x00010c1dfe40(param_5);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010bef2520(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c264640();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = param_6;
    func_0x00010bf400a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c068820();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar18 == (undefined *)0x0) goto LAB_1084a7ee0;
  }
  else {
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bef60a0();
  switch(puVar4) {
  case (undefined *)0x2:
    break;
  case (undefined *)0x3:
  case (undefined *)0x15:
    puVar4 = param_6;
    func_0x00010c2a4720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21840();
    _objc_release(puVar4);
    if (puVar5 != (undefined *)0x3) {
      puVar4 = param_6;
      func_0x00010c2a4720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf688e0();
      _objc_release(puVar4);
    }
    break;
  case (undefined *)0x6:
    puVar4 = param_6;
    func_0x00010bf68240();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf68220();
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x0) {
      puVar4 = param_6;
      func_0x00010bf68240();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf67da0();
      _objc_release(puVar4);
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = param_6;
        func_0x00010bf68240();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf67d80();
        _objc_release(puVar4);
        if (((ulong)puVar5 & 1) == 0) {
          puVar4 = param_6;
          func_0x00010bf68240();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf68200();
          _objc_release(puVar4);
        }
      }
      break;
    }
  case (undefined *)0x1:
    break;
  case (undefined *)0x9:
    break;
  case (undefined *)0xa:
    puVar4 = param_6;
    func_0x00010bf400a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c068820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar6 != (undefined *)0x0) {
      puVar4 = param_6;
      func_0x00010bf400a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c068820();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = puVar6;
      func_0x00010bf0d600();
      if ((long)puVar4 < 5) {
        if (puVar4 == (undefined *)0x3) {
          puVar4 = puVar6;
          func_0x00010c2a3d20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf21840();
          _objc_release(puVar4);
        }
      }
      else if ((((puVar4 == (undefined *)0x5) &&
                (puVar4 = puVar6, func_0x00010bf67ce0(), ((ulong)puVar4 & 1) == 0)) &&
               (puVar4 = puVar6, func_0x00010bf67d40(), ((ulong)puVar4 & 1) == 0)) &&
              (puVar4 = puVar6, func_0x00010bf67d20(), ((ulong)puVar4 & 1) == 0)) {
        func_0x00010bf67e60();
      }
      _objc_release(puVar6);
      break;
    }
  case (undefined *)0x4:
  case (undefined *)0x5:
  case (undefined *)0x7:
  case (undefined *)0x8:
  case (undefined *)0xb:
  case (undefined *)0xc:
  case (undefined *)0x12:
  case (undefined *)0x16:
  case (undefined *)0x17:
    break;
  case (undefined *)0xd:
    break;
  case (undefined *)0xe:
    break;
  case (undefined *)0xf:
    break;
  case (undefined *)0x10:
    break;
  case (undefined *)0x11:
    break;
  case (undefined *)0x13:
  }
LAB_1084a7ee0:
  _objc_release(param_6);
  func_0x00010c162ea0(param_5);
  _objc_release(puVar3);
  puVar3 = puVar20;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0c6c20();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c217c40(param_5);
  puVar3 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c274c80();
  _objc_release(puVar3);
  puVar6 = puVar20;
  func_0x00010c242040(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar6;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar18;
  func_0x00010c0c4bc0();
  _objc_release(puVar18);
  _objc_release(puVar6);
  if (puVar5 == (undefined *)0x2) {
    if (puVar4 != (undefined *)0x0) {
      puVar3 = puVar4;
    }
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    dVar24 = (double)(long)puVar3;
    func_0x00010c0cd480(dVar24,PTR_PTR_1126afec0);
    func_0x00010c0138c0((float)dVar24,puVar4);
    func_0x00010c217c20(param_5);
    _objc_release(puVar4);
  }
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar4 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c15ed60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107cc0();
  func_0x00010bff91e0(puVar3);
  func_0x00010c224920(param_5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar3 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef51c0();
  _objc_release(puVar3);
  func_0x00010c164760(param_5);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c0cd480(PTR_PTR_1126afec0);
  dVar24 = (double)(ulong)(uint)(float)param_1;
  func_0x00010c0138c0(puVar3);
  func_0x00010c21c000(param_5);
  _objc_release(puVar3);
  puVar3 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c232740();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar3 = PTR_PTR_1126afec0;
    puVar6 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar6;
    func_0x00010c26d3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x00010bfb1b00();
    dVar24 = (double)(long)puVar7;
    func_0x00010c0cd480(puVar3);
    dVar24 = (double)(ulong)(uint)(float)dVar24;
    func_0x00010c0138c0(puVar4);
    func_0x00010c217cc0(param_5);
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar6);
    puVar4 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar3 = PTR_PTR_1126afec0;
    puVar6 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274ea0();
    func_0x00010c0cd480(puVar3);
    dVar24 = (double)(ulong)(uint)(float)dVar24;
    func_0x00010c0138c0(puVar4);
    func_0x00010c217c00(param_5);
    _objc_release(puVar4);
    _objc_release(puVar6);
    if (puVar5 == (undefined *)0x2) {
      puVar4 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      puVar3 = PTR_PTR_1126afec0;
      puVar5 = param_6;
      func_0x00010bf42b60(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274ec0();
      func_0x00010c0cd480(puVar3);
      dVar24 = (double)(ulong)(uint)(float)dVar24;
      func_0x00010c0138c0(puVar4);
      func_0x00010c217b60(param_5);
      _objc_release(puVar4);
      _objc_release(puVar5);
      puVar3 = param_6;
      func_0x00010bf42b60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0c2660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126d9b00;
      _objc_opt_new(PTR_PTR_1126d9b00);
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      FUN_1084ac7d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar6 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c0300;
        _objc_alloc(PTR_PTR_1126c0300);
        func_0x00010c0304c0();
        func_0x00010c1c39a0(puVar3);
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar5;
      FUN_1084ac7d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar18 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c0300;
        _objc_alloc(PTR_PTR_1126c0300);
        func_0x00010c0304c0();
        func_0x00010c1c3920(puVar3);
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      FUN_1084ac7d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar7 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c0300;
        _objc_alloc(PTR_PTR_1126c0300);
        func_0x00010c0304c0();
        func_0x00010c1c3940(puVar3);
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      FUN_1084ac7d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar8 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c0300;
        _objc_alloc(PTR_PTR_1126c0300);
        func_0x00010c0304c0();
        func_0x00010c1c3960(puVar3);
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      FUN_1084ac7d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar9 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c0300;
        _objc_alloc(PTR_PTR_1126c0300);
        func_0x00010c0304c0();
        func_0x00010c1c3980(puVar3);
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      FUN_1084ac7d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar10 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c0300;
        _objc_alloc(PTR_PTR_1126c0300);
        func_0x00010c0304c0();
        func_0x00010c1c3900(puVar3);
        _objc_release(puVar5);
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar18);
      _objc_release(puVar6);
      _objc_release(puVar4);
      func_0x00010c217d40(param_5);
      _objc_release(puVar3);
    }
  }
  puVar3 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067c20();
  func_0x00010c1b1e60(param_5);
  _objc_release(puVar3);
  func_0x00010bfdc040(puVar20);
  func_0x00010c1a6d60(param_5);
  puVar3 = param_3;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf1f480();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bd4d8;
  if ((int)puVar4 != 0) {
    puVar4 = param_3;
    func_0x00010bef4a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bef4360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bef5580();
    _objc_retainAutoreleasedReturnValue();
    if ((-1 < (long)puVar2) && (puVar5 = puVar4, func_0x00010bf529e0(), puVar2 < puVar5)) {
      puVar2 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010befeac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(0);
  }
  func_0x00010c166620(param_5);
  puVar2 = puVar20;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf68cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar4 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar3 = puVar20;
    func_0x00010bf20500(puVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf68cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar2);
    func_0x00010c18ae60(param_5);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  func_0x00010c0e8380(puVar20);
  func_0x00010c1d4760(param_5);
  puVar2 = puVar20;
  func_0x00010c0e83a0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4780(param_5);
  _objc_release(puVar2);
  puVar2 = puVar20;
  func_0x00010bef5620(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c115c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116320();
  func_0x00010c1e3de0(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar20;
  func_0x00010bef5620(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf94380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94480();
  func_0x00010c195e80(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar20;
  func_0x00010bef5620(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d1fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1fe0();
  func_0x00010c1c9620(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar20;
  func_0x00010bef5620(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c253c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253c40();
  func_0x00010c20abe0(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef3340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bef4ba0(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bef4ba0(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c164400(param_5);
    _objc_release(puVar2);
  }
  func_0x00010bef2f60(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bef2f60(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c1638e0(param_5);
    _objc_release(puVar2);
  }
  func_0x00010c274aa0(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c274aa0(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c217ba0(param_5);
    _objc_release(puVar2);
  }
  func_0x00010bf0ce80(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bf0ce80(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c16b120(param_5);
    _objc_release(puVar2);
  }
  func_0x00010bf0d160(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bf0d160(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c16b200(param_5);
    _objc_release(puVar2);
  }
  func_0x00010bf0d540(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bf0d540(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c16b340(param_5);
    _objc_release(puVar2);
  }
  func_0x00010bf0cd80(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bf0cd80(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c16b0c0(param_5);
    _objc_release(puVar2);
  }
  func_0x00010c274a00(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c274a00(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c217b80(param_5);
    _objc_release(puVar2);
  }
  func_0x00010c274d40(puVar3);
  if (dVar24 != 0.0) {
    puVar2 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c274d40(puVar3);
    func_0x00010c01e4e0(puVar2);
    func_0x00010c217c60(param_5);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126d9a98;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4fe0();
  func_0x00010bff91e0(puVar4);
  func_0x00010c164680(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5020();
  func_0x00010bff91e0(puVar4);
  func_0x00010c164700(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5760();
  func_0x00010bff91e0(puVar4);
  func_0x00010c1b4ca0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4eaa0();
  func_0x00010bff91e0(puVar4);
  func_0x00010c163380(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bef5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar24 = 0.0;
    puVar4 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bef5720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar21 = *(undefined8 *)((long)puVar18 * 8);
        puVar7 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c067fc0(uVar21);
        func_0x00010c01e4e0(puVar7);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    func_0x00010c20f400(puVar2);
    _objc_release(puVar5);
  }
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef29a0();
  func_0x00010bff91e0(puVar4);
  func_0x00010c1b0e80(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bef2960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar24 = 0.0;
    puVar4 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bef2960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar21 = *(undefined8 *)((long)puVar18 * 8);
        puVar7 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c067fc0(uVar21);
        func_0x00010c01e4e0(puVar7);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    func_0x00010c19a540(puVar2);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2980();
  func_0x00010c19a6c0(puVar2);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063ba0();
  func_0x00010bff91e0(puVar4);
  func_0x00010c1acaa0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c063b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    puVar5 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c063b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010bff91e0(puVar4);
    func_0x00010c1aca60(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c063b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    puVar5 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c063b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010bff91e0(puVar4);
    func_0x00010c1aca80(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bef47a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    puVar5 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bef47a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010bff91e0(puVar4);
    func_0x00010c1b3e40(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bef4780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar24 = 0.0;
    puVar4 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bef4780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar21 = *(undefined8 *)((long)puVar18 * 8);
        puVar7 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c067fc0(uVar21);
        func_0x00010c01e4e0(puVar7);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    func_0x00010c1eb740(puVar2);
    _objc_release(puVar5);
  }
  puVar4 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf20fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar18 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf20fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    func_0x00010c08fa60();
    func_0x00010c04e820(puVar4);
    func_0x00010c1a92e0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  func_0x00010c163960(param_5);
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c254400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar24 = 0.0;
    puVar4 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c254400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        puVar7 = PTR_PTR_1126d9aa0;
        uVar21 = *(undefined8 *)((long)puVar18 * 8);
        _objc_retain(uVar21);
        _objc_opt_new();
        _objc_retain();
        func_0x00010c0c0aa0(uVar21);
        _objc_release(uVar21);
        _objc_release(puVar7);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    func_0x00010c20b360(param_5);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c254200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c254200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126d9b18;
    _objc_retain(puVar6);
    _objc_opt_new(puVar4);
    puVar5 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010c070d60(puVar6);
    func_0x00010bff91e0(puVar5);
    func_0x00010c1b0860(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254f20(puVar6);
    func_0x00010c00e360(puVar5);
    func_0x00010c20bbe0(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254f20(puVar6);
    func_0x00010c00e360(param_2,puVar5);
    func_0x00010c20b0a0(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254ce0(puVar6);
    func_0x00010c00e360(puVar5);
    func_0x00010c20b680(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254ce0(puVar6);
    func_0x00010c00e360(param_2,puVar5);
    func_0x00010c20b660(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254c40(puVar6);
    func_0x00010c00e360(puVar5);
    func_0x00010c20bc00(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254c40(puVar6);
    func_0x00010c00e360(param_2,puVar5);
    func_0x00010c20bc40(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254c60(puVar6);
    func_0x00010c00e360(puVar5);
    func_0x00010c20bc20(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010c254c60(puVar6);
    dVar24 = param_2;
    _objc_release(puVar6);
    func_0x00010c00e360(param_2,puVar5);
    func_0x00010c20bc60(puVar4);
    _objc_release(puVar5);
    puVar18 = puVar6;
    func_0x00010bf61a40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d9b20;
    _objc_retain();
    _objc_opt_new(puVar5);
    puVar7 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010c06ffe0(puVar18);
    func_0x00010bff91e0(puVar7);
    func_0x00010c1b0480(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010bf51ca0(puVar18);
    func_0x00010c00e360(puVar7);
    func_0x00010c2275a0(puVar5);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126d98a0;
    _objc_alloc(PTR_PTR_1126d98a0);
    func_0x00010bf51ca0(puVar18);
    _objc_release(puVar18);
    func_0x00010c00e360(puVar7);
    func_0x00010c227740(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar18);
    func_0x00010c1886a0(puVar4);
    puVar18 = PTR_PTR_1126d9aa0;
    _objc_opt_new(PTR_PTR_1126d9aa0);
    func_0x00010c20b160();
    puVar7 = param_5;
    func_0x00010c254400();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    _objc_release(puVar7);
    if (puVar8 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010befa120(puVar8);
    func_0x00010c20b360(param_5);
    _objc_release(puVar8);
    _objc_release(puVar18);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c265140();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar5 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c265140();
    func_0x00010c01e4a0(puVar4);
    func_0x00010c16b520(param_5);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf00b80();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar5 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf00b80();
    func_0x00010c01e4a0(puVar4);
    func_0x00010c16b540(param_5);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf093e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar4 = param_6;
    func_0x00010bf42b60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf093e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010be834a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a080(param_5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf3c940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar24 = 0.0;
    puVar4 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf3c940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        lVar22 = *(long *)((long)puVar18 * 8);
        _objc_retain(lVar22);
        puVar7 = PTR_PTR_1126d9b28;
        _objc_opt_new();
        puVar8 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar11 = lVar22;
        func_0x00010bf0cec0(lVar22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar8);
        func_0x00010c16b140(puVar7);
        _objc_release(puVar8);
        _objc_release(lVar11);
        puVar8 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar11 = lVar22;
        func_0x00010bf0d560(lVar22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar8);
        func_0x00010c16b320(puVar7);
        _objc_release(puVar8);
        _objc_release(lVar11);
        lVar11 = lVar22;
        func_0x00010bf3c900(lVar22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c0b40();
        _objc_release(lVar11);
        lVar11 = lVar22;
        func_0x00010c0d1fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 != 0) {
          puVar8 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          lVar11 = lVar22;
          func_0x00010c0d1fc0(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0304c0(puVar8);
          func_0x00010c1c9600(puVar7);
          _objc_release(puVar8);
          _objc_release(lVar11);
        }
        _objc_retain(puVar7);
        _objc_release(puVar7);
        _objc_release(lVar22);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    func_0x00010c17c980(param_5);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c269580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar24 = 0.0;
    puVar4 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c269580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        puVar7 = PTR_PTR_1126d9b40;
        uVar23 = *(undefined8 *)((long)puVar18 * 8);
        _objc_retain(uVar23);
        _objc_opt_new(puVar7);
        puVar8 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        func_0x00010c270aa0(uVar23);
        func_0x00010c01e4e0(puVar8);
        func_0x00010c215e40(puVar7);
        _objc_release(puVar8);
        func_0x00010c27dd80();
        func_0x00010c21acc0(puVar7);
        uVar21 = uVar23;
        func_0x00010c104260(uVar23);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar23);
        uVar23 = uVar21;
        FUN_1084ab9f4(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dee80(puVar7);
        _objc_release(uVar23);
        _objc_release(uVar21);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    func_0x00010c211ee0(param_5);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c273ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    dVar24 = 0.0;
    puVar4 = param_6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c273ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        uVar19 = *(undefined8 *)((long)puVar18 * 8);
        _objc_retain(uVar19);
        puVar7 = PTR_PTR_1126d9b48;
        _objc_opt_new(PTR_PTR_1126d9b48);
        func_0x00010c270aa0(uVar19);
        func_0x00010c215e40(puVar7);
        func_0x00010c273de0();
        func_0x00010c2170e0(puVar7);
        func_0x00010c273fe0();
        func_0x00010c206c40(puVar7);
        uVar21 = uVar19;
        func_0x00010c273f40(uVar19);
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar21;
        FUN_1084ab9f4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2171a0(puVar7);
        _objc_release(uVar23);
        _objc_release(uVar21);
        _objc_release(uVar19);
        func_0x00010befa120(puVar5);
        _objc_release(puVar7);
        puVar18 = puVar18 + 1;
      } while (puVar4 != puVar18);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar4 = PTR_PTR_1126d9aa8;
    _objc_opt_new(PTR_PTR_1126d9aa8);
    func_0x00010c217120();
    func_0x00010c217100(param_5);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c274b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010becd740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217be0(param_5);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf94440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar6 != (undefined *)0x0) {
    func_0x00010bf943c0(puVar6);
    puVar4 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1908c0();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar18 = puVar6;
    func_0x00010c269b20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar4);
    puVar7 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2120e0();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar18);
    func_0x00010bf94480(puVar6);
    puVar4 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195e80();
    _objc_release(puVar4);
    func_0x00010c151960(puVar6);
    puVar4 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7840();
    _objc_release(puVar4);
    func_0x00010c140340(puVar6);
    puVar4 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1edea0();
    _objc_release(puVar4);
    puVar18 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c15ef60(puVar6);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar18);
    puVar7 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd1a0();
    _objc_release(puVar7);
    _objc_release(puVar18);
    _objc_release(puVar4);
    puVar18 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c151a60(puVar6);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar18);
    puVar7 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7880();
    _objc_release(puVar7);
    _objc_release(puVar18);
    _objc_release(puVar4);
    puVar18 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c1305c0(puVar6);
    func_0x00010c0df780(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar18);
    puVar7 = param_5;
    func_0x00010bf94420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eaa60();
    _objc_release(puVar7);
    _objc_release(puVar18);
    _objc_release(puVar4);
    puVar4 = puVar6;
    func_0x00010bf86b40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (puVar18 != (undefined *)0x0) {
      puVar18 = puVar6;
      func_0x00010bf86b40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_5;
      func_0x00010bf94420(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190680();
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar18);
    }
    puVar4 = puVar20;
    func_0x00010bef5660();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar4;
    func_0x00010c269740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 != (undefined *)0x0) {
      puVar18 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      puVar7 = puVar4;
      func_0x00010c269740(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar18);
      puVar8 = param_5;
      func_0x00010bf94420(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c211f20();
      _objc_release(puVar8);
      _objc_release(puVar18);
      _objc_release(puVar7);
    }
    puVar18 = puVar4;
    func_0x00010c0e8360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 != (undefined *)0x0) {
      puVar18 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      puVar7 = puVar4;
      func_0x00010c0e8360(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar18);
      puVar8 = param_5;
      func_0x00010bf94420(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d47a0();
      _objc_release(puVar8);
      _objc_release(puVar18);
      _objc_release(puVar7);
    }
    puVar18 = puVar4;
    func_0x00010c264fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 != (undefined *)0x0) {
      puVar18 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      puVar7 = puVar4;
      func_0x00010c264fa0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar18);
      puVar8 = param_5;
      func_0x00010bf94420(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2108e0();
      _objc_release(puVar8);
      _objc_release(puVar18);
      _objc_release(puVar7);
    }
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010bf2fdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar18 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d9ab0;
    _objc_opt_new(PTR_PTR_1126d9ab0);
    puVar7 = puVar18;
    func_0x00010bf2fe00(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    FUN_1084ab9f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178560(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar18;
    func_0x00010bf2fe20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined *)0x0) {
      puVar8 = puVar18;
      func_0x00010bf2fe20(puVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d9b58;
      _objc_retain();
      _objc_opt_new(puVar7);
      puVar9 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      func_0x00010c0ed320(puVar8);
      dVar24 = (double)(ulong)(uint)(float)dVar24;
      func_0x00010c0138c0(puVar9);
      func_0x00010c1d6500(puVar7);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      func_0x00010c0ed360(puVar8);
      dVar24 = (double)(ulong)(uint)(float)dVar24;
      func_0x00010c0138c0(puVar9);
      func_0x00010c1d6520(puVar7);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      func_0x00010c2a5180(puVar8);
      dVar24 = (double)(ulong)(uint)(float)dVar24;
      func_0x00010c0138c0(puVar9);
      func_0x00010c225720(puVar7);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      func_0x00010bfe0960(puVar8);
      _objc_release(puVar8);
      dVar24 = (double)(ulong)(uint)(float)dVar24;
      func_0x00010c0138c0(dVar24,puVar9);
      func_0x00010c1a7d80(puVar7);
      _objc_release(puVar9);
      func_0x00010c178580(puVar4);
      _objc_release(puVar7);
      _objc_release(puVar8);
    }
    func_0x00010c178540(param_5);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c274ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010becd720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c191600(param_5);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010c0fec00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar8 != (undefined *)0x0) {
    puVar4 = param_5;
    func_0x00010c0feae0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b9e0(puVar8);
    puVar9 = puVar4;
    func_0x00010bf4b9e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    puVar10 = puVar8;
    func_0x00010c0feb60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar9);
    func_0x00010c21a6c0(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar9 = puVar8;
    func_0x00010c0feb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = puVar4;
      func_0x00010c27cd60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      puVar10 = puVar8;
      func_0x00010c0feb80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar9);
      func_0x00010c21a6a0(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar10);
    }
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    puVar10 = puVar8;
    func_0x00010c0fec40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar9);
    func_0x00010c1dd340(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar9 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    puVar10 = puVar8;
    func_0x00010c0febc0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar9);
    func_0x00010c1dd320(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar9 = PTR_PTR_1126bfab0;
    _objc_alloc(PTR_PTR_1126bfab0);
    puVar10 = puVar8;
    func_0x00010c0feb00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar9);
    func_0x00010c1dd360(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar10);
    puVar9 = puVar8;
    func_0x00010c09ce00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = puVar8;
      func_0x00010c09ce00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010bf987e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225060();
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010c09cde0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      puVar10 = puVar4;
      func_0x00010bf987e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225080();
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    puVar9 = puVar8;
    func_0x00010bf7d340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = puVar8;
      func_0x00010bf7d340(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      puVar10 = puVar4;
      func_0x00010c13f460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010c117de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar9 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010be83780(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4a40(param_5);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c2a17e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar20;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2a1780();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c2a1800();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar4);
  if ((puVar10 != (undefined *)0x0) && (puVar14 + -1 < (undefined *)0x2)) {
    puVar4 = PTR_PTR_1126d9ab8;
    _objc_opt_new(PTR_PTR_1126d9ab8);
    puVar12 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c269d20(puVar10);
    func_0x00010c01e4a0(puVar12);
    func_0x00010c1cf0a0(puVar4);
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c269d00(puVar10);
    func_0x00010c01e4a0(puVar12);
    func_0x00010c1cf080(puVar4);
    _objc_release(puVar12);
    func_0x00010c224640(param_5);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c1035c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar12 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126d9ac0;
    _objc_opt_new(PTR_PTR_1126d9ac0);
    puVar13 = puVar12;
    func_0x00010c159c60(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c0d3c80();
    func_0x00010c1fb3c0(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    puVar14 = puVar12;
    func_0x00010c1035a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar13);
    func_0x00010c1dec20(puVar4);
    _objc_release(puVar13);
    _objc_release(puVar14);
    func_0x00010c1dec40(param_5);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010bf42b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d740();
  func_0x00010c177d40(param_5);
  _objc_release(puVar4);
  puVar4 = puVar20;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c253c20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c253c40();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar4);
  if (puVar15 == (undefined *)0x3) {
    puVar4 = puVar20;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c1404e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c140360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar4);
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf1f480();
    _objc_release(param_3);
    puVar13 = puVar15;
    if ((int)puVar4 != 0) {
      puVar4 = puVar20;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar4;
      func_0x00010c2715c0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar16;
      func_0x00010c140360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar4);
    }
    puVar4 = puVar13;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126d9aa0;
      _objc_opt_new(PTR_PTR_1126d9aa0);
      puVar14 = puVar4;
      func_0x00010c1404c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190660();
      _objc_release(puVar14);
      puVar14 = param_5;
      func_0x00010c254400(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar14);
      _objc_release(puVar4);
    }
    _objc_release(puVar13);
  }
  puVar4 = puVar20;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf31c20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf31c40();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar4);
  puVar4 = param_6;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010c09ab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar15 + -3 < (undefined *)0x2) {
    puVar4 = PTR_PTR_1126d9ac8;
    _objc_opt_new();
    puVar14 = puVar13;
    func_0x00010bf86b40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf529e0();
    _objc_release(puVar14);
    if (puVar15 != (undefined *)0x0) {
      puVar14 = puVar13;
      func_0x00010bf86b40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c0d3c80();
      func_0x00010c190680(puVar4);
      _objc_release(puVar15);
      _objc_release(puVar14);
    }
    puVar14 = puVar13;
    func_0x00010c269c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      puVar15 = puVar13;
      func_0x00010c269c40(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c01e4a0(puVar14);
      func_0x00010c212120(puVar4);
      _objc_release(puVar14);
      _objc_release(puVar15);
    }
    func_0x00010c1be520(puVar4);
    puVar14 = PTR_PTR_1126d9ad0;
    _objc_opt_new(PTR_PTR_1126d9ad0);
    func_0x00010c1be500();
    func_0x00010c179620(param_5);
    _objc_release(puVar14);
    _objc_release(puVar4);
  }
  puVar4 = param_6;
  func_0x00010c2a4720();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar20;
  func_0x00010c13dee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar14 != (undefined *)0x0) {
    puVar14 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010bff91e0();
    puVar15 = param_5;
    func_0x00010c13dfc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed7e0();
    _objc_release(puVar15);
    _objc_release(puVar14);
    puVar14 = puVar4;
    func_0x00010c13df40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    puVar15 = param_5;
    func_0x00010c13dfc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4d40();
    _objc_release(puVar15);
    _objc_release(puVar14);
    puVar14 = puVar4;
    func_0x00010c13de20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      puVar15 = puVar4;
      func_0x00010c13de20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar14);
      puVar16 = param_5;
      func_0x00010c13dfc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4d20();
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar15);
    }
    puVar14 = puVar4;
    func_0x00010c13dea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      puVar15 = puVar4;
      func_0x00010c13dea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar14);
      puVar16 = param_5;
      func_0x00010c13dfc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4d60();
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar15);
    }
    puVar14 = puVar4;
    func_0x00010c13dfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      puVar15 = puVar4;
      func_0x00010c13dfe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar14);
      puVar16 = param_5;
      func_0x00010c13dfc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f60();
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar15);
    }
    puVar14 = puVar4;
    func_0x00010c13df80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126c0350;
      _objc_alloc();
      puVar15 = puVar4;
      func_0x00010c13df80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0();
      puVar16 = param_5;
      func_0x00010c13dfc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4f00();
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar15);
    }
  }
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar18);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar20);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    puVar20 = PTR_PTR_1126d9b50;
    _objc_retain();
    _objc_opt_new(puVar20);
    puVar2 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c2bea60(param_5);
    dVar24 = (double)(ulong)(uint)(float)dVar24;
    func_0x00010c0138c0(dVar24,puVar2);
    func_0x00010c227620(puVar20);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c2beca0(param_5);
    dVar24 = (double)(ulong)(uint)(float)dVar24;
    func_0x00010c0138c0(dVar24,puVar2);
    func_0x00010c2277e0(puVar20);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c2beac0(param_5);
    dVar24 = (double)(ulong)(uint)(float)dVar24;
    func_0x00010c0138c0(dVar24,puVar2);
    func_0x00010c227640(puVar20);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c2bece0(param_5);
    _objc_release(param_5);
    func_0x00010c0138c0((float)dVar24,puVar2);
    func_0x00010c227800(puVar20);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  return;
}



/* Entry: 1084ab9f4; end: 1084abb2b;  */

void FUN_1084ab9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_PTR_1126d9b50;
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar5 = (undefined4)param_1;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c2bea60(param_2);
  fVar3 = (float)(double)CONCAT44(uVar4,uVar5);
  uVar5 = 0;
  func_0x00010c0138c0(fVar3,puVar2);
  func_0x00010c227620(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c2beca0(param_2);
  fVar3 = (float)(double)CONCAT44(uVar5,fVar3);
  uVar5 = 0;
  func_0x00010c0138c0(fVar3,puVar2);
  func_0x00010c2277e0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c2beac0(param_2);
  fVar3 = (float)(double)CONCAT44(uVar5,fVar3);
  uVar5 = 0;
  func_0x00010c0138c0(fVar3,puVar2);
  func_0x00010c227640(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c2bece0(param_2);
  _objc_release(param_2);
  func_0x00010c0138c0((float)(double)CONCAT44(uVar5,fVar3),puVar2);
  func_0x00010c227800(puVar1,param_3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084abb2c; end: 1084abbeb; -[SCAdProtoImpressionDataBuilder _protoCommonSnapAdImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084abb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1084abbec;
  puStack_58 = &UNK_110a4b0d8;
  uStack_50 = param_4;
  uStack_48 = param_2;
  _objc_retain(param_4);
  func_0x00010bde2540(param_1,param_2,param_3,param_4,param_5,param_6,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1084abbec; end: 1084abda3;  */

void FUN_1084abbec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_PTR_1126c0308;
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar5 = (undefined4)param_1;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010bff91e0(puVar1);
  func_0x00010c2109c0(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c01e4a0(puVar1);
  func_0x00010c210580(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar1 = PTR_PTR_1126afec0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5240();
  func_0x00010c0cd480(puVar1);
  func_0x00010c0138c0((float)(double)CONCAT44(uVar6,uVar5),puVar3);
  func_0x00010c1c0e20(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bef4a60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c15ed60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107cc0();
  func_0x00010bff91e0(puVar1);
  func_0x00010c224920(param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1084abda4; end: 1084ac387; -[SCAdProtoImpressionDataBuilder _topSnapInteractionTracksFromTopSnapInteractionInfos:] */

void FUN_1084abda4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined **unaff_x19;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 unaff_x21;
  undefined **unaff_x23;
  undefined *unaff_x24;
  long lVar13;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long lVar14;
  undefined **unaff_x28;
  undefined1 in_b0;
  undefined1 uVar15;
  undefined1 in_register_00005001;
  undefined1 uVar16;
  undefined1 in_register_00005002;
  undefined1 uVar17;
  undefined1 in_register_00005003;
  undefined1 uVar18;
  undefined1 in_register_00005004;
  undefined1 uVar19;
  undefined1 in_register_00005005;
  undefined1 uVar20;
  undefined1 in_register_00005006;
  undefined1 uVar21;
  undefined1 in_register_00005007;
  undefined1 uVar22;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  long lStack_2f0;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined **ppuStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_3);
  ppuVar12 = param_3;
  func_0x00010bf529e0();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    ppuVar6 = &puStack_130;
    ppuVar4 = param_3;
    func_0x00010bf52a60();
    if (ppuVar4 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*puStack_120;
      unaff_x19 = &PTR_PTR_1126c0000;
      ppuStack_138 = param_3;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_120 != unaff_x27) {
            _objc_enumerationMutation(ppuStack_138);
          }
          unaff_x23 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
          puVar5 = PTR_PTR_1126d9ad8;
          _objc_opt_new(PTR_PTR_1126d9ad8);
          ppuVar6 = unaff_x23;
          func_0x00010c068840();
          if (ppuVar6 < (undefined **)0xc) {
            func_0x00010c206c40(puVar5,param_2,*(undefined4 *)(&UNK_10df30728 + (long)ppuVar6 * 4));
          }
          ppuVar6 = unaff_x23;
          func_0x00010bf0d520(unaff_x23);
          func_0x00010c16b2e0(puVar5,param_2,ppuVar6);
          ppuVar6 = unaff_x23;
          func_0x00010c115e60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar6 != (undefined **)0x0) {
            puVar7 = PTR_PTR_1126c0350;
            _objc_alloc(PTR_PTR_1126c0350);
            ppuVar6 = unaff_x23;
            func_0x00010c115e60(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = ppuVar6;
            func_0x00010c067fc0();
            func_0x00010c01e4e0(puVar7,param_2,ppuVar8);
            func_0x00010c1915a0(puVar5,param_2,puVar7);
            _objc_release(puVar7);
            _objc_release(ppuVar6);
          }
          ppuVar6 = unaff_x23;
          func_0x00010c26ec60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar6 != (undefined **)0x0) {
            puVar7 = PTR_PTR_1126bfab0;
            _objc_alloc(PTR_PTR_1126bfab0);
            ppuVar6 = unaff_x23;
            func_0x00010c26ec60(unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0304c0(puVar7,param_2,ppuVar6);
            func_0x00010c214880(puVar5,param_2,puVar7);
            _objc_release(puVar7);
            _objc_release(ppuVar6);
          }
          ppuVar6 = unaff_x23;
          func_0x00010bf3fe80();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar8 = unaff_x23;
            func_0x00010bf3fe80();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppuVar8;
            func_0x00010c067ec0();
            _objc_release(ppuVar8);
            _objc_release(ppuVar6);
            if (-1 < (int)unaff_x26) {
              puVar7 = PTR_PTR_1126bfab0;
              _objc_alloc(PTR_PTR_1126bfab0);
              ppuVar6 = unaff_x23;
              func_0x00010bf3fe80(unaff_x23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0304c0(puVar7,param_2,ppuVar6);
              func_0x00010c17e600(puVar5,param_2,puVar7);
              _objc_release(puVar7);
              _objc_release(ppuVar6);
            }
          }
          puVar7 = PTR_PTR_1126c0300;
          _objc_alloc(PTR_PTR_1126c0300);
          ppuVar6 = unaff_x23;
          func_0x00010c247b00(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0304c0(puVar7,param_2,ppuVar6);
          func_0x00010c207080(puVar5,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(ppuVar6);
          puVar7 = PTR_PTR_1126c0300;
          _objc_alloc(PTR_PTR_1126c0300);
          ppuVar6 = unaff_x23;
          func_0x00010c247b20(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0304c0(puVar7,param_2,ppuVar6);
          func_0x00010c2070a0(puVar5,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(ppuVar6);
          puVar7 = PTR_PTR_1126c0300;
          _objc_alloc(PTR_PTR_1126c0300);
          ppuVar6 = unaff_x23;
          func_0x00010c1512c0(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0304c0(puVar7,param_2,ppuVar6);
          func_0x00010c1f73e0(puVar5,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(ppuVar6);
          puVar7 = PTR_PTR_1126c0300;
          _objc_alloc(PTR_PTR_1126c0300);
          ppuVar6 = unaff_x23;
          func_0x00010c1512e0(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0304c0(puVar7,param_2,ppuVar6);
          func_0x00010c1f7400(puVar5,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(ppuVar6);
          puVar7 = PTR_PTR_1126c0300;
          _objc_alloc(PTR_PTR_1126c0300);
          ppuVar6 = unaff_x23;
          func_0x00010c151140(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0304c0(puVar7,param_2,ppuVar6);
          func_0x00010c1f72a0(puVar5,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(ppuVar6);
          puVar7 = PTR_PTR_1126c0300;
          _objc_alloc(PTR_PTR_1126c0300);
          unaff_x25 = unaff_x23;
          func_0x00010c151160();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0304c0(puVar7,param_2,unaff_x25);
          func_0x00010c1f72c0(puVar5,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(unaff_x25);
          puVar7 = PTR_PTR_1126c0350;
          _objc_alloc(PTR_PTR_1126c0350);
          func_0x00010c068900(unaff_x23);
          func_0x00010c01e4e0(puVar7,param_2,
                              (long)(double)CONCAT17(in_register_00005007,
                                                     CONCAT16(in_register_00005006,
                                                              CONCAT15(in_register_00005005,
                                                                       CONCAT14(in_register_00005004
                                                                                ,CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                  ));
          func_0x00010c215e20(puVar5,param_2,puVar7);
          _objc_release(puVar7);
          ppuVar6 = unaff_x23;
          func_0x00010c151f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (ppuVar6 != (undefined **)0x0) {
            puVar7 = PTR_PTR_1126c0300;
            _objc_alloc(PTR_PTR_1126c0300);
            unaff_x25 = unaff_x23;
            func_0x00010c151f80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0304c0(puVar7,param_2,unaff_x25);
            func_0x00010c1f7aa0(puVar5,param_2,puVar7);
            _objc_release(puVar7);
            _objc_release(unaff_x25);
          }
          ppuVar6 = unaff_x23;
          func_0x00010c152120();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x24 = (undefined *)0x0;
          if (ppuVar6 != (undefined **)0x0) {
            unaff_x24 = PTR_PTR_1126c0300;
            _objc_alloc();
            func_0x00010c152120();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0304c0(unaff_x24,param_2,unaff_x23);
            func_0x00010c1f7c00(puVar5,param_2,unaff_x24);
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
          }
          func_0x00010befa120(ppuVar12,param_2,puVar5);
          _objc_release(puVar5);
          param_3 = ppuStack_138;
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar4 != unaff_x28);
        ppuVar6 = &puStack_130;
        ppuVar4 = ppuStack_138;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (ppuVar4 != (undefined **)0x0);
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_1084ac388;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar4 = ppuVar6;
    ppuStack_1a0 = unaff_x28;
    ppuStack_198 = unaff_x27;
    ppuStack_190 = unaff_x26;
    ppuStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    ppuStack_178 = unaff_x23;
    ppuStack_170 = param_3;
    uStack_168 = unaff_x21;
    ppuStack_160 = ppuVar12;
    ppuStack_158 = unaff_x19;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar6);
    ppuVar12 = ppuVar6;
    func_0x00010bf529e0();
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar12 = (undefined **)0x0;
    }
    else {
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      in_b0 = 0;
      in_register_00005001 = 0;
      in_register_00005002 = 0;
      in_register_00005003 = 0;
      in_register_00005004 = 0;
      in_register_00005005 = 0;
      in_register_00005006 = 0;
      in_register_00005007 = 0;
      lStack_268 = 0;
      puStack_270 = (undefined *)0x0;
      uStack_258 = 0;
      puStack_260 = (undefined8 *)0x0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      _objc_retain(ppuVar6);
      ppuVar4 = &puStack_270;
      ppuVar8 = ppuVar6;
      func_0x00010bf52a60();
      if (ppuVar8 != (undefined **)0x0) {
        param_3 = (undefined **)0x0;
        unaff_x25 = (undefined **)*puStack_260;
        unaff_x26 = &PTR_PTR_1126d9000;
        do {
          unaff_x27 = (undefined **)0x0;
          ppuVar4 = param_3;
          do {
            if ((undefined **)*puStack_260 != unaff_x25) {
              _objc_enumerationMutation(ppuVar6);
            }
            unaff_x24 = PTR_PTR_1126d9ae0;
            ppuStack_278 = ppuVar4;
            func_0x00010c0f40e0(PTR_PTR_1126d9ae0,param_2,
                                *(undefined8 *)(lStack_268 + (long)unaff_x27 * 8),&ppuStack_278);
            _objc_retainAutoreleasedReturnValue();
            param_3 = ppuStack_278;
            _objc_retain(ppuStack_278);
            _objc_release(ppuVar4);
            if (param_3 == (undefined **)0x0) {
              func_0x00010befa120(ppuVar12,param_2,unaff_x24);
            }
            _objc_release(unaff_x24);
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
            ppuVar4 = param_3;
          } while (ppuVar8 != unaff_x27);
          ppuVar4 = &puStack_270;
          ppuVar8 = ppuVar6;
          func_0x00010bf52a60();
        } while (ppuVar8 != (undefined **)0x0);
        _objc_release(param_3);
        unaff_x21 = 0;
        unaff_x23 = param_3;
      }
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      pcStack_288 = FUN_1084ac51c;
      lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_2e0 = unaff_x28;
      ppuStack_2d8 = unaff_x27;
      ppuStack_2d0 = unaff_x26;
      ppuStack_2c8 = unaff_x25;
      puStack_2c0 = unaff_x24;
      ppuStack_2b8 = unaff_x23;
      ppuStack_2b0 = param_3;
      uStack_2a8 = unaff_x21;
      ppuStack_2a0 = ppuVar12;
      ppuStack_298 = ppuVar6;
      ppuStack_290 = &puStack_150;
      _objc_retain(ppuVar4);
      ppuVar6 = ppuVar4;
      func_0x00010c2810a0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(ppuVar6);
      ppuVar12 = (undefined **)PTR_PTR_1126d9ae8;
      _objc_opt_new();
      puVar5 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      ppuVar6 = ppuVar4;
      func_0x00010c27cd80(ppuVar4);
      func_0x00010bff91e0(puVar5,param_2,ppuVar6);
      func_0x00010c21a760(ppuVar12,param_2,puVar5);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      func_0x00010bf09280(ppuVar4);
      func_0x00010c01e4e0(puVar5,param_2,
                          (long)(double)CONCAT17(in_register_00005007,
                                                 CONCAT16(in_register_00005006,
                                                          CONCAT15(in_register_00005005,
                                                                   CONCAT14(in_register_00005004,
                                                                            CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                                ));
      func_0x00010c169fa0(ppuVar12,param_2,puVar5);
      _objc_release(puVar5);
      ppuVar6 = ppuVar12;
      func_0x00010c2810a0(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(ppuVar6);
      puVar5 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      ppuVar6 = ppuVar4;
      func_0x00010bf09220(ppuVar4);
      func_0x00010bff91e0(puVar5,param_2,ppuVar6);
      func_0x00010c169f20(ppuVar12,param_2,puVar5);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      lStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      plStack_3a0 = (long *)0x0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      ppuVar6 = ppuVar4;
      func_0x00010bf09320();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar6;
      func_0x00010bf52a60();
      if (ppuVar8 != (undefined **)0x0) {
        lVar14 = *plStack_3a0;
        do {
          ppuVar11 = (undefined **)0x0;
          do {
            if (*plStack_3a0 != lVar14) {
              _objc_enumerationMutation(ppuVar6);
            }
            lVar13 = *(long *)(lStack_3a8 + (long)ppuVar11 * 8);
            puVar7 = PTR_PTR_1126d9af0;
            _objc_alloc_init(PTR_PTR_1126d9af0);
            puVar9 = PTR_PTR_1126b1df0;
            _objc_alloc(PTR_PTR_1126b1df0);
            lVar10 = lVar13;
            func_0x00010c08fa60();
            lVar1 = 0;
            if (lVar10 != 0) {
              lVar1 = lVar13;
            }
            func_0x00010c04e820(puVar9,param_2,lVar1);
            func_0x00010c1bcc00(puVar7,param_2,puVar9);
            _objc_release(puVar9);
            func_0x00010befa120(puVar5,param_2,puVar7);
            _objc_release(puVar7);
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (ppuVar8 != ppuVar11);
          ppuVar8 = ppuVar6;
          func_0x00010bf52a60(ppuVar6,param_2,&uStack_3b0,auStack_370,0x10);
        } while (ppuVar8 != (undefined **)0x0);
      }
      _objc_release(ppuVar6);
      func_0x00010c169fe0(ppuVar12,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f0) {
        ___stack_chk_fail();
        _objc_retain();
        func_0x00010bf885a0(ppuVar4);
        dVar2 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                                ));
        func_0x00010c069cc0(PTR_PTR_1126d99e0);
        bVar3 = false;
        if (!NAN(dVar2) &&
            !NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                                 )))) {
          bVar3 = dVar2 == (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))))));
        }
        ppuVar12 = (undefined **)0x0;
        if (!bVar3) {
          ppuVar12 = ppuVar4;
        }
        _objc_retain(ppuVar12);
        _objc_release(ppuVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 1084ac388; end: 1084ac51b; -[SCAdProtoImpressionDataBuilder _topSnapImpressionsTracksFromImpressionInfos:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_1084ac388(undefined8 param_1,undefined8 param_2,long *param_3)

{
  double dVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined1 in_b0;
  undefined1 uVar15;
  undefined1 in_register_00005001;
  undefined1 uVar16;
  undefined1 in_register_00005002;
  undefined1 uVar17;
  undefined1 in_register_00005003;
  undefined1 uVar18;
  undefined1 in_register_00005004;
  undefined1 uVar19;
  undefined1 in_register_00005005;
  undefined1 uVar20;
  undefined1 in_register_00005006;
  undefined1 uVar21;
  undefined1 in_register_00005007;
  undefined1 uVar22;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  long alStack_138 [3];
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_3;
  _objc_retain(param_3);
  plVar10 = param_3;
  func_0x00010bf529e0();
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = (long *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    alStack_138[2] = 0;
    alStack_138[1] = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    plVar14 = alStack_138 + 1;
    plVar3 = param_3;
    func_0x00010bf52a60();
    if (plVar3 != (long *)0x0) {
      lVar11 = 0;
      lVar13 = *plStack_120;
      do {
        plVar14 = (long *)0x0;
        lVar8 = lVar11;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(param_3);
          }
          puVar4 = PTR_PTR_1126d9ae0;
          alStack_138[0] = lVar8;
          func_0x00010c0f40e0(PTR_PTR_1126d9ae0,param_2,
                              *(undefined8 *)(alStack_138[2] + (long)plVar14 * 8),alStack_138);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = alStack_138[0];
          _objc_retain(alStack_138[0]);
          _objc_release(lVar8);
          if (lVar11 == 0) {
            func_0x00010befa120(plVar10,param_2,puVar4);
          }
          _objc_release(puVar4);
          plVar14 = (long *)((long)plVar14 + 1);
          lVar8 = lVar11;
        } while (plVar3 != plVar14);
        plVar14 = alStack_138 + 1;
        plVar3 = param_3;
        func_0x00010bf52a60();
      } while (plVar3 != (long *)0x0);
      _objc_release(lVar11);
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(plVar14);
    plVar10 = plVar14;
    func_0x00010c2810a0(plVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(plVar10);
    plVar10 = (long *)PTR_PTR_1126d9ae8;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    plVar3 = plVar14;
    func_0x00010c27cd80(plVar14);
    func_0x00010bff91e0(puVar4,param_2,plVar3);
    func_0x00010c21a760(plVar10,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010bf09280(plVar14);
    func_0x00010c01e4e0(puVar4,param_2,
                        (long)(double)CONCAT17(in_register_00005007,
                                               CONCAT16(in_register_00005006,
                                                        CONCAT15(in_register_00005005,
                                                                 CONCAT14(in_register_00005004,
                                                                          CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                              ));
    func_0x00010c169fa0(plVar10,param_2,puVar4);
    _objc_release(puVar4);
    plVar3 = plVar10;
    func_0x00010c2810a0(plVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(plVar3);
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    plVar3 = plVar14;
    func_0x00010bf09220(plVar14);
    func_0x00010bff91e0(puVar4,param_2,plVar3);
    func_0x00010c169f20(plVar10,param_2,puVar4);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    plVar3 = plVar14;
    func_0x00010bf09320();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar3;
    func_0x00010bf52a60();
    if (plVar5 != (long *)0x0) {
      lVar11 = *plStack_260;
      do {
        plVar9 = (long *)0x0;
        do {
          if (*plStack_260 != lVar11) {
            _objc_enumerationMutation(plVar3);
          }
          lVar12 = *(long *)(lStack_268 + (long)plVar9 * 8);
          puVar6 = PTR_PTR_1126d9af0;
          _objc_alloc_init(PTR_PTR_1126d9af0);
          puVar7 = PTR_PTR_1126b1df0;
          _objc_alloc(PTR_PTR_1126b1df0);
          lVar8 = lVar12;
          func_0x00010c08fa60();
          lVar13 = 0;
          if (lVar8 != 0) {
            lVar13 = lVar12;
          }
          func_0x00010c04e820(puVar7,param_2,lVar13);
          func_0x00010c1bcc00(puVar6,param_2,puVar7);
          _objc_release(puVar7);
          func_0x00010befa120(puVar4,param_2,puVar6);
          _objc_release(puVar6);
          plVar9 = (long *)((long)plVar9 + 1);
        } while (plVar5 != plVar9);
        plVar5 = plVar3;
        func_0x00010bf52a60(plVar3,param_2,&uStack_270,auStack_230,0x10);
      } while (plVar5 != (long *)0x0);
    }
    _objc_release(plVar3);
    func_0x00010c169fe0(plVar10,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(plVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      _objc_retain();
      func_0x00010bf885a0(plVar14);
      dVar1 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                              ));
      func_0x00010c069cc0(PTR_PTR_1126d99e0);
      bVar2 = false;
      if (!NAN(dVar1) &&
          !NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                               )))) {
        bVar2 = dVar1 == (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))))));
      }
      plVar10 = (long *)0x0;
      if (!bVar2) {
        plVar10 = plVar14;
      }
      _objc_retain(plVar10);
      _objc_release(plVar14);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar10);
  return;
}



/* Entry: 1084ac51c; end: 1084ac7cf; -[SCAdProtoImpressionDataBuilder _protoArShoppingExperienceTrack:] */

void FUN_1084ac51c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  double dVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined1 in_b0;
  undefined1 uVar14;
  undefined1 in_register_00005001;
  undefined1 uVar15;
  undefined1 in_register_00005002;
  undefined1 uVar16;
  undefined1 in_register_00005003;
  undefined1 uVar17;
  undefined1 in_register_00005004;
  undefined1 uVar18;
  undefined1 in_register_00005005;
  undefined1 uVar19;
  undefined1 in_register_00005006;
  undefined1 uVar20;
  undefined1 in_register_00005007;
  undefined1 uVar21;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d9ae8;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar6 = param_3;
  func_0x00010c27cd80(param_3);
  func_0x00010bff91e0(puVar5,param_2,puVar6);
  func_0x00010c21a760(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010bf09280(param_3);
  func_0x00010c01e4e0(puVar5,param_2,
                      (long)(double)CONCAT17(in_register_00005007,
                                             CONCAT16(in_register_00005006,
                                                      CONCAT15(in_register_00005005,
                                                               CONCAT14(in_register_00005004,
                                                                        CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                            ));
  func_0x00010c169fa0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c2810a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar6 = param_3;
  func_0x00010bf09220(param_3);
  func_0x00010bff91e0(puVar5,param_2,puVar6);
  func_0x00010c169f20(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = param_3;
  func_0x00010bf09320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    lVar13 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar6);
        }
        lVar12 = *(long *)(lStack_128 + (long)puVar11 * 8);
        puVar8 = PTR_PTR_1126d9af0;
        _objc_alloc_init(PTR_PTR_1126d9af0);
        puVar9 = PTR_PTR_1126b1df0;
        _objc_alloc(PTR_PTR_1126b1df0);
        lVar10 = lVar12;
        func_0x00010c08fa60();
        lVar1 = 0;
        if (lVar10 != 0) {
          lVar1 = lVar12;
        }
        func_0x00010c04e820(puVar9,param_2,lVar1);
        func_0x00010c1bcc00(puVar8,param_2,puVar9);
        _objc_release(puVar9);
        func_0x00010befa120(puVar5,param_2,puVar8);
        _objc_release(puVar8);
        puVar11 = puVar11 + 1;
      } while (puVar7 != puVar11);
      puVar7 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  func_0x00010c169fe0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    func_0x00010bf885a0(param_3);
    dVar2 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(uVar17,
                                                  CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))));
    func_0x00010c069cc0(PTR_PTR_1126d99e0);
    bVar3 = false;
    if (!NAN(dVar2) &&
        !NAN((double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(uVar17
                                                  ,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))))))))) {
      bVar3 = dVar2 == (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,
                                                  CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,
                                                  uVar14)))))));
    }
    puVar4 = (undefined *)0x0;
    if (!bVar3) {
      puVar4 = param_3;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084ac7d0; end: 1084ac82b;  */

void FUN_1084ac7d0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain();
  func_0x00010bf885a0(param_2);
  dVar2 = param_1;
  func_0x00010c069cc0(PTR_PTR_1126d99e0);
  uVar1 = 0;
  if (param_1 != dVar2) {
    uVar1 = param_2;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084ac82c; end: 1084acc1b;  */

void FUN_1084ac82c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  _objc_retain(param_2);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126d9b08;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_2;
  func_0x00010bf04900();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar3);
      }
      lVar17 = *(long *)(lVar16 * 8);
      puVar5 = PTR_PTR_1126d9b10;
      _objc_opt_new(PTR_PTR_1126d9b10);
      puVar6 = PTR_PTR_1126b7828;
      _objc_opt_new(PTR_PTR_1126b7828);
      lVar7 = lVar17;
      func_0x00010c159440();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf52a60();
      lVar10 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x00010c067ec0(*(undefined8 *)(lVar15 * 8));
          func_0x00010befc800(puVar6);
          lVar15 = lVar15 + 1;
        } while (lVar8 != lVar15);
        lVar8 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      func_0x00010c1fafa0(puVar5);
      puVar9 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar8 = lVar17;
      func_0x00010c15a240(lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar9);
      func_0x00010c1fb6e0(puVar5);
      _objc_release(puVar9);
      _objc_release(lVar8);
      puVar9 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar8 = lVar17;
      func_0x00010c11dca0(lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar9);
      func_0x00010c1e65e0(puVar5);
      _objc_release(puVar9);
      _objc_release(lVar8);
      puVar9 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar8 = lVar17;
      func_0x00010c11dda0(lVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar9);
      func_0x00010c1e6640(puVar5);
      _objc_release(puVar9);
      _objc_release(lVar8);
      lVar8 = lVar17;
      func_0x00010c0e9160();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010c08fa60();
      _objc_release(lVar8);
      if (lVar10 != 0) {
        func_0x00010c0e9160(lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d4dc0(puVar5);
        _objc_release(lVar17);
      }
      func_0x00010befa120(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar4);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c168560(puVar1);
  puVar5 = PTR_PTR_1126c0350;
  _objc_alloc();
  lVar4 = param_2;
  func_0x00010c25fa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0();
  func_0x00010c20f380(puVar1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  func_0x00010c210400(uVar14);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d9b30;
  _objc_retain(lVar12);
  _objc_opt_new(puVar1);
  lVar4 = lVar12;
  func_0x00010c269260(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar4;
  FUN_1084ab9f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211c80(puVar1);
  _objc_release(lVar11);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c269480(lVar12);
  func_0x00010c01e4e0(puVar2);
  func_0x00010c211e00(puVar1);
  _objc_release(puVar2);
  func_0x00010c269360();
  _objc_release(lVar12);
  func_0x00010c211d60(puVar1);
  func_0x00010c211c20(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084acc1c; end: 1084acf47;  */

void FUN_1084acc1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d9b30;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c269260(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1084ab9f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211c80(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c269480(param_2);
  func_0x00010c01e4e0(puVar4);
  func_0x00010c211e00(puVar1);
  _objc_release(puVar4);
  func_0x00010c269360();
  _objc_release(param_2);
  func_0x00010c211d60(puVar1);
  func_0x00010c211c20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084acf48; end: 1084ada33; -[SCAdProtoImpressionDataBuilder _protoDeepLinkAttachmentImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084acf48(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9a70;
  _objc_opt_new(PTR_PTR_1126d9a70);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1084ada34;
  puStack_88 = &UNK_110a4b0d8;
  _objc_retain(param_4);
  puVar2 = param_2;
  dVar8 = param_1;
  puStack_80 = param_4;
  puStack_78 = param_2;
  func_0x00010bde2540(param_1,param_2,param_3,param_4,param_5,param_6,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  puVar4 = param_4;
  func_0x00010bf68240(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf68200();
  func_0x00010c01e4a0(puVar3,param_3,puVar5);
  func_0x00010c18aac0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  puVar4 = param_4;
  func_0x00010bf68240(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf68220();
  func_0x00010c01e4a0(puVar3,param_3,puVar5);
  func_0x00010c18aae0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar4 = param_4;
  func_0x00010bf68240(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf67da0();
  func_0x00010bff91e0(puVar3,param_3,puVar5);
  func_0x00010c18a800(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar4 = param_4;
  func_0x00010bf68240(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf67d80();
  func_0x00010bff91e0(puVar3,param_3,puVar5);
  func_0x00010c18a7e0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = param_4;
  func_0x00010bf68240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf68260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar5 != (undefined *)0x0) {
    puVar3 = param_4;
    func_0x00010bf68240(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf68260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ad80(puVar1,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  func_0x00010c17f580(puVar1,param_3,puVar2);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar4 = param_4;
  func_0x00010bf68240(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf61aa0();
  func_0x00010bff91e0(puVar3,param_3,puVar5);
  func_0x00010c1886e0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = param_4;
  func_0x00010bf68240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf67da0();
  if ((int)puVar4 == 0) {
LAB_1084ad514:
    _objc_release(puVar3);
  }
  else {
    puVar4 = param_4;
    func_0x00010c2a4720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126d9a68;
      _objc_opt_new(PTR_PTR_1126d9a68);
      puVar4 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      puVar5 = param_4;
      func_0x00010c2a4720(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c09c980();
      func_0x00010bff91e0(puVar4,param_3,puVar6);
      func_0x00010c1bea20(puVar3,param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
      puVar4 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      puVar5 = param_4;
      func_0x00010c2a4720(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c09c9a0();
      func_0x00010bff91e0(puVar4,param_3,puVar6);
      func_0x00010c1beac0(puVar3,param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
      puVar4 = param_4;
      func_0x00010c2a4720(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29ff80();
      _objc_release(puVar4);
      puVar4 = param_2;
      func_0x00010bef2560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f480();
      _objc_release(puVar4);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010c155420(dVar8,PTR_PTR_1126afec0);
      }
      puVar4 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      dVar8 = (double)(ulong)(uint)(float)dVar8;
      func_0x00010c0138c0(dVar8);
      func_0x00010c223ae0(puVar3,param_3,puVar4);
      _objc_release(puVar4);
      func_0x00010c17f580(puVar3,param_3,puVar2);
      puVar4 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      puVar5 = param_4;
      func_0x00010c2a4720(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c07a180();
      func_0x00010bff91e0(puVar4,param_3,puVar6);
      func_0x00010c1dc080(puVar3,param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
      puVar4 = param_4;
      func_0x00010c2a4720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0640c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      if (puVar5 != (undefined *)0x0) {
        puVar4 = PTR_PTR_1126c0320;
        _objc_alloc(PTR_PTR_1126c0320);
        puVar5 = param_4;
        func_0x00010c2a4720(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0640c0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c067fc0();
        func_0x00010c01e4a0(puVar4,param_3,puVar7);
        func_0x00010c1ac760(puVar3,param_3,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      puVar4 = param_4;
      func_0x00010c2a4720(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_4;
      func_0x00010bf42b60(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2415a0();
      puVar7 = param_2;
      func_0x00010c119680(param_2,param_3,puVar4,puVar6,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225280(puVar3,param_3,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1ea3e0(puVar1,param_3,puVar3);
      goto LAB_1084ad514;
    }
  }
  puVar3 = param_4;
  func_0x00010bf68240(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf056e0();
  puVar5 = param_2;
  func_0x00010be83480(param_2,param_3,puVar4);
  func_0x00010c168ca0(puVar1,param_3,puVar5);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010bf68240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c23de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = param_4;
    func_0x00010bf68240(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c23de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    puVar5 = puVar1;
    func_0x00010c23de20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = param_4;
  func_0x00010bf68240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c23ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = param_4;
    func_0x00010bf68240(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c23ddc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    puVar5 = puVar1;
    func_0x00010c23dda0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = param_4;
  func_0x00010bf68240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c23de60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = param_4;
    func_0x00010bf68240(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c23de60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    puVar5 = puVar1;
    func_0x00010c23de40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160((float)dVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = param_4;
  func_0x00010bf68240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf68220();
  if (0 < (long)puVar4) {
    puVar4 = param_4;
    func_0x00010bf05500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_1084ad794;
    puVar3 = param_2;
    func_0x00010be83460(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f580();
    func_0x00010c168c20(puVar1,param_3,puVar3);
  }
  _objc_release(puVar3);
LAB_1084ad794:
  puVar3 = param_2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010bf42b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2415a0();
  puVar6 = puVar3;
  func_0x00010bef52e0(puVar3,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010bf20500(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf5d0a0();
  puVar7 = param_2;
  func_0x00010be835c0(param_2,param_3,puVar5);
  func_0x00010c1865c0(puVar1,param_3,puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010bf20500(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf67dc0();
  puVar7 = param_2;
  func_0x00010be83600(param_2,param_3,puVar5);
  func_0x00010c18a820(puVar1,param_3,puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar6;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar5;
  func_0x00010bfda7c0(puVar5,param_3,&PTR____CFConstantStringClassReference_110db9538);
  if ((((ulong)puVar3 & 1) == 0) &&
     (puVar3 = puVar4,
     func_0x00010c0720c0(puVar4,param_3,&PTR____CFConstantStringClassReference_110e59198),
     ((ulong)puVar3 & 1) == 0)) {
    func_0x00010bfdcf80(puVar4,param_3,&PTR____CFConstantStringClassReference_110edda58);
  }
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c1b1f80(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = param_2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bf8f8c0();
  _objc_release(puVar3);
  if ((int)puVar7 != 0) {
    puVar3 = param_4;
    func_0x00010bf42b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be39100(param_2,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac3a0(puVar1,param_3,param_2);
    _objc_release(param_2);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puStack_80);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084ada34; end: 1084adcf3;  */

void FUN_1084ada34(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  uVar9 = (undefined4)param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010bff91e0(puVar1);
  func_0x00010c2109c0(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c01e4a0(puVar1);
  func_0x00010c210580(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar1 = PTR_PTR_1126afec0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5240();
  func_0x00010c0cd480(puVar1);
  fVar7 = (float)(double)CONCAT44(uVar8,uVar9);
  uVar9 = 0;
  func_0x00010c0138c0(fVar7,puVar3);
  func_0x00010c1c0e20(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf8f2a0();
  _objc_release(uVar4);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar1 = PTR_PTR_1126afec0;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf42b60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275d00();
    func_0x00010c0cd480(puVar1);
    fVar7 = (float)(double)CONCAT44(uVar9,fVar7);
    uVar9 = 0;
    func_0x00010c0138c0(fVar7,puVar3);
    func_0x00010c217d00(param_3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar1 = PTR_PTR_1126afec0;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf42b60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fc80();
    func_0x00010c0cd480(puVar1);
    func_0x00010c0138c0((float)(double)CONCAT44(uVar9,fVar7),puVar3);
    func_0x00010c1edc20(param_3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar5 = *(long *)(param_2 + 0x20);
  func_0x00010bf68240();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf68200();
  if (lVar6 < 1) {
    param_2 = *(long *)(param_2 + 0x20);
    func_0x00010bf68240(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf67d80();
  }
  func_0x00010bff91e0(puVar1);
  func_0x00010c1b0ce0(param_3);
  _objc_release(puVar1);
  if (lVar6 < 1) {
    _objc_release(param_2);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084adcf4; end: 1084add03; -[SCAdProtoImpressionDataBuilder _protoDeepLinkFallbackType:] */

int FUN_1084adcf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084add04; end: 1084add0f; -[SCAdProtoImpressionDataBuilder _protoCtaActivity:] */

bool FUN_1084add04(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 1084add10; end: 1084ae0bf;  */

void FUN_1084add10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9b60;
  _objc_opt_new(PTR_PTR_1126d9b60);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  uVar3 = param_1;
  func_0x00010bf0aca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c16a720(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar3 = param_1;
  func_0x00010c072940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c1b0da0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar3 = param_1;
  func_0x00010c0ddf40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0304c0(puVar2,param_2,uVar3);
  func_0x00010c1ced60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c26b160();
  _objc_retain(puVar1);
  switch((int)uVar3) {
  case 1:
    puVar2 = PTR_PTR_1126d9b68;
    _objc_opt_new(PTR_PTR_1126d9b68);
    func_0x00010c19bca0(puVar1,param_2,puVar2);
    break;
  case 2:
    puVar2 = PTR_PTR_1126d9b70;
    _objc_opt_new(PTR_PTR_1126d9b70);
    func_0x00010c19bc20(puVar1,param_2,puVar2);
    break;
  case 3:
    puVar2 = PTR_PTR_1126d9b78;
    _objc_opt_new(PTR_PTR_1126d9b78);
    func_0x00010c19d8a0(puVar1,param_2,puVar2);
    break;
  case 4:
    puVar2 = PTR_PTR_1126d9b80;
    _objc_opt_new(PTR_PTR_1126d9b80);
    func_0x00010c1a7600(puVar1,param_2,puVar2);
    break;
  case 5:
    puVar2 = PTR_PTR_1126d9b88;
    _objc_opt_new(PTR_PTR_1126d9b88);
    func_0x00010c214b80(puVar1,param_2,puVar2);
    break;
  case 6:
    puVar2 = PTR_PTR_1126d9b90;
    _objc_opt_new(PTR_PTR_1126d9b90);
    func_0x00010c1798e0(puVar1,param_2,puVar2);
    break;
  case 7:
    puVar2 = PTR_PTR_1126d9b98;
    _objc_opt_new(PTR_PTR_1126d9b98);
    func_0x00010c2032a0(puVar1,param_2,puVar2);
    break;
  case 8:
    puVar2 = PTR_PTR_1126d9ba0;
    _objc_opt_new(PTR_PTR_1126d9ba0);
    func_0x00010c1933c0(puVar1,param_2,puVar2);
    break;
  case 9:
    puVar2 = PTR_PTR_1126d9ba8;
    _objc_opt_new(PTR_PTR_1126d9ba8);
    func_0x00010c1933e0(puVar1,param_2,puVar2);
    break;
  case 10:
    puVar2 = PTR_PTR_1126d9bb0;
    _objc_opt_new(PTR_PTR_1126d9bb0);
    func_0x00010c1e1620(puVar1,param_2,puVar2);
    break;
  case 0xb:
    puVar2 = PTR_PTR_1126d9bb8;
    _objc_opt_new(PTR_PTR_1126d9bb8);
    func_0x00010c2254e0(puVar1,param_2,puVar2);
    break;
  case 0xc:
    puVar2 = PTR_PTR_1126d9bc0;
    _objc_opt_new(PTR_PTR_1126d9bc0);
    func_0x00010c225500(puVar1,param_2,puVar2);
    break;
  case 0xd:
    puVar2 = PTR_PTR_1126d9bc8;
    _objc_opt_new(PTR_PTR_1126d9bc8);
    func_0x00010c1a44a0(puVar1,param_2,puVar2);
    break;
  default:
    goto LAB_1084ae004;
  }
  _objc_release(puVar2);
LAB_1084ae004:
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010bf14620();
  _objc_retain(puVar1);
  iVar4 = (int)uVar3;
  if (iVar4 == 1) {
    puVar2 = PTR_PTR_1126d9bd8;
    _objc_opt_new(PTR_PTR_1126d9bd8);
    func_0x00010c1933a0(puVar1,param_2,puVar2);
  }
  else if (iVar4 == 3) {
    puVar2 = PTR_PTR_1126d9be0;
    _objc_opt_new(PTR_PTR_1126d9be0);
    func_0x00010c1c41a0(puVar1,param_2,puVar2);
  }
  else {
    if (iVar4 != 2) goto LAB_1084ae09c;
    puVar2 = PTR_PTR_1126d9bd0;
    _objc_opt_new(PTR_PTR_1126d9bd0);
    func_0x00010c17e860(puVar1,param_2,puVar2);
  }
  _objc_release(puVar2);
LAB_1084ae09c:
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084ae0c0; end: 1084ae6e7; -[SCAdProtoImpressionDataBuilder _protoIndexedStoryImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:adTrackInfoContext:] */

void FUN_1084ae0c0(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  double dVar13;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9be8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar3 = PTR_PTR_1126afec0;
  func_0x00010c26ee20(param_4);
  func_0x00010c0cd480(puVar3);
  func_0x00010c0138c0((float)param_1,puVar2);
  func_0x00010c2157c0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar3 = PTR_PTR_1126afec0;
  uVar12 = param_4;
  func_0x00010c276ee0(param_4);
  dVar13 = (double)(long)uVar12;
  func_0x00010c0cd480(dVar13,puVar3);
  func_0x00010c0138c0((float)dVar13,puVar2);
  func_0x00010c1c4620(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar12 = param_4;
  func_0x00010c23fa00(param_4);
  func_0x00010c01e4a0(puVar3,param_3,uVar12);
  func_0x00010c203cc0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar12 = param_4;
  func_0x00010c0c31a0(param_4);
  func_0x00010c01e4a0(puVar3,param_3,uVar12);
  func_0x00010c222f60(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  uVar12 = param_4;
  func_0x00010bf9b740(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  FUN_1084b7d54();
  func_0x00010c198340(puVar1,param_3,uVar4);
  _objc_release(uVar12);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar12 = param_4;
  func_0x00010c2806c0(param_4);
  func_0x00010c01e4a0(puVar3,param_3,uVar12);
  func_0x00010c21b8a0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar12 = param_4;
  func_0x00010c276da0(param_4);
  func_0x00010c01e4a0(puVar3,param_3,uVar12);
  func_0x00010c218a40(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar12 = param_4;
  func_0x00010c06c960(param_4);
  func_0x00010bff91e0(puVar3,param_3,uVar12);
  func_0x00010c1af440(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar12 = param_4;
  func_0x00010bef54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf529e0();
  _objc_release(uVar12);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      uVar4 = param_4;
      func_0x00010bef54a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar6 = param_2;
      func_0x00010bef4a60(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf42b60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c2415a0();
      uVar8 = uVar6;
      func_0x00010bef52e0(uVar6,param_3,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar6);
      puVar2 = PTR_PTR_1126d9bf0;
      _objc_opt_new(PTR_PTR_1126d9bf0);
      puVar9 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      uVar4 = uVar5;
      func_0x00010bf42b60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c2415a0();
      func_0x00010c01e4a0(puVar9,param_3,uVar7);
      func_0x00010c2047e0(puVar2,param_3,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar4);
      puVar9 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      uVar4 = uVar5;
      func_0x00010bf42b60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c264640();
      func_0x00010c01e4a0(puVar9,param_3,uVar7);
      func_0x00010c210960(puVar2,param_3,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010bf42b60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf9b740();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      FUN_1084b7d54();
      func_0x00010c202fc0(puVar2,param_3,uVar10);
      _objc_release(uVar7);
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010bef60a0(uVar5);
      FUN_10848f45c();
      func_0x00010c164dc0(puVar2,param_3,uVar4);
      puVar9 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      uVar6 = uVar8;
      func_0x00010bf20500(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010bf0d080();
      func_0x00010c01e4a0(puVar9,param_3,uVar11);
      func_0x00010c16b1e0(puVar2,param_3,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar6);
      uVar4 = uVar5;
      func_0x00010bef60a0();
      puVar9 = puVar2;
      uVar6 = param_2;
      if ((long)uVar4 < 6) {
        if (uVar4 == 1) {
          func_0x00010c27e0c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be83460(0,param_2,param_3,uVar5,param_5,param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c168c20(puVar9,param_3,uVar6);
          goto LAB_1084ae640;
        }
        if (uVar4 == 3) {
          func_0x00010c27e0c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be837c0(0,param_2,param_3,uVar5,param_5,param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ea3a0(puVar9,param_3,uVar6);
          goto LAB_1084ae640;
        }
      }
      else {
        if (uVar4 == 6) {
          func_0x00010c27e0c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be835e0(0,param_2,param_3,uVar5,param_5,param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18a720(puVar9,param_3,uVar6);
        }
        else {
          if (uVar4 != 10) goto LAB_1084ae650;
          func_0x00010c27e0c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be83540(0,param_2,param_3,uVar5,param_5,param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17e4a0(puVar9,param_3,uVar6);
        }
LAB_1084ae640:
        _objc_release(uVar6);
        _objc_release(puVar9);
      }
LAB_1084ae650:
      func_0x00010befa120(puVar3,param_3,puVar2);
      _objc_release(puVar2);
      _objc_release(uVar8);
      _objc_release(uVar5);
      uVar12 = uVar12 + 1;
      uVar4 = param_4;
      func_0x00010bef54a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
    } while (uVar12 < uVar5);
  }
  func_0x00010c2047c0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084ae6e8; end: 1084ae84b; -[SCAdProtoImpressionDataBuilder _protoConsentCheckboxes:] */

undefined * FUN_1084ae6e8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined1 *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126d9bf8;
    _objc_opt_new();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar8 = *plStack_110;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar7 = *(undefined8 *)(lStack_118 + (long)puVar9 * 8);
          uVar3 = uVar7;
          func_0x00010bf38780();
          func_0x00010c087500();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c172fe0(puVar6,param_2,uVar3,uVar7);
          _objc_release(uVar7);
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = param_3;
        puVar5 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar9 = (undefined1 *)puVar5;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = &uStack_250;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar9);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(puVar9);
    puVar2 = puVar9;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar8 = *plStack_240;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != lVar8) {
            _objc_enumerationMutation(puVar9);
          }
          uVar7 = *(undefined8 *)(lStack_248 + (long)puVar10 * 8);
          puVar4 = PTR_PTR_1126d9c00;
          _objc_opt_new(PTR_PTR_1126d9c00);
          uVar3 = uVar7;
          func_0x00010c087500(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b71a0(puVar4,param_2,uVar3);
          _objc_release(uVar3);
          func_0x00010bf38780(uVar7);
          func_0x00010c17c0e0(puVar4,param_2,uVar7);
          func_0x00010befa120(puVar6,param_2,puVar4);
          _objc_release(puVar4);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar9;
        puVar5 = &uStack_250;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar9);
    _objc_release(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      uVar1 = 0;
      if ((undefined1 *)((long)puVar5 + -1) < (undefined1 *)0x7) {
        uVar1 = (int)(undefined1 *)((long)puVar5 + -1) + 1;
      }
      return (undefined *)(ulong)uVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 1084ae84c; end: 1084ae9d3; -[SCAdProtoImpressionDataBuilder _protoSubmittedConsentCheckboxes:] */

undefined * FUN_1084ae84c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        puVar4 = PTR_PTR_1126d9c00;
        _objc_opt_new(PTR_PTR_1126d9c00);
        uVar5 = uVar7;
        func_0x00010c087500(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b71a0(puVar4,param_2,uVar5);
        _objc_release(uVar5);
        func_0x00010bf38780(uVar7);
        func_0x00010c17c0e0(puVar4,param_2,uVar7);
        func_0x00010befa120(puVar2,param_2,puVar4);
        _objc_release(puVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  uVar1 = 0;
  if ((undefined1 *)((long)puVar6 + -1) < (undefined1 *)0x7) {
    uVar1 = (int)(undefined1 *)((long)puVar6 + -1) + 1;
  }
  return (undefined *)(ulong)uVar1;
}



/* Entry: 1084ae9d4; end: 1084ae9e3; -[SCAdProtoImpressionDataBuilder _protoLeadGenerationValidationType:] */

int FUN_1084ae9d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 7) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084ae9e4; end: 1084ae9f3; -[SCAdProtoImpressionDataBuilder _protoLeadGenerationStandardFieldType:] */

int FUN_1084ae9e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 0xb) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084ae9f4; end: 1084af27f; -[SCAdProtoImpressionDataBuilder _protoLeadGenerationSubmittedLead:] */

undefined * FUN_1084ae9f4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_220;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar14 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf3fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar14);
  puStack_220 = puVar4;
  func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
  if (puStack_220 != (undefined *)0x0) {
    lVar13 = *plStack_1a0;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar13) {
          _objc_enumerationMutation(puVar4);
        }
        lVar18 = *(long *)(lStack_1a8 + (long)puVar14 * 8);
        puVar3 = PTR_PTR_1126d9c08;
        _objc_opt_new();
        lVar5 = lVar18;
        func_0x00010bfe5ec0(lVar18);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c296ca0();
        puVar7 = param_1;
        func_0x00010be83700(param_1,param_2,lVar6);
        func_0x00010c220100(puVar3,param_2,puVar7);
        _objc_release(lVar5);
        lVar5 = lVar18;
        func_0x00010bfe5ec0(lVar18);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c24d8c0();
        puVar7 = param_1;
        func_0x00010be836c0(param_1,param_2,lVar6);
        func_0x00010c209340(puVar3,param_2,puVar7);
        _objc_release(lVar5);
        puVar7 = PTR_PTR_1126b1df0;
        _objc_alloc(PTR_PTR_1126b1df0);
        lVar5 = lVar18;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf61680();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar6;
        func_0x00010c08fa60();
        if (lVar17 == 0) {
          lVar15 = 0;
        }
        else {
          lStack_200 = lVar18;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lStack_200;
          func_0x00010bf61680();
          _objc_retainAutoreleasedReturnValue();
          lStack_208 = lVar15;
        }
        func_0x00010c04e820(puVar7,param_2,lVar15);
        func_0x00010c188500(puVar3,param_2,puVar7);
        _objc_release(puVar7);
        if (lVar17 != 0) {
          _objc_release(lStack_208);
          _objc_release(lStack_200);
        }
        _objc_release(lVar6);
        _objc_release(lVar5);
        puVar7 = PTR_PTR_1126d9c10;
        _objc_opt_new(PTR_PTR_1126d9c10);
        func_0x00010c1a99e0();
        lVar5 = lVar18;
        func_0x00010c296d80(lVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220160(puVar7,param_2,lVar5);
        _objc_release(lVar5);
        lVar5 = lVar18;
        func_0x00010c25e940(lVar18);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0d3c80();
        func_0x00010c20ef40(puVar7,param_2,lVar6);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar5 = lVar18;
        func_0x00010bfac700(lVar18);
        puVar8 = param_1;
        func_0x00010be83640(param_1,param_2,lVar5);
        func_0x00010c19b8c0(puVar7,param_2,puVar8);
        lVar5 = lVar18;
        func_0x00010c25e4e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          lVar5 = lVar18;
          func_0x00010c25e4e0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf52a60();
          if (lVar6 != 0) {
            lVar17 = *plStack_1e0;
            do {
              lVar15 = 0;
              do {
                if (*plStack_1e0 != lVar17) {
                  _objc_enumerationMutation(lVar5);
                }
                uVar16 = *(undefined8 *)(lStack_1e8 + lVar15 * 8);
                lVar9 = lVar18;
                func_0x00010c25e4e0(lVar18);
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar10;
                func_0x00010c2827c0();
                _objc_release(lVar10);
                _objc_release(lVar9);
                puVar8 = puVar7;
                func_0x00010c25e920(puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = param_1;
                func_0x00010be83640(param_1,param_2,lVar11);
                func_0x00010c196c20(puVar8,param_2,puVar12,uVar16);
                _objc_release(puVar8);
                lVar15 = lVar15 + 1;
              } while (lVar6 != lVar15);
              lVar6 = lVar5;
              func_0x00010bf52a60(lVar5,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar6 != 0);
          }
          _objc_release(lVar5);
        }
        func_0x00010befa120(puVar2,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar3);
        puVar14 = puVar14 + 1;
      } while (puVar14 != puStack_220);
      puStack_220 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puStack_220 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar14 = PTR_PTR_1126d9c18;
  _objc_opt_new(PTR_PTR_1126d9c18);
  func_0x00010c20f2a0();
  puVar3 = param_3;
  func_0x00010c08dbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf49060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010be835a0(param_1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1810c0(puVar14,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c08dbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf49060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be83880(param_1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c20f280(puVar14);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf94f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d9c20;
    _objc_opt_new();
    puVar4 = param_3;
    func_0x00010c08dbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c25f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf94f60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010c293e40();
    func_0x00010c21f5c0(puVar3,param_2,puVar12);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar8 = puVar3;
    func_0x00010c195fc0(puVar14);
    _objc_release(puVar3);
  }
  puVar3 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c08dc00();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 < (undefined *)0x3) {
    func_0x00010c1b9ee0(puVar14);
    puVar8 = puVar7;
  }
  puVar3 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c25be20();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 < (undefined *)0x3) {
    func_0x00010c20e240(puVar14);
    puVar8 = puVar7;
  }
  puVar3 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf11f40();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 < (undefined *)0x3) {
    func_0x00010c16d0e0(puVar14);
    puVar8 = puVar7;
  }
  puVar3 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c0fb260();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 < (undefined *)0x6) {
    func_0x00010c1db300(puVar14);
    puVar8 = puVar7;
  }
  puVar3 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c25ed00();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 < (undefined *)0x3) {
    func_0x00010c20f120(puVar14);
    puVar8 = puVar7;
  }
  puVar3 = param_3;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c08db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d9c28;
    puVar8 = puVar7;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar8 = puVar3;
      func_0x00010c1b9dc0(puVar14);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  ___stack_chk_fail();
  uVar1 = 0;
  if (puVar8 + -1 < (undefined *)0x4) {
    uVar1 = (int)(puVar8 + -1) + 1;
  }
  return (undefined *)(ulong)uVar1;
}



/* Entry: 1084af280; end: 1084af28f; -[SCAdProtoImpressionDataBuilder _protoFieldInputMethod:] */

int FUN_1084af280(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 4) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084af290; end: 1084af45f; -[SCAdProtoImpressionDataBuilder _protoLeadGenerationImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084af290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9c30;
  _objc_opt_new(PTR_PTR_1126d9c30);
  uVar2 = param_2;
  func_0x00010be83580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f580(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  lVar3 = param_4;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf3fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar6 != 0) {
    func_0x00010be836e0(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f2e0(puVar1,param_3,param_2);
    _objc_release(param_2);
  }
  lVar3 = param_4;
  func_0x00010c08dbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb5760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126d9c38;
  if (lVar4 != 0) {
    lVar3 = param_4;
    func_0x00010c08dbe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb5760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar7,param_3,lVar4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c19ebc0(puVar1,param_3,puVar7);
    }
    _objc_release(puVar7);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084af460; end: 1084b075b; -[SCAdProtoImpressionDataBuilder _protoLensCarouselImpressionTracksFromLensCarouselInteractions:] */

void FUN_1084af460(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 *unaff_x25;
  long lVar24;
  undefined8 *puVar25;
  double dVar26;
  long lStack_268;
  long lStack_260;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar26 = 0.0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar19 = param_3;
  func_0x00010bef59e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar19;
  func_0x00010c091240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  puVar15 = &uStack_1b0;
  puVar17 = auStack_f0;
  uVar18 = 0x10;
  lStack_268 = lVar2;
  func_0x00010bf52a60();
  if (lStack_268 != 0) {
    lVar19 = *plStack_1a0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_1a0 != lVar19) {
          _objc_enumerationMutation(lVar2);
        }
        lVar23 = *(long *)(lStack_1a8 + lVar21 * 8);
        unaff_x25 = (undefined8 *)PTR_PTR_1126d0f70;
        _objc_opt_new();
        puVar3 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar4 = lVar23;
        func_0x00010bf32ae0(lVar23);
        func_0x00010c01e4e0(puVar3,param_2,lVar4);
        func_0x00010c179c80(unaff_x25,param_2,puVar3);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126b1df0;
        _objc_alloc(PTR_PTR_1126b1df0);
        lVar4 = lVar23;
        func_0x00010c096b60();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010c08fa60();
        if (lVar20 == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = lVar23;
          func_0x00010c096b60();
          _objc_retainAutoreleasedReturnValue();
          lStack_260 = lVar22;
        }
        func_0x00010c04e820(puVar3,param_2,lVar22);
        func_0x00010c1bcc00(unaff_x25,param_2,puVar3);
        _objc_release(puVar3);
        if (lVar20 != 0) {
          _objc_release(lStack_260);
        }
        _objc_release(lVar4);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        dVar26 = 0.0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar4 = lVar23;
        func_0x00010c097300();
        _objc_retainAutoreleasedReturnValue();
        lStack_208 = lVar4;
        func_0x00010bf52a60();
        if (lStack_208 != 0) {
          lVar20 = *plStack_1e0;
          do {
            lVar22 = 0;
            do {
              if (*plStack_1e0 != lVar20) {
                _objc_enumerationMutation(lVar4);
              }
              lVar24 = *(long *)(lStack_1e8 + lVar22 * 8);
              puVar5 = PTR_PTR_1126d0f50;
              _objc_opt_new(PTR_PTR_1126d0f50);
              puVar6 = PTR_PTR_1126b1df0;
              _objc_alloc(PTR_PTR_1126b1df0);
              lVar7 = lVar24;
              func_0x00010c2810a0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c08fa60();
              if (lVar8 == 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = lVar24;
                func_0x00010c2810a0();
                _objc_retainAutoreleasedReturnValue();
                lStack_200 = lVar16;
              }
              func_0x00010c04e820(puVar6,param_2,lVar16);
              func_0x00010c1bbd60(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              if (lVar8 != 0) {
                _objc_release(lStack_200);
              }
              _objc_release(lVar7);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              lVar7 = lVar24;
              func_0x00010c06c960(lVar24);
              func_0x00010bff91e0(puVar6,param_2,lVar7);
              func_0x00010c1af440(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              lVar7 = lVar24;
              func_0x00010c242fe0(lVar24);
              func_0x00010c01e4e0(puVar6,param_2,lVar7);
              func_0x00010c2054c0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              lVar7 = lVar24;
              func_0x00010c242fe0(lVar24);
              func_0x00010bff91e0(puVar6,param_2,lVar7 != 0);
              func_0x00010c226de0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              lVar7 = lVar24;
              func_0x00010c25a8c0(lVar24);
              func_0x00010c01e4e0(puVar6,param_2,lVar7);
              func_0x00010c20d640(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              lVar7 = lVar24;
              func_0x00010c25a8c0(lVar24);
              func_0x00010bff91e0(puVar6,param_2,lVar7 != 0);
              func_0x00010c226f40(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              lVar7 = lVar24;
              func_0x00010c0c9600(lVar24);
              func_0x00010c01e4e0(puVar6,param_2,lVar7);
              func_0x00010c1c63a0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              lVar7 = lVar24;
              func_0x00010c0c9600(lVar24);
              func_0x00010bff91e0(puVar6,param_2,lVar7 != 0);
              func_0x00010c226740(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              lVar7 = lVar24;
              func_0x00010bf7f0a0(lVar24);
              func_0x00010c01e4e0(puVar6,param_2,lVar7);
              func_0x00010c205520(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar9 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              puVar6 = PTR_PTR_1126afec0;
              func_0x00010c276de0(lVar24);
              func_0x00010c155420(puVar6);
              func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
              func_0x00010c218a60(puVar5,param_2,puVar9);
              _objc_release(puVar9);
              puVar6 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              lVar7 = lVar24;
              func_0x00010c2654c0(lVar24);
              func_0x00010c01e4e0(puVar6,param_2,lVar7);
              func_0x00010c2109e0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar9 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              puVar6 = PTR_PTR_1126afec0;
              func_0x00010c0c2f60(lVar24);
              func_0x00010c155420(puVar6);
              func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
              func_0x00010c1c37e0(puVar5,param_2,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              puVar6 = PTR_PTR_1126afec0;
              func_0x00010c123f40(lVar24);
              func_0x00010c155420(puVar6);
              func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
              func_0x00010c179320(puVar5,param_2,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              puVar6 = PTR_PTR_1126afec0;
              func_0x00010c104760(lVar24);
              func_0x00010c155420(puVar6);
              func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
              func_0x00010c1df160(puVar5,param_2,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              puVar6 = PTR_PTR_1126afec0;
              func_0x00010c276ea0(lVar24);
              func_0x00010c155420(puVar6);
              func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
              func_0x00010c218ac0(puVar5,param_2,puVar9);
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              puVar6 = PTR_PTR_1126afec0;
              func_0x00010c0c1f40(lVar24);
              func_0x00010c155420(puVar6);
              func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
              func_0x00010c1c30e0(puVar5,param_2,puVar9);
              _objc_release(puVar9);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              lVar7 = lVar24;
              func_0x00010c2bd1a0(lVar24);
              func_0x00010bff91e0(puVar6,param_2,lVar7);
              func_0x00010c2271a0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              lVar7 = lVar24;
              func_0x00010c2b8140(lVar24);
              func_0x00010bff91e0(puVar6,param_2,lVar7);
              func_0x00010c226c80(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              lVar7 = lVar24;
              func_0x00010bfed240(lVar24);
              func_0x00010c01e4e0(puVar6,param_2,lVar7);
              func_0x00010c1bbea0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              lVar7 = lVar24;
              func_0x00010c11ff80(lVar24);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              FUN_10848b3f0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c195940(puVar5,param_2,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar7);
              lVar7 = lVar24;
              func_0x00010bf93c40(lVar24);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              FUN_10848b3f0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c195b80(puVar5,param_2,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar7);
              lVar7 = lVar24;
              func_0x00010c11fae0(lVar24);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010b704680();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1e7380(puVar5,param_2,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar7);
              lVar7 = lVar24;
              func_0x00010c11fa40(lVar24);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              FUN_10848b3f0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1e72c0(puVar5,param_2,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar7);
              lVar7 = lVar24;
              func_0x00010bf93ae0(lVar24);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              FUN_10848b3f0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1955e0(puVar5,param_2,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar7);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc();
              lVar7 = lVar24;
              func_0x00010c2a8920();
              func_0x00010bff91e0(puVar6,param_2,lVar7);
              func_0x00010c225ca0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126d1028;
              lVar7 = lVar24;
              func_0x00010bf0d600();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c119020(puVar6,param_2,lVar7);
              _objc_release(lVar7);
              func_0x00010c16b360(puVar5,param_2,puVar6);
              puVar6 = PTR_PTR_1126c0308;
              _objc_alloc();
              lVar7 = lVar24;
              func_0x00010c07c360();
              func_0x00010bff91e0(puVar6,param_2,lVar7);
              func_0x00010c1b3da0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              puVar6 = PTR_PTR_1126b1df0;
              _objc_alloc(PTR_PTR_1126b1df0);
              lVar8 = lVar24;
              func_0x00010c095800();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar8;
              func_0x00010c08fa60();
              if (lVar7 == 0) {
                lVar16 = 0;
              }
              else {
                lVar16 = lVar24;
                func_0x00010c095800();
                _objc_retainAutoreleasedReturnValue();
                lStack_1f8 = lVar16;
              }
              func_0x00010c04e820(puVar6,param_2,lVar16);
              func_0x00010c1bc3e0(puVar5,param_2,puVar6);
              _objc_release(puVar6);
              if (lVar7 != 0) {
                _objc_release(lStack_1f8);
              }
              _objc_release(lVar8);
              puVar6 = PTR_PTR_1126d0f40;
              lVar7 = lVar24;
              func_0x00010c24ab20(lVar24);
              func_0x00010bef5f00(puVar6,param_2,lVar7);
              func_0x00010c208420(puVar5,param_2,puVar6);
              lVar7 = lVar24;
              func_0x00010c0cf060(lVar24);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010b704680();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c87c0(puVar5,param_2,lVar8);
              _objc_release(lVar8);
              _objc_release(lVar7);
              lVar7 = lVar24;
              func_0x00010c232400();
              if ((int)lVar7 != 0) {
                puVar6 = PTR_PTR_1126d1030;
                _objc_alloc_init(PTR_PTR_1126d1030);
                lVar7 = lVar24;
                func_0x00010bf0d600();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010bf32ee0();
                if (lVar8 == 0) {
                  _objc_release(lVar7);
LAB_1084b0080:
                  puVar10 = PTR_PTR_1126d1038;
                  _objc_opt_new(PTR_PTR_1126d1038);
                  puVar11 = PTR_PTR_1126c0350;
                  _objc_alloc(PTR_PTR_1126c0350);
                  puVar9 = PTR_PTR_1126afec0;
                  lVar7 = lVar24;
                  func_0x00010bf0d0e0(lVar24);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26f320();
                  func_0x00010c155420(puVar9);
                  func_0x00010c01e4e0(puVar11,param_2,(long)dVar26);
                  func_0x00010c1d5180(puVar10,param_2,puVar11);
                  _objc_release(puVar11);
                  _objc_release(lVar7);
                  puVar9 = PTR_PTR_1126c0300;
                  _objc_alloc(PTR_PTR_1126c0300);
                  func_0x00010bf0d700(lVar24);
                  dVar26 = (double)(ulong)(uint)(float)dVar26;
                  func_0x00010c0138c0(puVar9);
                  func_0x00010c222d20(puVar10,param_2,puVar9);
                  _objc_release(puVar9);
                  puVar9 = PTR_PTR_1126c0308;
                  _objc_alloc(PTR_PTR_1126c0308);
                  lVar7 = lVar24;
                  func_0x00010bf0d000(lVar24);
                  func_0x00010bff91e0(puVar9,param_2,lVar7);
                  func_0x00010c1dc080(puVar10,param_2,puVar9);
                  _objc_release(puVar9);
                  func_0x00010c1ea3c0(puVar6,param_2,puVar10);
LAB_1084b0170:
                  _objc_release(puVar10);
                }
                else {
                  lVar8 = lVar24;
                  func_0x00010bf0d600();
                  _objc_retainAutoreleasedReturnValue();
                  lVar16 = lVar8;
                  func_0x00010bf32ee0();
                  _objc_release(lVar8);
                  _objc_release(lVar7);
                  if (lVar16 == 0) goto LAB_1084b0080;
                  lVar7 = lVar24;
                  func_0x00010bf0d600();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar7;
                  func_0x00010bf32ee0();
                  _objc_release(lVar7);
                  if (lVar8 == 0) {
                    puVar10 = PTR_PTR_1126d1040;
                    _objc_opt_new(PTR_PTR_1126d1040);
                    puVar11 = PTR_PTR_1126c0350;
                    _objc_alloc(PTR_PTR_1126c0350);
                    puVar9 = PTR_PTR_1126afec0;
                    lVar7 = lVar24;
                    func_0x00010bf0d0e0(lVar24);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c26f320();
                    func_0x00010c155420(puVar9);
                    func_0x00010c01e4e0(puVar11,param_2,(long)dVar26);
                    func_0x00010c1d5180(puVar10,param_2,puVar11);
                    _objc_release(puVar11);
                    _objc_release(lVar7);
                    func_0x00010c168c80(puVar6,param_2,puVar10);
                    goto LAB_1084b0170;
                  }
                  lVar7 = lVar24;
                  func_0x00010bf0d600();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar7;
                  func_0x00010bf32ee0();
                  _objc_release(lVar7);
                  if (lVar8 == 0) {
                    puVar10 = PTR_PTR_1126d1048;
                    _objc_opt_new(PTR_PTR_1126d1048);
                    puVar11 = PTR_PTR_1126c0350;
                    _objc_alloc(PTR_PTR_1126c0350);
                    puVar9 = PTR_PTR_1126afec0;
                    lVar7 = lVar24;
                    func_0x00010bf0d0e0(lVar24);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c26f320();
                    func_0x00010c155420(puVar9);
                    func_0x00010c01e4e0(puVar11,param_2,(long)dVar26);
                    func_0x00010c1d5180(puVar10,param_2,puVar11);
                    _objc_release(puVar11);
                    _objc_release(lVar7);
                    puVar9 = PTR_PTR_1126c0308;
                    _objc_alloc(PTR_PTR_1126c0308);
                    lVar7 = lVar24;
                    func_0x00010bf0d040(lVar24);
                    func_0x00010bff91e0(puVar9,param_2,lVar7);
                    func_0x00010c1e92e0(puVar10,param_2,puVar9);
                    _objc_release(puVar9);
                    puVar9 = PTR_PTR_1126c0308;
                    _objc_alloc(PTR_PTR_1126c0308);
                    lVar7 = lVar24;
                    func_0x00010bf0d060(lVar24);
                    func_0x00010bff91e0(puVar9,param_2,lVar7);
                    func_0x00010c1e9300(puVar10,param_2,puVar9);
                    _objc_release(puVar9);
                    puVar9 = PTR_PTR_1126c0308;
                    _objc_alloc(PTR_PTR_1126c0308);
                    lVar7 = lVar24;
                    func_0x00010bf0d020(lVar24);
                    func_0x00010bff91e0(puVar9,param_2,lVar7);
                    func_0x00010c1e92c0(puVar10,param_2,puVar9);
                    _objc_release(puVar9);
                    func_0x00010c18a940(puVar6,param_2,puVar10);
                    goto LAB_1084b0170;
                  }
                }
                func_0x00010c16b180(puVar5,param_2,puVar6);
                _objc_release(puVar6);
              }
              puVar6 = PTR_PTR_1126d1028;
              lVar7 = lVar24;
              func_0x00010c280e20(lVar24);
              func_0x00010c119320(puVar6,param_2,lVar7);
              func_0x00010c21bb40(puVar5,param_2,puVar6);
              func_0x00010bfb1ee0(lVar24);
              if (0.0 <= dVar26) {
                puVar9 = PTR_PTR_1126c0350;
                _objc_alloc(PTR_PTR_1126c0350);
                puVar6 = PTR_PTR_1126afec0;
                func_0x00010bfb1ee0(lVar24);
                func_0x00010c155420(puVar6);
                func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
                func_0x00010c19d780(puVar5,param_2,puVar9);
                _objc_release(puVar9);
              }
              func_0x00010bfb1180(lVar24);
              if (0.0 <= dVar26) {
                puVar9 = PTR_PTR_1126c0350;
                _objc_alloc(PTR_PTR_1126c0350);
                puVar6 = PTR_PTR_1126afec0;
                func_0x00010bfb1180(lVar24);
                func_0x00010c155420(puVar6);
                func_0x00010c01e4e0(puVar9,param_2,(long)dVar26);
                func_0x00010c19cf20(puVar5,param_2,puVar9);
                _objc_release(puVar9);
              }
              func_0x00010befa120(puVar3,param_2,puVar5);
              _objc_release(puVar5);
              lVar22 = lVar22 + 1;
            } while (lStack_208 != lVar22);
            lStack_208 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lStack_208 != 0);
        }
        _objc_release(lVar4);
        func_0x00010c1bbe40(unaff_x25,param_2,puVar3);
        puVar6 = PTR_PTR_1126d1020;
        _objc_opt_new(PTR_PTR_1126d1020);
        puVar5 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010bf28e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar5,param_2,lVar20);
        func_0x00010c176040(puVar6,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar20);
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010c06c960();
        func_0x00010bff91e0(puVar5,param_2,lVar20);
        func_0x00010c1af440(puVar6,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126d1028;
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010c0c6c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c119000(puVar5,param_2,lVar20);
        func_0x00010c1c5440(puVar6,param_2,puVar5);
        _objc_release(lVar20);
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010bfae560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar5,param_2,lVar20);
        func_0x00010c19c660(puVar6,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar20);
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010c2426a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar5,param_2,lVar20);
        func_0x00010c2050a0(puVar6,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar20);
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010c2405e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar5,param_2,lVar20);
        func_0x00010c204220(puVar6,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar20);
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010bfc16c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0304c0(puVar5,param_2,lVar20);
        func_0x00010c1a2d40(puVar6,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar20);
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126d1028;
        lVar4 = lVar23;
        func_0x00010c23fb80(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar4;
        func_0x00010bfada40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1191c0(puVar5,param_2,lVar20);
        func_0x00010c19be00(puVar6,param_2,puVar5);
        _objc_release(lVar20);
        _objc_release(lVar4);
        func_0x00010c203d80(unaff_x25,param_2,puVar6);
        puVar5 = PTR_PTR_1126d1028;
        lVar4 = lVar23;
        func_0x00010bf70ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf70ee0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf22560(puVar5,param_2,lVar4,lVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18c9e0(unaff_x25,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar23);
        _objc_release(lVar4);
        func_0x00010befa120(puVar1,param_2,unaff_x25);
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(unaff_x25);
        lVar21 = lVar21 + 1;
      } while (lVar21 != lStack_268);
      puVar15 = &uStack_1b0;
      puVar17 = auStack_f0;
      uVar18 = 0x10;
      lStack_268 = lVar2;
      func_0x00010bf52a60();
    } while (lStack_268 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar15);
    puVar1 = PTR_PTR_1126d9c40;
    _objc_opt_new(PTR_PTR_1126d9c40);
    func_0x00010be83580(dVar26,param_3,param_2,puVar15,puVar17,uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f580(puVar1,param_2,param_3);
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar12 = puVar15;
    func_0x00010c1294e0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c1294c0();
    func_0x00010c01e4a0(puVar3,param_2,puVar13);
    func_0x00010c1e9dc0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar12);
    puVar3 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    puVar12 = puVar15;
    func_0x00010c1294e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf53020();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c08fa60();
    if (puVar14 == (undefined8 *)0x0) {
      puVar25 = (undefined8 *)0x0;
    }
    else {
      unaff_x25 = puVar15;
      func_0x00010c1294e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = unaff_x25;
      func_0x00010bf53020();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04e820(puVar3,param_2,puVar25);
    func_0x00010c184800(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    if (puVar14 != (undefined8 *)0x0) {
      _objc_release(puVar25);
      _objc_release(unaff_x25);
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b075c; end: 1084b090b; -[SCAdProtoImpressionDataBuilder _protoReminderImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084b075c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x25;
  long lVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9c40;
  _objc_opt_new(PTR_PTR_1126d9c40);
  func_0x00010be83580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  lVar3 = param_4;
  func_0x00010c1294e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1294c0();
  func_0x00010c01e4a0(puVar2,param_3,lVar4);
  func_0x00010c1e9dc0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar3 = param_4;
  func_0x00010c1294e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf53020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    unaff_x25 = param_4;
    func_0x00010c1294e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = unaff_x25;
    func_0x00010bf53020();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar2,param_3,lVar6);
  func_0x00010c184800(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  if (lVar5 != 0) {
    _objc_release(lVar6);
    _objc_release(unaff_x25);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b090c; end: 1084b1207; -[SCAdProtoImpressionDataBuilder _protoRemoteWebpageImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084b090c(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9a68;
  _objc_opt_new();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1084b1208;
  puStack_90 = &UNK_110a4b1c8;
  _objc_retain(param_4);
  lStack_88 = param_4;
  uStack_80 = param_2;
  _objc_retain(puVar1);
  uVar2 = param_2;
  puStack_78 = puVar1;
  func_0x00010bde2540(param_1,param_2,param_3,param_4,param_5,param_6,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar4 = param_4;
  func_0x00010c2a4720(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c09c980();
  func_0x00010bff91e0(puVar3,param_3,lVar5);
  func_0x00010c1bea20(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar4 = param_4;
  func_0x00010c2a4720(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c09c9a0();
  func_0x00010bff91e0(puVar3,param_3,lVar5);
  func_0x00010c1beac0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  lVar4 = param_4;
  func_0x00010c2a4720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ff80();
  func_0x00010c0138c0((float)param_1,puVar3);
  func_0x00010c223ae0(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar4);
  lVar4 = param_4;
  func_0x00010c2a4720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0640c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    puVar3 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar4 = param_4;
    func_0x00010c2a4720(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0640c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar3,param_3,lVar5);
    func_0x00010c1ac760(puVar1,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar4 = param_4;
  func_0x00010c2a4720(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c07a180();
  func_0x00010bff91e0(puVar3,param_3,lVar5);
  func_0x00010c1dc080(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar4);
  lVar4 = param_4;
  func_0x00010c2a4720(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010bf42b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2415a0();
  uVar7 = param_2;
  func_0x00010c119680(param_2,param_3,lVar4,lVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225280(puVar1,param_3,uVar7);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c17f580(puVar1,param_3,uVar2);
  uVar7 = param_2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf8f8c0();
  _objc_release(uVar7);
  if ((int)uVar8 != 0) {
    lVar4 = param_4;
    func_0x00010bf42b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be39100(param_2,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac3a0(puVar1,param_3,param_2);
    _objc_release(param_2);
    _objc_release(lVar4);
  }
  lVar4 = param_4;
  func_0x00010c0fa9a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    puVar3 = PTR_PTR_1126d9c48;
    _objc_opt_new();
    lVar5 = lVar4;
    func_0x00010bfeabe0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d9c50;
    _objc_opt_new(PTR_PTR_1126d9c50);
    lVar6 = lVar5;
    func_0x00010bfea5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      puVar10 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar6 = lVar5;
      func_0x00010bfea5a0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar10,param_3,lVar11);
      func_0x00010c1ab120(puVar9,param_3,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar6);
    }
    lVar6 = lVar5;
    func_0x00010c10a800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      puVar10 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar6 = lVar5;
      func_0x00010c10a800(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar10,param_3,lVar11);
      func_0x00010c1e0a80(puVar9,param_3,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar6);
    }
    lVar6 = lVar5;
    func_0x00010c0c7300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      puVar10 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar6 = lVar5;
      func_0x00010c0c7300(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar10,param_3,lVar11);
      func_0x00010c1c57a0(puVar9,param_3,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar6);
    }
    lVar6 = lVar5;
    func_0x00010c0f5a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      puVar10 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar6 = lVar5;
      func_0x00010c0f5a80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar10,param_3,lVar11);
      func_0x00010c1d98a0(puVar9,param_3,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar6);
    }
    lVar6 = lVar5;
    func_0x00010bf210a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      puVar10 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar6 = lVar5;
      func_0x00010bf210a0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar10,param_3,lVar11);
      func_0x00010c173ba0(puVar9,param_3,puVar10);
      _objc_release(puVar10);
      _objc_release(lVar6);
    }
    func_0x00010c1daf80(puVar3,param_3,puVar9);
    lVar6 = lVar4;
    func_0x00010bf3c920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126d9c58;
    _objc_opt_new(PTR_PTR_1126d9c58);
    lVar11 = lVar6;
    func_0x00010bfea5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      puVar12 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar11 = lVar6;
      func_0x00010bfea5a0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar12,param_3,lVar13);
      func_0x00010c1ab120(puVar10,param_3,puVar12);
      _objc_release(puVar12);
      _objc_release(lVar11);
    }
    lVar11 = lVar6;
    func_0x00010c10a800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      puVar12 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar11 = lVar6;
      func_0x00010c10a800(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar12,param_3,lVar13);
      func_0x00010c1e0a80(puVar10,param_3,puVar12);
      _objc_release(puVar12);
      _objc_release(lVar11);
    }
    lVar11 = lVar6;
    func_0x00010c0c7300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      puVar12 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar11 = lVar6;
      func_0x00010c0c7300(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar12,param_3,lVar13);
      func_0x00010c1c57a0(puVar10,param_3,puVar12);
      _objc_release(puVar12);
      _objc_release(lVar11);
    }
    lVar11 = lVar6;
    func_0x00010c0f5a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      puVar12 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar11 = lVar6;
      func_0x00010c0f5a80(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar12,param_3,lVar13);
      func_0x00010c1d98a0(puVar10,param_3,puVar12);
      _objc_release(puVar12);
      _objc_release(lVar11);
    }
    lVar11 = lVar6;
    func_0x00010bf210a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 != 0) {
      puVar12 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar11 = lVar6;
      func_0x00010bf210a0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf1f3c0();
      func_0x00010bff91e0(puVar12,param_3,lVar13);
      func_0x00010c173ba0(puVar10,param_3,puVar12);
      _objc_release(puVar12);
      _objc_release(lVar11);
    }
    func_0x00010c1daf00(puVar3,param_3,puVar10);
    func_0x00010c1daee0(puVar1,param_3,puVar3);
    _objc_release(puVar10);
    _objc_release(lVar6);
    _objc_release(puVar9);
    _objc_release(lVar5);
    _objc_release(puVar3);
  }
  _objc_retain(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(puStack_78);
  _objc_release(lStack_88);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b1208; end: 1084b1507;  */

void FUN_1084b1208(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010bff91e0(puVar1);
  func_0x00010c2109c0(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c01e4a0(puVar1);
  func_0x00010c210580(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar1 = PTR_PTR_1126afec0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5240();
  func_0x00010c0cd480(puVar1);
  fVar5 = (float)(double)CONCAT44(uVar6,uVar7);
  uVar7 = 0;
  func_0x00010c0138c0(fVar5,puVar3);
  func_0x00010c1c0e20(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf8f2a0();
  _objc_release(uVar4);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar1 = PTR_PTR_1126afec0;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf42b60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275d00();
    func_0x00010c0cd480(puVar1);
    fVar5 = (float)(double)CONCAT44(uVar7,fVar5);
    uVar7 = 0;
    func_0x00010c0138c0(fVar5,puVar3);
    func_0x00010c217d00(param_3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar1 = PTR_PTR_1126afec0;
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf42b60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13fc80();
    func_0x00010c0cd480(puVar1);
    func_0x00010c0138c0((float)(double)CONCAT44(uVar7,fVar5),puVar3);
    func_0x00010c1edc20(param_3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c1f6660(uVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c2a4720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b8c0();
  func_0x00010c2252a0(uVar4);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c2a4720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21840();
  func_0x00010bff91e0(puVar1);
  func_0x00010c1b0ce0(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084b1508; end: 1084b1747; -[SCAdProtoImpressionDataBuilder initWithAdTrackInfo:adResponse:thirdPartyImpressionURLs:thirdPartyClickURLs:thirdPartyEngagedViewClickURLs:adConfigProvider:adConfigProviderV2:dpaConfigProvider:valdiRuntimeProvider:userBlizzard:] */

undefined8 *
FUN_1084b1508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  puStack_68 = PTR_PTR_1126fca78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
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
  }
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



/* Entry: 1084b1748; end: 1084b273b; -[SCAdProtoImpressionDataBuilder build] */

void FUN_1084b1748(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x27;
  long unaff_x28;
  
  lVar1 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bef60a0();
  _objc_release(lVar1);
  if (lVar6 == 0x17) {
    puVar9 = (undefined *)0x0;
    goto LAB_1084b2714;
  }
  puVar9 = PTR_PTR_1126b92e0;
  _objc_opt_new(PTR_PTR_1126b92e0);
  lVar1 = lVar6;
  FUN_10848f45c(lVar6);
  func_0x00010c164dc0(puVar9,param_4,lVar1);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c26ed40(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c01e4e0(puVar3,param_4,(long)param_2);
  func_0x00010c185800(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c26ed40(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c01e4e0(puVar3,param_4,(long)param_1);
  func_0x00010c185b00(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c1513a0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c01e4e0(puVar3,param_4,(long)param_1);
  func_0x00010c1f75c0(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c1513a0(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c01e4e0(puVar3,param_4,(long)param_2);
  func_0x00010c1f7160(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c082180(uVar2);
  func_0x00010bff91e0(puVar3,param_4,uVar2);
  func_0x00010c1b5520(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c29c0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010be23da0(param_3,param_4,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c29c0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010be6db40(param_3,param_4,uVar2);
  _objc_release(uVar2);
  lVar11 = param_3;
  lVar7 = param_3;
  switch(lVar6) {
  case 0:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be838e0(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213d40(puVar9,param_4,lVar7);
    break;
  case 1:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be83460(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168c20(puVar9,param_4,lVar7);
    break;
  default:
    goto LAB_1084b1eb8;
  case 3:
    lVar11 = *(long *)(param_3 + 0x28);
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c23b160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    if (lVar6 == 0) {
      func_0x00010be837c0(param_3,param_4,puVar3,lVar8,lVar1);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x0001084b1e98;
    }
    goto code_r0x0001084b1bd4;
  case 5:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c2590a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(param_3 + 0x28);
    func_0x00010bf4e080(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be83860(param_3,param_4,puVar3,lVar8,lVar1,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20caa0(puVar9,param_4,lVar11);
    goto code_r0x0001084b1e34;
  case 6:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be835e0(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a720(puVar9,param_4,lVar7);
    break;
  case 7:
    func_0x00010c164dc0(puVar9,param_4,6);
    goto LAB_1084b1eb8;
  case 9:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be83400(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164b00(puVar9,param_4,lVar7);
    break;
  case 10:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be83540(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e4a0(puVar9,param_4,lVar7);
    break;
  case 0xd:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be833e0(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164ae0(puVar9,param_4,lVar7);
    break;
  case 0xe:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be83420(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164b40(puVar9,param_4,lVar7);
    break;
  case 0xf:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be83440(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164b60(puVar9,param_4,lVar7);
    break;
  case 0x10:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be836a0(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9ea0(puVar9,param_4,lVar7);
    break;
  case 0x11:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
code_r0x0001084b1bd4:
    func_0x00010be83840(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202240(puVar9,param_4,lVar7);
    break;
  case 0x12:
    puVar3 = PTR_PTR_1126d9c60;
    _objc_opt_new(PTR_PTR_1126d9c60);
    func_0x00010c1d9a20(puVar9,param_4,puVar3);
    goto code_r0x0001084b1eb0;
  case 0x13:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be838a0(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2103e0(puVar9,param_4,lVar7);
    break;
  case 0x14:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be837a0(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e9ce0(puVar9,param_4,lVar7);
    break;
  case 0x15:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c23ce80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    func_0x00010be83560(param_3,param_4,puVar3,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
code_r0x0001084b1e98:
    func_0x00010c1ea3a0(puVar9,param_4,lVar7);
    break;
  case 0x16:
    puVar3 = *(undefined **)(param_3 + 0x28);
    func_0x00010c2590a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    lVar7 = *(long *)(param_3 + 0x28);
    func_0x00010bf4e080(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be83660(param_1,param_3,param_4,puVar3,lVar8,lVar1,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac0e0(puVar9,param_4,lVar11);
code_r0x0001084b1e34:
    _objc_release(lVar11);
  }
  _objc_release(lVar7);
code_r0x0001084b1eb0:
  _objc_release(puVar3);
LAB_1084b1eb8:
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c29c0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bef3e20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf4e080(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c119640(param_3,param_4,uVar2,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2223e0(puVar9,param_4,lVar6);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010bef46e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bef46e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfc9320(param_3,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1635e0(puVar9,param_4,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar2);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010bef2b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bef2b20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfc9340(param_3,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163700(puVar9,param_4,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar2);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010bf365a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf365a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfc3920(param_3,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b400(puVar9,param_4,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar2);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010bf36580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf36580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfc2da0(param_3,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17b340(puVar9,param_4,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar2);
  }
  lVar11 = *(long *)(param_3 + 8);
  _objc_retain(lVar11);
  lVar6 = lVar11;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    puVar3 = PTR_PTR_1126b92d8;
    func_0x00010be243e0(PTR_PTR_1126b92d8,param_4,lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213c00(puVar9,param_4,puVar3);
    _objc_release(puVar3);
  }
  lVar6 = *(long *)(param_3 + 0x10);
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    puVar3 = PTR_PTR_1126b92d8;
    func_0x00010be243e0(PTR_PTR_1126b92d8,param_4,*(undefined8 *)(param_3 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213bc0(puVar9,param_4,puVar3);
    _objc_release(puVar3);
  }
  lVar6 = *(long *)(param_3 + 0x18);
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    puVar3 = PTR_PTR_1126b92d8;
    func_0x00010be243e0(PTR_PTR_1126b92d8,param_4,*(undefined8 *)(param_3 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213be0(puVar9,param_4,puVar3);
    _objc_release(puVar3);
  }
  lVar7 = *(long *)(param_3 + 0x28);
  func_0x00010c23ce80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c118080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c23ce80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c118080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c272020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c23ce80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282920(*(undefined8 *)(param_3 + 0x28));
    lVar6 = param_3;
    func_0x00010be83580(param_3,param_4,uVar2,lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c17f580(uVar4,param_4,lVar6);
    func_0x00010c1e4ae0(puVar9,param_4,uVar4);
    _objc_release(lVar6);
    _objc_release(uVar4);
  }
  lVar1 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (lVar7 != 0) {
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    lVar1 = param_3;
    func_0x00010bef4a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf3ca00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c0138c0(puVar3);
    func_0x00010c202de0(puVar9,param_4,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    lVar1 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf3ca00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      lVar10 = 0;
    }
    else {
      unaff_x27 = param_3;
      func_0x00010bef4a60(param_3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x27;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = unaff_x28;
      func_0x00010bf3ca00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04e820(puVar3,param_4,lVar10);
    func_0x00010c202d80(puVar9,param_4,puVar3);
    _objc_release(puVar3);
    if (lVar7 != 0) {
      _objc_release(lVar10);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
    }
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c29e460();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (lVar7 != 0) {
    puVar3 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    lVar1 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c29e460();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c08fa60();
    if (lVar7 == 0) {
      lVar10 = 0;
    }
    else {
      unaff_x27 = param_3;
      func_0x00010bef4a60(param_3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x27;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = unaff_x28;
      func_0x00010c29e460();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04e820(puVar3,param_4,lVar10);
    func_0x00010c202e00(puVar9,param_4,puVar3);
    _objc_release(puVar3);
    if (lVar7 != 0) {
      _objc_release(lVar10);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
    }
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0e95a0(uVar2);
  func_0x00010bff91e0(puVar3,param_4,uVar2);
  func_0x00010c1d4f80(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0e9a20(uVar2);
  func_0x00010bff91e0(puVar3,param_4,uVar2);
  func_0x00010c1d5140(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bef38c0(uVar2);
  func_0x00010bff91e0(puVar3,param_4,uVar2);
  func_0x00010c163c40(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010c0e9dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0e9dc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar3,param_4,uVar2);
  func_0x00010c1d5280(puVar9,param_4,puVar3);
  _objc_release(puVar3);
  if (lVar1 != 0) {
    _objc_release(uVar2);
  }
  _objc_release(lVar6);
  lVar8 = *(long *)(param_3 + 0x28);
  func_0x00010c23ce80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bef5780();
  _objc_release(lVar1);
  _objc_release(lVar8);
  if (lVar6 != 0) {
    puVar3 = PTR_PTR_1126d9c68;
    _objc_opt_new(PTR_PTR_1126d9c68);
    func_0x00010c1ecf20();
    func_0x00010c164e40(puVar9,param_4,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(lVar11);
LAB_1084b2714:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1084b273c; end: 1084b2a1f; -[SCAdProtoImpressionDataBuilder getChatFeedCellImpression:] */

void FUN_1084b273c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9c70;
  _objc_opt_new(PTR_PTR_1126d9c70);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_3;
  func_0x00010bfa38c0(param_3);
  func_0x00010bff91e0(puVar2,param_2,lVar3);
  func_0x00010c17b480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_3;
  func_0x00010c268f00(param_3);
  func_0x00010c1190c0(param_1,param_2,lVar3);
  func_0x00010c17b460(puVar1,param_2,param_1);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  lVar3 = param_3;
  func_0x00010bf9c260(param_3);
  func_0x00010c01e4a0(puVar2,param_2,lVar3);
  func_0x00010c17b3e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  lVar3 = param_3;
  func_0x00010bef1a20(param_3);
  func_0x00010c01e4a0(puVar2,param_2,lVar3);
  func_0x00010c17b3a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_3;
  func_0x00010bf06960(param_3);
  func_0x00010bff91e0(puVar2,param_2,lVar3);
  func_0x00010c17b3c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_3;
  func_0x00010c0c31e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar2 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    lVar3 = param_3;
    func_0x00010c0c31e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar2,param_2,lVar3);
    func_0x00010c17b440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c072f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar2 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    lVar3 = param_3;
    func_0x00010c072f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    func_0x00010bff91e0(puVar2,param_2,lVar4);
    func_0x00010c1b0fa0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_3;
  func_0x00010c06b340(param_3);
  func_0x00010bff91e0(puVar2,param_2,lVar3);
  func_0x00010c1af200(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    lVar3 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar2,param_2,lVar3);
    func_0x00010c183b80(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b2a20; end: 1084b2b3f; -[SCAdProtoImpressionDataBuilder getBannerImpression:] */

void FUN_1084b2a20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9c78;
  _objc_opt_new(PTR_PTR_1126d9c78);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_3;
  func_0x00010bf15a00(param_3);
  func_0x00010bff91e0(puVar2,param_2,lVar3);
  func_0x00010c17b380(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_3;
  func_0x00010c268f00(param_3);
  func_0x00010c119040(param_1,param_2,lVar3);
  func_0x00010c17b360(puVar1,param_2,param_1);
  lVar3 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    lVar3 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar2,param_2,lVar3);
    func_0x00010c183b80(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b2b40; end: 1084b2b4f; -[SCAdProtoImpressionDataBuilder protoBannerTapDestinationFromTapDestination:] */

int FUN_1084b2b40(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084b2b50; end: 1084b2c63; -[SCAdProtoImpressionDataBuilder _getViewLocationFromViewContext:] */

ulong FUN_1084b2b50(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c125020(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar4 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c125020(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c067fc0(uVar1);
    _objc_release(uVar1);
    func_0x0001084c0f40(uVar4,*(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1084b2c64; end: 1084b2d2b; -[SCAdProtoImpressionDataBuilder _operaNavigationStyleFromViewContext:] */

bool FUN_1084b2c64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = PTR_PTR_1126b92c8;
  _objc_retain(param_3);
  func_0x00010c0eb5e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    func_0x00010c2827c0(uVar4);
    bVar2 = uVar4 == 2;
  }
  _objc_release(uVar1);
  return bVar2;
}



/* Entry: 1084b2d2c; end: 1084b2d3b; -[SCAdProtoImpressionDataBuilder protoChatFeedCellTapDestinationFromTapDestination:] */

int FUN_1084b2d2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 6) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084b2d3c; end: 1084b2d43; -[SCAdProtoImpressionDataBuilder adResponse] */

undefined8 FUN_1084b2d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1084b2d44; end: 1084b2d4b; -[SCAdProtoImpressionDataBuilder adTrackInfo] */

undefined8 FUN_1084b2d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1084b2d4c; end: 1084b2d53; -[SCAdProtoImpressionDataBuilder adConfigProvider] */

undefined8 FUN_1084b2d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1084b2d54; end: 1084b2d5b; -[SCAdProtoImpressionDataBuilder adConfigProviderV2] */

undefined8 FUN_1084b2d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1084b2d5c; end: 1084b2d63; -[SCAdProtoImpressionDataBuilder dpaConfigProvider] */

undefined8 FUN_1084b2d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1084b2d64; end: 1084b2d6b; -[SCAdProtoImpressionDataBuilder valdiRuntimeProvider] */

undefined8 FUN_1084b2d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1084b2d6c; end: 1084b2d73; -[SCAdProtoImpressionDataBuilder userBlizzard] */

undefined8 FUN_1084b2d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1084b2d74; end: 1084b2e03; -[SCAdProtoImpressionDataBuilder .cxx_destruct] */

void FUN_1084b2d74(long param_1)

{
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



/* Entry: 1084b2e04; end: 1084b2e1b; -[SCAdProtoImpressionDataBuilder _protoAppInstallStatus:] */

undefined1 FUN_1084b2e04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 1084b2e1c; end: 1084b2f3f; -[SCAdProtoImpressionDataBuilder _infoCardConfigFromCommonTrackInfo:] */

void FUN_1084b2e1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9c80;
  _objc_opt_new(PTR_PTR_1126d9c80);
  lVar2 = param_3;
  func_0x00010c107040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    lVar2 = param_3;
    func_0x00010c107040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar3,param_2,lVar2);
    func_0x00010c1e03a0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c106ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    lVar2 = param_3;
    func_0x00010c106ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar3,param_2,lVar2);
    func_0x00010c1e0000(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b2f40; end: 1084b30a3; +[SCAdProtoImpressionDataBuilder _gpbStringArray:] */

void FUN_1084b2f40(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126b1df0;
      _objc_alloc();
      func_0x00010c08fa60();
      func_0x00010c04e820();
      if (puVar4 != (undefined *)0x0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(puVar4);
      puVar6 = puVar6 + 1;
    } while (puVar3 != puVar6);
    puVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x000100504554();
    puVar2 = param_3;
    func_0x00010c0d3c80();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084b30a4; end: 1084b30df;  */

void FUN_1084b30a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110a4b218);
  uVar1 = param_1;
  func_0x00010c0d3c80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084b30e0; end: 1084b31ef;  */

void FUN_1084b30e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d9c88;
  _objc_opt_new(PTR_PTR_1126d9c88);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010bfec9e0(param_2);
  func_0x00010c01e4a0(puVar2);
  func_0x00010c1abfe0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar3 = param_2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c115e60(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar2);
  func_0x00010c1e3bc0(puVar1);
  _objc_release(puVar2);
  if (lVar4 != 0) {
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b31f0; end: 1084b34e7; -[SCAdProtoImpressionDataBuilder _protoShowcaseImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084b31f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9a78;
  _objc_opt_new(PTR_PTR_1126d9a78);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084b34e8;
  puStack_60 = &UNK_110a4b108;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bde2540(param_2,param_3,param_4,param_5,param_6,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar3 = param_4;
  func_0x00010c23b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276d20();
  func_0x00010bff91e0(puVar2,param_3,0.0 < param_1);
  func_0x00010c20c2a0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  uVar3 = param_4;
  func_0x00010c23b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276d20();
  dVar6 = (double)(ulong)(uint)(float)(param_1 * 1000.0);
  func_0x00010c0138c0(dVar6,puVar2);
  func_0x00010c2189c0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  uVar3 = param_4;
  func_0x00010c23b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276b40();
  dVar6 = (double)(ulong)(uint)(float)(dVar6 * 1000.0);
  func_0x00010c0138c0(dVar6,puVar2);
  func_0x00010c218880(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  uVar3 = param_4;
  func_0x00010c23b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c276180();
  func_0x00010c0138c0((float)(dVar6 * 1000.0),puVar2);
  func_0x00010c218080(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar3 = param_4;
  func_0x00010c23b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c116460();
  func_0x00010c01e4a0(puVar2,param_3,uVar4);
  func_0x00010c1e3ea0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c23b160(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c115fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_1084b30a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3c80(puVar1,param_3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
  _objc_release(uStack_58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b34e8; end: 1084b362f;  */

void FUN_1084b34e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_PTR_1126c0308;
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010bff91e0(puVar1);
  func_0x00010c2109c0(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264640();
  func_0x00010c01e4a0(puVar1);
  func_0x00010c210580(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar1 = PTR_PTR_1126afec0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf42b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b5240();
  func_0x00010c0cd480(puVar1);
  func_0x00010c0138c0((float)(double)CONCAT44(uVar5,uVar4),puVar3);
  func_0x00010c1c0e20(param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084b3630; end: 1084b3c9b; -[SCAdProtoImpressionDataBuilder _protoStoryImpressionTrack:operaNavigationStyle:viewLocation:adTrackInfoContext:] */

void FUN_1084b3630(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = (undefined4)param_1;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126d9c90;
  _objc_opt_new();
  puVar3 = param_4;
  func_0x00010bef54a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  if (puVar4 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010be21c80(param_2,param_3,param_4,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = param_4;
  func_0x00010c26eca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010c26eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf0d480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ee20(param_4);
    puVar5 = param_2;
    func_0x00010becbe40(param_2,param_3,puVar4,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2148c0(puVar3,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    goto LAB_1084b39d0;
  }
  puVar2 = param_4;
  func_0x00010bef54a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar4 == (undefined *)0x0) {
    func_0x00010c26ee20(param_4);
    dVar1 = (double)CONCAT44(uVar9,uVar8);
    puVar2 = PTR_PTR_1126d9c98;
    _objc_alloc_init(PTR_PTR_1126d9c98);
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    if (0.0 < dVar1) {
      func_0x00010bff91e0(puVar4,param_3,0);
      func_0x00010c214a00(puVar2,param_3,puVar4);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      func_0x00010bff91e0();
      func_0x00010c1b5a40(puVar2,param_3,puVar4);
      _objc_release(puVar4);
      puVar5 = PTR_PTR_1126c0300;
      _objc_alloc(PTR_PTR_1126c0300);
      puVar4 = PTR_PTR_1126afec0;
      func_0x00010c26ee20(param_4);
      func_0x00010c0cd480(puVar4);
      func_0x00010c0138c0((float)(double)CONCAT44(uVar9,uVar8),puVar5);
      func_0x00010c214a20(puVar2,param_3,puVar5);
      goto LAB_1084b38a8;
    }
  }
  else {
    puVar2 = PTR_PTR_1126d9c98;
    _objc_alloc_init(PTR_PTR_1126d9c98);
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010bff91e0();
    func_0x00010c214a00(puVar2,param_3,puVar4);
    _objc_release(puVar4);
    puVar5 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    func_0x00010bff91e0();
    func_0x00010c1b5a40(puVar2,param_3,puVar5);
LAB_1084b38a8:
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
  }
  puVar5 = param_4;
  func_0x00010bfd5f80(param_4);
  func_0x00010bff91e0(puVar4,param_3,puVar5);
  func_0x00010c1a5c80(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  func_0x00010bf4b9c0(param_4);
  puVar4 = puVar2;
  func_0x00010bf4b9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_4;
  func_0x00010c26e980(param_4);
  func_0x00010bff91e0(puVar4,param_3,puVar5);
  func_0x00010c214740(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar5 = param_4;
  func_0x00010c26e9c0(param_4);
  func_0x00010bff91e0(puVar4,param_3,puVar5);
  func_0x00010c214780(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  puVar5 = param_4;
  func_0x00010c26e9a0(param_4);
  func_0x00010c01e4e0(puVar4,param_3,puVar5);
  func_0x00010c214760(puVar2,param_3,puVar4);
  _objc_release(puVar4);
  func_0x00010c214860(puVar3,param_3,puVar2);
LAB_1084b39d0:
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c26ec40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfdd520();
  if (((int)puVar4 != 0) && (puVar2 != (undefined *)0x0)) {
    puVar4 = PTR_PTR_1126d9a68;
    _objc_opt_new(PTR_PTR_1126d9a68);
    puVar5 = PTR_PTR_1126d0f68;
    _objc_opt_new(PTR_PTR_1126d0f68);
    func_0x00010c17f580(puVar4,param_3,puVar5);
    _objc_release(puVar5);
    puVar5 = param_2;
    func_0x00010be83780(param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf42b40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4a40();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010c26ec20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea3a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar4 = param_4;
  func_0x00010bf5ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = param_2;
    func_0x00010bef4a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c258fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf45420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    puVar7 = param_4;
    func_0x00010bf5ac40(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010b704680(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185820(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c23fa00();
  if ((long)puVar4 < 1) {
    puVar4 = param_2;
    func_0x00010bef4a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c203cc0(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c26ec80();
  if (-1 < (int)puVar4) {
    puVar4 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c01e4a0();
    func_0x00010c21ca40(puVar3,param_3,puVar4);
    _objc_release(puVar4);
  }
  puVar4 = param_2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0ec0c0();
  _objc_release(puVar4);
  if ((int)puVar5 != 0) {
    func_0x00010bef4a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010c15ef40();
    func_0x00010c1fd180(puVar3,param_3,puVar4);
    _objc_release(param_2);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084b3c9c; end: 1084b426b; -[SCAdProtoImpressionDataBuilder _getProtoStoryImpressionWithEngagementTrackBuilder:operaNavigationStyle:viewLocation:adTrackInfoContext:] */

void FUN_1084b3c9c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9c90;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar10 = param_3;
  func_0x00010c06c960(param_3);
  func_0x00010bff91e0(puVar2,param_2,uVar10);
  func_0x00010c1af440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar10 = param_3;
  func_0x00010bf9b740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  FUN_1084b7d54();
  func_0x00010c198340(puVar1,param_2,uVar3);
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar10 = param_3;
  func_0x00010c276da0(param_3);
  func_0x00010c01e4a0(puVar2,param_2,uVar10);
  func_0x00010c218a40(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar10 = param_3;
  func_0x00010c2806c0(param_3);
  func_0x00010c01e4a0(puVar2,param_2,uVar10);
  func_0x00010c21b8a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  uVar10 = param_3;
  func_0x00010c0c31a0(param_3);
  func_0x00010c01e4a0(puVar2,param_2,uVar10);
  func_0x00010c222f60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar2 = PTR_PTR_1126afec0;
  uVar10 = param_3;
  func_0x00010c276ee0(param_3);
  dVar11 = (double)(long)uVar10;
  func_0x00010c0cd480(dVar11,puVar2);
  dVar11 = (double)(ulong)(uint)(float)dVar11;
  func_0x00010c0138c0(dVar11,puVar4);
  func_0x00010c1c4620(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  puVar2 = PTR_PTR_1126afec0;
  func_0x00010c276ec0(param_3);
  func_0x00010c0cd480(puVar2);
  func_0x00010c0138c0((float)dVar11,puVar4);
  func_0x00010c2157c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  uVar10 = param_3;
  func_0x00010bef2be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be833c0(param_1,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20cae0(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar10 = param_3;
  func_0x00010bef54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010bf529e0();
  _objc_release(uVar10);
  if (uVar3 != 0) {
    uVar10 = 0;
    do {
      uVar3 = param_3;
      func_0x00010bef54a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126d9ca0;
      _objc_opt_new(PTR_PTR_1126d9ca0);
      uVar3 = uVar6;
      func_0x00010bef60a0(uVar6);
      FUN_10848f45c();
      func_0x00010c164dc0(puVar4,param_2,uVar3);
      puVar7 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      uVar3 = uVar6;
      func_0x00010bf42b60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c2415a0();
      func_0x00010c01e4a0(puVar7,param_2,uVar8);
      func_0x00010c2047e0(puVar4,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar3);
      uVar3 = uVar6;
      func_0x00010bf42b60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf9b740();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      FUN_1084b7d54();
      func_0x00010c202fc0(puVar4,param_2,uVar9);
      _objc_release(uVar8);
      _objc_release(uVar3);
      puVar7 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      uVar3 = uVar6;
      func_0x00010bf42b60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c264640();
      func_0x00010c01e4a0(puVar7,param_2,uVar8);
      func_0x00010c210960(puVar4,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(uVar3);
      uVar3 = uVar6;
      func_0x00010bef60a0();
      uVar5 = param_1;
      if ((long)uVar3 < 6) {
        if (uVar3 == 0) {
          func_0x00010be838e0(0,param_1,param_2,uVar6,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213d40(puVar4,param_2,uVar5);
        }
        else {
          if (uVar3 != 1) {
            if (uVar3 == 3) goto LAB_1084b40d4;
            goto LAB_1084b41dc;
          }
          func_0x00010be83460(0,param_1,param_2,uVar6,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c168c20(puVar4,param_2,uVar5);
        }
LAB_1084b41d4:
        _objc_release(uVar5);
      }
      else {
        if (0x13 < (long)uVar3) {
          if (uVar3 == 0x14) {
            func_0x00010be837a0(0,param_1,param_2,uVar6,param_4,param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e9ce0(puVar4,param_2,uVar5);
          }
          else {
            if (uVar3 != 0x15) goto LAB_1084b41dc;
LAB_1084b40d4:
            func_0x00010be837c0(0,param_1,param_2,uVar6,param_4,param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ea3a0(puVar4,param_2,uVar5);
          }
          goto LAB_1084b41d4;
        }
        if (uVar3 == 6) {
          func_0x00010be835e0(0,param_1,param_2,uVar6,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18a720(puVar4,param_2,uVar5);
          goto LAB_1084b41d4;
        }
        if (uVar3 == 9) {
          func_0x00010be83400(0,param_1,param_2,uVar6,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c164b00(puVar4,param_2,uVar5);
          goto LAB_1084b41d4;
        }
      }
LAB_1084b41dc:
      func_0x00010befa120(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar6);
      uVar10 = uVar10 + 1;
      uVar3 = param_3;
      func_0x00010bef54a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
    } while (uVar10 < uVar6);
  }
  func_0x00010c2047c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b426c; end: 1084b435b; -[SCAdProtoImpressionDataBuilder _protoAdHintInteractionTrackFromNative:] */

void FUN_1084b426c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d9ca8;
  _objc_opt_new(PTR_PTR_1126d9ca8);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  lVar3 = param_3;
  func_0x00010bf9bd40(param_3);
  func_0x00010bff91e0(puVar2,param_2,lVar3);
  func_0x00010c198700(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_3;
  func_0x00010bf9bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar3 = param_3;
    func_0x00010bf9bd20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar2,param_2,lVar3);
    func_0x00010c1986e0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b435c; end: 1084b4503; -[SCAdProtoImpressionDataBuilder _tileInteractionTrackWithAttachmentTrack:tileTimeViewedInMillis:viewLocation:] */

void FUN_1084b435c(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9cb0;
  _objc_opt_new(PTR_PTR_1126d9cb0);
  puVar2 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c186780(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0300;
  _objc_alloc(PTR_PTR_1126c0300);
  func_0x00010c0cd480(param_1,PTR_PTR_1126afec0);
  func_0x00010c0138c0((float)param_1,puVar2);
  func_0x00010c214a20(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  lVar3 = param_4;
  func_0x00010bef60a0();
  if (lVar3 < 6) {
    if (lVar3 == 1) {
      func_0x00010be83460(0,param_2,param_3,param_4,0,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168c20(puVar1,param_3,param_2);
    }
    else {
      if (lVar3 != 3) goto LAB_1084b44e0;
LAB_1084b4440:
      func_0x00010be837c0(0,param_2,param_3,param_4,0,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea3a0(puVar1,param_3,param_2);
    }
  }
  else {
    if (lVar3 != 6) {
      if (lVar3 != 0x15) goto LAB_1084b44e0;
      goto LAB_1084b4440;
    }
    func_0x00010be835e0(0,param_2,param_3,param_4,0,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a720(puVar1,param_3,param_2);
  }
  _objc_release(param_2);
LAB_1084b44e0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b4504; end: 1084b45a7; -[SCAdProtoImpressionDataBuilder _protoSurveyImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084b4504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9cb8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be83580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b45a8; end: 1084b464f; -[SCAdProtoImpressionDataBuilder _protoThreeVImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:] */

void FUN_1084b45a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9cc0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010bde2540(param_1,param_2,param_3,param_4,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c17f580(puVar1,param_3,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b4650; end: 1084b5ebb; -[SCAdProtoImpressionDataBuilder protoViewContextFromDictionary:adPodTrackInfo:context:] */

void FUN_1084b4650(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d9cc8;
  _objc_opt_new(PTR_PTR_1126d9cc8);
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf9b740(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bf9b740(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    FUN_1084b7d54(uVar3);
    func_0x00010c198340(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c258740(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c258740(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c20c660(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c1305a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c1305a0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar5 = param_1;
    func_0x00010be83920(param_1,param_2,uVar3);
    func_0x00010c1eaa40(puVar1,param_2,uVar5);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0680c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0680c0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar5 = param_1;
    func_0x00010be83920(param_1,param_2,uVar3);
    func_0x00010c1addc0(puVar1,param_2,uVar5);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bef2d00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bef2d00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c163800(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bef2ec0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bef2ec0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c1638a0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c2415a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c2415a0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c2047e0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c23fa00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c23fa00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c203cc0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf8c980(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bf8c980(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c193c40(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c11b1e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c11b1e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1e5b60(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c11b3a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c11b3a0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1e5b80(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c1057c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c1057c0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1df700(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c116a20(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c116a20(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1e4140(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf0f6c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bf0f6c0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    func_0x00010c0304c0();
    func_0x00010c16c060(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf112a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bf112a0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c16cb20(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf11260(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bf11260(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c16cb00(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf0d4e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bf0d4e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    uVar5 = param_1;
    func_0x00010be83900(param_1,param_2,uVar4);
    func_0x00010c16b2c0(puVar1,param_2,uVar5);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0eb5e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0eb5e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    func_0x00010c1d5800(puVar1,param_2,uVar4 == 2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c125020(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c125020(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    FUN_10848cfd8();
    func_0x00010c222c00(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0794e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0794e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    uVar4 = uVar3;
    func_0x00010bf1f3c0(uVar3);
    func_0x00010bff91e0(puVar2,param_2,uVar4);
    func_0x00010c1b3140(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c106140(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c106140(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    FUN_10848d1c4();
    func_0x00010c1dfbe0(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c083d60(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c083d60(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    uVar4 = uVar3;
    func_0x00010bf1f3c0(uVar3);
    func_0x00010bff91e0(puVar2,param_2,uVar4);
    func_0x00010c1b5bc0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0ecf40(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0ecf40(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1d62a0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0ecf40(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c125020(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    func_0x00010c067fc0();
    if (uVar4 < 0x23) {
      uVar9 = *(undefined4 *)(&UNK_10df307f8 + uVar4 * 4);
    }
    else {
      uVar9 = 2;
    }
    func_0x00010c1d62c0(puVar1,param_2,uVar9);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c260660(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c260660(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    uVar4 = uVar3;
    func_0x00010bf1f3c0(uVar3);
    func_0x00010bff91e0(puVar2,param_2,uVar4);
    func_0x00010c20f4e0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1d6320(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0ecfa0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0ecfa0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1d62e0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0ecfa0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c125020(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    func_0x00010c067fc0();
    func_0x00010c1d6300(puVar1,param_2,uVar4 != 0 && uVar4 != 7);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0f3ac0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0f3ac0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    uVar6 = uVar4;
    func_0x00010c08fa60();
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar4;
    }
    func_0x00010c04e820(puVar2,param_2,uVar3);
    func_0x00010c1d9020(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c15f140(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c15f140(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0308;
    func_0x00010c0cb140(PTR_PTR_1126c0308);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0(uVar3);
    func_0x00010c220160(puVar2,param_2,uVar4);
    func_0x00010c1fd320(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c264620(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c264620(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010be838c0(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c210780(puVar1,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c0fbce0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010c0fbce0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    func_0x00010c0304c0();
    func_0x00010c1db880(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf66720(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dff20(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bf66720(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0dff20(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    func_0x00010c18a160(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar7 = param_4;
    func_0x00010c0fdc00(param_4);
    func_0x00010c01e4a0(puVar2,param_2,lVar7);
    func_0x00010c1dcca0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar7 = param_4;
    func_0x00010befe0a0(param_4);
    func_0x00010c01e4a0(puVar2,param_2,lVar7);
    func_0x00010c166180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b1df0;
    _objc_alloc(PTR_PTR_1126b1df0);
    lVar7 = param_4;
    func_0x00010c1029a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = param_4;
      func_0x00010c1029a0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c04e820(puVar2,param_2,lVar10);
    func_0x00010c1de880(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    if (lVar8 != 0) {
      _objc_release(lVar10);
    }
    _objc_release(lVar7);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar7 = param_4;
    func_0x00010c1029c0(param_4);
    func_0x00010c01e4a0(puVar2,param_2,lVar7);
    func_0x00010c1de8a0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar7 = param_4;
    func_0x00010befe0c0(param_4);
    func_0x00010c01e4a0(puVar2,param_2,lVar7);
    func_0x00010c1661a0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  lVar7 = param_5;
  func_0x00010c264d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar7 = param_5;
    func_0x00010c264d80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar2,param_2,lVar7);
    func_0x00010c2108a0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar7);
  }
  lVar7 = param_5;
  func_0x00010bf319c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar7 = param_5;
    func_0x00010bf319c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar2,param_2,lVar7);
    func_0x00010c179640(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar7);
  }
  lVar7 = param_5;
  func_0x00010c158380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    puVar2 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    lVar7 = param_5;
    func_0x00010c158380(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar2,param_2,lVar7);
    func_0x00010c1faa60(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar7);
  }
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b5ebc; end: 1084b61ff; -[SCAdProtoImpressionDataBuilder _protoSwipeSensitivityConfigFromInteractiveAreaConfig:] */

void FUN_1084b5ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126d9cd0;
  _objc_retain(param_4);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2645c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e440();
  func_0x00010c1ba360(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c2645c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408c0();
  func_0x00010c1ee260(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d9cd8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf8c020(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2744e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1084b6204;
  puStack_70 = &UNK_110846710;
  _objc_retain(puVar3);
  puStack_68 = puVar3;
  func_0x00010c0bf760(uVar4,param_3,&PTR___NSConcreteGlobalBlock_110a4b238,&puStack_88);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf8c020(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c140c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar5;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1084b6210;
  puStack_98 = &UNK_110846710;
  _objc_retain(puVar3);
  puStack_90 = puVar3;
  func_0x00010c0bf760(uVar4,param_3,&PTR___NSConcreteGlobalBlock_110a4b258,&puStack_b0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf8c020(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf201c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar5;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1084b621c;
  puStack_c0 = &UNK_110846710;
  _objc_retain(puVar3);
  puStack_b8 = puVar3;
  func_0x00010c0bf760(uVar4,param_3,&PTR___NSConcreteGlobalBlock_110a4b278,&puStack_d8);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf8c020(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08e800();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar5;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1084b6228;
  puStack_e8 = &UNK_110846710;
  puStack_e0 = puVar3;
  _objc_retain(puVar3);
  func_0x00010c0bf760(uVar4,param_3,&PTR___NSConcreteGlobalBlock_110a4b298,&puStack_100);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d9ce0;
  func_0x00010c0cb140(PTR_PTR_1126d9ce0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf87020(param_4);
  func_0x00010c190b60(puVar5);
  uVar2 = param_4;
  func_0x00010c23ea40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c203380(puVar5);
  _objc_release(uVar2);
  func_0x00010c297a40(param_4);
  _objc_release(param_4);
  func_0x00010c2206a0(param_1,puVar5);
  func_0x00010c210520(puVar5,param_3,puVar1);
  func_0x00010c193400(puVar5,param_3,puVar3);
  _objc_release(puStack_e0);
  _objc_release(puStack_b8);
  _objc_release(puStack_90);
  _objc_release(puStack_68);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1084b6200; end: 1084b622f;  */

void FUN_1084b6200(void)

{
  return;
}



/* Entry: 1084b6230; end: 1084b62af; -[SCAdProtoImpressionDataBuilder _protoViewContextPositionFromString:] */

undefined1 FUN_1084b6230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ede538;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede538,param_2,param_3);
  if (ppuVar2 == (undefined **)0x0) {
    uVar1 = 3;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ede558;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede558,param_2,param_3);
    if (ppuVar2 == (undefined **)0x0) {
      uVar1 = 2;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ede578;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ede578,param_2,param_3);
      uVar1 = ppuVar2 == (undefined **)0x0;
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1084b62b0; end: 1084b62d3; -[SCAdProtoImpressionDataBuilder _protoViewContextAttachmentTriggerTypeFromAttachmentTriggerType:] */

undefined4 FUN_1084b62b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined4 *)(&UNK_10df30884 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 1084b62d4; end: 1084b6977; -[SCAdProtoImpressionDataBuilder protoWebViewContext:snapIndex:collectionItemIndex:] */

void FUN_1084b62d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010be83960(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d9ce8;
  _objc_opt_new(PTR_PTR_1126d9ce8);
  uVar5 = param_3;
  func_0x00010c09ca20(param_3);
  func_0x00010c1e06c0(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c107ac0(param_3);
  uVar6 = param_1;
  func_0x00010be83760(param_1,param_2,uVar5);
  func_0x00010c1e05a0(puVar4,param_2,uVar6);
  puVar7 = PTR_PTR_1126b92d8;
  uVar5 = param_3;
  func_0x00010bfbca00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be243e0(puVar7,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1980(puVar4,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bfb1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar5 = param_3;
    func_0x00010bfb1440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar7,param_2,uVar5);
    func_0x00010c19d120(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010bfb1480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar5 = param_3;
    func_0x00010bfb1480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar7,param_2,uVar5);
    func_0x00010c19d100(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010bfd75c0(param_3);
  func_0x00010c1d88e0(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bfd75e0(param_3);
  func_0x00010c1b7440(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bfb0dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar5 = param_3;
    func_0x00010bfb0dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar7,param_2,uVar5);
    func_0x00010c19cda0(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010befdce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar5 = param_3;
    func_0x00010befdce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar7,param_2,uVar5);
    func_0x00010c165f80(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  func_0x00010c2250c0(puVar4,param_2,uVar3);
  puVar7 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  uVar5 = param_3;
  func_0x00010bfd75a0(param_3);
  func_0x00010bff91e0(puVar7,param_2,uVar5);
  func_0x00010c1a19a0(puVar4,param_2,puVar7);
  _objc_release(puVar7);
  uVar5 = param_3;
  func_0x00010bf780a0(param_3);
  func_0x00010c1d4e40(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf21840();
  iVar1 = 0;
  if (uVar5 - 1 < 3) {
    iVar1 = (int)(uVar5 - 1) + 1;
  }
  func_0x00010c224ce0(puVar4,param_2,iVar1);
  uVar5 = param_3;
  func_0x00010bf9a7a0();
  iVar1 = 0;
  if (uVar5 - 1 < 4) {
    iVar1 = (int)(uVar5 - 1) + 1;
  }
  func_0x00010c197e60(puVar4,param_2,iVar1);
  uVar5 = param_3;
  func_0x00010bf6f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    uVar5 = param_3;
    func_0x00010bf6f940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf1f3c0();
    func_0x00010bff91e0(puVar7,param_2,uVar8);
    func_0x00010c1f5e60(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010c0e9180(param_3);
  func_0x00010c197ea0(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bfb19e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar5 = param_3;
    func_0x00010bfb19e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar7,param_2,uVar5);
    func_0x00010c19d3c0(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010bfe4a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar5 = param_3;
    func_0x00010bfe4a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar7,param_2,uVar5);
    func_0x00010c1a9440(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010bfe4a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    uVar5 = param_3;
    func_0x00010bfe4a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0304c0(puVar7,param_2,uVar5);
    func_0x00010c1a9420(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010c067c80();
  uVar2 = (undefined4)uVar5;
  if (4 < uVar5) {
    uVar2 = 1;
  }
  func_0x00010c1adbc0(puVar4,param_2,uVar2);
  uVar5 = param_3;
  func_0x00010bf7b860();
  if ((int)uVar5 != 0) {
    puVar7 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    uVar5 = param_3;
    func_0x00010bf7b860(param_3);
    func_0x00010bff91e0(puVar7,param_2,uVar5);
    func_0x00010c18dd60(puVar4,param_2,puVar7 != (undefined *)0x0);
    _objc_release(puVar7);
  }
  uVar5 = param_3;
  func_0x00010c09bf00(param_3);
  func_0x00010c1be7c0(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf11f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010be83940(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c224f40(puVar4,param_2,uVar6);
  uVar5 = param_3;
  func_0x00010bf0d8e0(param_3);
  func_0x00010c18aba0(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c151f40(param_3);
  func_0x00010c1f7a60(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c268ec0(param_3);
  func_0x00010c211b80(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c07dde0(param_3);
  func_0x00010c1b4540(puVar4,param_2,uVar5);
  func_0x00010bef4a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c0716c0();
  func_0x00010c177b80(puVar4,param_2,uVar9);
  _objc_release(param_1);
  uVar5 = param_3;
  func_0x00010bf7cae0(param_3);
  func_0x00010c18dec0(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf7c880(param_3);
  func_0x00010c18de80(puVar4,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf78700(param_3);
  func_0x00010c18d9e0(puVar4,param_2,uVar5);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084b6978; end: 1084b6ebb; -[SCAdProtoImpressionDataBuilder _protoWebViewAutofillInfo:] */

void FUN_1084b6978(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d9cf0;
    _objc_opt_new(PTR_PTR_1126d9cf0);
    lVar1 = param_3;
    func_0x00010c06f200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_3;
      func_0x00010c06f200(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c16d120(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c06f1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_3;
      func_0x00010c06f1e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c16d100(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010bf11f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      lVar1 = param_3;
      func_0x00010bf11f80(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf529e0();
      func_0x00010c01e4a0(puVar2,param_2,lVar3);
      func_0x00010c16d1e0(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
      puVar2 = PTR_PTR_1126b92d8;
      lVar1 = param_3;
      func_0x00010bf11f80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be243e0(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d200(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010bf11fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126b92d8;
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010bf11fa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be243e0(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d2a0(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010bf6fac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_3;
      func_0x00010bf6fac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf529e0();
      func_0x00010bff91e0(puVar2,param_2,lVar3 != 0);
      func_0x00010c16d160(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
      puVar2 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      lVar1 = param_3;
      func_0x00010bf6fac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf529e0();
      func_0x00010c01e4a0(puVar2,param_2,lVar3);
      func_0x00010c16d180(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
      puVar2 = PTR_PTR_1126b92d8;
      lVar1 = param_3;
      func_0x00010bf6fac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be243e0(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d1a0(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c25f9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126b92d8;
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c25f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be243e0(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20f320(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c07cfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_3;
      func_0x00010c07cfe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c16d260(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c07cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_3;
      func_0x00010c07cfc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c16d240(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c071240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_3;
      func_0x00010c071240(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c16d220(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    puVar2 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    lVar1 = param_3;
    func_0x00010c06cc40(param_3);
    func_0x00010bff91e0(puVar2,param_2,lVar1);
    func_0x00010c16d280(puVar4,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084b6ebc; end: 1084b6f7f; -[SCAdProtoImpressionDataBuilder _protoWebViewLoadInfo:] */

void FUN_1084b6ebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d9cf8;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_new(puVar2);
    lVar1 = param_3;
    func_0x00010c2a40e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bede1c0(param_1,param_2,puVar2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0f9740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bede1e0(param_1,param_2,puVar2,lVar1);
    _objc_release(lVar1);
    func_0x00010bede200(param_1,param_2,puVar2,param_3);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084b6f80; end: 1084b7827; -[SCAdProtoImpressionDataBuilder _updateProtoWebViewLoadInfo:withLoadInfo:] */

void FUN_1084b6f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010bf87c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010bf87c80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c190d80(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bf87d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010bf87d60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c190e00(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bfb1020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010bfb1020(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c19cea0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bfbb900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010bfbb900(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c1a1520(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c09bfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0320;
      _objc_alloc(PTR_PTR_1126c0320);
      lVar1 = param_4;
      func_0x00010c09bfa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c1be7e0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c291200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      lVar1 = param_4;
      func_0x00010c291200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_4;
        func_0x00010c291200(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar2,param_2,lVar4);
      func_0x00010c173f00(param_3,param_2,puVar2);
      _objc_release(puVar2);
      if (lVar3 != 0) {
        _objc_release(lVar4);
      }
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c0f1ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      lVar1 = param_4;
      func_0x00010c0f1ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_4;
        func_0x00010c0f1ee0(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar2,param_2,lVar4);
      func_0x00010c1d8840(param_3,param_2,puVar2);
      _objc_release(puVar2);
      if (lVar3 != 0) {
        _objc_release(lVar4);
      }
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bfdce60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_4;
      func_0x00010bfdce60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c1a6f80(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c0d6c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010c0d6c00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c225380(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c13bca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010c13bca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c1a94a0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bf87d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010bf87d20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c190dc0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bf87be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010bf87be0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c190d60(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bf87ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010bf87ae0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c190cc0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c13b060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      lVar1 = param_4;
      func_0x00010c13b060();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_4;
        func_0x00010c13b060(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar2,param_2,lVar4);
      func_0x00010c1da740(param_3,param_2,puVar2);
      _objc_release(puVar2);
      if (lVar3 != 0) {
        _objc_release(lVar4);
      }
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c15f4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010c15f4a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c1a9480(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c15f4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010c15f4e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c1a9460(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c15f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b1df0;
      _objc_alloc(PTR_PTR_1126b1df0);
      lVar1 = param_4;
      func_0x00010c15f500();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_4;
        func_0x00010c15f500(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar2,param_2,lVar4);
      func_0x00010c1fd620(param_3,param_2,puVar2);
      _objc_release(puVar2);
      if (lVar3 != 0) {
        _objc_release(lVar4);
      }
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bfda6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc(PTR_PTR_1126c0308);
      lVar1 = param_4;
      func_0x00010bfda6a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c1a6700(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084b7828; end: 1084b79b3; -[SCAdProtoImpressionDataBuilder _updateProtoWebViewLoadInfo:withPerformanceInfo:] */

void FUN_1084b7828(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c2a4040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010c2a4040(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c2252e0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c2a4020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010c2a4020(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c2252c0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c2a4100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc(PTR_PTR_1126c0350);
      lVar1 = param_4;
      func_0x00010c2a4100(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar1);
      func_0x00010c225320(param_3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084b79b4; end: 1084b7d43; -[SCAdProtoImpressionDataBuilder _updateProtoWebViewLoadInfo:withTrackInfo:] */

undefined * FUN_1084b79b4(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar2 = param_3;
    func_0x00010bfd7b40();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_PTR_1126c0308;
      _objc_alloc();
      lVar3 = param_4;
      func_0x00010bfdce60(param_4);
      func_0x00010bff91e0(puVar2,param_2,lVar3);
      puVar7 = puVar2;
      func_0x00010c1a6f80(param_3);
      _objc_release(puVar2);
    }
    lVar3 = param_4;
    func_0x00010befd280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      puVar2 = PTR_PTR_1126ae740;
      _objc_alloc_init();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar3 = param_4;
      func_0x00010befd280();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(lVar3);
            }
            uVar5 = *(ulong *)(lStack_128 + lVar9 * 8);
            func_0x00010c067ec0();
            if ((uint)uVar5 < 5) {
              uVar6 = *(undefined4 *)(&UNK_10df30890 + (uVar5 & 0xffffffff) * 4);
            }
            else {
              uVar6 = 1;
            }
            func_0x00010befc800(puVar2,param_2,uVar6);
            lVar9 = lVar9 + 1;
          } while (lVar4 != lVar9);
          lVar4 = lVar3;
          func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
        } while (lVar4 != 0);
      }
      _objc_release(lVar3);
      puVar7 = puVar2;
      func_0x00010c20edc0(param_3);
      _objc_release(puVar2);
    }
    lVar3 = param_4;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126b1df0;
      _objc_alloc();
      lVar3 = param_4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = param_4;
        func_0x00010c28f340(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar2,param_2,lVar8);
      puVar7 = puVar2;
      func_0x00010c1d8840(param_3);
      _objc_release(puVar2);
      if (lVar4 != 0) {
        _objc_release(lVar8);
      }
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010bf9a8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126b1df0;
      _objc_alloc();
      lVar3 = param_4;
      func_0x00010bf9a8c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = param_4;
        func_0x00010bf9a8c0(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c04e820(puVar2,param_2,lVar8);
      puVar7 = puVar2;
      func_0x00010c1fd620(param_3);
      _objc_release(puVar2);
      if (lVar4 != 0) {
        _objc_release(lVar8);
      }
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010bf9a7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126c0350;
      _objc_alloc();
      lVar3 = param_4;
      func_0x00010bf9a7e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0304c0(puVar2,param_2,lVar3);
      puVar7 = puVar2;
      func_0x00010c1a9480(param_3);
      _objc_release(puVar2);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar1 = 0;
  if (puVar7 + -1 < (undefined *)0x3) {
    uVar1 = (int)(puVar7 + -1) + 1;
  }
  return (undefined *)(ulong)uVar1;
}



/* Entry: 1084b7d44; end: 1084b7d53; -[SCAdProtoImpressionDataBuilder _protoPrefetchMode:] */

int FUN_1084b7d44(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 1U < 3) {
    iVar1 = (int)(param_3 - 1U) + 1;
  }
  return iVar1;
}



/* Entry: 1084b7d54; end: 1084b802f;  */

undefined4 FUN_1084b7d54(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ca8f0;
  func_0x00010c2647c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf32ee0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    uVar3 = 6;
  }
  else {
    puVar1 = PTR_PTR_1126ca8f0;
    func_0x00010c264ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf32ee0();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      uVar3 = 4;
    }
    else {
      puVar1 = PTR_PTR_1126ca8f0;
      func_0x00010c264da0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf32ee0();
      _objc_release(puVar1);
      if (puVar2 == (undefined *)0x0) {
        uVar3 = 5;
      }
      else {
        puVar1 = PTR_PTR_1126ca8f0;
        func_0x00010c2650a0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf32ee0();
        _objc_release(puVar1);
        if (puVar2 == (undefined *)0x0) {
          uVar3 = 7;
        }
        else {
          puVar1 = PTR_PTR_1126ca8f0;
          func_0x00010c2690c0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf32ee0();
          _objc_release(puVar1);
          if (puVar2 == (undefined *)0x0) {
            uVar3 = 2;
          }
          else {
            puVar1 = PTR_PTR_1126ca8f0;
            func_0x00010c269320();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            func_0x00010bf32ee0();
            _objc_release(puVar1);
            if (puVar2 == (undefined *)0x0) {
              uVar3 = 3;
            }
            else {
              puVar1 = PTR_PTR_1126ca8f0;
              func_0x00010c269200();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010bf32ee0();
              _objc_release(puVar1);
              if (puVar2 == (undefined *)0x0) {
                uVar3 = 0x12;
              }
              else {
                puVar1 = PTR_PTR_1126ca8f0;
                func_0x00010bf11220();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar1;
                func_0x00010bf32ee0();
                _objc_release(puVar1);
                if (puVar2 == (undefined *)0x0) {
                  uVar3 = 1;
                }
                else {
                  puVar1 = PTR_PTR_1126ca8f0;
                  func_0x00010bf13a00();
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = puVar1;
                  func_0x00010bf32ee0();
                  _objc_release(puVar1);
                  if (puVar2 == (undefined *)0x0) {
                    uVar3 = 9;
                  }
                  else {
                    puVar1 = PTR_PTR_1126ca8f0;
                    func_0x00010bf13c20();
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = puVar1;
                    func_0x00010bf32ee0();
                    _objc_release(puVar1);
                    if (puVar2 == (undefined *)0x0) {
                      uVar3 = 8;
                    }
                    else {
                      puVar1 = PTR_PTR_1126ca8f0;
                      func_0x00010c0b4f80();
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = puVar1;
                      func_0x00010bf32ee0();
                      _objc_release(puVar1);
                      if (puVar2 == (undefined *)0x0) {
                        uVar3 = 10;
                      }
                      else {
                        puVar1 = PTR_PTR_1126ca8f0;
                        func_0x00010c268e40();
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = puVar1;
                        func_0x00010bf32ee0();
                        _objc_release(puVar1);
                        if (puVar2 == (undefined *)0x0) {
                          uVar3 = 0xe;
                        }
                        else {
                          puVar1 = PTR_PTR_1126ca8f0;
                          func_0x00010c0ede40();
                          _objc_retainAutoreleasedReturnValue();
                          puVar2 = puVar1;
                          func_0x00010bf32ee0();
                          _objc_release(puVar1);
                          uVar3 = 0xb;
                          if (puVar2 != (undefined *)0x0) {
                            uVar3 = 0;
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
  return uVar3;
}



/* Entry: 1084b8030; end: 1084b90d3;  */

void FUN_1084b8030(undefined8 param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  long in_stack_00000020;
  long in_stack_00000028;
  
  uVar19 = (undefined4)((ulong)param_1 >> 0x20);
  uVar20 = (undefined4)param_1;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puVar1 = PTR_PTR_1126b9438;
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c0340;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126c0338;
  _objc_opt_new();
  puVar4 = param_2;
  func_0x00010bef4d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010c11ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  FUN_10848b3f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195940(puVar3);
  _objc_release(puVar17);
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010c15ed20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar3);
  _objc_release(puVar17);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c0268;
  _objc_opt_new();
  puVar17 = param_3;
  func_0x00010c292860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc5100();
  func_0x00010c1bdaa0(puVar4);
  _objc_release(puVar17);
  uVar5 = param_11;
  func_0x00010c13e1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  func_0x00010bf0ece0(uVar5);
  func_0x00010c16b9e0(puVar4);
  func_0x00010bf9de60(uVar5);
  func_0x00010c199420(puVar4);
  func_0x00010c26d200(uVar5);
  func_0x00010c213b80(puVar4);
  func_0x00010bfbbae0(uVar5);
  func_0x00010c1975a0(puVar4);
  func_0x00010c1dfdc0(puVar1);
  puVar17 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  puVar6 = param_2;
  func_0x00010c26a3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c06a3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    puVar9 = param_3;
  }
  else {
    puVar9 = param_2;
    func_0x00010c26a3a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c06a3c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar17);
  func_0x00010c1ae8a0(puVar2);
  _objc_release(puVar17);
  if (puVar8 != (undefined *)0x0) {
    _objc_release(puVar15);
    _objc_release(puVar9);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar17 = param_2;
  func_0x00010c26a3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  func_0x00010c06a4a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10848c894();
  func_0x00010c1ae9c0(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar17);
  puVar17 = param_2;
  func_0x00010c26a3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a440();
  FUN_10848cc70();
  func_0x00010c1ae940(puVar2);
  _objc_release(puVar17);
  puVar17 = param_3;
  func_0x00010bf6fee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  FUN_10848cb44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbfe0(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar17);
  puVar17 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c219120(puVar3);
  _objc_release(puVar17);
  puVar17 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c164e80(puVar3);
  _objc_release(puVar17);
  puVar17 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  func_0x00010bff91e0();
  func_0x00010c1b1f60(puVar3);
  _objc_release(puVar17);
  func_0x00010c27c360();
  func_0x00010c164da0(puVar3);
  puVar17 = param_3;
  func_0x00010bf07960(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  FUN_10848b980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar17);
  puVar17 = param_2;
  func_0x00010bef60a0();
  if (puVar17 == (undefined *)0x5) {
    func_0x00010bf91240(param_10);
  }
  else {
    func_0x00010bf91220(param_10);
  }
  puVar17 = param_3;
  func_0x00010bf6fee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar17;
  uVar12 = param_6;
  FUN_10848bb28();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_6);
  func_0x00010c18c700(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar17);
  func_0x00010c1ab240(puVar3);
  _objc_release(param_4);
  puVar17 = PTR_PTR_1126b1df0;
  _objc_alloc(PTR_PTR_1126b1df0);
  lVar10 = param_5;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08fa60();
  if (lVar11 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_5;
    func_0x00010c15ffa0(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c04e820(puVar17);
  func_0x00010c1fda20(puVar3);
  _objc_release(puVar17);
  if (lVar11 != 0) {
    _objc_release(lVar16);
  }
  _objc_release(lVar10);
  _objc_retain(param_2);
  puVar17 = param_2;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar17 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126d9d00;
    _objc_alloc_init(PTR_PTR_1126d9d00);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdba0();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c7e40(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdb00();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c7d20(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdce0();
    fVar18 = (float)(double)CONCAT44(uVar19,uVar20);
    uVar20 = 0;
    func_0x00010c0138c0(fVar18,puVar6);
    func_0x00010c1c7f40(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdb40();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c7e00(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdaa0();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c7d60(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdca0();
    fVar18 = (float)(double)CONCAT44(uVar20,fVar18);
    uVar20 = 0;
    func_0x00010c0138c0(fVar18,puVar6);
    func_0x00010c1c7f20(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdb20();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c7de0(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdc40();
    fVar18 = (float)(double)CONCAT44(uVar20,fVar18);
    uVar20 = 0;
    func_0x00010c0138c0(fVar18,puVar6);
    func_0x00010c1c7ec0(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdd00();
    fVar18 = (float)(double)CONCAT44(uVar20,fVar18);
    uVar20 = 0;
    func_0x00010c0138c0(fVar18,puVar6);
    func_0x00010c1c7f60(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c2ea0();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c3760(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48240();
    func_0x00010bff91e0(puVar6);
    func_0x00010c180c40(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48200();
    func_0x00010bff91e0(puVar6);
    func_0x00010c180c00(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf481e0();
    func_0x00010bff91e0(puVar6);
    func_0x00010c180be0(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdb60();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c7e20(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0320;
    _objc_alloc(PTR_PTR_1126c0320);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdac0();
    func_0x00010c01e4a0(puVar6);
    func_0x00010c1c7d80(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0300;
    _objc_alloc(PTR_PTR_1126c0300);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdc80();
    fVar18 = (float)(double)CONCAT44(uVar20,fVar18);
    uVar20 = 0;
    func_0x00010c0138c0(fVar18,puVar6);
    func_0x00010c1c7ee0(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126c0308;
    _objc_alloc(PTR_PTR_1126c0308);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48220();
    func_0x00010bff91e0(puVar6);
    func_0x00010c180c20(puVar17);
    _objc_release(puVar6);
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126d9d08;
    _objc_alloc_init(PTR_PTR_1126d9d08);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf365c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3840();
    func_0x00010c19afc0(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf365c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdd40();
    func_0x00010c1c7f80((float)(double)CONCAT44(uVar20,fVar18),puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf365c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cda00();
    func_0x00010c1c7ce0(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010bef2f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf365c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cd9e0();
    func_0x00010c1c7cc0(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c17b4c0(puVar17);
    _objc_release(puVar6);
  }
  _objc_release(param_2);
  func_0x00010c163900(puVar3);
  _objc_release(puVar17);
  func_0x00010bf21060();
  func_0x00010c173b80(puVar3);
  func_0x00010bf56140(param_2);
  func_0x00010c185140(puVar3);
  puVar17 = PTR_PTR_1126d9d10;
  _objc_opt_new();
  func_0x00010bf26d80(param_2);
  func_0x00010c19f900(puVar17);
  func_0x00010c1636a0(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  func_0x00010c1b6460(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar13 = 1;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d3c80();
  func_0x00010c1ae9a0(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c0308;
  _objc_alloc(PTR_PTR_1126c0308);
  puVar7 = param_2;
  func_0x00010c26a3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0703c0();
  func_0x00010bff91e0(puVar6);
  func_0x00010c1b0520(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar6 = PTR_PTR_1126c0320;
  _objc_alloc(PTR_PTR_1126c0320);
  func_0x00010c01e4a0();
  func_0x00010c1cf8e0(puVar1);
  _objc_release(puVar6);
  puVar6 = param_2;
  func_0x00010c120400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = param_2;
    func_0x00010c120400(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    FUN_10848b3f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195be0(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  func_0x00010c218f40(puVar1);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  puVar6 = PTR_PTR_1126c0350;
  _objc_alloc(PTR_PTR_1126c0350);
  func_0x00010c01e4e0();
  func_0x00010c185760(puVar1);
  _objc_release(puVar6);
  if (in_stack_00000020 != 0) {
    puVar6 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c0b4ca0(in_stack_00000020);
    func_0x00010c01e4e0(puVar6);
    func_0x00010c185840(puVar1);
    _objc_release(puVar6);
  }
  if (in_stack_00000028 != 0) {
    puVar6 = PTR_PTR_1126c0350;
    _objc_alloc(PTR_PTR_1126c0350);
    func_0x00010c0b4ca0(in_stack_00000028);
    func_0x00010c01e4e0(puVar6);
    func_0x00010c162fc0(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(puVar17);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar13);
    _objc_retain(uVar12);
    puVar2 = param_2;
    func_0x00010bef4240();
    FUN_1084984a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    puVar1 = PTR_PTR_1126d9d18;
    _objc_alloc(PTR_PTR_1126d9d18);
    puVar3 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126b92f0;
      func_0x00010bfe6000(PTR_PTR_1126b92f0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar17 = PTR_PTR_1126b8da0;
    func_0x00010c115b80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    func_0x00010c2804a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1820(puVar1);
    _objc_release(uVar12);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar17);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b90d4; end: 1084b93d7;  */

void FUN_1084b90d4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010bef4240();
  FUN_1084984a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126d9d18;
  _objc_alloc(PTR_PTR_1126d9d18);
  puVar3 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b92f0;
    func_0x00010bfe6000(PTR_PTR_1126b92f0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126b8da0;
  func_0x00010c115b80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2804a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1820(puVar2);
  _objc_release(param_2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084b93d8; end: 1084b943f; +[SCAdsInitRequest descriptor] */

void FUN_1084b93d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0210,
                        &PTR____CFConstantStringClassReference_110ede598,
                        &PTR_s_snapchat_ads_request_schema_11325d6b0,&PTR_DAT_11325d6c8,0xf,0x60,
                        0x1c);
    puRam000000011372bb30 = puVar1;
  }
  return;
}



/* Entry: 1084b9440; end: 1084b94a7; +[SCAdsMockAdRequestParams descriptor] */

void FUN_1084b9440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba02b0,
                        &PTR____CFConstantStringClassReference_110ede5b8,
                        &PTR_s_snapchat_ads_request_schema_11325d8a8,&PTR_DAT_11325d8c0,3,0xc,0x1c);
    puRam000000011372bb38 = puVar1;
  }
  return;
}



/* Entry: 1084b94a8; end: 1084b9593;  */

undefined8 FUN_1084b94a8(long param_1)

{
  if (param_1 - 1U < 0xf) {
    return *(undefined8 *)(&UNK_10df308e0 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1084b9594; end: 1084b99ef;  */

void FUN_1084b9594(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9d20;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010bf428e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2415a0();
  func_0x00010c2047e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf428e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  func_0x00010c215e20(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf428e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0xffffffffffffffff;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_1084b99f0;
  uStack_c0 = 0x1084b9a00;
  uStack_b8 = 0;
  uVar2 = param_1;
  func_0x00010c27dd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0c0da0(uVar2);
  _objc_release(uVar2);
  func_0x00010c21acc0(puVar1);
  func_0x00010c1d15a0(puVar1);
  if (puStack_d8[5] != 0) {
    func_0x00010c199e00(puVar1);
  }
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b99f0; end: 1084b9a73;  */

void FUN_1084b99f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1084b9a74; end: 1084b9abb;  */

void FUN_1084b9a74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xb;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084b9abc; end: 1084b9bd3;  */

void FUN_1084b9abc(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1084b9bd4; end: 1084b9d1b;  */

void FUN_1084b9bd4(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9d28;
  _objc_opt_new(PTR_PTR_1126d9d28);
  lVar2 = param_3;
  func_0x00010bf9a440();
  FUN_1084b9d1c();
  lVar3 = param_3;
  func_0x00010bf428e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2415a0();
  func_0x00010c2047e0(puVar1,param_4,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf428e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  func_0x00010c215e20(puVar1,param_4,(long)param_1);
  _objc_release(lVar3);
  func_0x00010c21acc0(puVar1,param_4,lVar2);
  func_0x00010c09ea00(param_3);
  func_0x00010c1def80(puVar1);
  func_0x00010c09ea00(param_3);
  func_0x00010c1defa0(param_2,puVar1);
  lVar3 = param_3;
  func_0x00010bf428e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar1,param_4,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar2 == 0x16) {
    lVar2 = param_3;
    func_0x00010c2648c0();
    uVar5 = lVar2 - 1;
    if (3 < uVar5) {
      uVar5 = 0xffffffffffffffff;
    }
    func_0x00010c199e60(puVar1,param_4,uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084b9d1c; end: 1084b9d3f;  */

undefined8 FUN_1084b9d1c(long param_1)

{
  if (param_1 - 1U < 0x18) {
    return *(undefined8 *)(&UNK_10df30c60 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1084b9d40; end: 1084b9f7f;  */

void FUN_1084b9d40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release();
  }
  else {
    _objc_release();
  }
  puVar2 = PTR_PTR_1126d9d20;
  _objc_opt_new(PTR_PTR_1126d9d20);
  func_0x00010c21acc0();
  lVar1 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
  }
  func_0x00010c2047e0(puVar2,param_2,uVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)*(double *)(lVar1 + 0x78);
  }
  func_0x00010c215e20(puVar2,param_2,lVar4);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x80);
  }
  _objc_retain(uVar3);
  func_0x00010c206c40(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(lVar1 + 8);
  }
  func_0x00010c1d15a0(puVar2,param_2,bVar5 & 1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = *(long *)(lVar1 + 0x30) - 1;
    if (2 < uVar6) {
      uVar6 = 0xffffffffffffffff;
    }
  }
  func_0x00010c16b2c0(puVar2,param_2,uVar6);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  _objc_retain(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = param_1;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
    }
    _objc_retain(uVar3);
    func_0x00010c199e00(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084b9f80; end: 1084ba197;  */

void FUN_1084b9f80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9d28;
  _objc_opt_new(PTR_PTR_1126d9d28);
  lVar2 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
  }
  FUN_1084b9d1c();
  _objc_release(lVar2);
  func_0x00010c21acc0(puVar1,param_2,lVar3);
  lVar2 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x50);
  }
  func_0x00010c2047e0(puVar1,param_2,uVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)*(double *)(lVar2 + 0x78);
  }
  func_0x00010c215e20(puVar1,param_2,lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x80);
  }
  _objc_retain(uVar4);
  func_0x00010c206c40(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
  }
  _objc_retain(uVar4);
  func_0x00010bf885a0(uVar4);
  func_0x00010c1def80(puVar1);
  _objc_release(uVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c2772e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
  }
  _objc_retain(uVar4);
  func_0x00010bf885a0(uVar4);
  func_0x00010c1defa0(puVar1);
  _objc_release(uVar4);
  _objc_release(lVar2);
  if (lVar3 == 0x16) {
    lVar3 = param_1;
    func_0x00010c2772e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      uVar6 = *(long *)(lVar3 + 0x68) - 1;
      if (3 < uVar6) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    func_0x00010c199e60(puVar1,param_2,uVar6);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084ba198; end: 1084ba337;  */

void FUN_1084ba198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d9d40;
  _objc_retain();
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain(uVar5);
  func_0x00010c197860(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (uVar4 = *(long *)(lVar2 + 0x18) - 1, 5 < uVar4)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(&UNK_10df30d70 + uVar4 * 8);
  }
  func_0x00010c197d00(puVar1,param_2,uVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
  }
  func_0x0001084c0d70();
  _objc_release(lVar2);
  func_0x000108534aa8(uVar5);
  func_0x00010c222c00(puVar1,param_2,uVar5);
  lVar2 = param_1;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (uVar4 = *(long *)(lVar2 + 0x38) - 1, 5 < uVar4)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(&UNK_10df30da0 + uVar4 * 8);
  }
  func_0x00010c211ba0(puVar1,param_2,uVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)*(double *)(lVar2 + 0x78);
  }
  func_0x00010c215e20(puVar1,param_2,lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084ba338; end: 1084baa07;  */

void FUN_1084ba338(undefined *param_1)

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
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9d30;
  _objc_opt_new(PTR_PTR_1126d9d30);
  puVar2 = param_1;
  func_0x00010bef5de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c23ce80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf42b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bef5de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c29c0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar2);
  puVar2 = puVar5;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar5);
  func_0x00010c264640(puVar4);
  func_0x00010c210580(puVar1);
  func_0x00010c0b5240(puVar4);
  func_0x00010c173420(puVar1);
  func_0x00010c067fc0();
  _objc_release(puVar2);
  func_0x00010c16b2c0(puVar1);
  puVar2 = param_1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef60a0();
  if (puVar3 == (undefined *)0x3) {
    puVar3 = param_1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c067c20();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar5 & 1) != 0) goto LAB_1084ba9d4;
    _objc_retain(param_1);
    puVar2 = param_1;
    func_0x00010bef5de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2a4720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar5;
    func_0x00010c2a40e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bef5de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar6 = puVar2;
    func_0x00010c23ce80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf42b60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bef3340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d9d38;
    _objc_opt_new(PTR_PTR_1126d9d38);
    func_0x00010bf0d540(puVar8);
    func_0x00010c16b300(puVar2);
    func_0x00010bfb1460(puVar8);
    func_0x00010c19d0c0(puVar2);
    func_0x00010c195560(puVar2);
    puVar6 = puVar3;
    func_0x00010bf87ae0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c190cc0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf87be0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c190d60(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf87c80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c190da0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf87d20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c190dc0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bf87d60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c190e20(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bfb1020(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19cec0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bfbb900(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1a1540(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bfdce60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1a6f80(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c09bfa0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1be7e0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c0d6c00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cba00(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c13bca0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1ed0e0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c15f4a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1fd5e0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c15f4e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1fd600(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c15f500(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd640(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bfb1440(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19d0a0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bfb1480(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19d0e0(puVar2);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bfbca00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c1a1960(puVar2);
    func_0x00010bfd75c0(puVar5);
    func_0x00010c1a6000(puVar2);
    func_0x00010bfd75e0(puVar5);
    func_0x00010c1a6020(puVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c0f1ee0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar6);
    _objc_release(puVar9);
    puVar9 = puVar3;
    func_0x00010c13b060(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa140(puVar6);
    _objc_release(puVar9);
    puVar9 = puVar6;
    func_0x00010bf446e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8840(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar5);
    func_0x00010c2253c0(puVar1);
  }
  _objc_release(puVar2);
LAB_1084ba9d4:
  _objc_release(puVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084baa08; end: 1084baa2b;  */

undefined8 FUN_1084baa08(long param_1)

{
  if (param_1 - 1U < 0x17) {
    return *(undefined8 *)(&UNK_10df30dd0 + (param_1 - 1U) * 8);
  }
  return 0;
}



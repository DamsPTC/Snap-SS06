/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109005d70; end: 109005d77; -[SCLegacyItemDownloaderHandler cancelableItem] */

undefined8 FUN_109005d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109005d78; end: 109005d7f; -[SCLegacyItemDownloaderHandler cancelled] */

undefined1 FUN_109005d78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109005d80; end: 109005d87; -[SCLegacyItemDownloaderHandler callbackQueue] */

undefined8 FUN_109005d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109005d88; end: 109005d8f; -[SCLegacyItemDownloaderHandler completion] */

undefined8 FUN_109005d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109005d90; end: 109005d97; -[SCLegacyItemDownloaderHandler failure] */

undefined8 FUN_109005d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109005d98; end: 109005d9f; -[SCLegacyItemDownloaderHandler item] */

undefined8 FUN_109005d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109005da0; end: 109005da7; -[SCLegacyItemDownloaderHandler requestKey] */

undefined8 FUN_109005da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109005da8; end: 109005daf; -[SCLegacyItemDownloaderHandler setRequestKey:] */

void FUN_109005da8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109005db0; end: 109005e17; -[SCLegacyItemDownloaderHandler .cxx_destruct] */

void FUN_109005db0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 109005e18; end: 109005e43; +[SCGrapheneImageDownloaderMetric retrieveImagesContentManager] */

void FUN_109005e18(void)

{
  _objc_alloc(PTR_PTR_1126dce40);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109005e44; end: 109005e6f; +[SCGrapheneImageDownloaderMetric retrieveImagesLatency] */

void FUN_109005e44(void)

{
  _objc_alloc(PTR_PTR_1126dce40);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109005e70; end: 109005f0f; -[SCGrapheneImageDownloaderMetric description] */

void FUN_109005e70(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f16d38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f16d38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ffd18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 109005f10; end: 10900605b; -[SCGrapheneRegistry imageDownloaderGraphene] */

void FUN_109005f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x109005f98;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113730658 != -1) {
    func_0x000107c27d9c(0x113730658,&puStack_48);
  }
  uVar1 = uRam0000000113730650;
  _objc_retain(uRam0000000113730650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10900605c; end: 10900607f;  */

undefined ** FUN_10900605c(uint param_1)

{
  if (param_1 < 0x31) {
    return (undefined **)(&PTR_PTR_110ad30c0)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 109006080; end: 10900661b;  */

undefined4 FUN_109006080(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8718;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df8718,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x14;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x2d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f16d98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16d98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x29;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x20;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea458,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x11;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f16db8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16db8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x12;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f120d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f120d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x16;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110db4518;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db4518,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x1a;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e20e18;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e20e18,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x2b;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110dbee78;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbee78,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x1d;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110dd7038;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd7038,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x17;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f16dd8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16dd8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x19;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f16df8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16df8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x18;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e1cc58;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e1cc58,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 7;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f16e18;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16e18,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x25;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6f8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbb6f8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x24;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110e57d18;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e57d18,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 8;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110e2ac58;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e2ac58,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x1e;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e3ddf8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x27;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f16e38;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e38,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 4;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbaad8,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 9;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e33d18;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e33d18,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x2c;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e60f18;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e60f18,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 10;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ead758;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ead758,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x13;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16e58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e7d318;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e7d318,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 5;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16e78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dbf098;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbf098,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16e98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 1;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e57fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e57fd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16fd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dd50f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dd50f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16eb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16eb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 6;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16ed8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16ed8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xb;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dba418;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dba418,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16ef8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16ef8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x15;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dec738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dec738,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xc;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x10;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xe;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xd;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16fb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16fb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xf;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e135d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e135d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e41bb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e41bb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110df8ff8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110df8ff8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 3;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e71958;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e71958,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110efcd98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110efcd98,
                                                  param_2,param_1);
                                                  uVar2 = 0x30;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0xffffffff;
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
                                                  goto LAB_10900657c;
                                                  }
                                                  }
                                                  uVar2 = 2;
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
LAB_10900657c:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10900661c; end: 1090066bf;  */

undefined ** FUN_10900661c(long param_1)

{
  if (param_1 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110ad3248)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1090066c0; end: 109006733; -[SCNetworkImageResizeController initWithImageProcessingPerformer:] */

undefined1 * FUN_1090066c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109006734; end: 10900678f; -[SCNetworkImageResizeController updateImageViewBounds:] */

void FUN_109006734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _CGRectGetWidth();
  *(undefined8 *)(param_5 + 8) = uVar1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  return;
}



/* Entry: 109006790; end: 109006863; -[SCNetworkImageResizeController resizeImageIfNeededWithImage:] */

void FUN_109006790(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_5);
  uVar2 = param_5;
  if ((*(byte *)(param_3 + 0x20) & 1) != 0) {
    dVar3 = *(double *)(param_3 + 0x38);
    dVar4 = *(double *)(param_3 + 0x40);
    dVar5 = *(double *)PTR__CGSizeZero_110347620;
    dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    bVar1 = false;
    if ((dVar3 == dVar5) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar6))) {
      bVar1 = dVar4 == dVar6;
    }
    if (bVar1) {
      dVar3 = *(double *)(param_3 + 8);
      dVar4 = *(double *)(param_3 + 0x10);
    }
    func_0x00010c23d0a0(param_5);
    bVar1 = false;
    if ((param_1 == dVar3) && (bVar1 = false, !NAN(param_2) && !NAN(dVar4))) {
      bVar1 = param_2 == dVar4;
    }
    if (!bVar1) {
      bVar1 = false;
      if ((dVar5 == dVar3) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar4))) {
        bVar1 = dVar6 == dVar4;
      }
      if (!bVar1) {
        func_0x00010b6918b0(dVar3,dVar4,*(undefined8 *)(param_3 + 0x28),param_5,
                            *(undefined8 *)(param_3 + 0x30),*(undefined1 *)(param_3 + 0x21));
        goto LAB_109006844;
      }
    }
    if (0.0 < *(double *)(param_3 + 0x28)) {
      func_0x00010b691a48(param_5);
      goto LAB_109006844;
    }
  }
  _objc_retain(param_5);
LAB_109006844:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109006864; end: 10900686b; -[SCNetworkImageResizeController resizeImageAutomatically] */

undefined1 FUN_109006864(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10900686c; end: 109006873; -[SCNetworkImageResizeController setResizeImageAutomatically:] */

void FUN_10900686c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 109006874; end: 10900687b; -[SCNetworkImageResizeController truncateYaxisFromBottom] */

undefined1 FUN_109006874(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10900687c; end: 109006883; -[SCNetworkImageResizeController setTruncateYaxisFromBottom:] */

void FUN_10900687c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 109006884; end: 10900688b; -[SCNetworkImageResizeController preferredImageSize] */

undefined1  [16] FUN_109006884(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 10900688c; end: 109006893; -[SCNetworkImageResizeController setPreferredImageSize:] */

void FUN_10900688c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x38) = param_1;
  *(undefined8 *)(param_3 + 0x40) = param_2;
  return;
}



/* Entry: 109006894; end: 10900689b; -[SCNetworkImageResizeController cornerRadius] */

undefined8 FUN_109006894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10900689c; end: 1090068a3; -[SCNetworkImageResizeController setCornerRadius:] */

void FUN_10900689c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 1090068a4; end: 1090068ab; -[SCNetworkImageResizeController contentMode] */

undefined8 FUN_1090068a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1090068ac; end: 1090068b3; -[SCNetworkImageResizeController setContentMode:] */

void FUN_1090068ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1090068b4; end: 1090068bf; -[SCNetworkImageResizeController .cxx_destruct] */

void FUN_1090068b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1090068c0; end: 1090068cb; +[SCNetworkImageViewSynchronizer announcerIdentifier] */

undefined ** FUN_1090068c0(void)

{
  return &PTR____CFConstantStringClassReference_110f17098;
}



/* Entry: 1090068cc; end: 1090068d3; -[SCNetworkImageViewSynchronizer addListener:] */

void FUN_1090068cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1090068d4; end: 1090068db; -[SCNetworkImageViewSynchronizer removeListener:] */

void FUN_1090068d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1090068dc; end: 109006947; -[SCNetworkImageViewSynchronizer initWithNetworkImageViewsCount:] */

undefined1 * FUN_1090068dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffd28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109006948; end: 1090069c7; -[SCNetworkImageViewSynchronizer triggerSync] */

void FUN_109006948(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)(param_1 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(long *)(param_1 + 0x18) == (long)*(int *)(param_1 + 0x10)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f17078,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1090069c8; end: 1090069d3; -[SCNetworkImageViewSynchronizer .cxx_destruct] */

void FUN_1090069c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090069d4; end: 109006a87;  */

void FUN_1090069d4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730668 != -1) {
    func_0x000107c27d9c(0x113730668,&PTR___NSConcreteGlobalBlock_110ad3278);
  }
  uVar1 = uRam0000000113730660;
  _objc_retain(uRam0000000113730660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109006a88; end: 109006a8f; +[SCNetworkImageDownloadInfo bitmojiInfoWithContexts:feature:scale:imageType:canUsePrior:] */

void FUN_109006a88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bitmojiInfoWithContexts_feature__1125a4870);
  return;
}



/* Entry: 109006a90; end: 109006aaf; +[SCNetworkImageDownloadInfo bitmojiSelfieInfoWithContexts:feature:type:scale:canUsePrior:selfieIdModifier:] */

void FUN_109006a90(void)

{
  func_0x00010bf1c120();
  return;
}



/* Entry: 109006ab0; end: 109006c0b;  */

void FUN_109006ab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_109006c0c;
  uStack_40 = 0x109006c1c;
  uStack_38 = 0;
  func_0x00010c0bf3e0(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109006c0c; end: 109006c23;  */

void FUN_109006c0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109006c24; end: 109006c63;  */

void FUN_109006c24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109006c64; end: 109006c9f;  */

void FUN_109006c64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109006ca0; end: 109006d47;  */

void FUN_109006ca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf26940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e380();
  _objc_release(param_2);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109006d48; end: 109006e2b;  */

undefined1 FUN_109006d48(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c0bf3e0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 109006e2c; end: 109006e4b;  */

void FUN_109006e2c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 109006e4c; end: 109006f93;  */

byte FUN_109006e4c(long param_1)

{
  byte bVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    func_0x00010c0bf3e0(param_1);
    bVar1 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_1);
  return bVar1 & 1;
}



/* Entry: 109006f94; end: 1090070c3;  */

void FUN_109006f94(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  if (lVar1 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
  return;
}



/* Entry: 1090070c4; end: 1090070db;  */

void FUN_1090070c4(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1090070dc; end: 109007197;  */

void FUN_1090070dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf26940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar2 = param_2, func_0x00010c26e380(), lVar2 == 0)) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_2;
    func_0x00010bf88ce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      _objc_release();
      _objc_release(lVar1);
      goto LAB_10900715c;
    }
    lVar2 = param_2;
    func_0x00010c242080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_10900715c;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
LAB_10900715c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109007198; end: 10900728f;  */

void FUN_109007198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109006c0c;
  uStack_30 = 0x109006c1c;
  uStack_28 = 0;
  func_0x00010c0bf3e0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109007290; end: 10900729b;  */

void FUN_109007290(void)

{
  return;
}



/* Entry: 10900729c; end: 1090072d3;  */

void FUN_10900729c(long param_1,undefined8 param_2)

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



/* Entry: 1090072d4; end: 1090072d7;  */

void FUN_1090072d4(void)

{
  return;
}



/* Entry: 1090072d8; end: 1090073b7;  */

byte FUN_1090072d8(long param_1)

{
  byte bVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bf3e0(param_1);
    bVar1 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(param_1);
  return bVar1 & 1;
}



/* Entry: 1090073b8; end: 1090073db;  */

void FUN_1090073b8(void)

{
  return;
}



/* Entry: 1090073dc; end: 1090074d3;  */

void FUN_1090073dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109006c0c;
  uStack_30 = 0x109006c1c;
  uStack_28 = 0;
  func_0x00010c0bf3e0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090074d4; end: 109007513;  */

void FUN_1090074d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109007514; end: 109007523;  */

void FUN_109007514(void)

{
  return;
}



/* Entry: 109007524; end: 10900752f; +[SCNetworkImageView announcerIdentifier] */

undefined ** FUN_109007524(void)

{
  return &PTR____CFConstantStringClassReference_110f17118;
}



/* Entry: 109007530; end: 10900753f; -[SCNetworkImageView addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8cc),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 109007540; end: 10900754f; -[SCNetworkImageView removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8cc),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 109007550; end: 10900770f; -[SCNetworkImageView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109007550(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ffd30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277f8d0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar4);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f8d4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f8d4) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f8cc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f8cc) = puVar2;
    _objc_release();
    FUN_1090069d4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f8d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f8d8) = uVar4;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126dce48;
    _objc_alloc();
    func_0x00010c01cd60();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f8dc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f8dc) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277f8e0) = 0;
    func_0x00010c182220(puVar1);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11277f8e4) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109007710; end: 109007753; -[SCNetworkImageView dealloc] */

void FUN_109007710(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddf220();
  puStack_28 = PTR_PTR_1126ffd30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109007754; end: 1090077c7; -[SCNetworkImageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007754(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffd30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277f8d0));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8dc);
  func_0x00010bf20c00(param_1);
  func_0x00010c286680(uVar1);
  return;
}



/* Entry: 1090077c8; end: 109007807; -[SCNetworkImageView displayedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090077c8(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277f8e8) != 0) {
    func_0x00010bfe6ac0(*(undefined8 *)(param_1 + _DAT_11277f8d0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109007808; end: 109007813; -[SCNetworkImageView setNetworkImage:] */

void FUN_109007808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cc230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setNetworkImage_imageProcessingB_112650ab0,param_3,0,0);
  return;
}



/* Entry: 109007814; end: 109007ceb; -[SCNetworkImageView setNetworkImage:imageProcessingBlock:downloadCompletion:imageSetCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007814(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bddf220(param_1);
  lVar6 = param_6;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8ec);
  *(long *)(param_1 + _DAT_11277f8ec) = lVar6;
  _objc_release(uVar2);
  lVar6 = param_5;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8f0);
  *(long *)(param_1 + _DAT_11277f8f0) = lVar6;
  _objc_release(uVar2);
  uVar2 = param_4;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277f8f4);
  *(undefined8 *)(param_1 + _DAT_11277f8f4) = uVar2;
  _objc_release(uVar3);
  lVar6 = (long)_DAT_11277f8f8;
  puVar4 = *(undefined **)(param_1 + lVar6);
  _objc_retain(puVar4);
  if (param_3 == (undefined *)0x0) {
    func_0x00010bea5580(param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8d4);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_109007cec;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(puVar4);
    puStack_78 = puVar4;
    func_0x00010c0f7fc0(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8fc);
    *(undefined8 *)(param_1 + _DAT_11277f8fc) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f900);
    *(undefined8 *)(param_1 + _DAT_11277f900) = 0;
    _objc_release(uVar2);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0,0);
    }
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    goto LAB_109007b6c;
  }
  puVar5 = *(undefined **)(param_1 + _DAT_11277f8e8);
  _objc_retain(param_3);
  _objc_retain(puVar5);
  if (param_3 == puVar5) {
    _objc_release(puVar5);
    _objc_release(param_3);
LAB_109007a1c:
    func_0x00010bec9960(param_1);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,param_3,0);
    }
    goto LAB_109007b6c;
  }
  if (puVar5 == (undefined *)0x0) {
    _objc_release();
  }
  else {
    puVar1 = param_3;
    func_0x00010c071ae0();
    _objc_release(puVar5);
    _objc_release(param_3);
    if ((int)puVar1 != 0) goto LAB_109007a1c;
  }
  _objc_retain(puVar4);
  if (puVar4 == param_3) {
    _objc_release();
LAB_109007ac4:
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + _DAT_11277f8fc) != 0) {
      func_0x00010c1bec20(param_1);
      func_0x00010bea6360(param_1);
    }
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,param_3,puVar5);
    }
    if (param_6 != 0) {
      puVar1 = param_3;
      FUN_109007198(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,puVar1);
      _objc_release(puVar1);
    }
  }
  else {
    puVar5 = puVar4;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    if ((int)puVar5 != 0) goto LAB_109007ac4;
    puVar5 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar5;
    _objc_release(uVar2);
    puVar5 = param_3;
    FUN_109007198();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      func_0x00010bea5580(param_1);
      if (*(long *)(param_1 + _DAT_11277f904) == 0) {
        if (param_5 != 0) {
          (**(code **)(param_5 + 0x10))(param_5,param_3,0);
        }
      }
      else {
        _objc_initWeak(auStack_68,param_1);
        uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8d4);
        _objc_copyWeak(auStack_a0,auStack_68);
        _objc_retain(param_3);
        _objc_retain(puVar4);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_6);
        func_0x00010c0f7fc0(uVar2);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(puVar4);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_a0);
        _objc_destroyWeak(auStack_68);
      }
    }
    else {
      func_0x00010bdcda60(param_1);
    }
  }
  _objc_release(puVar5);
LAB_109007b6c:
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109007cec; end: 109007d5f;  */

void FUN_109007cec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109007d60; end: 109007d67; -[SCNetworkImageView setNetworkImage:imageProcessingBlock:completion:] */

void FUN_109007d60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cc250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNetworkImage_imageProcessingB_112650ab8);
  return;
}



/* Entry: 109007d68; end: 109007ddf; -[SCNetworkImageView setTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setTintColor__112663280;
  puStack_38 = PTR_PTR_1126ffd30;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11277f8d0));
  _objc_release(param_3);
  return;
}



/* Entry: 109007de0; end: 109007e2f; -[SCNetworkImageView setContentMode:] */

/* WARNING: Possible PIC construction at 0x000109007e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109007e14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277f908) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c182230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_setContentMode__11263e2a8);
  return;
}



/* Entry: 109007e30; end: 109007e3f; -[SCNetworkImageView contentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109007e30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f908);
}



/* Entry: 109007e40; end: 109007e4f; -[SCNetworkImageView setPreferredImageSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e0050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_setPreferredImageSize__112655a38);
  return;
}



/* Entry: 109007e50; end: 109007e5f; -[SCNetworkImageView preferredImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_preferredImageSize_11261f520);
  return;
}



/* Entry: 109007e60; end: 109007e6f; -[SCNetworkImageView setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1842f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_setCornerRadius__11263ead8);
  return;
}



/* Entry: 109007e70; end: 109007e7f; -[SCNetworkImageView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf525b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_cornerRadius_1125b2310);
  return;
}



/* Entry: 109007e80; end: 109007e8f; -[SCNetworkImageView setResizeImageAutomatically:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ec950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_setResizeImageAutomatically__112658c78)
  ;
  return;
}



/* Entry: 109007e90; end: 109007e9f; -[SCNetworkImageView setTruncateYaxisFromBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21a650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_setTruncateYaxisFromBottom__1126643b8);
  return;
}



/* Entry: 109007ea0; end: 109007eaf; -[SCNetworkImageView resizeImageAutomatically] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_resizeImageAutomatically_11262c2a8);
  return;
}



/* Entry: 109007eb0; end: 109007f0f; -[SCNetworkImageView setImageSynchronizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277f900;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109007f10; end: 109007f53; -[SCNetworkImageView _cancelImageDownloadingForPreviousImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007f10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f90c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf2dba0();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 109007f54; end: 109008207; -[SCNetworkImageView _loadNetworkImage:previousImage:isRetryAttempt:imageProcessingBlock:completion:imageSetCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109007f54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010bdda960(param_2);
  _CACurrentMediaTime();
  func_0x00010c0bf3e0(param_4);
  lVar5 = (long)_DAT_11277f8d4;
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_80,param_2);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11277f904);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10900821c;
  puStack_c8 = &UNK_110ad35b8;
  uStack_c0 = uVar3;
  _objc_copyWeak(auStack_98,auStack_80);
  _objc_retain(param_8);
  uStack_b0 = param_8;
  uStack_90 = param_1;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_7);
  uStack_a8 = param_7;
  uStack_88 = param_6;
  _objc_retain(param_9);
  uStack_a0 = param_9;
  _objc_retain(param_4);
  _objc_copyWeak(auStack_e8,auStack_80);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09bc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_11277f90c);
  *(undefined8 *)(param_2 + _DAT_11277f90c) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_e8);
  _objc_release(param_4);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 109008208; end: 10900821b;  */

void FUN_109008208(void)

{
  return;
}



/* Entry: 10900821c; end: 1090085bf;  */

void FUN_10900821c(double param_1,long param_2,ulong param_3,long param_4,undefined1 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  double dStack_108;
  double dStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1090085c0;
  puStack_98 = &UNK_1108434b0;
  _objc_copyWeak(auStack_90,param_2 + 0x48);
  func_0x00010c0f7fc0(uVar7);
  if (param_4 == 0) {
    _objc_retain(param_3);
    puVar3 = PTR_PTR_1126b4860;
    _objc_opt_class(PTR_PTR_1126b4860);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x1090085ec;
    puStack_d8 = &UNK_110857fd0;
    _objc_copyWeak(auStack_b8,param_2 + 0x48);
    _objc_retain(uVar1);
    uStack_d0 = uVar1;
    _objc_retain(puVar3);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    puStack_c8 = puVar3;
    _objc_retain(uVar7);
    uStack_c0 = uVar7;
    func_0x000107c312cc("APPSTORE",&puStack_f0);
    _objc_release(uStack_c0);
    _objc_release(puStack_c8);
    _objc_release(uStack_d0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  _CACurrentMediaTime();
  dVar10 = *(double *)(param_2 + 0x50);
  dVar9 = param_1;
  func_0x00010c0bf3e0(*(undefined8 *)(param_2 + 0x28));
  lVar5 = *(long *)(param_2 + 0x38);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    param_4 = lVar5;
  }
  lVar5 = param_2 + 0x48;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010be91fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  _CACurrentMediaTime();
  puStack_150 = puVar2;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_109008638;
  puStack_138 = &UNK_110ad3588;
  dStack_108 = dVar9;
  _objc_copyWeak(auStack_110,param_2 + 0x48);
  _objc_retain(uVar1);
  uStack_130 = uVar1;
  _objc_retain(lVar6);
  uStack_f8 = *(undefined1 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  lStack_128 = lVar6;
  dStack_100 = param_1 - dVar10;
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  uStack_120 = uVar8;
  uStack_f7 = param_5;
  _objc_retain(uVar7);
  uStack_118 = uVar7;
  func_0x000107c312cc("APPSTORE",&puStack_150);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  _objc_destroyWeak(auStack_110);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 1090085c0; end: 109008623;  */

void FUN_1090085c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109008624; end: 109008637;  */

void FUN_109008624(void)

{
  return;
}



/* Entry: 109008638; end: 10900867b;  */

void FUN_109008638(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2aa20(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10900867c; end: 10900884f;  */

void FUN_10900867c(long param_1,ulong param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109008850;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  func_0x00010c0f7fc0(uVar5);
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b4860;
  _objc_opt_class(PTR_PTR_1126b4860);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  uVar1 = param_2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_b8 = puVar2;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10900887c;
  puStack_a0 = &UNK_110857fd0;
  _objc_copyWeak(auStack_80,param_1 + 0x38);
  _objc_retain(uVar1);
  uStack_98 = uVar1;
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puStack_90 = param_3;
  _objc_retain(uVar5);
  uStack_88 = uVar5;
  func_0x000107c312cc("APPSTORE",&puStack_b8);
  _objc_release(uStack_88);
  _objc_release(puStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 109008850; end: 1090088b3;  */

void FUN_109008850(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090088b4; end: 1090088cb; -[SCNetworkImageView _clearImageDownloadCancellable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090088b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f90c);
  *(undefined8 *)(param_1 + _DAT_11277f90c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090088cc; end: 109008ad3; -[SCNetworkImageView _handleImageLoaderCompletionHandlerWithRequestedImage:resultImage:isRetryAttempt:downloadLatency:completion:isFromCache:imageSetCompletion:] */

void FUN_1090088cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,long param_7,undefined1 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_initWeak(auStack_80,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_109008ad4;
  puStack_b0 = &UNK_110845158;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_4);
  uStack_a8 = param_4;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  uStack_88 = param_1;
  _objc_retain(param_9);
  uStack_98 = param_9;
  func_0x00010bea6360(param_2);
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,param_4,0);
  }
  uVar2 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x109008b54;
  puStack_e8 = &UNK_11085da78;
  _objc_copyWeak(auStack_e0,auStack_80);
  uStack_d8 = param_1;
  uStack_d0 = param_8;
  func_0x000107c27d8c(uVar2,&puStack_100);
  _objc_release(uVar2);
  if (param_6 != 0) {
    func_0x00010be55700(param_2);
  }
  _objc_destroyWeak(auStack_e0);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 109008ad4; end: 109008c7f;  */

void FUN_109008ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  dVar5 = *(double *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock(uVar4);
  func_0x00010bee1660(lVar3,param_2,uVar1,uVar2,0.20000000298023224 < dVar5,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 109008c80; end: 109008e73; -[SCNetworkImageView _handleImageLoaderFailureHandlerWithRequestedImage:error:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109008c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_109008e74;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_88 = param_3;
  func_0x00010bea6360(param_1);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_3,param_4);
  }
  uVar2 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x109008ea8;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_78);
  func_0x000107c27d8c(uVar2,&puStack_d0);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8d4);
  _objc_copyWeak(auStack_d8,auStack_78);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109008e74; end: 109008f13;  */

void FUN_109008e74(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed7cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109008f14; end: 1090090f7; -[SCNetworkImageView _updateSuccessWithNetworkImage:image:animated:imageSetCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109008f14(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + _DAT_11277f8f8);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar3);
      goto LAB_1090090a8;
    }
    lVar1 = lVar3;
    func_0x00010c071ae0();
    _objc_release(param_3);
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_1090090a8;
  }
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1090090f8;
  puStack_80 = &UNK_110850cf8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  lStack_78 = param_3;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_6);
  ppuVar2 = &puStack_98;
  uStack_68 = param_6;
  _objc_retainBlock();
  if (param_5 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    func_0x00010c27ac60(0x3fc99999a0000000,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_1090090a8:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1090090f8; end: 1090091cb;  */

void FUN_1090090f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea82e0();
  _objc_release(lVar1);
  uVar2 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1090091cc;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  func_0x000107c27d8c(uVar2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1090091cc; end: 1090091ff;  */

void FUN_1090091cc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be875e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109009200; end: 10900924f; -[SCNetworkImageView _recordConsumeContentIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009200(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  FUN_1090073dc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1235c0(*(undefined8 *)(param_1 + _DAT_11277f904),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109009250; end: 1090092f7; -[SCNetworkImageView _updateFailureWithNetworkImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009250(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11277f8f8);
  _objc_retain(lVar2);
  _objc_retain(param_3);
  if (lVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar2);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar2);
      goto LAB_1090092e4;
    }
    lVar1 = lVar2;
    func_0x00010c071ae0(lVar2,param_2,param_3);
    _objc_release(param_3);
    _objc_release(lVar2);
    if ((int)lVar1 == 0) goto LAB_1090092e4;
  }
  func_0x00010bea5580(param_1);
LAB_1090092e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



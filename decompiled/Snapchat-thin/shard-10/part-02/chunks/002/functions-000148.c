/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cddc40; end: 107cddd9f; -[SCProfileChatMediaContentDownloadingLogger .cxx_destruct] */

void FUN_107cddc40(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cddda0; end: 107cde3ff;  */

undefined8 FUN_107cddda0(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) != 0) {
    uVar8 = 0;
    goto LAB_107cdde74;
  }
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) != 0) {
      uVar8 = 2;
      goto LAB_107cdde74;
    }
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) != 0) {
      uVar8 = 7;
      goto LAB_107cdde74;
    }
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if (((uVar3 & 1) == 0) && (uVar3 = uVar2, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x79;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x7b;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 10;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0xa4;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0xb;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0xd;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0xe;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0xf;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x10;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x21;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x17;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x18;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x19;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x11;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x12;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x14;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x1a;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x1d;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x1e;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0xd6;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x1f;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x48;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x51;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x2d;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) goto LAB_107cdde08;
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x6b;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar8 = 0x84;
        goto LAB_107cdde74;
      }
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar2;
        func_0x00010c0720c0();
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar2;
          func_0x00010c0720c0();
          if ((uVar3 & 1) == 0) {
            uVar3 = uVar2;
            func_0x00010c0720c0();
            if ((uVar3 & 1) == 0) {
              uVar3 = uVar2;
              func_0x00010c0720c0();
              if ((uVar3 & 1) == 0) {
                uVar3 = uVar2;
                func_0x00010c0720c0();
                if ((uVar3 & 1) == 0) {
                  uVar3 = uVar2;
                  func_0x00010c0720c0();
                  if ((uVar3 & 1) == 0) {
                    uVar3 = uVar2;
                    func_0x00010c0720c0();
                    if ((uVar3 & 1) == 0) {
                      uVar3 = uVar2;
                      func_0x00010c0720c0();
                      if ((uVar3 & 1) == 0) {
                        uVar3 = uVar2;
                        func_0x00010c0720c0();
                        if ((uVar3 & 1) == 0) {
                          uVar3 = uVar2;
                          func_0x00010c0720c0();
                          if ((uVar3 & 1) == 0) {
                            uVar3 = uVar2;
                            func_0x00010c0720c0();
                            if ((uVar3 & 1) == 0) {
                              uVar3 = uVar2;
                              func_0x00010c0720c0();
                              if ((uVar3 & 1) == 0) {
                                uVar3 = uVar2;
                                func_0x00010c0720c0();
                                if ((uVar3 & 1) == 0) {
                                  uVar3 = uVar2;
                                  func_0x00010c0720c0();
                                  if ((uVar3 & 1) == 0) {
                                    uVar3 = uVar2;
                                    func_0x00010c0720c0();
                                    if ((uVar3 & 1) == 0) {
                                      uVar3 = uVar2;
                                      func_0x00010c0720c0();
                                      if ((int)uVar3 == 0) {
                                        uVar3 = uVar2;
                                        func_0x00010c0720c0();
                                        if ((int)uVar3 == 0) {
                                          uVar3 = uVar2;
                                          func_0x00010c0720c0();
                                          if ((uVar3 & 1) == 0) {
                                            uVar3 = uVar2;
                                            func_0x00010c0720c0();
                                            uVar8 = 0xc;
                                            if ((int)uVar3 == 0) {
                                              uVar8 = 0xffffffffffffffff;
                                            }
                                          }
                                          else {
                                            uVar8 = 0xe2;
                                          }
                                          goto LAB_107cdde74;
                                        }
                                        uVar4 = param_1;
                                        func_0x00010beee2e0();
                                        _objc_retainAutoreleasedReturnValue();
                                        puVar5 = PTR_PTR_1126b1888;
                                        _objc_opt_class(PTR_PTR_1126b1888);
                                        uVar6 = uVar4;
                                        _objc_opt_isKindOfClass(uVar4,puVar5);
                                        uVar3 = uVar4;
                                        if ((uVar6 & 1) == 0) {
                                          uVar3 = 0;
                                        }
                                        _objc_retain(uVar3);
                                        _objc_release(uVar4);
                                        uVar4 = uVar3;
                                        func_0x00010c0fdba0();
                                        _objc_release(uVar3);
                                        bVar1 = uVar4 == 0x1e;
                                        uVar7 = 0x15;
                                        uVar8 = 0x76;
                                      }
                                      else {
                                        uVar4 = param_1;
                                        func_0x00010beee2e0();
                                        _objc_retainAutoreleasedReturnValue();
                                        puVar5 = PTR_PTR_1126cf760;
                                        _objc_opt_class(PTR_PTR_1126cf760);
                                        uVar6 = uVar4;
                                        _objc_opt_isKindOfClass(uVar4,puVar5);
                                        uVar3 = uVar4;
                                        if ((uVar6 & 1) == 0) {
                                          uVar3 = 0;
                                        }
                                        _objc_retain(uVar3);
                                        _objc_release(uVar4);
                                        uVar4 = uVar3;
                                        func_0x00010c262540();
                                        _objc_release(uVar3);
                                        bVar1 = (int)uVar4 == 0;
                                        uVar7 = 0x16;
                                        uVar8 = 0x75;
                                      }
                                      if (!bVar1) {
                                        uVar8 = uVar7;
                                      }
                                    }
                                    else {
                                      uVar8 = 0x94;
                                    }
                                  }
                                  else {
                                    uVar8 = 0x8f;
                                  }
                                }
                                else {
                                  uVar8 = 0x74;
                                }
                              }
                              else {
                                uVar8 = 0x8a;
                              }
                            }
                            else {
                              uVar8 = 0x89;
                            }
                          }
                          else {
                            uVar8 = 0x88;
                          }
                        }
                        else {
                          uVar8 = 0x87;
                        }
                      }
                      else {
                        uVar8 = 0x86;
                      }
                    }
                    else {
                      uVar8 = 0x85;
                    }
                  }
                  else {
                    uVar8 = 0x73;
                  }
                }
                else {
                  uVar8 = 0x71;
                }
              }
              else {
                uVar8 = 0x70;
              }
            }
            else {
              uVar8 = 0x6e;
            }
          }
          else {
            uVar8 = 0x6d;
          }
        }
        else {
          uVar8 = 0x6c;
        }
        goto LAB_107cdde74;
      }
    }
    uVar8 = 9;
  }
  else {
LAB_107cdde08:
    uVar8 = 1;
  }
LAB_107cdde74:
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar8;
}



/* Entry: 107cde400; end: 107cde4e3;  */

void FUN_107cde400(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = uVar1,
       func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebae78),
       (uVar2 & 1) == 0)) &&
      (uVar2 = uVar1,
      func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb7b18),
      (uVar2 & 1) == 0)) &&
     (uVar2 = uVar1,
     func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110eb7b38),
     (uVar2 & 1) == 0)) {
    uVar2 = param_1;
    func_0x000107cddd24();
    if ((uVar2 == 0xffffffffffffffff) &&
       (uVar2 = param_1, FUN_107cddda0(), uVar2 == 0xffffffffffffffff)) {
      _objc_retain(uVar1);
      uVar2 = uVar1;
    }
    else {
      func_0x00010bb17d74();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107cde4e4; end: 107cdeac3;  */

undefined8 FUN_107cde4e4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((uVar1 & 1) != 0) {
    uVar2 = 0;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebadb8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 1;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9158);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x20;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8c38);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x21;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9a58);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x15;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9a78);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x16;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9a98);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x17;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9ab8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x18;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9ad8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x19;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9af8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x11;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9b18);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x12;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9b38);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x14;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9b58);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x1a;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f124b8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x1d;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9b78);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x1e;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9bf8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0xd6;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9b98);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x1f;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9cd8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x29;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9cb8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x2b;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebacb8);
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x2c;
    goto LAB_107cde828;
  }
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb78b8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9178);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x30;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb7938);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x31;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb7838);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x33;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb7958);
    if ((uVar1 & 1) != 0) {
      uVar2 = 2;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb92f8);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x35;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebae18);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0xb;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebae38);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0xd;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9358);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb93f8),
        (uVar1 & 1) != 0)) ||
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9418),
       (uVar1 & 1) != 0)) {
      uVar2 = 0x39;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9198);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x3a;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9238);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x3c;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9338);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x3e;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb9a18);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x3f;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eba518);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x48;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8c78);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x50;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8c58);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x4f;
      goto LAB_107cde828;
    }
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb7918);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eba4f8),
       (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eba4d8);
      if ((uVar1 & 1) != 0) goto LAB_107cde734;
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebae98);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0x6b;
        goto LAB_107cde828;
      }
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebaff8);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0x84;
        goto LAB_107cde828;
      }
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebaeb8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebaed8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebaef8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebaf18);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebaf38);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_1;
                func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ebaf58
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_1;
                  func_0x00010c0720c0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110ebaf78);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110ebb018);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1;
                      func_0x00010c0720c0(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110ebb038);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_1;
                        func_0x00010c0720c0(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110ebb058);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_1;
                          func_0x00010c0720c0(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110ebb078);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_1;
                            func_0x00010c0720c0(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110ebb098);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_1;
                              func_0x00010c0720c0(param_1,param_2,
                                                  &PTR____CFConstantStringClassReference_110ebb0b8);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_1;
                                func_0x00010c0720c0(param_1,param_2,
                                                    &PTR____CFConstantStringClassReference_110ebafd8
                                                   );
                                uVar2 = 0x74;
                                if ((int)uVar1 == 0) {
                                  uVar2 = 0xffffffffffffffff;
                                }
                              }
                              else {
                                uVar2 = 0x8a;
                              }
                            }
                            else {
                              uVar2 = 0x89;
                            }
                          }
                          else {
                            uVar2 = 0x88;
                          }
                        }
                        else {
                          uVar2 = 0x87;
                        }
                      }
                      else {
                        uVar2 = 0x86;
                      }
                    }
                    else {
                      uVar2 = 0x85;
                    }
                  }
                  else {
                    uVar2 = 0x73;
                  }
                }
                else {
                  uVar2 = 0x71;
                }
              }
              else {
                uVar2 = 0x70;
              }
            }
            else {
              uVar2 = 0x6e;
            }
          }
          else {
            uVar2 = 0x6d;
          }
        }
        else {
          uVar2 = 0x6c;
        }
        goto LAB_107cde828;
      }
    }
    uVar2 = 9;
  }
  else {
LAB_107cde734:
    uVar2 = 0x2d;
  }
LAB_107cde828:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107cdeac4; end: 107cdeb7f;  */

void FUN_107cdeac4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if (((uVar2 & 1) == 0) &&
     (uVar2 = uVar1,
     func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebae78),
     (uVar2 & 1) == 0)) {
    uVar2 = param_1;
    func_0x000107cddd24();
    if ((uVar2 == 0xffffffffffffffff) &&
       (uVar2 = param_1, FUN_107cde4e4(), uVar2 == 0xffffffffffffffff)) {
      _objc_retain(uVar1);
      uVar2 = uVar1;
    }
    else {
      func_0x00010bb17d74();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107cdeb80; end: 107cdf287;  */

undefined8 FUN_107cdeb80(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar1;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar1;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) {
            uVar2 = uVar1;
            func_0x00010c0720c0();
            if ((uVar2 & 1) == 0) {
              uVar2 = uVar1;
              func_0x00010c0720c0();
              if ((uVar2 & 1) == 0) {
                uVar2 = uVar1;
                func_0x00010c0720c0();
                if ((uVar2 & 1) == 0) {
                  uVar2 = uVar1;
                  func_0x00010c0720c0();
                  if ((uVar2 & 1) == 0) {
                    uVar2 = uVar1;
                    func_0x00010c0720c0();
                    if ((uVar2 & 1) == 0) {
                      uVar2 = uVar1;
                      func_0x00010c0720c0();
                      if ((uVar2 & 1) == 0) {
                        uVar2 = uVar1;
                        func_0x00010c0720c0();
                        if (((uVar2 & 1) == 0) &&
                           (uVar2 = uVar1, func_0x00010c0720c0(), (uVar2 & 1) == 0)) {
                          uVar2 = uVar1;
                          func_0x00010c0720c0();
                          if ((uVar2 & 1) == 0) {
                            uVar2 = uVar1;
                            func_0x00010c0720c0();
                            if ((uVar2 & 1) == 0) {
                              uVar2 = uVar1;
                              func_0x00010c0720c0();
                              if ((uVar2 & 1) == 0) {
                                uVar2 = uVar1;
                                func_0x00010c0720c0();
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = uVar1;
                                  func_0x00010c0720c0();
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = uVar1;
                                    func_0x00010c0720c0();
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = uVar1;
                                      func_0x00010c0720c0();
                                      if ((uVar2 & 1) == 0) {
                                        uVar2 = uVar1;
                                        func_0x00010c0720c0();
                                        if ((uVar2 & 1) == 0) {
                                          uVar2 = uVar1;
                                          func_0x00010c0720c0();
                                          if ((uVar2 & 1) == 0) {
                                            uVar2 = uVar1;
                                            func_0x00010c0720c0();
                                            if ((uVar2 & 1) == 0) {
                                              uVar2 = uVar1;
                                              func_0x00010c0720c0();
                                              if ((uVar2 & 1) == 0) {
                                                uVar2 = uVar1;
                                                func_0x00010c0720c0();
                                                if ((uVar2 & 1) == 0) {
                                                  uVar2 = uVar1;
                                                  func_0x00010c0720c0();
                                                  if ((((uVar2 & 1) == 0) &&
                                                      (uVar2 = uVar1, func_0x00010c0720c0(),
                                                      (uVar2 & 1) == 0)) &&
                                                     (uVar2 = uVar1, func_0x00010c0720c0(),
                                                     (uVar2 & 1) == 0)) {
                                                    uVar2 = uVar1;
                                                    func_0x00010c0720c0();
                                                    if ((uVar2 & 1) == 0) {
                                                      uVar2 = uVar1;
                                                      func_0x00010c0720c0();
                                                      if ((uVar2 & 1) == 0) {
                                                        uVar2 = uVar1;
                                                        func_0x00010c0720c0();
                                                        if ((uVar2 & 1) == 0) {
                                                          uVar2 = uVar1;
                                                          func_0x00010c0720c0();
                                                          if ((uVar2 & 1) == 0) {
                                                            uVar2 = uVar1;
                                                            func_0x00010c0720c0();
                                                            if ((uVar2 & 1) == 0) {
                                                              uVar2 = uVar1;
                                                              func_0x00010c0720c0();
                                                              if ((uVar2 & 1) == 0) {
                                                                uVar2 = uVar1;
                                                                func_0x00010c0720c0();
                                                                if ((uVar2 & 1) == 0) {
                                                                  uVar2 = uVar1;
                                                                  func_0x00010c0720c0();
                                                                  if ((uVar2 & 1) == 0) {
                                                                    uVar2 = uVar1;
                                                                    func_0x00010c0720c0();
                                                                    if ((uVar2 & 1) == 0) {
                                                                      uVar2 = uVar1;
                                                                      func_0x00010c0720c0();
                                                                      if ((uVar2 & 1) == 0) {
                                                                        uVar2 = uVar1;
                                                                        func_0x00010c0720c0();
                                                                        if ((uVar2 & 1) == 0) {
                                                                          uVar2 = uVar1;
                                                                          func_0x00010c0720c0();
                                                                          if ((uVar2 & 1) == 0) {
                                                                            uVar2 = uVar1;
                                                                            func_0x00010c0720c0();
                                                                            if ((uVar2 & 1) == 0) {
                                                                              uVar2 = uVar1;
                                                                              func_0x00010c0720c0();
                                                                              if ((int)uVar2 == 0) {
                                                                                uVar2 = uVar1;
                                                                                func_0x00010c0720c0(
                                                  );
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar2 = uVar1;
                                                    func_0x00010c0720c0();
                                                    if ((uVar2 & 1) == 0) {
                                                      uVar2 = uVar1;
                                                      func_0x00010c0720c0();
                                                      if ((uVar2 & 1) == 0) {
                                                        uVar2 = uVar1;
                                                        func_0x00010c0720c0();
                                                        if (((uVar2 & 1) == 0) &&
                                                           (uVar2 = uVar1, func_0x00010c0720c0(),
                                                           (uVar2 & 1) == 0)) {
                                                          uVar2 = uVar1;
                                                          func_0x00010c0720c0();
                                                          if ((uVar2 & 1) == 0) {
                                                            uVar2 = uVar1;
                                                            func_0x00010c0720c0();
                                                            if ((uVar2 & 1) == 0) {
                                                              uVar2 = uVar1;
                                                              func_0x00010c0720c0();
                                                              if ((uVar2 & 1) == 0) {
                                                                uVar2 = uVar1;
                                                                func_0x00010c0720c0();
                                                                if (((uVar2 & 1) == 0) &&
                                                                   (uVar2 = uVar1,
                                                                   func_0x00010c0720c0(),
                                                                   (uVar2 & 1) == 0)) {
                                                                  uVar2 = param_1;
                                                                  func_0x00010bfe5ec0();
                                                                                                                                    
                                                  _objc_retainAutoreleasedReturnValue();
                                                  uVar4 = uVar2;
                                                  func_0x00010c0720c0();
                                                  if ((int)uVar4 == 0) {
                                                    uVar4 = param_1;
                                                    func_0x00010bfe5ec0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    uVar5 = uVar4;
                                                    func_0x00010c0720c0();
                                                    _objc_release(uVar4);
                                                    _objc_release(uVar2);
                                                    if ((uVar5 & 1) == 0) {
                                                      uVar2 = uVar1;
                                                      func_0x00010c0720c0();
                                                      if ((uVar2 & 1) == 0) {
                                                        uVar2 = uVar1;
                                                        func_0x00010c0720c0();
                                                        if (((uVar2 & 1) == 0) &&
                                                           (uVar2 = uVar1, func_0x00010c0720c0(),
                                                           (uVar2 & 1) == 0)) {
                                                          uVar2 = uVar1;
                                                          func_0x00010c0720c0();
                                                          uVar6 = 0xc;
                                                          if ((int)uVar2 == 0) {
                                                            uVar6 = 0xffffffffffffffff;
                                                          }
                                                        }
                                                        else {
                                                          uVar6 = 0xef;
                                                        }
                                                      }
                                                      else {
                                                        uVar6 = 0xf0;
                                                      }
                                                      goto LAB_107cded00;
                                                    }
                                                  }
                                                  else {
                                                    _objc_release(uVar2);
                                                  }
                                                  uVar6 = 0xcf;
                                                  }
                                                  else {
                                                    uVar6 = 0xce;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x97;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0xe8;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 3;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x95;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x96;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x94;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x8b;
                                                  }
                                                  }
                                                  else {
                                                    uVar4 = param_1;
                                                    func_0x00010beee2e0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    puVar3 = PTR_PTR_1126b11d0;
                                                    _objc_opt_class(PTR_PTR_1126b11d0);
                                                    uVar5 = uVar4;
                                                    _objc_opt_isKindOfClass(uVar4,puVar3);
                                                    uVar2 = uVar4;
                                                    if ((uVar5 & 1) == 0) {
                                                      uVar2 = 0;
                                                    }
                                                    _objc_retain(uVar2);
                                                    _objc_release(uVar4);
                                                    uVar4 = uVar2;
                                                    func_0x00010bf63dc0();
                                                    _objc_retainAutoreleasedReturnValue();
                                                    _objc_release(uVar2);
                                                    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                                    _objc_opt_class(
                                                  PTR__OBJC_CLASS___NSNumber_1126ae570);
                                                  uVar5 = uVar4;
                                                  _objc_opt_isKindOfClass(uVar4,puVar3);
                                                  uVar2 = uVar4;
                                                  if ((uVar5 & 1) == 0) {
                                                    uVar2 = 0;
                                                  }
                                                  _objc_retain(uVar2);
                                                  _objc_release(uVar4);
                                                  if (uVar2 == 0) {
                                                    uVar6 = 0xffffffffffffffff;
                                                  }
                                                  else {
                                                    func_0x00010bf1f3c0();
                                                    uVar6 = 0x37;
                                                    if ((int)uVar4 == 0) {
                                                      uVar6 = 0x38;
                                                    }
                                                  }
                                                  _objc_release(uVar2);
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x1d;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x66;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 1;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x36;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x35;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 10;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x61;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x60;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x5f;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x3f;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x3e;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x3c;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x3a;
                                                  }
                                                  }
                                                  else {
                                                    uVar6 = 0x39;
                                                  }
                                                }
                                                else {
                                                  uVar6 = 0x30;
                                                }
                                              }
                                              else {
                                                uVar6 = 0x5e;
                                              }
                                            }
                                            else {
                                              uVar6 = 0x5d;
                                            }
                                          }
                                          else {
                                            uVar6 = 0x5c;
                                          }
                                        }
                                        else {
                                          uVar6 = 0x5b;
                                        }
                                      }
                                      else {
                                        uVar6 = 0x5a;
                                      }
                                    }
                                    else {
                                      uVar6 = 0x59;
                                    }
                                  }
                                  else {
                                    uVar6 = 0x58;
                                  }
                                }
                                else {
                                  uVar6 = 0x57;
                                }
                              }
                              else {
                                uVar6 = 0x56;
                              }
                            }
                            else {
                              uVar6 = 0x55;
                            }
                          }
                          else {
                            uVar6 = 0x54;
                          }
                        }
                        else {
                          uVar6 = 0x50;
                        }
                      }
                      else {
                        uVar6 = 0x4f;
                      }
                    }
                    else {
                      uVar6 = 0x4a;
                    }
                  }
                  else {
                    uVar6 = 0x49;
                  }
                }
                else {
                  uVar6 = 0x48;
                }
              }
              else {
                uVar6 = 0x47;
              }
            }
            else {
              uVar6 = 0x46;
            }
          }
          else {
            uVar6 = 0x77;
          }
        }
        else {
          uVar6 = 0x44;
        }
      }
      else {
        uVar6 = 0x43;
      }
    }
    else {
      uVar6 = 0x42;
    }
  }
  else {
    uVar6 = 0x40;
  }
LAB_107cded00:
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 107cdf288; end: 107cdf31f;  */

uint FUN_107cdf288(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  if ((((param_1 == 0) ||
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8bb8),
       (uVar1 & 1) != 0)) ||
      (uVar1 = param_1,
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8bd8),
      (uVar1 & 1) != 0)) ||
     (uVar1 = param_1,
     func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8bf8),
     (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8c18);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107cdf320; end: 107cdf3bf;  */

void FUN_107cdf320(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_107cdf288();
  if ((int)lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107cddd24();
    if ((lVar2 == -1) && (lVar2 = param_1, FUN_107cdeb80(), lVar2 == -1)) {
      _objc_retain(lVar1);
      lVar2 = lVar1;
    }
    else {
      func_0x00010bb17d74();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107cdf3c0; end: 107cdf47b;  */

undefined8 FUN_107cdf3c0(long param_1)

{
  if (((0x2c < param_1 - 0x6bU) || ((1L << (param_1 - 0x6bU & 0x3f) & 0x1200fe00036fU) == 0)) &&
     ((0x19 < param_1 - 199U || ((1L << (param_1 - 199U & 0x3f) & 0x200007fU) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 107cdf47c; end: 107cdf4ef;  */

undefined8 FUN_107cdf47c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100bf119c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010901c5ac();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010901c618(), (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010901c6c4();
      uVar2 = 2;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 3;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107cdf4f0; end: 107cdf537; -[SCUnifiedProfileLoggingService initWithProfileType:sessionId:openningData:grapheneServices:userBlizzardServices:userInfoServices:sourceSessionId:isFlatland:backgroundsFeatureStatusProvider:bitmojiStyle:] */

void FUN_107cdf4f0(void)

{
  func_0x00010c03b2e0();
  return;
}



/* Entry: 107cdf538; end: 107cdf833; -[SCUnifiedProfileLoggingService initWithProfileType:sessionId:openningData:grapheneServices:userBlizzardServices:sourceSessionId:otherUserId:snapchatterServices:userInfoServices:isFlatland:backgroundsFeatureStatusProvider:actionmojiId:circumstanceEngine:bitmojiStyle:] */

undefined8 *
FUN_107cdf538(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain();
  puStack_70 = PTR_PTR_1126fa7f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1298;
    _objc_alloc();
    uVar4 = param_5;
    func_0x00010c247a20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f1180(param_5);
    func_0x00010c03b320();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d76b0;
    _objc_alloc();
    uVar4 = param_5;
    func_0x00010c247a20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292900(param_5);
    func_0x00010c033540();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    if ((param_3 & 0xfffffffffffffffe) == 2) {
      puVar2 = PTR_PTR_1126d76b8;
      _objc_alloc();
      func_0x00010c03b2c0();
      uVar4 = puVar1[1];
      puVar1[1] = puVar2;
      _objc_release(uVar4);
    }
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107cdf834; end: 107cdf83b; -[SCUnifiedProfileLoggingService logActionWithName:sourcePageType:] */

void FUN_107cdf834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logActionWithName_sourcePageType_112605b28);
  return;
}



/* Entry: 107cdf83c; end: 107cdfc07; -[SCUnifiedProfileLoggingService didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_107cdf83c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7318);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7338);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7358);
      if ((int)uVar1 != 0) {
        func_0x00010c1e4660(uVar4,param_2,1);
        goto LAB_107cdf964;
      }
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7378);
      if ((int)uVar1 == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb73f8);
        uVar2 = param_5;
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eba1f8);
          if ((int)uVar1 != 0) {
            func_0x00010c0ab820(uVar5,param_2,param_5);
            goto LAB_107cdf964;
          }
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eba218);
          if ((int)uVar1 != 0) {
            func_0x00010c0a30e0(uVar5);
            goto LAB_107cdf964;
          }
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eba238);
          if ((int)uVar1 == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12078);
            if ((int)uVar1 == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7418);
              if ((int)uVar1 != 0) {
                func_0x00010bf36c60(*(undefined8 *)(param_1 + 8));
                goto LAB_107cdf964;
              }
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7438);
              if ((int)uVar1 != 0) {
                func_0x00010bf36c40(*(undefined8 *)(param_1 + 8));
                goto LAB_107cdf964;
              }
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7458);
              if ((int)uVar1 == 0) goto LAB_107cdf964;
              func_0x00010c0dff20(param_5,param_2,&PTR____CFConstantStringClassReference_110eb7498);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = *(undefined8 *)(param_1 + 8);
              uVar1 = uVar2;
              func_0x00010c0b4fe0();
              func_0x00010bf36c80(uVar6,param_2,uVar1);
            }
            else {
              puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_118 = 0xc2000000;
              uStack_110 = 0x107cdfc88;
              puStack_108 = &UNK_110848ba8;
              uStack_100 = uVar4;
              _objc_retain(param_5);
              uStack_f8 = param_5;
              uStack_f0 = uVar5;
              func_0x00010bf9b0e0(param_1,param_2,&puStack_120);
              uVar2 = uStack_f8;
            }
          }
          else {
            func_0x00010c0dff20(param_5,param_2,&PTR____CFConstantStringClassReference_110eb7478);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a03a0(uVar5,param_2,uVar2);
          }
        }
        else {
          func_0x00010c0dff20(param_5,param_2,&PTR____CFConstantStringClassReference_110eb7478);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar2;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar1;
          FUN_107cdf288();
          if ((int)uVar6 != 0) {
            func_0x00010c0a03e0(uVar5,param_2,uVar2);
            uVar6 = uVar1;
            func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebae38);
            if ((int)uVar6 != 0) {
              func_0x00010bf36c20(*(undefined8 *)(param_1 + 8));
            }
          }
          _objc_release(uVar1);
        }
        _objc_release(uVar2);
        goto LAB_107cdf964;
      }
      *(undefined1 *)(param_1 + 0x21) = 0;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_107cdfc48;
      puStack_d0 = &UNK_110848ba8;
      ppuVar3 = &puStack_e8;
      lStack_c8 = param_1;
      uStack_c0 = uVar4;
      uStack_b8 = uVar5;
    }
    else {
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_107cdfc40;
      puStack_98 = &UNK_110842e18;
      ppuVar3 = &puStack_b0;
      uStack_90 = uVar4;
    }
  }
  else {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      func_0x00010c0dbaa0(uVar5);
    }
    else {
      *(undefined1 *)(param_1 + 0x21) = 1;
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107cdfc08;
    puStack_70 = &UNK_110848ba8;
    ppuVar3 = &puStack_88;
    lStack_68 = param_1;
    uStack_60 = uVar4;
    uStack_58 = uVar5;
  }
  func_0x00010bf9b0e0(param_1,param_2,ppuVar3);
LAB_107cdf964:
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107cdfc08; end: 107cdfc3f;  */

void FUN_107cdfc08(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x20) & 1) != 0) {
    return;
  }
  func_0x00010c1175a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c0ab8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logOpenUnifiedProfile_112608848);
  return;
}



/* Entry: 107cdfc40; end: 107cdfc47;  */

void FUN_107cdfc40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1174d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_profileViewDidAppear_112623750);
  return;
}



/* Entry: 107cdfc48; end: 107cdfcb3;  */

void FUN_107cdfc48(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 1;
  func_0x00010c116800(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c0a3110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logCloseUnifiedProfile_112606650);
  return;
}



/* Entry: 107cdfcb4; end: 107cdfcfb; -[SCUnifiedProfileLoggingService executeWithGatekeeperCheck:] */

void FUN_107cdfcb4(int param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c06bf00();
  if ((param_3 != 0) && (param_1 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cdfcfc; end: 107cdfd0b; -[SCUnifiedProfileLoggingService isAllowedToProceedOpenCloseEvents] */

byte FUN_107cdfcfc(long param_1)

{
  return (*(byte *)(param_1 + 0x22) ^ 0xff) & 1;
}



/* Entry: 107cdfd0c; end: 107cdfd13; -[SCUnifiedProfileLoggingService skipOpenCloseLogging] */

undefined1 FUN_107cdfd0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 107cdfd14; end: 107cdfd1b; -[SCUnifiedProfileLoggingService setSkipOpenCloseLogging:] */

void FUN_107cdfd14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}



/* Entry: 107cdfd1c; end: 107cdfd57; -[SCUnifiedProfileLoggingService .cxx_destruct] */

void FUN_107cdfd1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cdfd58; end: 107cdff2f; -[SCUnifiedProfilePerformanceLogger initWithPageViewName:profileType:sessionId:sourcePageType:userInitializedOpenTime:userBlizzardServices:] */

undefined1 *
FUN_107cdfd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  uVar4 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fa800;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    _objc_release(uVar2);
    func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar4;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b0c28;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 107cdff30; end: 107cdff57; -[SCUnifiedProfilePerformanceLogger performer] */

void FUN_107cdff30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cdff58; end: 107ce001b; -[SCUnifiedProfilePerformanceLogger profileViewWillAppear] */

void FUN_107cdff58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107ce001c; end: 107ce004f;  */

void FUN_107ce001c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beddfc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ce0050; end: 107ce0053; -[SCUnifiedProfilePerformanceLogger profileViewDidAppear] */

void FUN_107ce0050(void)

{
  return;
}



/* Entry: 107ce0054; end: 107ce01c3; -[SCUnifiedProfilePerformanceLogger sectionWillAppearWithExtraData:] */

void FUN_107ce0054(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (uVar1 = param_1, func_0x00010c117580(), (uVar1 & 1) == 0)) {
    lVar2 = param_3;
    func_0x000108f6e6d0(param_3,&PTR____CFConstantStringClassReference_110eb6ed8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = param_3;
      func_0x000108f6e734(param_3,&PTR____CFConstantStringClassReference_110eb6ed8);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(lVar2);
      _objc_retain(lVar3);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release();
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ce01c4; end: 107ce01f7;  */

void FUN_107ce01c4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce01f8; end: 107ce024f; -[SCUnifiedProfilePerformanceLogger profileDidDismiss] */

void FUN_107ce01f8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107ce0250;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 107ce0250; end: 107ce0257;  */

void FUN_107ce0250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logUnifiedProfileLoad_1125741d8);
  return;
}



/* Entry: 107ce0258; end: 107ce03b7; -[SCUnifiedProfilePerformanceLogger _sectionWillAppearWithSectionType:sectionOrder:] */

void FUN_107ce0258(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    if (param_4 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
    }
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR_PTR_1126d76c0;
    _objc_alloc(PTR_PTR_1126d76c0);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bff8d00(puVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c142680(puVar2);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ce03b8; end: 107ce03eb;  */

void FUN_107ce03b8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9cd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce03ec; end: 107ce04df; -[SCUnifiedProfilePerformanceLogger _sectionDidAppearWithSectionType:] */

void FUN_107ce03ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010bf5f3c0(PTR_PTR_1126b3a48);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 107ce04e0; end: 107ce0517;  */

void FUN_107ce04e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bedf300(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ce0518; end: 107ce0a0f; -[SCUnifiedProfilePerformanceLogger _logUnifiedProfileLoad] */

void FUN_107ce0518(float param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  if ((param_2[0x68] & 1) == 0) {
    param_2[0x68] = 1;
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8,param_3,*(undefined8 *)(param_2 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9f08;
    _objc_opt_new();
    func_0x00010c16b8e0();
    puVar3 = PTR_PTR_1126b6f08;
    func_0x00010bfc9240(PTR_PTR_1126b6f08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4980(puVar2);
    _objc_release(puVar3);
    func_0x00010bc92e28(*(undefined8 *)(param_2 + 0x48));
    func_0x00010c207200(puVar2);
    lVar4 = *(long *)(param_2 + 0x38);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      puVar3 = puVar1;
      _objc_retain();
      if (puVar1 != (undefined *)0x0) {
        func_0x000107ce0ba8();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_semaphore_wait();
        _objc_release();
        func_0x000107ce0bfc();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf4b900();
        _objc_release(puVar3);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000107ce0bfc();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar3);
        }
        func_0x000107ce0ba8();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_semaphore_signal();
        _objc_release(puVar3);
      }
      _objc_release(puVar1);
      func_0x00010c1b1040(puVar2);
      lVar6 = *(long *)(param_2 + 0x38);
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_107ce0a10;
      puStack_100 = &UNK_110a00f18;
      param_3 = (undefined *)0x0;
      puStack_f8 = param_2;
      func_0x00010bd869d0(lVar6,0,&puStack_118);
      dVar16 = 0.0;
      _objc_retain();
      lVar4 = lVar6;
      func_0x00010bf52a60();
      lVar10 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(lVar6);
          }
          param_3 = *(undefined **)(lVar14 * 8);
          lVar7 = lVar6;
          func_0x00010c0e00e0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = *(undefined ***)(param_2 + 0x40);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar8 == (undefined **)0x0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110dcdf58;
          }
          else {
            ppuVar9 = ppuVar8;
            func_0x00010c25d700(ppuVar8);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x000108c79c5c(*(undefined8 *)(param_2 + 0x78),param_3,ppuVar9,1);
          uVar15 = *(undefined8 *)(param_2 + 0x78);
          func_0x00010bf885a0(lVar7);
          func_0x000108c79a2c(uVar15,param_3,ppuVar9,(long)dVar16);
          _objc_release(ppuVar9);
          _objc_release(ppuVar8);
          _objc_release(lVar7);
          lVar14 = lVar14 + 1;
        } while (lVar4 != lVar14);
        lVar4 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c008340();
        func_0x00010c207ee0(puVar2);
        lVar4 = lVar6;
        func_0x00010bf00d20(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar4;
        func_0x00010c296f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        func_0x00010c0b4ca0(lVar10);
        func_0x00010c1b92e0(puVar2);
        uVar11 = *(undefined8 *)(param_2 + 0x70);
        func_0x00010c293fc0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar15);
        _objc_release(uVar11);
        puVar12 = PTR_PTR_1126b15f8;
        _objc_alloc(PTR_PTR_1126b15f8);
        puVar13 = puVar2;
        func_0x00010bfc52e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c010cc0(puVar12);
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126b1600;
        func_0x00010c22bdc0(PTR_PTR_1126b1600);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0aa440();
        _objc_release(puVar13);
        uVar15 = *(undefined8 *)(param_2 + 0x78);
        puVar13 = puVar2;
        func_0x00010bfc52e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0(lVar10);
        param_3 = puVar13;
        func_0x000108c798b8(uVar15,puVar13,(long)dVar16);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(lVar10);
        _objc_release(puVar5);
      }
      param_1 = SUB84(dVar16,0);
      _objc_release(puVar3);
      _objc_release(0);
      _objc_release(lVar6);
    }
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb2c80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithLong__112615800,
             (long)(((double)param_1 - *(double *)(*(long *)(puVar1 + 0x20) + 0x50)) * 1000.0));
  return;
}



/* Entry: 107ce0a10; end: 107ce0a5b;  */

void FUN_107ce0a10(float param_1,long param_2,undefined8 param_3)

{
  func_0x00010bfb2c80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithLong__112615800,
             (long)(((double)param_1 - *(double *)(*(long *)(param_2 + 0x20) + 0x50)) * 1000.0));
  return;
}



/* Entry: 107ce0a5c; end: 107ce0a63; -[SCUnifiedProfilePerformanceLogger _updateProfileViewWillAppearTime:] */

void FUN_107ce0a5c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 107ce0a64; end: 107ce0b0f; -[SCUnifiedProfilePerformanceLogger _updateSectionDidAppearTime:sectionType:] */

void FUN_107ce0a64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c0e00e0(lVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,puVar2,param_4);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,lVar1,param_4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ce0b10; end: 107ce0b1b; -[SCUnifiedProfilePerformanceLogger profileViewStartedScroll] */

byte FUN_107ce0b10(long param_1)

{
  return *(byte *)(param_1 + 0x80) & 1;
}



/* Entry: 107ce0b1c; end: 107ce0b23; -[SCUnifiedProfilePerformanceLogger setProfileViewStartedScroll:] */

void FUN_107ce0b1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 107ce0b24; end: 107ce0c4f; -[SCUnifiedProfilePerformanceLogger .cxx_destruct] */

void FUN_107ce0b24(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ce0c50; end: 107ce0ca3;  */

void FUN_107ce0c50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  _dispatch_semaphore_create();
  uVar1 = uRam0000000113727a00;
  uRam0000000113727a00 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce0ca4; end: 107ce0f77; -[SCUnifiedProfileUsageLogger initWithProfileType:sourcePageType:pageEntryType:sessionId:grapheneServices:userBlizzardServices:sourceSessionId:userId:snapchatterServices:userInfoServices:isFlatland:backgroundsFeatureStatusProvider:actionmojiId:circumstanceEngine:bitmojiStyle:] */

undefined8 *
FUN_107ce0ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126fa808;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar1[4] = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 6) = param_13;
    puVar1[0x13] = param_18;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107ce0f78; end: 107ce1377; -[SCUnifiedProfileUsageLogger logOpenUnifiedProfile] */

void FUN_107ce0f78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 8) = param_1;
  lVar7 = *(long *)(param_2 + 0x10);
  puVar2 = PTR_PTR_1126d76c8;
  if (lVar7 == 3) {
    _objc_opt_new(PTR_PTR_1126d76c8);
LAB_107ce107c:
    func_0x00010c1e4560();
    func_0x00010c1e4140(puVar2);
LAB_107ce108c:
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c293fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  else {
    if (lVar7 == 2) {
      _objc_opt_new(PTR_PTR_1126d76c8);
      goto LAB_107ce107c;
    }
    if (lVar7 == 1) {
      uVar1 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010bfcdfa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c116880();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b3d60;
      func_0x00010c117560(PTR_PTR_1126b3d60);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(uVar3);
      _objc_release(puVar2);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126c1890;
      _objc_opt_new(PTR_PTR_1126c1890);
      func_0x00010c1e44c0();
      goto LAB_107ce108c;
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c083660();
  _objc_release(uVar3);
  lVar7 = param_2;
  if ((int)uVar5 == 0) {
    func_0x00010be5c640(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_2 + 0x10) != 1) {
      _objc_initWeak(auStack_58,param_2);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010be96b00(param_2);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_107ce1234;
    }
    func_0x00010be5c640(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010bf1b5c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf14660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c1b17e0(lVar7);
  }
  func_0x00010bdd2400(param_2);
  _objc_release(lVar7);
LAB_107ce1234:
  puVar2 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b3d60;
  func_0x00010c117460(PTR_PTR_1126b3d60);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(long *)(param_2 + 0x10) - 1;
  if (uVar8 < 3) {
    uVar5 = *(undefined8 *)(&UNK_10dee58e0 + uVar8 * 8);
  }
  else {
    uVar5 = 0xffffffffffffffff;
  }
  func_0x00010bb09328(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar5);
  puVar2 = puVar6;
  func_0x00010c2ac460(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010bdd23a0(param_2);
  _objc_release(puVar2);
  return;
}



/* Entry: 107ce1378; end: 107ce142f;  */

void FUN_107ce1378(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010be458e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be5c640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x00010c293fc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce1430; end: 107ce1533; -[SCUnifiedProfileUsageLogger sectionWillAppearWithExtraData:] */

void FUN_107ce1430(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x000108f6e6d0(param_3,&PTR____CFConstantStringClassReference_110eb6ff8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ce1534; end: 107ce1567;  */

void FUN_107ce1534(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce1568; end: 107ce156f; -[SCUnifiedProfileUsageLogger _sectionWillAppearWithSectionType:] */

void FUN_107ce1568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 107ce1570; end: 107ce1767; -[SCUnifiedProfileUsageLogger logCloseUnifiedProfile] */

void FUN_107ce1570(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_2 + 0x31) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x31) = 1;
  _CACurrentMediaTime();
  param_1 = param_1 - *(double *)(param_2 + 8);
  lVar5 = *(long *)(param_2 + 0x10);
  puVar1 = PTR_PTR_1126d76d8;
  if (lVar5 == 3) {
    _objc_opt_new(PTR_PTR_1126d76d8);
LAB_107ce160c:
    func_0x00010c1e4560();
    func_0x00010c1e4140(puVar1,param_3,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (lVar5 == 2) {
      _objc_opt_new(PTR_PTR_1126d76d8);
      goto LAB_107ce160c;
    }
    if (lVar5 != 1) goto LAB_107ce166c;
    puVar1 = PTR_PTR_1126d76d0;
    _objc_opt_new(PTR_PTR_1126d76d0);
    func_0x00010c1e44c0();
  }
  func_0x00010c222d40(param_1,puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c293fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
LAB_107ce166c:
  puVar1 = PTR_PTR_1126d76e0;
  _objc_opt_new(PTR_PTR_1126d76e0);
  func_0x00010c1e44c0();
  uVar6 = *(long *)(param_2 + 0x10) - 1;
  if (uVar6 < 3) {
    uVar4 = *(undefined8 *)(&UNK_10dee58e0 + uVar6 * 8);
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  func_0x00010c1e4560(puVar1,param_3,uVar4);
  func_0x00010c222d40(param_1,puVar1);
  func_0x00010c1c7320(puVar1,param_3,1);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf00560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4480(puVar1,param_3,uVar4);
  _objc_release(uVar4);
  func_0x00010c1b1140(puVar1,param_3,*(undefined1 *)(param_2 + 0x30));
  func_0x00010bdd2400(param_2,param_3,puVar1);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar3 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ce1768; end: 107ce186b; -[SCUnifiedProfileUsageLogger logOpenActionMenu:] */

void FUN_107ce1768(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x33) = 1;
    puVar1 = PTR_PTR_1126d76e8;
    _objc_opt_new(PTR_PTR_1126d76e8);
    func_0x00010c1e44c0();
    uVar5 = *(long *)(param_1 + 0x10) - 1;
    if (uVar5 < 3) {
      uVar3 = *(undefined8 *)(&UNK_10dee58e0 + uVar5 * 8);
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
    func_0x00010c1e4560(puVar1,param_2,uVar3);
    func_0x00010c1c7320(puVar1,param_2,1);
    func_0x00010c206fa0(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
    if (param_3 == 0) {
      func_0x00010c206fa0(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
    }
    else {
      lVar2 = param_3;
      func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110eba258);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      if (lVar2 == 0) {
        lVar4 = *(long *)(param_1 + 0x18);
      }
      func_0x00010c206fa0(puVar1,param_2,lVar4);
      _objc_release(lVar2);
    }
    func_0x00010bdd2400(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce186c; end: 107ce18fb; -[SCUnifiedProfileUsageLogger logCloseActionMenu] */

void FUN_107ce186c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x32) = 1;
  puVar1 = PTR_PTR_1126d76f0;
  _objc_opt_new(PTR_PTR_1126d76f0);
  func_0x00010c1e44c0();
  uVar3 = *(long *)(param_1 + 0x10) - 1;
  if (uVar3 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10dee58e0 + uVar3 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  func_0x00010c1e4560(puVar1,param_2,uVar2);
  func_0x00010c1c7320(puVar1,param_2,1);
  func_0x00010bdd2400(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ce18fc; end: 107ce1aa3; -[SCUnifiedProfileUsageLogger logActionWithActionModel:] */

void FUN_107ce18fc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 3) {
      func_0x00010be53a80(param_1,param_2,uVar1);
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      func_0x000108fab1cc(uVar7);
      func_0x00010be53ac0(param_1,param_2,param_3,uVar7);
    }
    else {
      uVar2 = param_3;
      if (lVar8 == 2) {
        func_0x00010be54860(param_1,param_2,uVar1);
        FUN_107cdeac4(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar8 != 1) goto LAB_107ce1a80;
        func_0x00010be56320(param_1,param_2,param_3);
        FUN_107cdf320();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c08fa60();
        if ((uVar3 != 0) &&
           (uVar3 = uVar2, func_0x00010c0720c0(uVar2,param_2,uVar1), (int)uVar3 != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x60);
          func_0x00010bfcdfa0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          func_0x00010c116880();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b3d60;
          func_0x00010c116520(PTR_PTR_1126b3d60);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0(uVar5,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(uVar5);
          _objc_release(uVar7);
          _objc_release(uVar4);
        }
      }
      func_0x00010be4fd40(param_1,param_2,uVar2,9);
      _objc_release(uVar2);
    }
  }
LAB_107ce1a80:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce1aa4; end: 107ce1b37; -[SCUnifiedProfileUsageLogger noteDuplicateViewWillPresentForLeftoverSentinel] */

void FUN_107ce1aa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfcdfa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3d60;
  func_0x00010c117540(PTR_PTR_1126b3d60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce1b38; end: 107ce1bb7; -[SCUnifiedProfileUsageLogger logActionWithName:sourcePageType:] */

void FUN_107ce1b38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_3 != -1) {
    lVar1 = param_3;
    func_0x00010bb17d74(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc9107c(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fd20(param_1,param_2,param_3,lVar1,param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107ce1bb8; end: 107ce1c37; -[SCUnifiedProfileUsageLogger _logActionWithNameString:sourcePageType:] */

void FUN_107ce1bb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bb17d94(param_3);
    func_0x00010bc9107c(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4fd20(param_1,param_2,lVar1,param_3,param_4);
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce1c38; end: 107ce1eeb; -[SCUnifiedProfileUsageLogger _logActionWithName:legacyActionNameString:sourcePageTypeString:] */

void FUN_107ce1c38(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      puVar2 = PTR_PTR_1126d76f8;
      _objc_opt_new(PTR_PTR_1126d76f8);
      uVar7 = *(long *)(param_1 + 0x10) - 1;
      if (uVar7 < 3) {
        uVar6 = *(undefined8 *)(&UNK_10dee58e0 + uVar7 * 8);
      }
      else {
        uVar6 = 0xffffffffffffffff;
      }
      func_0x00010c1e4560(puVar2,param_2,uVar6);
      func_0x00010c1e4140(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
      uVar6 = param_5;
      func_0x00010bc9109c(param_5);
      func_0x00010c206c40(puVar2,param_2,uVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c293fc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126d7700;
    _objc_opt_new(PTR_PTR_1126d7700);
    func_0x00010c1e44c0();
    uVar7 = *(long *)(param_1 + 0x10) - 1;
    if (uVar7 < 3) {
      uVar6 = *(undefined8 *)(&UNK_10dee58e0 + uVar7 * 8);
    }
    else {
      uVar6 = 0xffffffffffffffff;
    }
    func_0x00010c1e4560(puVar2,param_2,uVar6);
    func_0x00010c161bc0(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c206fa0(puVar2,param_2,param_5);
    func_0x00010c1e3f00(puVar2,param_2,param_3);
    func_0x00010c161c40(puVar2,param_2,param_4);
    lVar1 = param_3;
    func_0x000107cdf420(param_3);
    func_0x00010c20f080(puVar2,param_2,lVar1);
    func_0x00010c1b1140(puVar2,param_2,*(undefined1 *)(param_1 + 0x30));
    func_0x00010c1c7320(puVar2,param_2,1);
    func_0x00010c171660(puVar2,param_2,*(long *)(param_1 + 0x98) == 3);
    func_0x00010bdd2400(param_1,param_2,puVar2);
    lVar1 = param_3;
    func_0x000107cdf3c0();
    if ((int)lVar1 != 0) {
      puVar4 = PTR_PTR_1126b3d60;
      func_0x00010c1164e0(PTR_PTR_1126b3d60);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(long *)(param_1 + 0x10) - 1;
      if (uVar7 < 3) {
        uVar6 = *(undefined8 *)(&UNK_10dee58e0 + uVar7 * 8);
      }
      else {
        uVar6 = 0xffffffffffffffff;
      }
      func_0x00010bb09328(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc4318,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar6);
      func_0x00010bb17d74(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110eb6f98,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(param_3);
      func_0x00010bdd23a0(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ce1eec; end: 107ce1fd7; -[SCUnifiedProfileUsageLogger _logFriendProfileAction:] */

void FUN_107ce1eec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebadb8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7a38);
    if ((int)uVar1 == 0) goto LAB_107ce1fc4;
    ppuVar5 = &PTR_PTR_1126d7710;
  }
  else {
    ppuVar5 = &PTR_PTR_1126d7708;
  }
  puVar2 = *ppuVar5;
  _objc_opt_new();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1e4560();
    func_0x00010c1e4140(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c206c40(puVar2,param_2,9);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c293fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
LAB_107ce1fc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce1fd8; end: 107ce2127; -[SCUnifiedProfileUsageLogger _logFriendProfileUnifiedProfileActionWithActionModel:friendProfileV2Enabled:] */

void FUN_107ce1fd8(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((param_4 != 0) && ((uVar2 & 1) != 0)) goto LAB_107ce2108;
  uVar2 = param_3;
  FUN_107cde400();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = 0x90;
    func_0x00010bb17d74(0x90);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      if ((*(byte *)(param_1 + 0x48) & 1) != 0) goto LAB_107ce2100;
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    uVar5 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1888;
    _objc_opt_class(PTR_PTR_1126b1888);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar4 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    func_0x00010befb8c0();
    _objc_release(uVar4);
    func_0x00010be4fd40(param_1);
  }
LAB_107ce2100:
  _objc_release(uVar2);
LAB_107ce2108:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce2128; end: 107ce2213; -[SCUnifiedProfileUsageLogger _logGroupProfileAction:] */

void FUN_107ce2128(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebadb8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7958);
    if ((int)uVar1 == 0) goto LAB_107ce2200;
    ppuVar5 = &PTR_PTR_1126d7710;
  }
  else {
    ppuVar5 = &PTR_PTR_1126d7708;
  }
  puVar2 = *ppuVar5;
  _objc_opt_new();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1e4560();
    func_0x00010c1e4140(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c206c40(puVar2,param_2,9);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c293fc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
LAB_107ce2200:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce2214; end: 107ce2483; -[SCUnifiedProfileUsageLogger _logMyProfileAction:] */

void FUN_107ce2214(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  puVar4 = PTR_PTR_1126d7718;
  if (((int)puVar2 == 0) &&
     (puVar2 = puVar1, func_0x00010c0720c0(), puVar4 = PTR_PTR_1126d7720, (int)puVar2 == 0)) {
    puVar4 = puVar1;
    func_0x00010c0720c0();
    if ((int)puVar4 == 0) {
      puVar4 = puVar1;
      func_0x00010c0720c0();
      if ((((((ulong)puVar4 & 1) == 0) &&
           (puVar4 = puVar1, func_0x00010c0720c0(), ((ulong)puVar4 & 1) == 0)) &&
          (puVar4 = puVar1, func_0x00010c0720c0(), ((ulong)puVar4 & 1) == 0)) &&
         (((puVar4 = puVar1, func_0x00010c0720c0(), ((ulong)puVar4 & 1) == 0 &&
           (puVar4 = puVar1, func_0x00010c0720c0(), ((ulong)puVar4 & 1) == 0)) &&
          (puVar4 = puVar1, func_0x00010c0720c0(), (int)puVar4 == 0)))) goto LAB_107ce22e0;
      puVar4 = PTR_PTR_1126d7730;
      _objc_opt_new(PTR_PTR_1126d7730);
      func_0x00010c1e44c0();
      func_0x00010c161620(puVar4);
      goto LAB_107ce229c;
    }
    puVar2 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b11d0;
    _objc_opt_class(PTR_PTR_1126b11d0);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar4);
    puVar4 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126d7728;
    _objc_opt_new(PTR_PTR_1126d7728);
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c25b720(puVar2);
      func_0x00010c20ddc0(puVar3);
      func_0x00010c25b720(puVar2);
      func_0x00010c20de00(puVar3);
    }
    puVar5 = *(undefined **)(param_1 + 0x68);
    func_0x00010c293fc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(puVar2);
  }
  else {
    _objc_opt_new(puVar4);
    func_0x00010c1e44c0();
LAB_107ce229c:
    puVar3 = *(undefined **)(param_1 + 0x68);
    func_0x00010c293fc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
LAB_107ce22e0:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce2484; end: 107ce2547; -[SCUnifiedProfileUsageLogger _logFriendProfileActionMenuAction:] */

void FUN_107ce2484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eba418);
  if ((int)param_3 != 0) {
    puVar1 = PTR_PTR_1126d7708;
    _objc_opt_new();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c1e4560();
      func_0x00010c1e4140(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
      func_0x00010c206c40(puVar1,param_2,0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c293fc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar3);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 107ce2548; end: 107ce25ff; -[SCUnifiedProfileUsageLogger _logGroupProfileActionMenuAction:] */

void FUN_107ce2548(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bb17d94();
  if (param_3 == 1) {
    puVar1 = PTR_PTR_1126d7708;
    _objc_opt_new();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c1e4560();
      func_0x00010c1e4140(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
      func_0x00010c206c40(puVar1,param_2,0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c293fc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar3);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 107ce2600; end: 107ce26d3; -[SCUnifiedProfileUsageLogger logActionMenuActionWithActionModel:] */

void FUN_107ce2600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  if (*(long *)(param_1 + 0x10) == 2) {
    func_0x00010be54880(param_1,param_2,uVar1);
    FUN_107cdeac4(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 0x50;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 3) goto LAB_107ce26b8;
    func_0x00010be53aa0(param_1,param_2,uVar1);
    FUN_107cde400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be22d00(param_1);
  }
  func_0x00010be4fd40(param_1,param_2,uVar2,lVar3);
  _objc_release(uVar2);
LAB_107ce26b8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce26d4; end: 107ce283f; -[SCUnifiedProfileUsageLogger _makeUnifiedProfilePageViewEventForSnapchatter:] */

void FUN_107ce26d4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7738;
  _objc_opt_new(PTR_PTR_1126d7738);
  func_0x00010c1e44c0();
  uVar7 = *(long *)(param_1 + 0x10) - 1;
  if (uVar7 < 3) {
    uVar6 = *(undefined8 *)(&UNK_10dee58e0 + uVar7 * 8);
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  func_0x00010c1e4560(puVar1,param_2,uVar6);
  func_0x00010c206fa0(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c207140(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c1d80e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b1140(puVar1,param_2,*(undefined1 *)(param_1 + 0x30));
  puVar2 = PTR_PTR_1126d7740;
  func_0x00010c06d3c0(PTR_PTR_1126d7740);
  func_0x00010c1a5a80(puVar1,param_2,puVar2);
  func_0x00010c1620a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x88));
  if (param_3 == 0) {
    func_0x00010c1a0ce0(puVar1,param_2,0xffffffffffffffff);
  }
  else {
    lVar3 = param_3;
    FUN_107cdf47c(param_3);
    func_0x00010c1a0ce0(puVar1,param_2,lVar3);
    lVar3 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1af20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    func_0x00010c1b17e0(puVar1,param_2,lVar5 != 0);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1844c0(puVar1,param_2,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ce2840; end: 107ce29af; -[SCUnifiedProfileUsageLogger _retrieveProfileSnapchatter:] */

void FUN_107ce2840(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = *(long *)(param_1 + 0x58), lVar1 == 0)) {
    param_2 = 0;
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar5 = puVar3;
    func_0x00010c09d7c0(lVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *(long *)(param_3 + 0x20);
  if (puVar5 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107ce29d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce29b0; end: 107ce2a0f;  */

void FUN_107ce29b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ce29d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce2a10; end: 107ce2c3b; -[SCUnifiedProfileUsageLogger _backgroundLogEventWithFriendshipStatus:] */

void FUN_107ce2a10(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **unaff_x25;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  puVar8 = PTR_s_setFriendshipStatus__112645d58;
  _objc_opt_respondsToSelector(param_3,PTR_s_setFriendshipStatus__112645d58);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x50);
    func_0x00010c08fa60();
    if ((lVar2 == 0) || (*(long *)(param_1 + 0x58) == 0)) {
      func_0x00010bdd2420(param_1);
    }
    else {
      _objc_initWeak(auStack_68,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c244620();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_60 = *(undefined8 *)(param_1 + 0x50);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107ce2c3c;
      puStack_88 = &UNK_11085a578;
      puVar8 = auStack_68;
      _objc_copyWeak(auStack_70,puVar8);
      lStack_80 = param_1;
      _objc_retain(param_3);
      uStack_78 = param_3;
      func_0x00010c09d7c0(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      unaff_x25 = &puStack_a0;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x30));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar8);
  uVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  puVar4 = puVar8;
  func_0x00010bfb1920(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010be458e0();
  _objc_release(puVar4);
  _objc_release(uVar1);
  if ((uVar7 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    puVar4 = puVar8;
    func_0x00010bfb1920(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd2420(uVar6);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 107ce2c3c; end: 107ce2ceb;  */

void FUN_107ce2c3c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010be458e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd2420(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce2cec; end: 107ce2d7f; -[SCUnifiedProfileUsageLogger _backgroundLogEventWithFriendshipStatus:snapchatter:] */

void FUN_107ce2cec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_4 = -1;
  }
  else {
    FUN_107cdf47c(param_4);
  }
  func_0x00010c1a0ce0(param_3,param_2,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c293fc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce2d80; end: 107ce2f3f; -[SCUnifiedProfileUsageLogger _backgroundIncrementMetricWithFriendshipStatus:] */

void FUN_107ce2d80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x10) == 3) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c08fa60();
    if ((lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0x58), lVar1 != 0)) {
      func_0x00010c244620();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010c09d7c0(lVar5);
      _objc_release(uVar3);
      _objc_release(puVar2);
      _objc_release(lVar5);
      _objc_release(lVar1);
      lVar4 = param_3;
      goto LAB_107ce2f00;
    }
  }
  lVar4 = *(long *)(param_1 + 0x60);
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar5);
  _objc_release(lVar1);
LAB_107ce2f00:
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd23c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce2f40; end: 107ce2f8b;  */

void FUN_107ce2f40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd23c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ce2f8c; end: 107ce306b; -[SCUnifiedProfileUsageLogger _backgroundIncrementMetricWithFriendshipStatus:snapchatter:] */

void FUN_107ce2f8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_4 = -1;
  }
  else {
    FUN_107cdf47c(param_4);
  }
  func_0x00010bafa1cc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110eb6f78,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfcdfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ce306c; end: 107ce309f; -[SCUnifiedProfileUsageLogger _getSourcePageType] */

undefined8 FUN_107ce306c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e20e18);
  uVar1 = 0x90;
  if ((int)uVar2 == 0) {
    uVar1 = 0x50;
  }
  return uVar1;
}



/* Entry: 107ce30a0; end: 107ce312b; -[SCUnifiedProfileUsageLogger _isViewingNonFriendPublicProfileV2ForSnapchatter:] */

uint FUN_107ce30a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90);
  if ((lVar1 == 0) || (func_0x000108fab1cc(), (int)lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = param_3;
      func_0x000100bf119c(param_3);
      uVar3 = (uint)lVar2 ^ 1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107ce312c; end: 107ce31df; -[SCUnifiedProfileUsageLogger .cxx_destruct] */

void FUN_107ce312c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107ce31e0; end: 107ce32d3; -[SCMyUnifiedProfileHeaderActionHandler initWithNavigationDelegate:settingsScopeExposer:settingsScopeServices:qrCodeCardScopeExposer:] */

undefined1 *
FUN_107ce31e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fa810;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce32d4; end: 107ce3317; -[SCMyUnifiedProfileHeaderActionHandler setPresentingViewController:] */

void FUN_107ce32d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf3a560(param_1);
  _objc_storeWeak(param_1 + 0x30,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce3318; end: 107ce342f; -[SCMyUnifiedProfileHeaderActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_107ce3318(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126afdb8;
      _objc_opt_class(PTR_PTR_1126afdb8);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      func_0x00010be7df40(param_1);
      _objc_release(uVar1);
    }
  }
  else {
    func_0x00010bebada0(param_1);
    param_1 = 1;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 107ce3430; end: 107ce34d3; -[SCMyUnifiedProfileHeaderActionHandler _showSettings] */

void FUN_107ce3430(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf3a560(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107ce34d4; end: 107ce34ff;  */

void FUN_107ce34d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ce3500; end: 107ce35df; -[SCMyUnifiedProfileHeaderActionHandler _showSettingsAfterCleanup] */

void FUN_107ce3500(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  FUN_107ce389c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  iVar1 = (int)lVar2;
  if (lVar3 == 0) {
    func_0x000100150168();
    if (iVar1 == 0) goto LAB_107ce35cc;
    uVar5 = 0;
    func_0x0001008cd514(0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    puVar4 = PTR_PTR_1126aead0;
    _objc_alloc();
    func_0x00010c02e4c0();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf22f40(uVar6,param_2,param_1,0,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar6);
  }
  _objc_release(uVar6);
LAB_107ce35cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107ce35e0; end: 107ce374f; -[SCMyUnifiedProfileHeaderActionHandler _presentQRCodePage:] */

bool FUN_107ce35e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar3 = param_3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3ed8;
    _objc_opt_class(PTR_PTR_1126b3ed8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c038f40(puVar4);
    _objc_release(lVar6);
    puVar7 = PTR_PTR_1126b4a78;
    _objc_alloc(PTR_PTR_1126b4a78);
    puVar8 = puVar7;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058400(puVar7);
    _objc_release(puVar8);
    if (uVar1 != 0) {
      func_0x00010c0e94c0(uVar3);
      func_0x00010c1d4f40(puVar7);
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return lVar2 == 0;
}



/* Entry: 107ce3750; end: 107ce3757; -[SCMyUnifiedProfileHeaderActionHandler settingsScopeWantsDismiss] */

void FUN_107ce3750(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanupSettings__1125ac300,0);
  return;
}



/* Entry: 107ce3758; end: 107ce375f; -[SCMyUnifiedProfileHeaderActionHandler settingsScopeDidDismiss] */

void FUN_107ce3758(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanupSettings__1125ac300,0);
  return;
}



/* Entry: 107ce3760; end: 107ce37a7; -[SCMyUnifiedProfileHeaderActionHandler qrCodeCardPageDidDismiss] */

void FUN_107ce3760(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107ce37a8; end: 107ce382b; -[SCMyUnifiedProfileHeaderActionHandler cleanupSettings:] */

void FUN_107ce37a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    func_0x00010bf6f440(*(long *)(param_1 + 0x10),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ce382c; end: 107ce3843; -[SCMyUnifiedProfileHeaderActionHandler presentingViewController] */

void FUN_107ce382c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce3844; end: 107ce389b; -[SCMyUnifiedProfileHeaderActionHandler .cxx_destruct] */

void FUN_107ce3844(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107ce389c; end: 107ce39f7;  */

void FUN_107ce389c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c29d0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    if (uVar1 == 0) {
      uVar2 = 0;
      func_0x0001008cd514();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
      while (PTR__OBJC_CLASS___UINavigationController_1126af6f0 = puVar4, uVar2 != 0) {
        uVar3 = uVar1;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        uVar2 = uVar3;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar1 = uVar3;
        puVar4 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
      }
      _objc_opt_class(puVar4);
      uVar3 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar4);
      uVar2 = uVar1;
      if ((uVar3 & 1) == 0) {
        func_0x00010c0d66a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar1);
      }
      _objc_release(uVar1);
    }
    else {
      _objc_retain(param_1);
      uVar2 = param_1;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ce39f8; end: 107ce3a03; -[SCPreferences setCreateBitmojiPromptImpressions:] */

void FUN_107ce39f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1add50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setInteger_forKey__112649178,param_3,
             &PTR____CFConstantStringClassReference_110eb7018);
  return;
}



/* Entry: 107ce3a04; end: 107ce3a0f; -[SCPreferences createBitmojiPromptImpressions] */

void FUN_107ce3a04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_integerForKey__1125f79f0,&PTR____CFConstantStringClassReference_110eb7018
            );
  return;
}



/* Entry: 107ce3a10; end: 107ce3abb; -[SCMyProfileFooterSectionCreator initWithSCUserInfoServices:isDeduplicationForDidUpdateViewModelsEnabled:ghostImageService:] */

undefined1 *
FUN_107ce3a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ce3abc; end: 107ce3ac3; -[SCMyProfileFooterSectionCreator order] */

undefined8 FUN_107ce3abc(void)

{
  return 0x40;
}



/* Entry: 107ce3ac4; end: 107ce3c2f; -[SCMyProfileFooterSectionCreator section] */

void FUN_107ce3ac4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110eb4ff8;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f12138;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d7748;
    _objc_alloc(PTR_PTR_1126d7748);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c127bc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3140(puVar2,param_2,lVar4,uVar3,*(undefined1 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
    func_0x00010c1f9240(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_retain(puVar1);
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(lVar4);
  }
  else {
    _objc_retain(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(lVar4 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce3c30; end: 107ce3c47; -[SCMyProfileFooterSectionCreator lifecycleAnnouncer] */

void FUN_107ce3c30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ce3c48; end: 107ce3c53; -[SCMyProfileFooterSectionCreator setLifecycleAnnouncer:] */

void FUN_107ce3c48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107ce3c54; end: 107ce3c5b; -[SCMyProfileFooterSectionCreator actionHandler] */

undefined8 FUN_107ce3c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ce3c5c; end: 107ce3cab; -[SCMyProfileFooterSectionCreator .cxx_destruct] */

void FUN_107ce3c5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ce3cac; end: 107ce3dbb; -[SCMyProfileFooterSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ce3cac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126b1130;
  lVar1 = param_1 + _DAT_11276d3dc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070420(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d7750;
  _objc_alloc(PTR_PTR_1126d7750);
  lVar1 = param_1 + _DAT_11276d3e0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_11276d3e4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c041040(puVar4,param_2,lVar1,puVar3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11276d3e8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



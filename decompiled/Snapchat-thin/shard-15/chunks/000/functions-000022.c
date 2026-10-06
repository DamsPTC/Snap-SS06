/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b776e1c; end: 10b776ebf;  */

void FUN_10b776e1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b776ec0; end: 10b776ecb; +[SOJUGalleryGeoFilterBuilder messageClass] */

void FUN_10b776ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0c90);
  return;
}



/* Entry: 10b776ecc; end: 10b776ecf; +[SOJUGalleryGeoFilterBuilder withJUGalleryGeoFilter:] */

void FUN_10b776ecc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b776ed0; end: 10b776f0b; -[SOJUGalleryGeoFilterDynamicResource initWithType:source:xOffset:yOffset:xSize:ySize:rotation:staticText:fontSize:fontUrl:fontColor:] */

void FUN_10b776ed0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b776f0c; end: 10b777013; +[SOJUGalleryGeoFilterDynamicResource registerMessageFields:] */

void FUN_10b776f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b777068,FUN_10b7770d4,0);
  func_0x00010b777054();
  func_0x00010b777048();
  func_0x00010b777014();
  func_0x00010b777014();
  func_0x00010b777014();
  func_0x00010b777014();
  func_0x00010b777054();
  func_0x00010b777048();
  func_0x00010b777034();
  func_0x00010b777048();
  func_0x00010b777014();
  func_0x00010b777034();
  func_0x00010b777048();
  func_0x00010b777034();
  func_0x00010b777048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b777014; end: 10b777067;  */

void FUN_10b777014(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b777068; end: 10b7770d3;  */

undefined8 FUN_10b777068(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db93d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db93d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x428b13b;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,param_1);
    uVar2 = 0x273d2d;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7770d4; end: 10b77710b;  */

undefined ** FUN_10b7770d4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
  if (param_1 != 0x273d2d) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db93d8;
  if (param_1 != 0x428b13b) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b77710c; end: 10b777233;  */

undefined8 FUN_10b77710c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfeaf8;
  func_0x00010b77733c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x1c155;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dfec58;
    func_0x00010b77733c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffad8d9a2b;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e8f298;
      func_0x00010b77733c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x32a007;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e8f278;
        func_0x00010b77733c();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x677c21c;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f24198;
          func_0x00010b77733c();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffc66824b1;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f241b8;
            func_0x00010b77733c();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x6f2d2b2;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f241d8;
              func_0x00010b77733c();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xffffffffdbb0619b;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f241f8;
                func_0x00010b77733c();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffff9ab23308;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110db4498;
                  func_0x00010b77733c();
                  uVar2 = 0xffffffffaeb2cc55;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0;
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



/* Entry: 10b777234; end: 10b777343;  */

undefined ** FUN_10b777234(long param_1)

{
  if (param_1 == -0x654dccf8) {
    return &PTR____CFConstantStringClassReference_110f241f8;
  }
  if (param_1 == 0x6f2d2b2) {
    return &PTR____CFConstantStringClassReference_110f241b8;
  }
  if (param_1 == -0x514d33ab) {
    return &PTR____CFConstantStringClassReference_110db4498;
  }
  if (param_1 == -0x3997db4f) {
    return &PTR____CFConstantStringClassReference_110f24198;
  }
  if (param_1 == -0x244f9e65) {
    return &PTR____CFConstantStringClassReference_110f241d8;
  }
  if (param_1 == 0x1c155) {
    return &PTR____CFConstantStringClassReference_110dfeaf8;
  }
  if (param_1 == 0x32a007) {
    return &PTR____CFConstantStringClassReference_110e8f298;
  }
  if (param_1 != 0x677c21c) {
    if (param_1 == -0x527265d5) {
      return &PTR____CFConstantStringClassReference_110dfec58;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110e8f278;
}



/* Entry: 10b777344; end: 10b7773c3;  */

undefined8 FUN_10b777344(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f24158;
  func_0x00010b777418();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x5ee93ad2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f24178;
    func_0x00010b777418();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x3dc5995;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7e578;
      func_0x00010b777418();
      uVar2 = 0xffffffffbe0f5dbf;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7773c4; end: 10b77741f;  */

undefined ** FUN_10b7773c4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x3dc5995) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f24178;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f24158;
  if (param_1 != 0x5ee93ad2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e578;
  if (param_1 != -0x41f0a241) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b777420; end: 10b77748b;  */

undefined8 FUN_10b777420(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e598;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7e598,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff9260c26e;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ece478;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ece478,param_2,param_1);
    uVar2 = 0xffffffffa970ec1f;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b77748c; end: 10b7774c7;  */

undefined ** FUN_10b77748c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ece478;
  if (param_1 != -0x568f13e1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e598;
  if (param_1 != -0x6d9f3d92) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7774c8; end: 10b7774cb; -[SOJUGalleryGroupInfoFilterStyle initWithGroupInviteProtoBase64:] */

void FUN_10b7774c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b7774cc; end: 10b77750b; +[SOJUGalleryGroupInfoFilterStyle registerMessageFields:] */

void FUN_10b7774cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_groupInviteProtoBase64_112545c08,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b77750c; end: 10b777517; +[SOJUGalleryGroupInfoFilterStyleBuilder messageClass] */

void FUN_10b77750c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0cb0);
  return;
}



/* Entry: 10b777518; end: 10b77751b; +[SOJUGalleryGroupInfoFilterStyleBuilder withJUGalleryGroupInfoFilterStyle:] */

void FUN_10b777518(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b77751c; end: 10b777543; -[SOJUGalleryInfoFilter initWithType:battery:date:speed:weather:altitude:] */

void FUN_10b77751c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b777544; end: 10b777623; +[SOJUGalleryInfoFilter registerMessageFields:] */

void FUN_10b777544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b777658,FUN_10b777958,0);
  _objc_opt_class(PTR_PTR_1126e0c00);
  FUN_10b777624();
  _objc_opt_class(PTR_PTR_1126e0c40);
  FUN_10b777624();
  _objc_opt_class(PTR_PTR_1126e0cb8);
  FUN_10b777624();
  _objc_opt_class(PTR_PTR_1126e0cc0);
  FUN_10b777624();
  _objc_opt_class(PTR_PTR_1126e0bf0);
  FUN_10b777624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b777624; end: 10b777647;  */

void FUN_10b777624(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b777648; end: 10b777653; +[SOJUGalleryInfoFilterBuilder messageClass] */

void FUN_10b777648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0c80);
  return;
}



/* Entry: 10b777654; end: 10b777657; +[SOJUGalleryInfoFilterBuilder withJUGalleryInfoFilter:] */

void FUN_10b777654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b777658; end: 10b777957;  */

undefined8 FUN_10b777658(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea618;
  func_0x00010b777c3c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x73b7c3d4;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f276d8;
    func_0x00010b777c3c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x4b70827;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f276f8;
      func_0x00010b777c3c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x170d39ed;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dea538;
        func_0x00010b777c3c();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x1fe7ae;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dea4b8;
          func_0x00010b777c3c();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffa8093aa2;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7e5b8;
            func_0x00010b777c3c();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffff8fa8a59d;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110efc718;
              func_0x00010b777c3c();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x4dc724f;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110de8378;
                func_0x00010b777c3c();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x40efe5f;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110efc2d8;
                  func_0x00010b777c3c();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x6370a9ca;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110e78ab8;
                    func_0x00010b777c3c();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x6c1a7e6f;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110dbe6d8;
                      func_0x00010b777c3c();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x3f9998b7;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110e3deb8;
                        func_0x00010b777c3c();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x4c4d50f;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7e5d8;
                          func_0x00010b777c3c();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x5a8d701e;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e33d18;
                            func_0x00010b777c3c();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x464f605;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f4a818;
                              func_0x00010b777c3c();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xffffffffa7e14523;
                              }
                              else {
                                uVar2 = 0x258329;
                                ppuVar1 = &PTR____CFConstantStringClassReference_110efba78;
                                func_0x00010b777c3c();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x258fbf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110db4518;
                                  func_0x00010b777c3c();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xabddadb;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
                                    func_0x00010b777c3c();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xfffffffffcd22957;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110dea5b8;
                                      func_0x00010b777c3c();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0xffffffffe9282be6;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f7e5f8;
                                        func_0x00010b777c3c();
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x2e8a0bde;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7e618
                                          ;
                                          func_0x00010b777c3c();
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x4007b5cf;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7e638;
                                            func_0x00010b777c3c();
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0xffffffffe9616194;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5398;
                                              func_0x00010b777c3c();
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x608165dd;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6c1b8;
                                                func_0x00010b777c3c();
                                                if (ppuVar1 != (undefined **)0x0) {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7e658;
                                                  func_0x00010b777c3c();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffaf78fa2d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7e678;
                                                  func_0x00010b777c3c();
                                                  uVar2 = 0xffffffffcf840e00;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0;
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



/* Entry: 10b777958; end: 10b777c43;  */

undefined ** FUN_10b777958(long param_1)

{
  if (param_1 == -0x70575a63) {
    return &PTR____CFConstantStringClassReference_110f7e5b8;
  }
  if (param_1 == -0x581ebadd) {
    return &PTR____CFConstantStringClassReference_110f4a818;
  }
  if (param_1 == -0x57f6c55e) {
    return &PTR____CFConstantStringClassReference_110dea4b8;
  }
  if (param_1 == -0x508705d3) {
    return &PTR____CFConstantStringClassReference_110f7e658;
  }
  if (param_1 == -0x307bf200) {
    return &PTR____CFConstantStringClassReference_110f7e678;
  }
  if (param_1 == -0x16d7d41a) {
    return &PTR____CFConstantStringClassReference_110dea5b8;
  }
  if (param_1 == -0x169e9e6c) {
    return &PTR____CFConstantStringClassReference_110f7e638;
  }
  if (param_1 == -0x32dd6a9) {
    return &PTR____CFConstantStringClassReference_110dbaab8;
  }
  if (param_1 == 0x1fe7ae) {
    return &PTR____CFConstantStringClassReference_110dea538;
  }
  if (param_1 == 0x258329) {
    return &PTR____CFConstantStringClassReference_110f6c1b8;
  }
  if (param_1 == 0x258fbf) {
    return &PTR____CFConstantStringClassReference_110efba78;
  }
  if (param_1 == 0x40efe5f) {
    return &PTR____CFConstantStringClassReference_110de8378;
  }
  if (param_1 == 0x464f605) {
    return &PTR____CFConstantStringClassReference_110e33d18;
  }
  if (param_1 == 0x73b7c3d4) {
    return &PTR____CFConstantStringClassReference_110dea618;
  }
  if (param_1 == 0x4c4d50f) {
    return &PTR____CFConstantStringClassReference_110e3deb8;
  }
  if (param_1 != 0x4dc724f) {
    if (param_1 == 0xabddadb) {
      return &PTR____CFConstantStringClassReference_110db4518;
    }
    if (param_1 == 0x170d39ed) {
      return &PTR____CFConstantStringClassReference_110f276f8;
    }
    if (param_1 == 0x2e8a0bde) {
      return &PTR____CFConstantStringClassReference_110f7e5f8;
    }
    if (param_1 == 0x3f9998b7) {
      return &PTR____CFConstantStringClassReference_110dbe6d8;
    }
    if (param_1 == 0x4007b5cf) {
      return &PTR____CFConstantStringClassReference_110f7e618;
    }
    if (param_1 == 0x5a8d701e) {
      return &PTR____CFConstantStringClassReference_110f7e5d8;
    }
    if (param_1 == 0x608165dd) {
      return &PTR____CFConstantStringClassReference_110eb5398;
    }
    if (param_1 != 0x6370a9ca) {
      if (param_1 == 0x6c1a7e6f) {
        return &PTR____CFConstantStringClassReference_110e78ab8;
      }
      if (param_1 == 0x4b70827) {
        return &PTR____CFConstantStringClassReference_110f276d8;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110efc2d8;
  }
  return &PTR____CFConstantStringClassReference_110efc718;
}



/* Entry: 10b777c44; end: 10b777cab; -[SOJUGalleryInfoStickerStyle initWithDate:weather:altitude:rating:venue:group:mention:request:snapcode:topic:storyinvite:music:attachment:poll:commerce:cameraRoll:question:lensNft:discoverDeeplink:uvIndex:fanPass:plan:snapMe:shareYours:] */

void FUN_10b777c44(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b777cac; end: 10b777f7b; +[SOJUGalleryInfoStickerStyle registerMessageFields:] */

void FUN_10b777cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0c40;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b777f7c();
  func_0x00010bf06b60(param_3,param_2,PTR_s_weather_112686530,0,0,6,0,FUN_10b79ea48,FUN_10b79eac8,0)
  ;
  _objc_opt_class(PTR_PTR_1126e0bf8);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0cc8);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0cd0);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0cb0);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126dc300);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0cd8);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0ce0);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0ce8);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0cf0);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0cf8);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126ba908);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0d00);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126dc298);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0c08);
  func_0x00010b777fa0();
  func_0x00010b777fb8();
  _objc_opt_class(PTR_PTR_1126e0d08);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0d10);
  func_0x00010b777fa0();
  func_0x00010b777fb8();
  _objc_opt_class(PTR_PTR_1126e0c50);
  func_0x00010b777fa0();
  func_0x00010b777fb8();
  _objc_opt_class(PTR_PTR_1126e0d18);
  func_0x00010b777fa0();
  func_0x00010b777fb8();
  _objc_opt_class(PTR_PTR_1126e0c70);
  func_0x00010b777fa0();
  func_0x00010b777fb8();
  _objc_opt_class(PTR_PTR_1126e0d20);
  FUN_10b777f7c();
  _objc_opt_class(PTR_PTR_1126e0d28);
  func_0x00010b777fa0();
  func_0x00010b777fb8();
  _objc_opt_class(PTR_PTR_1126e0d30);
  func_0x00010b777fa0();
  func_0x00010b777fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b777f7c; end: 10b777fc3;  */

void FUN_10b777f7c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b777fc4; end: 10b777fcf; +[SOJUGalleryInfoStickerStyleBuilder messageClass] */

void FUN_10b777fc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d38);
  return;
}



/* Entry: 10b777fd0; end: 10b777fd3; +[SOJUGalleryInfoStickerStyleBuilder withJUGalleryInfoStickerStyle:] */

void FUN_10b777fd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b777fd4; end: 10b777fff; -[SOJUGalleryLensNftStickerStyle initWithLensId:ownerText:iconUrl:primaryText:secondaryText:showVerifiedBadge:lensCollectibleUrl:] */

void FUN_10b777fd4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778000; end: 10b7780af; +[SOJUGalleryLensNftStickerStyle registerMessageFields:] */

void FUN_10b778000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_lensId_112602b60;
  _objc_retain(param_3);
  func_0x00010b7780d0(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b7780b0();
  func_0x00010b7780b0();
  func_0x00010b7780b0();
  func_0x00010b7780b0();
  func_0x00010b7780d0(param_3,param_2,PTR_s_showVerifiedBadge_112545c58,0,1,0,in_x6,in_x7,0,0);
  func_0x00010b7780b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7780b0; end: 10b7780db;  */

void FUN_10b7780b0(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7780dc; end: 10b7780ff; -[SOJUGalleryLensTool initWithLensTypeDeprecated:lensTypeEnum:isFromToolbar:lensId:hasUiElements:] */

void FUN_10b7780dc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778100; end: 10b7781a7; +[SOJUGalleryLensTool registerMessageFields:] */

void FUN_10b778100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_lensTypeDeprecated_112545c70;
  _objc_retain(param_3);
  FUN_10b7781a8(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110df8398,2,1,in_x6,
                in_x7,0,0);
  func_0x00010b7781b4();
  FUN_10b7781a8();
  func_0x00010b7781b4();
  FUN_10b7781a8();
  func_0x00010b7781b4();
  FUN_10b7781a8();
  func_0x00010b7781b4();
  FUN_10b7781a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7781a8; end: 10b7781c7;  */

void FUN_10b7781a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7781c8; end: 10b7781e7; -[SOJUGalleryMagicMomentState initWithFrameTime:version:] */

void FUN_10b7781c8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7781e8; end: 10b778253; +[SOJUGalleryMagicMomentState registerMessageFields:] */

void FUN_10b7781e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_frameTime_1125cb610;
  _objc_retain(param_3);
  FUN_10b778254(param_3,param_2,puVar1,0,1);
  FUN_10b778254(param_3,param_2,PTR_s_version_112683d20,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778254; end: 10b778263;  */

void FUN_10b778254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b778264; end: 10b77826f; +[SOJUGalleryMagicMomentStateBuilder messageClass] */

void FUN_10b778264(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d7da0);
  return;
}



/* Entry: 10b778270; end: 10b778273; +[SOJUGalleryMagicMomentStateBuilder withJUGalleryMagicMomentState:] */

void FUN_10b778270(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b778274; end: 10b7782a3; -[SOJUGalleryMagicToolIndividual initWithMagicToolType:totalEditCount:finalEditCount:resetCount:sessionCount:hasMagicImage:resourceId:resourceUrl:] */

void FUN_10b778274(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7782a4; end: 10b778377; +[SOJUGalleryMagicToolIndividual registerMessageFields:] */

void FUN_10b7782a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_magicToolType_112545c88;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,FUN_10b7783b8,FUN_10b778438,0);
  FUN_10b778378();
  FUN_10b778378();
  FUN_10b778378();
  FUN_10b778378();
  func_0x00010b778398();
  func_0x00010b7783ac();
  func_0x00010b778398();
  func_0x00010b7783ac();
  func_0x00010b778398();
  func_0x00010b7783ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778378; end: 10b7783b7;  */

void FUN_10b778378(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7783b8; end: 10b778437;  */

undefined8 FUN_10b7783b8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e698;
  func_0x00010b77848c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x7a60b68c;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e6b8;
    func_0x00010b77848c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x17a8e4d6;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7e6d8;
      func_0x00010b77848c();
      uVar2 = 0xffffffff96e52a15;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b778438; end: 10b778493;  */

undefined ** FUN_10b778438(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x17a8e4d6) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7e6b8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e698;
  if (param_1 != 0x7a60b68c) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e6d8;
  if (param_1 != -0x691ad5eb) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b778494; end: 10b7784c3; -[SOJUGalleryMagicTools initWithTotalEditCount:finalEditCount:resetCount:sessionCount:hasMagicImage:magicToolMetadata:finalEditSequence:purikuraMetadata:] */

void FUN_10b778494(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7784c4; end: 10b7785bb; +[SOJUGalleryMagicTools registerMessageFields:] */

void FUN_10b7784c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_totalEditCount_112545c90;
  _objc_retain(param_3);
  FUN_10b7785bc(param_3,param_2,puVar1);
  FUN_10b7785bc(param_3,param_2,PTR_s_finalEditCount_112545c98);
  FUN_10b7785bc(param_3,param_2,PTR_s_resetCount_112545ba8);
  FUN_10b7785bc(param_3,param_2,PTR_s_sessionCount_112545ca0);
  func_0x00010b7785e0();
  func_0x00010b7785d4();
  _objc_opt_class(PTR_PTR_1126e0d40);
  func_0x00010b7785f4();
  func_0x00010b7785e0();
  func_0x00010b7785d4();
  _objc_opt_class(PTR_PTR_1126e0d48);
  func_0x00010b7785f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7785bc; end: 10b77860f;  */

void FUN_10b7785bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,1,0,0);
  return;
}



/* Entry: 10b778610; end: 10b778613; -[SOJUGalleryMediaAttribute initWithAttribute:] */

void FUN_10b778610(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b778614; end: 10b77865f; +[SOJUGalleryMediaAttribute registerMessageFields:] */

void FUN_10b778614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_attribute_1125a1118,0,0,6,0,FUN_10b778660,FUN_10b7786fc,
                      0);
  return;
}



/* Entry: 10b778660; end: 10b7786fb;  */

undefined8 FUN_10b778660(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e8f198;
  func_0x00010b778768();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3ded2a3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e6f8;
    func_0x00010b778768();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffc6a0f69d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7e718;
      func_0x00010b778768();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x7fa358f2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7e738;
        func_0x00010b778768();
        uVar2 = 0xffffffff92628bf8;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7786fc; end: 10b77876f;  */

undefined ** FUN_10b7786fc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x395f0963) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7e6f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e8f198;
  if (param_1 != 0x3ded2a3) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e718;
  if (param_1 != 0x7fa358f2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7e738;
  if (param_1 != -0x6d9d7408) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b778770; end: 10b778793; -[SOJUGalleryMentionStickerStyle initWithUserId:username:type:mutableUsername:displayName:] */

void FUN_10b778770(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778794; end: 10b778853; +[SOJUGalleryMentionStickerStyle registerMessageFields:] */

void FUN_10b778794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_userId_112682320;
  _objc_retain(param_3);
  FUN_10b778854(param_3,param_2,puVar1,0,1);
  func_0x00010b778864();
  FUN_10b778854();
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b778884,FUN_10b778904,0);
  func_0x00010b778864();
  FUN_10b778854();
  func_0x00010b778864();
  FUN_10b778854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778854; end: 10b778873;  */

void FUN_10b778854(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b778874; end: 10b77887f; +[SOJUGalleryMentionStickerStyleBuilder messageClass] */

void FUN_10b778874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126dc300);
  return;
}



/* Entry: 10b778880; end: 10b778883; +[SOJUGalleryMentionStickerStyleBuilder withJUGalleryMentionStickerStyle:] */

void FUN_10b778880(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b778884; end: 10b778903;  */

undefined8 FUN_10b778884(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dceb38;
  func_0x00010b778954();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x6233516;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dceb58;
    func_0x00010b778954();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x2eef76;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ef3978;
      func_0x00010b778954();
      uVar2 = 0x3a0799b6;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b778904; end: 10b77895b;  */

undefined ** FUN_10b778904(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x2eef76) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dceb58;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dceb38;
  if (param_1 != 0x6233516) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ef3978;
  if (param_1 != 0x3a0799b6) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b77895c; end: 10b77897b; -[SOJUGalleryMultiSnapSegment initWithTrimmedLeftTime:trimmedRightTime:] */

void FUN_10b77895c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77897c; end: 10b7789d7; +[SOJUGalleryMultiSnapSegment registerMessageFields:] */

void FUN_10b77897c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_trimmedLeftTime_112545ce0;
  _objc_retain(param_3);
  FUN_10b7789d8(param_3,param_2,puVar1);
  FUN_10b7789d8(param_3,param_2,PTR_s_trimmedRightTime_112545ce8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7789d8; end: 10b7789ef;  */

void FUN_10b7789d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,2,0,0);
  return;
}



/* Entry: 10b7789f0; end: 10b778a17; -[SOJUGalleryMusicStickerStyle initWithTitle:artistName:trackId:offsetMs:lottieUrl:musicStickerType:] */

void FUN_10b7789f0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778a18; end: 10b778aef; +[SOJUGalleryMusicStickerStyle registerMessageFields:] */

void FUN_10b778a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_title_112679e90;
  _objc_retain(param_3);
  FUN_10b778af0(param_3,param_2,puVar1,0,0,6);
  func_0x00010b778afc();
  FUN_10b778af0();
  func_0x00010b778afc();
  FUN_10b778af0();
  func_0x00010b778afc();
  FUN_10b778af0();
  func_0x00010b778afc();
  FUN_10b778af0();
  func_0x00010bf06b60(param_3,param_2,PTR_s_musicStickerType_112612860,0,1,6,0,FUN_10b778b20,
                      FUN_10b778bd8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778af0; end: 10b778b0f;  */

void FUN_10b778af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b778b10; end: 10b778b1b; +[SOJUGalleryMusicStickerStyleBuilder messageClass] */

void FUN_10b778b10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0cf8);
  return;
}



/* Entry: 10b778b1c; end: 10b778b1f; +[SOJUGalleryMusicStickerStyleBuilder withJUGalleryMusicStickerStyle:] */

void FUN_10b778b1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b778b20; end: 10b778bd7;  */

undefined8 FUN_10b778b20(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9f18;
  func_0x00010b778c5c();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4d28309;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ebd278;
    func_0x00010b778c5c();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x52a96b3d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ed3d98;
      func_0x00010b778c5c();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x1159bc9b;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ed3db8;
        func_0x00010b778c5c();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x50be1be3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7e758;
          func_0x00010b778c5c();
          uVar2 = 0x762ef49f;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b778bd8; end: 10b778c63;  */

undefined ** FUN_10b778bd8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x52a96b3d) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ebd278;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7e758;
  if (param_1 != 0x762ef49f) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ed3db8;
  if (param_1 != 0x50be1be3) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed3d98;
  if (param_1 != 0x1159bc9b) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db9f18;
  if (param_1 != 0x4d28309) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b778c64; end: 10b778c93; -[SOJUGalleryPlanStickerStyle initWithEventId:title:startTimestampMs:locationText:eventEmojiOrGraphicId:tzid:participantCount:creatorUserId:] */

void FUN_10b778c64(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778c94; end: 10b778d5f; +[SOJUGalleryPlanStickerStyle registerMessageFields:] */

void FUN_10b778c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b778da8();
  func_0x00010b778d60();
  func_0x00010b778da8();
  func_0x00010b778d78();
  func_0x00010b778d94();
  func_0x00010b778d88();
  func_0x00010b778da8();
  func_0x00010b778d60();
  func_0x00010b778da8();
  func_0x00010b778d60();
  func_0x00010b778da8();
  func_0x00010b778d78();
  func_0x00010b778d94();
  func_0x00010b778d88();
  func_0x00010b778da8();
  func_0x00010b778d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778d60; end: 10b778db3;  */

void FUN_10b778d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b778db4; end: 10b778dbf; +[SOJUGalleryPlanStickerStyleBuilder messageClass] */

void FUN_10b778db4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d20);
  return;
}



/* Entry: 10b778dc0; end: 10b778dc3; +[SOJUGalleryPlanStickerStyleBuilder withJUGalleryPlanStickerStyle:] */

void FUN_10b778dc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b778dc4; end: 10b778de3; -[SOJUGalleryPoint initWithX:y:] */

void FUN_10b778dc4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778de4; end: 10b778e3f; +[SOJUGalleryPoint registerMessageFields:] */

void FUN_10b778de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_x_11268d448;
  _objc_retain(param_3);
  FUN_10b778e40(param_3,param_2,puVar1);
  FUN_10b778e40(param_3,param_2,PTR_s_y_11268d510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778e40; end: 10b778e57;  */

void FUN_10b778e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,4,0,0);
  return;
}



/* Entry: 10b778e58; end: 10b778e63; +[SOJUGalleryPointBuilder messageClass] */

void FUN_10b778e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126c3fe0);
  return;
}



/* Entry: 10b778e64; end: 10b778e67; +[SOJUGalleryPointBuilder withJUGalleryPoint:] */

void FUN_10b778e64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b778e68; end: 10b778e87; -[SOJUGalleryPollStickerStyle initWithPollInfoProtoBase64:isDynamic:] */

void FUN_10b778e68(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778e88; end: 10b778efb; +[SOJUGalleryPollStickerStyle registerMessageFields:] */

void FUN_10b778e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_pollInfoProtoBase64_11261e6e8;
  _objc_retain(param_3);
  FUN_10b778efc(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b778efc(param_3,param_2,PTR_s_isDynamic_1125f9e30,0,1,0,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778efc; end: 10b778f07;  */

void FUN_10b778efc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b778f08; end: 10b778f13; +[SOJUGalleryPollStickerStyleBuilder messageClass] */

void FUN_10b778f08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d00);
  return;
}



/* Entry: 10b778f14; end: 10b778f17; +[SOJUGalleryPollStickerStyleBuilder withJUGalleryPollStickerStyle:] */

void FUN_10b778f14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b778f18; end: 10b778f3b; -[SOJUGalleryPostCaptureLensTool initWithPostCaptureLensType:isFromToolbar:lensId:hasUiElements:] */

void FUN_10b778f18(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b778f3c; end: 10b778fcb; +[SOJUGalleryPostCaptureLensTool registerMessageFields:] */

void FUN_10b778f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_postCaptureLensType_11261ebe0;
  _objc_retain(param_3);
  FUN_10b778fcc(param_3,param_2,puVar1,0,1,5,in_x6,in_x7,0,0);
  func_0x00010b778fd8();
  FUN_10b778fcc();
  func_0x00010b778fd8();
  FUN_10b778fcc();
  func_0x00010b778fd8();
  FUN_10b778fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b778fcc; end: 10b778feb;  */

void FUN_10b778fcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b778fec; end: 10b778ff7; +[SOJUGalleryPostCaptureLensToolBuilder messageClass] */

void FUN_10b778fec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d50);
  return;
}



/* Entry: 10b778ff8; end: 10b778ffb; +[SOJUGalleryPostCaptureLensToolBuilder withJUGalleryPostCaptureLensTool:] */

void FUN_10b778ff8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b778ffc; end: 10b77901b; -[SOJUGalleryQuestionStickerStyle initWithQuestion:answer:] */

void FUN_10b778ffc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77901c; end: 10b779077; +[SOJUGalleryQuestionStickerStyle registerMessageFields:] */

void FUN_10b77901c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_question_112625120;
  _objc_retain(param_3);
  FUN_10b779078(param_3,param_2,puVar1);
  FUN_10b779078(param_3,param_2,PTR_s_answer_11259ebc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b779078; end: 10b77908f;  */

void FUN_10b779078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,6,0,0);
  return;
}



/* Entry: 10b779090; end: 10b77909b; +[SOJUGalleryQuestionStickerStyleBuilder messageClass] */

void FUN_10b779090(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0d08);
  return;
}



/* Entry: 10b77909c; end: 10b77909f; +[SOJUGalleryQuestionStickerStyleBuilder withJUGalleryQuestionStickerStyle:] */

void FUN_10b77909c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b7790a0; end: 10b7790bf; -[SOJUGalleryRange initWithStart:length:] */

void FUN_10b7790a0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7790c0; end: 10b77911b; +[SOJUGalleryRange registerMessageFields:] */

void FUN_10b7790c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_start_112671080;
  _objc_retain(param_3);
  FUN_10b77911c(param_3,param_2,puVar1);
  FUN_10b77911c(param_3,param_2,PTR_s_length_1126018a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77911c; end: 10b779133;  */

void FUN_10b77911c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,1,0,0);
  return;
}



/* Entry: 10b779134; end: 10b77913f; +[SOJUGalleryRangeBuilder messageClass] */

void FUN_10b779134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126dc138);
  return;
}



/* Entry: 10b779140; end: 10b779143; +[SOJUGalleryRangeBuilder withJUGalleryRange:] */

void FUN_10b779140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b769cc0; end: 10b769cdf;  */

void FUN_10b769cc0(void)

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



/* Entry: 10b769ce0; end: 10b769d03; -[SOJUBroadcastStoriesOrderingOrderingResponse initWithRecentOrder:autoAdvanceOrder:qualityProgrammingOrder:storyScores:storyDebug:] */

void FUN_10b769ce0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b769d04; end: 10b769dc7; +[SOJUBroadcastStoriesOrderingOrderingResponse registerMessageFields:] */

void FUN_10b769d04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0950;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b769dc8();
  _objc_opt_class(PTR_PTR_1126e0950);
  FUN_10b769dc8();
  _objc_opt_class(PTR_PTR_1126e0950);
  FUN_10b769dc8();
  _objc_opt_class(PTR_PTR_1126e0958);
  FUN_10b769dc8();
  _objc_opt_class(PTR_PTR_1126e0960);
  FUN_10b769dc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b769dc8; end: 10b769de7;  */

void FUN_10b769dc8(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b769de8; end: 10b769e07; -[SOJUBroadcastStoriesOrderingStoryDebug initWithItem:debugHtml:] */

void FUN_10b769de8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b769e08; end: 10b769ea3; +[SOJUBroadcastStoriesOrderingStoryDebug registerMessageFields:] */

void FUN_10b769e08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0950;
  puVar1 = PTR_s_item_1125fea48;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_debugHtml_1125b7210,0,1,6,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b769ea4; end: 10b769ec3; -[SOJUBroadcastStoriesOrderingStoryIdentifier initWithType:key:] */

void FUN_10b769ea4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b769ec4; end: 10b769f3b; +[SOJUBroadcastStoriesOrderingStoryIdentifier registerMessageFields:] */

void FUN_10b769ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  FUN_10b769f3c(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  FUN_10b769f3c(param_3,param_2,PTR_s_key_1125ff368);
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b769f3c; end: 10b769f4f;  */

void FUN_10b769f3c(void)

{
  return;
}



/* Entry: 10b769f50; end: 10b769fcf;  */

undefined8 FUN_10b769f50(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ced8;
  func_0x00010b76a024();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffa0b6c900;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7cef8;
    func_0x00010b76a024();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x473ff4a5;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7cf18;
      func_0x00010b76a024();
      uVar2 = 0x1519c6ac;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b769fd0; end: 10b76a02b;  */

undefined ** FUN_10b769fd0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x473ff4a5) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7cef8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7cf18;
  if (param_1 != 0x1519c6ac) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7ced8;
  if (param_1 != -0x5f493700) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76a02c; end: 10b76a04b; -[SOJUBroadcastStoriesOrderingStoryScore initWithItem:score:] */

void FUN_10b76a02c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76a04c; end: 10b76a0e7; +[SOJUBroadcastStoriesOrderingStoryScore registerMessageFields:] */

void FUN_10b76a04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0950;
  puVar1 = PTR_s_item_1125fea48;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_score_112631d28,0,0,3,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76a0e8; end: 10b76a2ef;  */

undefined8 FUN_10b76a0e8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7cf38;
  func_0x00010b76a4d8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffffed5529b;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daed58;
    func_0x00010b76a4d8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x453f749;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7cf58;
      func_0x00010b76a4d8();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffc5332a08;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7cf78;
        func_0x00010b76a4d8();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffa0d92be0;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7cf98;
          func_0x00010b76a4d8();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffb448acd9;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ea68d8;
            func_0x00010b76a4d8();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xfffffffff142e6b6;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f04e38;
              func_0x00010b76a4d8();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x132b0;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f04df8;
                func_0x00010b76a4d8();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x2e4426b2;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7cfb8;
                  func_0x00010b76a4d8();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xffffffffd64c4204;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7cfd8;
                    func_0x00010b76a4d8();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0xffffffffc6c32d14;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7cff8;
                      func_0x00010b76a4d8();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x6a43239a;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f04e58;
                        func_0x00010b76a4d8();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xffffffffc0839849;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7d018;
                          func_0x00010b76a4d8();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x46354646;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f7d038;
                            func_0x00010b76a4d8();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x26cbbdd7;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f04e18;
                              func_0x00010b76a4d8();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xffffffff808b0208;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f7d058;
                                func_0x00010b76a4d8();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xffffffff8e1a37fe;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d078;
                                  func_0x00010b76a4d8();
                                  uVar2 = 0x30f9a2fa;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76a2f0; end: 10b76a4df;  */

undefined ** FUN_10b76a2f0(long param_1)

{
  if (param_1 == -0x7f74fdf8) {
    return &PTR____CFConstantStringClassReference_110f04e18;
  }
  if (param_1 == -0x71e5c802) {
    return &PTR____CFConstantStringClassReference_110f7d058;
  }
  if (param_1 == -0x5f26d420) {
    return &PTR____CFConstantStringClassReference_110f7cf78;
  }
  if (param_1 == -0x4bb75327) {
    return &PTR____CFConstantStringClassReference_110f7cf98;
  }
  if (param_1 == -0x3f7c67b7) {
    return &PTR____CFConstantStringClassReference_110f04e58;
  }
  if (param_1 == -0x3accd5f8) {
    return &PTR____CFConstantStringClassReference_110f7cf58;
  }
  if (param_1 == -0x393cd2ec) {
    return &PTR____CFConstantStringClassReference_110f7cfd8;
  }
  if (param_1 == -0x29b3bdfc) {
    return &PTR____CFConstantStringClassReference_110f7cfb8;
  }
  if (param_1 == -0xebd194a) {
    return &PTR____CFConstantStringClassReference_110ea68d8;
  }
  if (param_1 == -0x12aad65) {
    return &PTR____CFConstantStringClassReference_110f7cf38;
  }
  if (param_1 == 0x132b0) {
    return &PTR____CFConstantStringClassReference_110f04e38;
  }
  if (param_1 == 0x6a43239a) {
    return &PTR____CFConstantStringClassReference_110f7cff8;
  }
  if (param_1 == 0x26cbbdd7) {
    return &PTR____CFConstantStringClassReference_110f7d038;
  }
  if (param_1 == 0x2e4426b2) {
    return &PTR____CFConstantStringClassReference_110f04df8;
  }
  if (param_1 == 0x30f9a2fa) {
    return &PTR____CFConstantStringClassReference_110f7d078;
  }
  if (param_1 != 0x46354646) {
    if (param_1 == 0x453f749) {
      return &PTR____CFConstantStringClassReference_110daed58;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110f7d018;
}



/* Entry: 10b76a4e0; end: 10b76a51b; -[SOJUBroadcastStoryFriendFeedRequest initWithChecksum:syncMetadata:requestType:mobStoryTypesToRank:shouldReturnStoryScores:mischiefIdInOrderResp:checksumMissingReason:requestSource:friendStoryShouldNotReturnViewStatus:myStoryShouldNotReturnViewerInfo:myStoryShouldNotReturn:friendStoryShouldNotReturn:] */

void FUN_10b76a4e0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76a51c; end: 10b76a67f; +[SOJUBroadcastStoryFriendFeedRequest registerMessageFields:] */

void FUN_10b76a51c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_checksum_1125abc48;
  _objc_retain(param_3);
  func_0x00010b76a6a0(param_3,param_2,puVar1,0,0,6);
  func_0x00010b76a6ac();
  func_0x00010b76a6a0();
  func_0x00010b76a6ac();
  func_0x00010b76a6bc();
  puVar1 = PTR_s_mobStoryTypesToRank_112544e00;
  puVar2 = PTR_PTR_1126e0968;
  _objc_opt_class(PTR_PTR_1126e0968);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
  func_0x00010b76a680();
  func_0x00010b76a680();
  func_0x00010b76a6ac();
  func_0x00010b76a6bc();
  func_0x00010b76a6ac();
  func_0x00010b76a6bc();
  func_0x00010b76a680();
  func_0x00010b76a680();
  func_0x00010b76a680();
  func_0x00010b76a680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76a680; end: 10b76a6c7;  */

void FUN_10b76a680(void)

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



/* Entry: 10b76a6c8; end: 10b76a6cb; -[SOJUBroadcastStoryFriendFeedRequestMobStoryType initWithMobStoryType:] */

void FUN_10b76a6c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b76a6cc; end: 10b76a717; +[SOJUBroadcastStoryFriendFeedRequestMobStoryType registerMessageFields:] */

void FUN_10b76a6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_mobStoryType_112544e48,0,1,6,0,FUN_10b76a718,
                      FUN_10b76a7b4,0);
  return;
}



/* Entry: 10b76a718; end: 10b76a7b3;  */

undefined8 FUN_10b76a718(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
  func_0x00010b76a820();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x77297f71;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ceb8;
    func_0x00010b76a820();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff9c4b3b80;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb37b8;
      func_0x00010b76a820();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x180cb163;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f6a818;
        func_0x00010b76a820();
        uVar2 = 0x6b166938;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76a7b4; end: 10b76a827;  */

undefined ** FUN_10b76a7b4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x63b4c480) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7ceb8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f6a818;
  if (param_1 != 0x6b166938) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb37b8;
  if (param_1 != 0x180cb163) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e17798;
  if (param_1 != 0x77297f71) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76a828; end: 10b76a893;  */

undefined8 FUN_10b76a828(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d098;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d098,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfffffffffb885561;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d0b8,param_2,param_1);
    uVar2 = 0x211a8f;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76a894; end: 10b76a8cb;  */

undefined ** FUN_10b76a894(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0b8;
  if (param_1 != 0x211a8f) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d098;
  if (param_1 != -0x477aa9f) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76a8cc; end: 10b76a937;  */

undefined8 FUN_10b76a8cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d0d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffd57fe070;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d0f8,param_2,param_1);
    uVar2 = 0xffffffffb2725008;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76a938; end: 10b76a973;  */

undefined ** FUN_10b76a938(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0f8;
  if (param_1 != -0x4d8daff8) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d0d8;
  if (param_1 != -0x2a801f90) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76a974; end: 10b76a9a3; -[SOJUBroadcastTileMetadata initWithIdValue:type:displayName:color:logo:logoType:isSponsored:tiles:] */

void FUN_10b76a974(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76a9a4; end: 10b76aaf7; +[SOJUBroadcastTileMetadata registerMessageFields:] */

void FUN_10b76a9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  FUN_10b76aaf8(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2);
  func_0x00010b76ab08();
  func_0x00010b76ab14();
  func_0x00010b76ab08();
  FUN_10b76aaf8();
  func_0x00010b76ab08();
  FUN_10b76aaf8();
  func_0x00010b76ab08();
  FUN_10b76aaf8();
  func_0x00010b76ab08();
  func_0x00010b76ab14();
  func_0x00010b76ab08();
  func_0x00010bf06b60();
  puVar1 = PTR_s_tiles_112544d40;
  puVar2 = PTR_PTR_1126e0930;
  _objc_opt_class(PTR_PTR_1126e0930);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76aaf8; end: 10b76ab1f;  */

void FUN_10b76aaf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76ab20; end: 10b76ab8b;  */

undefined8 FUN_10b76ab20(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2dc38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2dc38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x1494f;
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



/* Entry: 10b76ab8c; end: 10b76abbf;  */

undefined ** FUN_10b76ab8c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
  if (param_1 != 0x273d2d) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2dc38;
  if (param_1 != 0x1494f) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76abc0; end: 10b76abe7; -[SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig initWithTapToLoadCounts:inlineForwardPrecacheCounts:numStoriesAlwaysPrecached:numSnapsPerStoryAlwaysPrecached:order:numSnapsToLoadBeforeAllowViewing:] */

void FUN_10b76abc0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76abe8; end: 10b76acaf; +[SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig registerMessageFields:] */

void FUN_10b76abe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0970;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b76acb0();
  func_0x00010b76acd4();
  FUN_10b76acb0();
  func_0x00010b76acd4();
  FUN_10b76acb0();
  func_0x00010b76acd4();
  FUN_10b76acb0();
  func_0x00010bf06b60(param_3,param_2,PTR_s_order_112618c80,0,0,6,0,FUN_10b76aed8,FUN_10b76af44,0);
  func_0x00010b76acd4();
  FUN_10b76acb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76acb0; end: 10b76acdb;  */

void FUN_10b76acb0(void)

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



/* Entry: 10b76acdc; end: 10b76acfb; -[SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection initWithSectionId:lookaheadPrecache:] */

void FUN_10b76acdc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76acfc; end: 10b76ad83; +[SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfigPerSection registerMessageFields:] */

void FUN_10b76acfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b76ad84();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0978);
  FUN_10b76ad84();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76ad84; end: 10b76ad97;  */

void FUN_10b76ad84(void)

{
  return;
}



/* Entry: 10b76ad98; end: 10b76ae4f;  */

undefined8 FUN_10b76ad98(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb5778;
  func_0x00010b76aed0();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff85b4c2c6;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1cbb8;
    func_0x00010b76aed0();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffbebc02df;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e12ff8;
      func_0x00010b76aed0();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x20dd9e;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ee1778;
        func_0x00010b76aed0();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffff841316e1;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ea4138;
          func_0x00010b76aed0();
          uVar2 = 0xffffffff87fd5554;
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



/* Entry: 10b76ae50; end: 10b76aed7;  */

undefined ** FUN_10b76ae50(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x4143fd21) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1cbb8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e12ff8;
  if (param_1 != 0x20dd9e) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea4138;
  if (param_1 != -0x7802aaac) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb5778;
  if (param_1 != -0x7a4b3d3a) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ee1778;
  if (param_1 != -0x7bece91f) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76aed8; end: 10b76af43;  */

undefined8 FUN_10b76aed8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d118;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d118,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x78490875;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d138;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d138,param_2,param_1);
    uVar2 = 0xffffffff89db61c5;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76af44; end: 10b76af7f;  */

undefined ** FUN_10b76af44(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d138;
  if (param_1 != -0x76249e3b) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d118;
  if (param_1 != 0x78490875) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76af80; end: 10b76af9f; -[SOJUBroadcastUserStoryPrecachingPrecacheCounts initWithMainCounts:lowPowerCounts:] */

void FUN_10b76af80(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76afa0; end: 10b76b007; +[SOJUBroadcastUserStoryPrecachingPrecacheCounts registerMessageFields:] */

void FUN_10b76afa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0980;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b76b008();
  _objc_opt_class(PTR_PTR_1126e0980);
  FUN_10b76b008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76b008; end: 10b76b02b;  */

void FUN_10b76b008(void)

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



/* Entry: 10b76b02c; end: 10b76b04b; -[SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability initWithWifiCount:wwanCount:] */

void FUN_10b76b02c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76b04c; end: 10b76b0a7; +[SOJUBroadcastUserStoryPrecachingPrecacheCountsByReachability registerMessageFields:] */

void FUN_10b76b04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_wifiCount_112544eb0;
  _objc_retain(param_3);
  FUN_10b76b0a8(param_3,param_2,puVar1);
  FUN_10b76b0a8(param_3,param_2,PTR_s_wwanCount_112544eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76b0a8; end: 10b76b0bf;  */

void FUN_10b76b0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,1,0,0);
  return;
}



/* Entry: 10b76b0c0; end: 10b76b0df; -[SOJUBroadcastUserStoryPrecachingPrecacheCountsForUserStory initWithUsername:counts:] */

void FUN_10b76b0c0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76b0e0; end: 10b76b153; +[SOJUBroadcastUserStoryPrecachingPrecacheCountsForUserStory registerMessageFields:] */

void FUN_10b76b0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b76b154();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0970);
  FUN_10b76b154();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76b154; end: 10b76b16b;  */

void FUN_10b76b154(void)

{
  return;
}



/* Entry: 10b76b16c; end: 10b76b18f; -[SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig initWithPrecacheCountsPerStory:defaultPrecacheCount:lookaheadPrecache:lookaheadPrecachePerSection:] */

void FUN_10b76b16c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76b190; end: 10b76b24f; +[SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig registerMessageFields:] */

void FUN_10b76b190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0988;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b76b250();
  _objc_opt_class(PTR_PTR_1126e0970);
  FUN_10b76b250();
  _objc_opt_class(PTR_PTR_1126e0978);
  FUN_10b76b250();
  _objc_opt_class(PTR_PTR_1126e0990);
  FUN_10b76b250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76b250; end: 10b76b26b;  */

void FUN_10b76b250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76b26c; end: 10b76b2d7;  */

undefined8 FUN_10b76b26c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e42f38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e42f38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffd50b846b;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f779b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f779b8,param_2,param_1);
    uVar2 = 0x2894c23a;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76b2d8; end: 10b76b2f7; -[SOJUCaption initWithText:orientation:position:] */

void FUN_10b76b2d8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76b2f8; end: 10b76b373; +[SOJUCaption registerMessageFields:] */

void FUN_10b76b2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_text_1126787e8;
  _objc_retain(param_3);
  FUN_10b76b374(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  func_0x00010b76b380();
  FUN_10b76b374();
  func_0x00010b76b380();
  FUN_10b76b374();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76b374; end: 10b76b393;  */

void FUN_10b76b374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76b394; end: 10b76b3b7; -[SOJUCaptionShadow initWithColor:offsetX:offsetY:radius:] */

void FUN_10b76b394(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76b3b8; end: 10b76b453; +[SOJUCaptionShadow registerMessageFields:] */

void FUN_10b76b3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_color_1125adcb8;
  _objc_retain(param_3);
  FUN_10b76b454(param_3,param_2,puVar1,0,0,1,in_x6,in_x7,0,0);
  func_0x00010b76b460();
  FUN_10b76b454();
  func_0x00010b76b460();
  FUN_10b76b454();
  func_0x00010b76b460();
  FUN_10b76b454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76b454; end: 10b76b46f;  */

void FUN_10b76b454(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76b470; end: 10b76b4d7; -[SOJUCaptionStyle initWithName:fontName:styleProperty:caps:kerning:leading:borderWidth:shadow:backgroundColor:fontColor:fontPatternImageUrl:fontColorMode:colorChangeable:rotation:effect:regularTypefaceUrl:boldTypefaceUrl:italicsTypefaceUrl:italicsBoldTypefaceUrl:backgroundCornerRadius:fontFamilyName:backgroundImageUrl:displayName:] */

void FUN_10b76b470(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76b4d8; end: 10b76b743; +[SOJUCaptionStyle registerMessageFields:] */

void FUN_10b76b4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b76b7b8();
  func_0x00010b76b790();
  func_0x00010b76b764();
  func_0x00010bf06b60();
  func_0x00010b76b7ac();
  func_0x00010b76b790();
  func_0x00010b76b7d0();
  func_0x00010b76b7ac();
  func_0x00010bf06b60();
  func_0x00010b76b79c();
  func_0x00010b76b790();
  func_0x00010b76b79c();
  func_0x00010b76b790();
  func_0x00010b76b77c();
  func_0x00010b76b790();
  _objc_opt_class(PTR_PTR_1126dc0a8);
  func_0x00010b76b7b8();
  func_0x00010bf06b60();
  func_0x00010b76b77c();
  func_0x00010b76b790();
  func_0x00010b76b7ac();
  func_0x00010b76b790();
  func_0x00010b76b7d0();
  func_0x00010b76b744();
  func_0x00010b76b764();
  func_0x00010bf06b60();
  func_0x00010b76b77c();
  func_0x00010b76b790();
  func_0x00010b76b79c();
  func_0x00010b76b790();
  func_0x00010b76b7ac();
  func_0x00010b76b790();
  func_0x00010b76b7d0();
  func_0x00010b76b744();
  func_0x00010b76b744();
  func_0x00010b76b744();
  func_0x00010b76b744();
  func_0x00010b76b77c();
  func_0x00010b76b790();
  func_0x00010b76b744();
  func_0x00010b76b744();
  func_0x00010b76b744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76b744; end: 10b76b7d7;  */

void FUN_10b76b744(void)

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



/* Entry: 10b76b7d8; end: 10b76b83f;  */

undefined8 FUN_10b76b7d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3e78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ea3e78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfd81;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d158;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d158,param_2,param_1);
    uVar2 = 0x3b7c7f6;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76b840; end: 10b76b877;  */

undefined ** FUN_10b76b840(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d158;
  if (param_1 != 0x3b7c7f6) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea3e78;
  if (param_1 != 0xfd81) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76b878; end: 10b76b94b;  */

undefined8 FUN_10b76b878(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d178;
  func_0x00010b76b9e8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4ebe997;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d198;
    func_0x00010b76b9e8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffc942b7a5;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7d1b8;
      func_0x00010b76b9e8();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffffc9e88893;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7d1d8;
        func_0x00010b76b9e8();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffff844698fa;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7d1f8;
          func_0x00010b76b9e8();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x3066d2ae;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7d218;
            func_0x00010b76b9e8();
            uVar2 = 0xfffffffffba47770;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76b94c; end: 10b76b9ef;  */

undefined ** FUN_10b76b94c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x36bd485b) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d198;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d178;
  if (param_1 != 0x4ebe997) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d218;
  if (param_1 != -0x45b8890) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d1b8;
  if (param_1 != -0x3617776d) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d1f8;
  if (param_1 != 0x3066d2ae) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d1d8;
  if (param_1 != -0x7bb96706) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76b9f0; end: 10b76ba0f; -[SOJUCaptionStyles initWithStyles:version:] */

void FUN_10b76b9f0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76ba10; end: 10b76baaf; +[SOJUCaptionStyles registerMessageFields:] */

void FUN_10b76ba10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dc0b0;
  puVar1 = PTR_s_styles_1126752e0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_version_112683d20,0,0,1,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76bab0; end: 10b76bb4b;  */

undefined8 FUN_10b76bab0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  func_0x00010b76bbb8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff86df6221;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d238;
    func_0x00010b76bbb8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff9b6142f9;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7d258;
      func_0x00010b76bbb8();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x38c476c7;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7d278;
        func_0x00010b76bbb8();
        uVar2 = 0xffffffffd11d7d4a;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76bb4c; end: 10b76bbbf;  */

undefined ** FUN_10b76bb4c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x649ebd07) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d238;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d278;
  if (param_1 != -0x2ee282b6) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d258;
  if (param_1 != 0x38c476c7) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db00f8;
  if (param_1 != -0x79209ddf) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76bbc0; end: 10b76bbdf; -[SOJUCashTag initWithStart:length:] */

void FUN_10b76bbc0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76bbe0; end: 10b76bc3b; +[SOJUCashTag registerMessageFields:] */

void FUN_10b76bbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_start_112671080;
  _objc_retain(param_3);
  FUN_10b76bc3c(param_3,param_2,puVar1);
  FUN_10b76bc3c(param_3,param_2,PTR_s_length_1126018a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76bc3c; end: 10b76bc53;  */

void FUN_10b76bc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,1,0,0);
  return;
}



/* Entry: 10b76bc54; end: 10b76bcc3; -[SOJUCashTransaction initWithConversationId:transactionId:senderId:senderUsername:recipientId:recipientUsername:amount:currencyCode:message:textAttributeArray:mediaCardAttributeArray:cashTagArray:cashTags:createdAt:lastUpdatedAt:status:invisible:senderViewed:recipientViewed:senderSaved:senderSaveVersion:recipientSaved:recipientSaveVersion:rain:provider:] */

void FUN_10b76bc54(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76bcc4; end: 10b76bf03; +[SOJUCashTransaction registerMessageFields:] */

void FUN_10b76bcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_conversationId_1125b1a48;
  _objc_retain(param_3);
  func_0x00010b76bf38(param_3,param_2,puVar1,0,1);
  func_0x00010b76bf04();
  func_0x00010b76bf04();
  func_0x00010b76bf04();
  func_0x00010b76bf04();
  func_0x00010b76bf04();
  func_0x00010b76bf54();
  func_0x00010b76bf48();
  func_0x00010b76bf04();
  func_0x00010b76bf54();
  func_0x00010b76bf38();
  _objc_opt_class(PTR_PTR_1126e0998);
  func_0x00010b76bf64();
  _objc_opt_class(PTR_PTR_1126e09a0);
  func_0x00010b76bf64();
  _objc_opt_class(PTR_PTR_1126e09a8);
  func_0x00010b76bf64();
  func_0x00010b76bf04();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf54();
  func_0x00010b76bf48();
  func_0x00010b76bf54();
  func_0x00010b76bf48();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf24();
  func_0x00010b76bf48();
  func_0x00010b76bf54();
  func_0x00010b76bf48();
  func_0x00010bf06b60(param_3,param_2,PTR_s_provider_1126240f0,0,0,6,0,FUN_10b76bf88,FUN_10b76bfb8,0
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76bf04; end: 10b76bf87;  */

void FUN_10b76bf04(void)

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



/* Entry: 10b76bf88; end: 10b76bfb7;  */

undefined8 FUN_10b76bf88(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d298;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d298,param_2,param_1);
  uVar2 = 0xffffffff923f4d1d;
  if (ppuVar1 != (undefined **)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10b76bfb8; end: 10b76bfdb;  */

undefined ** FUN_10b76bfb8(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d298;
  if (param_1 != -0x6dc0b2e3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  return ppuVar1;
}



/* Entry: 10b76bfdc; end: 10b76bfff; -[SOJUCdnCdnClientConfig initWithVersion:cachableUrls:cdnRoutingRules:cdnInfos:routingDefinitions:] */

void FUN_10b76bfdc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76c000; end: 10b76c0df; +[SOJUCdnCdnClientConfig registerMessageFields:] */

void FUN_10b76c000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_version_112683d20;
  _objc_retain(param_3);
  func_0x00010b76c104(param_3,param_2,puVar1,0,0,4,in_x6,in_x7,0,0);
  func_0x00010b76c104(param_3,param_2,PTR_s_cachableUrls_112544f70,0,1,7,in_x6,in_x7,0,1);
  func_0x00010c19a460(param_3,param_2,0xbb43485c35a148);
  _objc_opt_class(PTR_PTR_1126e09b0);
  func_0x00010b76c0e0();
  _objc_opt_class(PTR_PTR_1126e09b8);
  func_0x00010b76c0e0();
  _objc_opt_class(PTR_PTR_1126e09c0);
  func_0x00010b76c0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76c0e0; end: 10b76c10f;  */

void FUN_10b76c0e0(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76c110; end: 10b76c12f; -[SOJUCdnCdnInfo initWithCdnId:host:] */

void FUN_10b76c110(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76c130; end: 10b76c19b; +[SOJUCdnCdnInfo registerMessageFields:] */

void FUN_10b76c130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_cdnId_1125aa778;
  _objc_retain(param_3);
  FUN_10b76c19c(param_3,param_2,puVar1,0,1);
  FUN_10b76c19c(param_3,param_2,PTR_s_host_1125d6ac8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76c19c; end: 10b76c1ab;  */

void FUN_10b76c19c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76c1ac; end: 10b76c1cb; -[SOJUCdnRoutingDefinition initWithUrlMatchPatterns:routeRules:routeInfo:] */

void FUN_10b76c1ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76c1cc; end: 10b76c273; +[SOJUCdnRoutingDefinition registerMessageFields:] */

void FUN_10b76c1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b76c274();
  func_0x00010b76c290();
  func_0x00010c19a460(param_3,param_2,0x8f59017295e641);
  _objc_opt_class(PTR_PTR_1126e09b0);
  FUN_10b76c274();
  func_0x00010b76c290();
  _objc_opt_class(PTR_PTR_1126e09b8);
  FUN_10b76c274();
  func_0x00010b76c290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76c274; end: 10b76c297;  */

void FUN_10b76c274(void)

{
  return;
}



/* Entry: 10b76c298; end: 10b76c2b7; -[SOJUCdnRoutingRule initWithCdnId:reachability:] */

void FUN_10b76c298(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76c2b8; end: 10b76c3c7; +[SOJUCdnRoutingRule registerMessageFields:] */

void FUN_10b76c2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_cdnId_1125aa778;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_reachability_112625bc8,0,0,6,0,0x10b76c348,
                      &UNK_1001a4848,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76c3c8; end: 10b76c3cf;  */

void FUN_10b76c3c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_caseInsensitiveCompare__1125aa560);
  return;
}



/* Entry: 10b76c3d0; end: 10b76c437; -[SOJUChatConversation initWithIdValue:participants:lastSnap:lastChatActions:conversationInteractionEvent:lastCashTransaction:lastInteractionTs:pendingChatsFor:pendingReceivedSnaps:conversationMessages:iterToken:favoriteStickers:conversationState:conversationMessageUpdates:isDeltaFetch:notificationStatus:conversationSnapUpdates:usernameToUserId:lastClearTimestamp:isSnapDeltaFetch:messageRetentionInMinutes:chatReleaseDataMap:isCognacNotificationMuted:migrationState:] */

void FUN_10b76c3d0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76c438; end: 10b76c70f; +[SOJUChatConversation registerMessageFields:] */

void FUN_10b76c438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_idValue_1125d7158;
  _objc_retain(param_3);
  func_0x00010b76c784(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b76c784(param_3,param_2,PTR_s_participants_11261acc8,0,0,7);
  func_0x00010b76c7a0();
  _objc_opt_class(PTR_PTR_1126e09c8);
  func_0x00010b76c710();
  _objc_opt_class(PTR_PTR_1126e09d0);
  func_0x00010b76c710();
  _objc_opt_class(PTR_PTR_1126e09d8);
  func_0x00010b76c710();
  _objc_opt_class(PTR_PTR_1126e09e0);
  func_0x00010b76c710();
  func_0x00010b76c770();
  func_0x00010b76c784();
  func_0x00010b76c790(param_3,param_2,PTR_s_pendingChatsFor_112544fe0);
  func_0x00010b76c784();
  func_0x00010b76c7a0();
  _objc_opt_class(PTR_PTR_1126e09c8);
  func_0x00010b76c734();
  _objc_opt_class(PTR_PTR_1126e09e8);
  func_0x00010b76c710();
  func_0x00010b76c770();
  func_0x00010b76c784();
  _objc_opt_class(PTR_PTR_1126e09f0);
  func_0x00010b76c734();
  _objc_opt_class(PTR_PTR_1126e09f8);
  func_0x00010b76c710();
  _objc_opt_class(PTR_PTR_1126e0a00);
  func_0x00010b76c710();
  func_0x00010b76c750();
  func_0x00010b76c750();
  _objc_opt_class(PTR_PTR_1126e0a08);
  func_0x00010b76c710();
  func_0x00010b76c790(param_3,param_2,PTR_s_usernameToUserId_112545028);
  func_0x00010b76c784();
  func_0x00010b76c7a0();
  func_0x00010b76c770();
  func_0x00010b76c784();
  func_0x00010b76c750();
  func_0x00010b76c770();
  func_0x00010b76c784();
  func_0x00010b76c790(param_3,param_2,PTR_s_chatReleaseDataMap_112545040);
  func_0x00010b76c784();
  func_0x00010b76c7a0();
  func_0x00010b76c750();
  func_0x00010bf06b60(param_3,param_2,PTR_s_migrationState_112545050,0,1,6,0,FUN_10b78d18c,
                      FUN_10b78d3cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76c710; end: 10b76c7a7;  */

void FUN_10b76c710(void)

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



/* Entry: 10b76c7a8; end: 10b76c7df; -[SOJUChatConversationActionRequest initWithTimestamp:reqToken:username:snapchatUserId:conversationId:action:enabled:messageRetentionInMinutes:muteCognacNotification:] */

void FUN_10b76c7a8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76c7e0; end: 10b76c8db; +[SOJUChatConversationActionRequest registerMessageFields:] */

void FUN_10b76c7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  FUN_10b76c8dc(param_3,param_2,puVar1,0,0);
  func_0x00010b76c8f8();
  FUN_10b76c8dc();
  func_0x00010b76c8f8();
  FUN_10b76c8dc();
  func_0x00010b76c8f8();
  FUN_10b76c8dc();
  func_0x00010b76c8f8();
  FUN_10b76c8dc();
  func_0x00010b76c8f8();
  FUN_10b76c8dc();
  func_0x00010b76c8f8();
  func_0x00010b76c8ec();
  func_0x00010b76c8f8();
  func_0x00010b76c8ec();
  func_0x00010b76c8f8();
  func_0x00010b76c8ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76c8dc; end: 10b76c907;  */

void FUN_10b76c8dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76c908; end: 10b76c913; +[SOJUChatConversationActionRequestBuilder messageClass] */

void FUN_10b76c908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0a10);
  return;
}



/* Entry: 10b76c914; end: 10b76c917; +[SOJUChatConversationActionRequestBuilder withJUChatConversationActionRequest:] */

void FUN_10b76c914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b76c918; end: 10b76c937; -[SOJUChatConversationDeltaQuery initWithLastKnownMsgSeqs:lastKnownUpdateSeqs:] */

void FUN_10b76c918(void)

{
  func_0x00010c012ba0();
  return;
}



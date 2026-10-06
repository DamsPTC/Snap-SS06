/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f333e0; end: 108f3346b; +[IMPStoryReplyStoryReply descriptor] */

undefined * FUN_108f333e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8d90,
                        &PTR____CFConstantStringClassReference_110db5598,&PTR_DAT_1132afa78,
                        &PTR_DAT_1132b0590,0xe,0x60,0x1c);
    func_0x00010c229040();
    puRam00000001137302a0 = puVar1;
  }
  return puRam00000001137302a0;
}



/* Entry: 108f3346c; end: 108f334d3; +[IMPStoryReplyUserInfo descriptor] */

void FUN_108f3346c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8de0,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_1132afa78,
                        &PTR_s_userId_1132b0170,7,0x30,0x1c);
    puRam00000001137302a8 = puVar1;
  }
  return;
}



/* Entry: 108f334d4; end: 108f3354f; +[IMPStoryReplyGift descriptor] */

undefined * FUN_108f334d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8e30,
                        &PTR____CFConstantStringClassReference_110e803b8,&PTR_DAT_1132afa78,
                        &PTR_DAT_1132b0250,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001137302b0 = puVar1;
  }
  return puRam00000001137302b0;
}



/* Entry: 108f33550; end: 108f335b7; +[IMPStoryReplyMutedUser descriptor] */

void FUN_108f33550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8e80,
                        &PTR____CFConstantStringClassReference_110f09578,&PTR_DAT_1132afa78,
                        &PTR_s_user_1132afc70,2,0x18,0x1c);
    puRam00000001137302b8 = puVar1;
  }
  return;
}



/* Entry: 108f335b8; end: 108f3361f; +[IMPStoryReplyGetMutedUsersRequest descriptor] */

void FUN_108f335b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8ed0,
                        &PTR____CFConstantStringClassReference_110f09598,&PTR_DAT_1132afa78,
                        &PTR_s_profileId_1132afcb0,2,0x18,0x1c);
    puRam00000001137302c0 = puVar1;
  }
  return;
}



/* Entry: 108f33620; end: 108f33687; +[IMPStoryReplyGetMutedUsersResponse descriptor] */

void FUN_108f33620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8f20,
                        &PTR____CFConstantStringClassReference_110f095b8,&PTR_DAT_1132afa78,
                        &PTR_DAT_1132afcf0,2,0x18,0x1c);
    puRam00000001137302c8 = puVar1;
  }
  return;
}



/* Entry: 108f33688; end: 108f336ef; +[IMPStoryReplyAddMutedUserRequest descriptor] */

void FUN_108f33688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8f70,
                        &PTR____CFConstantStringClassReference_110f095d8,&PTR_DAT_1132afa78,
                        &PTR_s_profileId_1132afd30,2,0x18,0x1c);
    puRam00000001137302d0 = puVar1;
  }
  return;
}



/* Entry: 108f336f0; end: 108f33757; +[IMPStoryReplyAddMutedUserResponse descriptor] */

void FUN_108f336f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd8fc0,
                        &PTR____CFConstantStringClassReference_110f095f8,&PTR_DAT_1132afa78,0,0,4,
                        0x1c);
    puRam00000001137302d8 = puVar1;
  }
  return;
}



/* Entry: 108f33758; end: 108f337bf; +[IMPStoryReplyRemoveMutedUserRequest descriptor] */

void FUN_108f33758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9010,
                        &PTR____CFConstantStringClassReference_110f09618,&PTR_DAT_1132afa78,
                        &PTR_s_profileId_1132afd70,2,0x18,0x1c);
    puRam00000001137302e0 = puVar1;
  }
  return;
}



/* Entry: 108f337c0; end: 108f33827; +[IMPStoryReplyRemoveMutedUserResponse descriptor] */

void FUN_108f337c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9060,
                        &PTR____CFConstantStringClassReference_110f09638,&PTR_DAT_1132afa78,0,0,4,
                        0x1c);
    puRam00000001137302e8 = puVar1;
  }
  return;
}



/* Entry: 108f33828; end: 108f3388f; +[IMPStoryReplyFanRanking descriptor] */

void FUN_108f33828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd90b0,
                        &PTR____CFConstantStringClassReference_110f09658,&PTR_DAT_1132afa78,
                        &PTR_s_user_1132afe10,3,0x18,0x1c);
    puRam00000001137302f0 = puVar1;
  }
  return;
}



/* Entry: 108f33890; end: 108f338f7; +[IMPStoryReplyGetTopFansRequest descriptor] */

void FUN_108f33890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137302f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9100,
                        &PTR____CFConstantStringClassReference_110f09678,&PTR_DAT_1132afa78,
                        &PTR_s_profileId_1132afef0,4,0x20,0x1c);
    puRam00000001137302f8 = puVar1;
  }
  return;
}



/* Entry: 108f338f8; end: 108f3395f; +[IMPStoryReplyGetTopFansResponse descriptor] */

void FUN_108f338f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9150,
                        &PTR____CFConstantStringClassReference_110f09698,&PTR_DAT_1132afa78,
                        &PTR_DAT_1132aff70,4,0x20,0x1c);
    puRam0000000113730300 = puVar1;
  }
  return;
}



/* Entry: 108f33960; end: 108f3396b; -[SCSnapProMessagingServices .cxx_destruct] */

void FUN_108f33960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f3396c; end: 108f33a17; -[SCSavedStoryShareModel initWithCompositeStoryId:snapId:] */

undefined1 *
FUN_108f3396c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff490;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f33a18; end: 108f33a3b; -[SCSavedStoryShareModel copyWithZone:] */

undefined8 FUN_108f33a18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f33a3c; end: 108f33aaf; -[SCSavedStoryShareModel hash] */

undefined8 * FUN_108f33a3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f33b30:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f33b3c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f33b3c;
        }
        goto LAB_108f33b30;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f33b3c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f33ab0; end: 108f33b57; -[SCSavedStoryShareModel isEqual:] */

long FUN_108f33ab0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f33b30:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f33b3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f33b3c;
        }
        goto LAB_108f33b30;
      }
    }
    lVar3 = 0;
  }
LAB_108f33b3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f33b58; end: 108f33b5f; -[SCSavedStoryShareModel compositeStoryId] */

undefined8 FUN_108f33b58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f33b60; end: 108f33b67; -[SCSavedStoryShareModel snapId] */

undefined8 FUN_108f33b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f33b68; end: 108f33b97; -[SCSavedStoryShareModel .cxx_destruct] */

void FUN_108f33b68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f33b98; end: 108f33e57;  */

/* WARNING: Removing unreachable block (ram,0x000108f340e0) */
/* WARNING: Removing unreachable block (ram,0x000108f33e20) */
/* WARNING: Removing unreachable block (ram,0x000108f343a0) */

void FUN_108f33b98(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar11 = param_4;
  puVar6 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110acbb78;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar13 = 0;
    puVar2 = puVar4;
    puVar11 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_108f33e58;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar4 = puVar2;
  puVar12 = puVar11;
  puVar10 = puVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar11);
  if (puVar3 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_148,puVar4);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar4 = puVar11;
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar7 = &UNK_110acbbc8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar13 = 0;
    puVar4 = puVar9;
    puVar12 = puVar6;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar11);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_160);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar6 = &uStack_240;
  pcStack_188 = FUN_108f34118;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar2 = puVar4;
  puVar11 = puVar12;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar7);
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  if (puVar3 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar3 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_220,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_208,puVar2);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar2 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x000107c278b8(auStack_1f0,puVar2);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar1 = &UNK_110acbc18;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbc18,&uStack_240,puVar10);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar13 = 0;
    puVar2 = puVar6;
    puVar11 = puVar10;
    do {
      if ((&cStack_1d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar12);
  _objc_release(puVar4);
  puVar3 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  puVar6 = auStack_220;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar6);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar7);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_248 = FUN_108f343d8;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar10 = puVar2;
  puVar9 = puVar11;
  puStack_280 = unaff_x24;
  puStack_278 = puVar6;
  puStack_270 = puVar3;
  puStack_268 = puVar12;
  puStack_260 = puVar4;
  puStack_258 = puVar7;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar5 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_2b8;
    func_0x000107c278b8(auStack_2b8,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_2a0,puVar6);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x000107c27984(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar8 = &UNK_110acbc68;
    puVar6 = &uStack_2d8;
    puVar10 = &uStack_2d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbc68,puVar10,puVar11);
    puStack_2c0 = puVar6;
    func_0x000107c278ac(&puStack_2c0);
    lVar13 = 0;
    puVar4 = auStack_2b8;
    puVar9 = puVar11;
    do {
      if ((&cStack_289)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_2a1 < '\0') {
      __ZdlPv(auStack_2b8[0]);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar5 = puVar3;
    __Unwind_Resume();
    puVar12 = &uStack_360;
    pcStack_2e8 = FUN_108f34608;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar8;
    puVar11 = puVar10;
    puStack_320 = unaff_x24;
    puStack_318 = puVar6;
    puStack_310 = puVar4;
    puStack_308 = puVar3;
    puStack_300 = puVar2;
    puStack_2f8 = puVar1;
    pppuStack_2f0 = &pppuStack_250;
    _objc_retain(puVar8);
    plVar14 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar5 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      puVar6 = auStack_340;
      func_0x000107c278b8(auStack_340,puVar1);
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      func_0x000107c27984(&uStack_360,auStack_340,&lStack_328,1);
      puVar7 = &UNK_110acbcb8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbcb8,&uStack_360,puVar10);
      puStack_348 = (undefined1 *)&uStack_360;
      func_0x000107c278ac(&puStack_348);
      puVar11 = puVar12;
      puVar9 = puVar10;
      puVar4 = &uStack_360;
      if (cStack_329 < '\0') {
        __ZdlPv(auStack_340[0]);
        puVar11 = puVar12;
        puVar9 = puVar10;
        puVar4 = &uStack_360;
      }
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar5 = puVar1;
    __Unwind_Resume();
    pcStack_368 = FUN_108f3477c;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar7;
    puVar2 = puVar11;
    puStack_3a0 = unaff_x24;
    puStack_398 = puVar6;
    puStack_390 = puVar4;
    plStack_388 = plVar14;
    puStack_380 = puVar1;
    puStack_378 = puVar8;
    pppuStack_370 = &pppuStack_2f0;
    _objc_retain(puVar7);
    _objc_retain(puVar11);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar5 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_3d8;
      func_0x000107c278b8(auStack_3d8,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar2 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_3c0,puVar2);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x000107c27984(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      puVar3 = &UNK_110acbd08;
      puVar6 = &uStack_3f8;
      puVar2 = &uStack_3f8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbd08,puVar2,puVar9);
      puStack_3e0 = puVar6;
      func_0x000107c278ac(&puStack_3e0);
      lVar13 = 0;
      puVar4 = auStack_3d8;
      do {
        if ((&cStack_3a9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar11);
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(puVar11);
      _objc_release(puVar7);
      puVar5 = puVar1;
      __Unwind_Resume();
      puVar10 = &uStack_480;
      pcStack_408 = FUN_108f349ac;
      lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar3;
      puVar12 = puVar2;
      puStack_440 = unaff_x24;
      puStack_438 = puVar6;
      puStack_430 = puVar4;
      puStack_428 = puVar1;
      puStack_420 = puVar11;
      puStack_418 = puVar7;
      pppuStack_410 = &pppuStack_370;
      _objc_retain(puVar3);
      plVar14 = (long *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar5 + 8);
        _objc_retain(puVar3);
        if (puVar3 == (undefined *)0x0) {
          puVar1 = &UNK_10f53482e;
        }
        else {
          puVar1 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        puVar6 = auStack_460;
        func_0x000107c278b8(auStack_460,puVar1);
        uStack_480 = 0;
        uStack_478 = 0;
        uStack_470 = 0;
        func_0x000107c27984(&uStack_480,auStack_460,&lStack_448,1);
        puVar8 = &UNK_110acbd58;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbd58,&uStack_480,puVar2);
        puStack_468 = (undefined1 *)&uStack_480;
        func_0x000107c278ac(&puStack_468);
        puVar12 = puVar10;
        puVar4 = &uStack_480;
        if (cStack_449 < '\0') {
          __ZdlPv(auStack_460[0]);
          puVar12 = puVar10;
          puVar4 = &uStack_480;
        }
      }
      puVar1 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar3);
      _objc_release(puVar3);
      puVar5 = puVar1;
      __Unwind_Resume();
      pcStack_488 = FUN_108f34b20;
      lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = puVar8;
      puStack_4c0 = unaff_x24;
      puStack_4b8 = puVar6;
      puStack_4b0 = puVar4;
      plStack_4a8 = plVar14;
      puStack_4a0 = puVar1;
      puStack_498 = puVar3;
      pppuStack_490 = &pppuStack_410;
      _objc_retain(puVar8);
      if (puVar5 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar5 + 8);
        _objc_retain(puVar8);
        if (puVar8 == (undefined *)0x0) {
          puVar1 = &UNK_10f53482e;
        }
        else {
          puVar1 = puVar8;
          _objc_retainAutorelease(puVar8);
          func_0x00010bdc3520();
        }
        _objc_release(puVar8);
        func_0x000107c278b8(auStack_4e0,puVar1);
        uStack_500 = 0;
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        func_0x000107c27984(&uStack_500,auStack_4e0,&lStack_4c8,1);
        puVar7 = &UNK_110acbda8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbda8,&uStack_500,puVar12);
        puStack_4e8 = (undefined1 *)&uStack_500;
        func_0x000107c278ac(&puStack_4e8);
        if (cStack_4c9 < '\0') {
          __ZdlPv(auStack_4e0[0]);
        }
      }
      puVar1 = puVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
        ___stack_chk_fail();
        _objc_release(puVar8);
        _objc_release(puVar8);
        puVar3 = puVar1;
        __Unwind_Resume();
        puStack_528 = (undefined1 *)&uStack_540;
        pcStack_508 = FUN_108f34c94;
        if (puVar3 != (undefined *)0x0) {
          uStack_540 = 0;
          uStack_538 = 0;
          uStack_530 = 0;
          puStack_520 = puVar1;
          puStack_518 = puVar8;
          pppuStack_510 = &pppuStack_490;
          (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                    (*(long **)(puVar3 + 8),&UNK_110acbdf8,&uStack_540,puVar7);
          func_0x000107c278ac(&puStack_528);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f33e58; end: 108f34117;  */

/* WARNING: Removing unreachable block (ram,0x000108f340e0) */
/* WARNING: Removing unreachable block (ram,0x000108f343a0) */

void FUN_108f33e58(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  puVar11 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110acbbc8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar13 = 0;
    puVar2 = puVar4;
    puVar9 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_c8 = FUN_108f34118;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar4 = puVar2;
  puVar10 = puVar9;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  if (puVar3 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_148,puVar4);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar4 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar6 = &UNK_110acbc18;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbc18,&uStack_180,puVar11);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar13 = 0;
    puVar4 = puVar8;
    puVar10 = puVar11;
    do {
      if ((&cStack_119)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar13 != -0x48);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  puVar11 = auStack_160;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar11);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_108f343d8;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar4;
  puVar12 = puVar10;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar11;
  puStack_1b0 = puVar3;
  puStack_1a8 = puVar9;
  puStack_1a0 = puVar2;
  puStack_198 = puVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar6);
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_1f8;
    func_0x000107c278b8(auStack_1f8,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar7 = &UNK_110acbc68;
    puVar11 = &uStack_218;
    puVar8 = &uStack_218;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbc68,puVar8,puVar10);
    puStack_200 = puVar11;
    func_0x000107c278ac(&puStack_200);
    lVar13 = 0;
    puVar2 = auStack_1f8;
    puVar12 = puVar10;
    do {
      if ((&cStack_1c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar4);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar5 = puVar1;
    __Unwind_Resume();
    puVar10 = &uStack_2a0;
    pcStack_228 = FUN_108f34608;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar7;
    puVar9 = puVar8;
    puStack_260 = unaff_x24;
    puStack_258 = puVar11;
    puStack_250 = puVar2;
    puStack_248 = puVar1;
    puStack_240 = puVar4;
    puStack_238 = puVar6;
    pppuStack_230 = &ppuStack_190;
    _objc_retain(puVar7);
    plVar14 = (long *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar5 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar11 = auStack_280;
      func_0x000107c278b8(auStack_280,puVar1);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
      puVar3 = &UNK_110acbcb8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbcb8,&uStack_2a0,puVar8);
      puStack_288 = (undefined1 *)&uStack_2a0;
      func_0x000107c278ac(&puStack_288);
      puVar9 = puVar10;
      puVar12 = puVar8;
      puVar2 = &uStack_2a0;
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
        puVar9 = puVar10;
        puVar12 = puVar8;
        puVar2 = &uStack_2a0;
      }
    }
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar5 = puVar1;
    __Unwind_Resume();
    pcStack_2a8 = FUN_108f3477c;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar3;
    puVar4 = puVar9;
    puStack_2e0 = unaff_x24;
    puStack_2d8 = puVar11;
    puStack_2d0 = puVar2;
    plStack_2c8 = plVar14;
    puStack_2c0 = puVar1;
    puStack_2b8 = puVar7;
    pppuStack_2b0 = &pppuStack_230;
    _objc_retain(puVar3);
    _objc_retain(puVar9);
    puVar2 = (undefined8 *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar14 = *(long **)(puVar5 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      unaff_x24 = auStack_318;
      func_0x000107c278b8(auStack_318,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar2 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_300,puVar2);
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      func_0x000107c27984(&uStack_338,auStack_318,&lStack_2e8,2);
      puVar6 = &UNK_110acbd08;
      puVar11 = &uStack_338;
      puVar4 = &uStack_338;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbd08,puVar4,puVar12);
      puStack_320 = puVar11;
      func_0x000107c278ac(&puStack_320);
      lVar13 = 0;
      puVar2 = auStack_318;
      do {
        if ((&cStack_2e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar9);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      if (cStack_301 < '\0') {
        __ZdlPv(auStack_318[0]);
      }
      _objc_release(puVar9);
      _objc_release(puVar3);
      puVar5 = puVar1;
      __Unwind_Resume();
      puVar8 = &uStack_3c0;
      pcStack_348 = FUN_108f349ac;
      lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = puVar6;
      puVar10 = puVar4;
      puStack_380 = unaff_x24;
      puStack_378 = puVar11;
      puStack_370 = puVar2;
      puStack_368 = puVar1;
      puStack_360 = puVar9;
      puStack_358 = puVar3;
      pppuStack_350 = &pppuStack_2b0;
      _objc_retain(puVar6);
      plVar14 = (long *)0x0;
      if (puVar5 != (undefined *)0x0) {
        plVar14 = *(long **)(puVar5 + 8);
        _objc_retain(puVar6);
        if (puVar6 == (undefined *)0x0) {
          puVar1 = &UNK_10f53482e;
        }
        else {
          puVar1 = puVar6;
          _objc_retainAutorelease(puVar6);
          func_0x00010bdc3520();
        }
        _objc_release(puVar6);
        puVar11 = auStack_3a0;
        func_0x000107c278b8(auStack_3a0,puVar1);
        uStack_3c0 = 0;
        uStack_3b8 = 0;
        uStack_3b0 = 0;
        func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
        puVar7 = &UNK_110acbd58;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbd58,&uStack_3c0,puVar4);
        puStack_3a8 = (undefined1 *)&uStack_3c0;
        func_0x000107c278ac(&puStack_3a8);
        puVar10 = puVar8;
        puVar2 = &uStack_3c0;
        if (cStack_389 < '\0') {
          __ZdlPv(auStack_3a0[0]);
          puVar10 = puVar8;
          puVar2 = &uStack_3c0;
        }
      }
      puVar1 = puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
        ___stack_chk_fail();
        _objc_release(puVar6);
        _objc_release(puVar6);
        puVar5 = puVar1;
        __Unwind_Resume();
        pcStack_3c8 = FUN_108f34b20;
        lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar3 = puVar7;
        puStack_400 = unaff_x24;
        puStack_3f8 = puVar11;
        puStack_3f0 = puVar2;
        plStack_3e8 = plVar14;
        puStack_3e0 = puVar1;
        puStack_3d8 = puVar6;
        pppuStack_3d0 = &pppuStack_350;
        _objc_retain(puVar7);
        if (puVar5 != (undefined *)0x0) {
          plVar14 = *(long **)(puVar5 + 8);
          _objc_retain(puVar7);
          if (puVar7 == (undefined *)0x0) {
            puVar1 = &UNK_10f53482e;
          }
          else {
            puVar1 = puVar7;
            _objc_retainAutorelease(puVar7);
            func_0x00010bdc3520();
          }
          _objc_release(puVar7);
          func_0x000107c278b8(auStack_420,puVar1);
          uStack_440 = 0;
          uStack_438 = 0;
          uStack_430 = 0;
          func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
          puVar3 = &UNK_110acbda8;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbda8,&uStack_440,puVar10);
          puStack_428 = (undefined1 *)&uStack_440;
          func_0x000107c278ac(&puStack_428);
          if (cStack_409 < '\0') {
            __ZdlPv(auStack_420[0]);
          }
        }
        puVar1 = puVar7;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
          ___stack_chk_fail();
          _objc_release(puVar7);
          _objc_release(puVar7);
          puVar6 = puVar1;
          __Unwind_Resume();
          puStack_468 = (undefined1 *)&uStack_480;
          pcStack_448 = FUN_108f34c94;
          if (puVar6 != (undefined *)0x0) {
            uStack_480 = 0;
            uStack_478 = 0;
            uStack_470 = 0;
            puStack_460 = puVar1;
            puStack_458 = puVar7;
            pppuStack_450 = &pppuStack_3d0;
            (**(code **)(**(long **)(puVar6 + 8) + 0x18))
                      (*(long **)(puVar6 + 8),&UNK_110acbdf8,&uStack_480,puVar3);
            func_0x000107c278ac(&puStack_468);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f34118; end: 108f343d7;  */

/* WARNING: Removing unreachable block (ram,0x000108f343a0) */

void FUN_108f34118(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  long *plStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110acbc18;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbc18,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar13 = 0;
    puVar2 = puVar5;
    puVar9 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar5 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_108f343d8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar12 = puVar9;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar5;
  puStack_f0 = puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar11 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_138;
    func_0x000107c278b8(auStack_138,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_108,2);
    puVar7 = &UNK_110acbc68;
    puVar5 = &uStack_158;
    puVar8 = &uStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbc68,puVar8,puVar9);
    puStack_140 = puVar5;
    func_0x000107c278ac(&puStack_140);
    lVar13 = 0;
    puVar11 = auStack_138;
    puVar12 = puVar9;
    do {
      if ((&cStack_109)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1e0;
  pcStack_168 = FUN_108f34608;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar9 = puVar8;
  puStack_1a0 = unaff_x24;
  puStack_198 = puVar5;
  puStack_190 = puVar11;
  puStack_188 = puVar3;
  puStack_180 = puVar2;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_d0;
  _objc_retain(puVar7);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar5 = auStack_1c0;
    func_0x000107c278b8(auStack_1c0,puVar1);
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x000107c27984(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
    puVar4 = &UNK_110acbcb8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbcb8,&uStack_1e0,puVar8);
    puStack_1c8 = (undefined1 *)&uStack_1e0;
    func_0x000107c278ac(&puStack_1c8);
    puVar9 = puVar10;
    puVar12 = puVar8;
    puVar11 = &uStack_1e0;
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
      puVar9 = puVar10;
      puVar12 = puVar8;
      puVar11 = &uStack_1e0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_108f3477c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar2 = puVar9;
  puStack_220 = unaff_x24;
  puStack_218 = puVar5;
  puStack_210 = puVar11;
  plStack_208 = plVar14;
  puStack_200 = puVar1;
  puStack_1f8 = puVar7;
  pppuStack_1f0 = &ppuStack_170;
  _objc_retain(puVar4);
  _objc_retain(puVar9);
  puVar8 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_258;
    func_0x000107c278b8(auStack_258,puVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_240,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x000107c27984(&uStack_278,auStack_258,&lStack_228,2);
    puVar3 = &UNK_110acbd08;
    puVar5 = &uStack_278;
    puVar2 = &uStack_278;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbd08,puVar2,puVar12);
    puStack_260 = puVar5;
    func_0x000107c278ac(&puStack_260);
    lVar13 = 0;
    puVar8 = auStack_258;
    do {
      if ((&cStack_229)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar9);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar12 = &uStack_300;
  pcStack_288 = FUN_108f349ac;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puVar11 = puVar2;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = puVar5;
  puStack_2b0 = puVar8;
  puStack_2a8 = puVar1;
  puStack_2a0 = puVar9;
  puStack_298 = puVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar5 = auStack_2e0;
    func_0x000107c278b8(auStack_2e0,puVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar7 = &UNK_110acbd58;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbd58,&uStack_300,puVar2);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x000107c278ac(&puStack_2e8);
    puVar11 = puVar12;
    puVar8 = &uStack_300;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar11 = puVar12;
      puVar8 = &uStack_300;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_308 = FUN_108f34b20;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_340 = unaff_x24;
  puStack_338 = puVar5;
  puStack_330 = puVar8;
  plStack_328 = plVar14;
  puStack_320 = puVar1;
  puStack_318 = puVar3;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
    puVar4 = &UNK_110acbda8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acbda8,&uStack_380,puVar11);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x000107c278ac(&puStack_368);
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
    ___stack_chk_fail();
    _objc_release(puVar7);
    _objc_release(puVar7);
    puVar3 = puVar1;
    __Unwind_Resume();
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    pcStack_388 = FUN_108f34c94;
    if (puVar3 != (undefined *)0x0) {
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      puStack_3a0 = puVar1;
      puStack_398 = puVar7;
      pppuStack_390 = &pppuStack_310;
      (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                (*(long **)(puVar3 + 8),&UNK_110acbdf8,&uStack_3c0,puVar4);
      func_0x000107c278ac(&puStack_3a8);
    }
    return;
  }
  return;
}



/* Entry: 108f343d8; end: 108f34607;  */

void FUN_108f343d8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar12 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110acbc68;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acbc68,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_108f34608;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110acbcb8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acbcb8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar12 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar12 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_108f3477c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  plStack_148 = plVar11;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  puVar12 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_198;
    func_0x000107c278b8(auStack_198,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar2 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar4 = &UNK_110acbd08;
    unaff_x23 = &uStack_1b8;
    puVar2 = &uStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acbd08,puVar2,puVar9);
    puStack_1a0 = unaff_x23;
    func_0x000107c278ac(&puStack_1a0);
    lVar10 = 0;
    puVar12 = auStack_198;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_240;
  pcStack_1c8 = FUN_108f349ac;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar9 = puVar2;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar12;
  puStack_1e8 = puVar1;
  puStack_1e0 = puVar7;
  puStack_1d8 = puVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar11 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_220;
    func_0x000107c278b8(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    puVar3 = &UNK_110acbd58;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acbd58,&uStack_240,puVar2);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar9 = puVar8;
    puVar12 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar9 = puVar8;
      puVar12 = &uStack_240;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_248 = FUN_108f34b20;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar12;
  plStack_268 = plVar11;
  puStack_260 = puVar1;
  puStack_258 = puVar4;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar6 = &UNK_110acbda8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acbda8,&uStack_2c0,puVar9);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  __Unwind_Resume();
  puStack_2e8 = (undefined1 *)&uStack_300;
  pcStack_2c8 = FUN_108f34c94;
  if (puVar4 != (undefined *)0x0) {
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    puStack_2e0 = puVar1;
    puStack_2d8 = puVar3;
    pppuStack_2d0 = &pppuStack_250;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110acbdf8,&uStack_300,puVar6);
    func_0x000107c278ac(&puStack_2e8);
  }
  return;
}



/* Entry: 108f34608; end: 108f3477b;  */

void FUN_108f34608(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acbcb8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acbcb8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108f3477c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar12 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = &UNK_110acbd08;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acbd08,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_108f349ac;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar2;
  puStack_140 = puVar7;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_110acbd58;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acbd58,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar8 = puVar9;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar12 = &uStack_1a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_108f34b20;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar2 = &UNK_110acbda8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acbda8,&uStack_220,puVar8);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puStack_248 = (undefined1 *)&uStack_260;
  pcStack_228 = FUN_108f34c94;
  if (puVar5 != (undefined *)0x0) {
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    puStack_240 = puVar1;
    puStack_238 = puVar6;
    pppuStack_230 = &pppuStack_1b0;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110acbdf8,&uStack_260,puVar2);
    func_0x000107c278ac(&puStack_248);
  }
  return;
}



/* Entry: 108f3477c; end: 108f349ab;  */

void FUN_108f3477c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110acbd08;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acbd08,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_108f349ac;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110acbd58;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acbd58,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_108f34b20;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110acbda8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acbda8,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_108f34c94;
  if (puVar3 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110acbdf8,&uStack_1e0,puVar4);
    func_0x000107c278ac(&puStack_1c8);
  }
  return;
}



/* Entry: 108f349ac; end: 108f34b1f;  */

void FUN_108f349ac(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acbd58;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acbd58,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108f34b20;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110acbda8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acbda8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_108f34c94;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110acbdf8,&uStack_140,puVar4);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 108f34b20; end: 108f34c93;  */

void FUN_108f34b20(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acbda8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110acbda8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_108f34c94;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110acbdf8,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 108f34c94; end: 108f34d0b;  */

void FUN_108f34c94(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acbdf8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f34d0c; end: 108f34d83;  */

void FUN_108f34d0c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acbe48,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f34d84; end: 108f34dfb;  */

void FUN_108f34d84(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acbe98,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f34dfc; end: 108f34e73;  */

void FUN_108f34dfc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acbee8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f34e74; end: 108f34fe7;  */

/* WARNING: Removing unreachable block (ram,0x000108f35968) */

void FUN_108f34e74(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [3];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acbf38;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_108f34fe8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  puVar13 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110acbf88;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar12 = 0;
    puVar13 = auStack_f8;
    puVar10 = param_5;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_108f35218;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar13;
  puStack_148 = puVar2;
  puStack_140 = puVar5;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_110acbfd8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar8 = puVar9;
    puVar10 = puVar3;
    puVar13 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar10 = puVar3;
      puVar13 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_220;
  pcStack_1a8 = FUN_108f3538c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar5 = puVar8;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar13;
  plStack_1c8 = plVar11;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar2 = &UNK_110acc028;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar5 = puVar3;
    puVar10 = puVar8;
    puVar13 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar5 = puVar3;
      puVar10 = puVar8;
      puVar13 = &uStack_220;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_2a0;
  pcStack_228 = FUN_108f35500;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar5;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar13;
  plStack_248 = plVar11;
  puStack_240 = puVar1;
  puStack_238 = puVar7;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar6 = &UNK_110acc078;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar3 = puVar8;
    puVar10 = puVar5;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar3 = puVar8;
      puVar10 = puVar5;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  pcStack_2a8 = FUN_108f35674;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar5 = puVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  _objc_retain(param_6);
  if (puVar1 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar1 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_358,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_340,puVar5);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_328,puVar5);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_310,puVar1);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x000107c27984(&uStack_378,auStack_358,&lStack_2f8,4);
    puVar2 = &UNK_110acc0c8;
    unaff_x25 = &uStack_378;
    puVar5 = &uStack_378;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc0c8,puVar5,param_7);
    puStack_360 = unaff_x25;
    func_0x000107c278ac(&puStack_360);
    lVar12 = 0;
    do {
      if ((&cStack_2f9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_release(param_6);
    puStack_3c0 = auStack_358;
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != puStack_3c0);
    _objc_release(param_6);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar4 = puVar1;
    __Unwind_Resume();
    pcStack_388 = FUN_108f359a8;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar2;
    puStack_3b8 = puVar1;
    puStack_3b0 = param_6;
    puStack_3a8 = puVar10;
    puStack_3a0 = puVar3;
    puStack_398 = puVar6;
    pppuStack_390 = &pppuStack_2b0;
    _objc_retain(puVar2);
    if (puVar4 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar4 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_3e0,puVar1);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x000107c27984(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar7 = &UNK_110acc118;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc118,&uStack_400,puVar5);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x000107c278ac(&puStack_3e8);
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
      }
    }
    puVar1 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
      ___stack_chk_fail();
      _objc_release(puVar2);
      _objc_release(puVar2);
      __Unwind_Resume();
      _objc_retain(puVar7);
      if (puVar1 != (undefined *)0x0) {
        FUN_108f359a8(puVar1,puVar7,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f34fe8; end: 108f35217;  */

/* WARNING: Removing unreachable block (ram,0x000108f35968) */

void FUN_108f34fe8(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [3];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110acbf88;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    puVar9 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_108f35218;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110acbfd8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar12 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar12 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_108f3538c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  plStack_148 = plVar11;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110acc028;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar2 = puVar8;
    puVar9 = puVar7;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar8;
      puVar9 = puVar7;
      puVar12 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar6);
    puVar5 = puVar1;
    __Unwind_Resume();
    puVar8 = &uStack_220;
    pcStack_1a8 = FUN_108f35500;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar4;
    puVar7 = puVar2;
    puStack_1e0 = unaff_x24;
    puStack_1d8 = unaff_x23;
    puStack_1d0 = puVar12;
    plStack_1c8 = plVar11;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    _objc_retain(puVar4);
    if (puVar5 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar5 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_200,puVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
      puVar3 = &UNK_110acc078;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      puVar7 = puVar8;
      puVar9 = puVar2;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        puVar7 = puVar8;
        puVar9 = puVar2;
      }
    }
    puVar1 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    __Unwind_Resume();
    pcStack_228 = FUN_108f35674;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar3;
    puVar2 = puVar7;
    pppuStack_230 = &pppuStack_1b0;
    _objc_retain(puVar3);
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    _objc_retain(param_6);
    if (puVar1 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar1 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      func_0x000107c278b8(auStack_2d8,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_2c0,puVar2);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar2 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_2a8,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar1 = &UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar1 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x000107c278b8(auStack_290,puVar1);
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      func_0x000107c27984(&uStack_2f8,auStack_2d8,&lStack_278,4);
      puVar6 = &UNK_110acc0c8;
      unaff_x25 = &uStack_2f8;
      puVar2 = &uStack_2f8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc0c8,puVar2,param_7);
      puStack_2e0 = unaff_x25;
      func_0x000107c278ac(&puStack_2e0);
      lVar10 = 0;
      do {
        if ((&cStack_279)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x60);
    }
    _objc_release(param_6);
    _objc_release(puVar9);
    _objc_release(puVar7);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      _objc_release(param_6);
      puStack_340 = auStack_2d8;
      do {
        unaff_x25 = unaff_x25 + -3;
      } while (unaff_x25 != puStack_340);
      _objc_release(param_6);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar3);
      puVar5 = puVar1;
      __Unwind_Resume();
      pcStack_308 = FUN_108f359a8;
      lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = puVar6;
      puStack_338 = puVar1;
      puStack_330 = param_6;
      puStack_328 = puVar9;
      puStack_320 = puVar7;
      puStack_318 = puVar3;
      pppuStack_310 = &pppuStack_230;
      _objc_retain(puVar6);
      if (puVar5 != (undefined *)0x0) {
        plVar11 = *(long **)(puVar5 + 8);
        _objc_retain(puVar6);
        if (puVar6 == (undefined *)0x0) {
          puVar1 = &UNK_10f53482e;
        }
        else {
          puVar1 = puVar6;
          _objc_retainAutorelease(puVar6);
          func_0x00010bdc3520();
        }
        _objc_release(puVar6);
        func_0x000107c278b8(auStack_360,puVar1);
        uStack_380 = 0;
        uStack_378 = 0;
        uStack_370 = 0;
        func_0x000107c27984(&uStack_380,auStack_360,&lStack_348,1);
        puVar4 = &UNK_110acc118;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc118,&uStack_380,puVar2);
        puStack_368 = (undefined1 *)&uStack_380;
        func_0x000107c278ac(&puStack_368);
        if (cStack_349 < '\0') {
          __ZdlPv(auStack_360[0]);
        }
      }
      puVar1 = puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
        ___stack_chk_fail();
        _objc_release(puVar6);
        _objc_release(puVar6);
        __Unwind_Resume();
        _objc_retain(puVar4);
        if (puVar1 != (undefined *)0x0) {
          FUN_108f359a8(puVar1,puVar4,(long)(param_1 * 1000.0));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar4);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f35218; end: 108f3538b;  */

/* WARNING: Removing unreachable block (ram,0x000108f35968) */

void FUN_108f35218(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x25;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [3];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acbfd8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_108f3538c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110acc028;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar3 = puVar8;
    param_5 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar8;
      param_5 = puVar7;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar8 = &uStack_180;
  pcStack_108 = FUN_108f35500;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar7 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110acc078;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar7 = puVar8;
    param_5 = puVar3;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = puVar8;
      param_5 = puVar3;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    __Unwind_Resume();
    pcStack_188 = FUN_108f35674;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puVar3 = puVar7;
    pppuStack_190 = &ppuStack_110;
    _objc_retain(puVar1);
    _objc_retain(puVar7);
    _objc_retain(param_5);
    _objc_retain(param_6);
    if (puVar2 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f53482e;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_238,puVar2);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar3 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_220,puVar3);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_208,puVar3);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x000107c278b8(auStack_1f0,puVar2);
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      func_0x000107c27984(&uStack_258,auStack_238,&lStack_1d8,4);
      puVar5 = &UNK_110acc0c8;
      unaff_x25 = &uStack_258;
      puVar3 = &uStack_258;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110acc0c8,puVar3,param_7);
      puStack_240 = unaff_x25;
      func_0x000107c278ac(&puStack_240);
      lVar10 = 0;
      do {
        if ((&cStack_1d9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x60);
    }
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar7);
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(param_6);
      puStack_2a0 = auStack_238;
      do {
        unaff_x25 = unaff_x25 + -3;
      } while (unaff_x25 != puStack_2a0);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(puVar7);
      _objc_release(puVar1);
      puVar4 = puVar2;
      __Unwind_Resume();
      pcStack_268 = FUN_108f359a8;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = puVar5;
      puStack_298 = puVar2;
      puStack_290 = param_6;
      puStack_288 = param_5;
      puStack_280 = puVar7;
      puStack_278 = puVar1;
      pppuStack_270 = &pppuStack_190;
      _objc_retain(puVar5);
      if (puVar4 != (undefined *)0x0) {
        plVar9 = *(long **)(puVar4 + 8);
        _objc_retain(puVar5);
        if (puVar5 == (undefined *)0x0) {
          puVar1 = &UNK_10f53482e;
        }
        else {
          puVar1 = puVar5;
          _objc_retainAutorelease(puVar5);
          func_0x00010bdc3520();
        }
        _objc_release(puVar5);
        func_0x000107c278b8(auStack_2c0,puVar1);
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        func_0x000107c27984(&uStack_2e0,auStack_2c0,&lStack_2a8,1);
        puVar6 = &UNK_110acc118;
        (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110acc118,&uStack_2e0,puVar3);
        puStack_2c8 = (undefined1 *)&uStack_2e0;
        func_0x000107c278ac(&puStack_2c8);
        if (cStack_2a9 < '\0') {
          __ZdlPv(auStack_2c0[0]);
        }
      }
      puVar1 = puVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
        ___stack_chk_fail();
        _objc_release(puVar5);
        _objc_release(puVar5);
        __Unwind_Resume();
        _objc_retain(puVar6);
        if (puVar1 != (undefined *)0x0) {
          FUN_108f359a8(puVar1,puVar6,(long)(param_1 * 1000.0));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar6);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f3538c; end: 108f354ff;  */

/* WARNING: Removing unreachable block (ram,0x000108f35968) */

void FUN_108f3538c(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x25;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [3];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc028;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = puVar7;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar7;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    puVar8 = &uStack_100;
    pcStack_88 = FUN_108f35500;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puVar7 = puVar3;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    if (puVar2 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f53482e;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_e0,puVar2);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
      puVar5 = &UNK_110acc078;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      puVar7 = puVar8;
      param_5 = puVar3;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar7 = puVar8;
        param_5 = puVar3;
      }
    }
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      _objc_release(puVar1);
      __Unwind_Resume();
      pcStack_108 = FUN_108f35674;
      lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = puVar5;
      puVar3 = puVar7;
      ppuStack_110 = &puStack_90;
      _objc_retain(puVar5);
      _objc_retain(puVar7);
      _objc_retain(param_5);
      _objc_retain(param_6);
      if (puVar2 != (undefined *)0x0) {
        plVar9 = *(long **)(puVar2 + 8);
        _objc_retain(puVar5);
        if (puVar5 == (undefined *)0x0) {
          puVar1 = &UNK_10f53482e;
        }
        else {
          puVar1 = puVar5;
          _objc_retainAutorelease(puVar5);
          func_0x00010bdc3520();
        }
        _objc_release(puVar5);
        func_0x000107c278b8(auStack_1b8,puVar1);
        _objc_retain(puVar7);
        if (puVar7 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)&UNK_10f53482e;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar3 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x000107c278b8(auStack_1a0,puVar3);
        _objc_retain(param_5);
        if (param_5 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)&UNK_10f53482e;
        }
        else {
          _objc_retainAutorelease(param_5);
          puVar3 = param_5;
          func_0x00010bdc3520(param_5);
        }
        _objc_release(param_5);
        func_0x000107c278b8(auStack_188,puVar3);
        _objc_retain(param_6);
        if (param_6 == (undefined *)0x0) {
          puVar1 = &UNK_10f53482e;
        }
        else {
          _objc_retainAutorelease(param_6);
          puVar1 = param_6;
          func_0x00010bdc3520(param_6);
        }
        _objc_release(param_6);
        func_0x000107c278b8(auStack_170,puVar1);
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_158,4);
        puVar1 = &UNK_110acc0c8;
        unaff_x25 = &uStack_1d8;
        puVar3 = &uStack_1d8;
        (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110acc0c8,puVar3,param_7);
        puStack_1c0 = unaff_x25;
        func_0x000107c278ac(&puStack_1c0);
        lVar10 = 0;
        do {
          if ((&cStack_159)[lVar10] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar10));
          }
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != -0x60);
      }
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(puVar7);
      puVar2 = puVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
        ___stack_chk_fail();
        _objc_release(param_6);
        puStack_220 = auStack_1b8;
        do {
          unaff_x25 = unaff_x25 + -3;
        } while (unaff_x25 != puStack_220);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar4 = puVar2;
        __Unwind_Resume();
        pcStack_1e8 = FUN_108f359a8;
        lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = puVar1;
        puStack_218 = puVar2;
        puStack_210 = param_6;
        puStack_208 = param_5;
        puStack_200 = puVar7;
        puStack_1f8 = puVar5;
        pppuStack_1f0 = &ppuStack_110;
        _objc_retain(puVar1);
        if (puVar4 != (undefined *)0x0) {
          plVar9 = *(long **)(puVar4 + 8);
          _objc_retain(puVar1);
          if (puVar1 == (undefined *)0x0) {
            puVar2 = &UNK_10f53482e;
          }
          else {
            puVar2 = puVar1;
            _objc_retainAutorelease(puVar1);
            func_0x00010bdc3520();
          }
          _objc_release(puVar1);
          func_0x000107c278b8(auStack_240,puVar2);
          uStack_260 = 0;
          uStack_258 = 0;
          uStack_250 = 0;
          func_0x000107c27984(&uStack_260,auStack_240,&lStack_228,1);
          puVar6 = &UNK_110acc118;
          (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110acc118,&uStack_260,puVar3);
          puStack_248 = (undefined1 *)&uStack_260;
          func_0x000107c278ac(&puStack_248);
          if (cStack_229 < '\0') {
            __ZdlPv(auStack_240[0]);
          }
        }
        puVar2 = puVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
          ___stack_chk_fail();
          _objc_release(puVar1);
          _objc_release(puVar1);
          __Unwind_Resume();
          _objc_retain(puVar6);
          if (puVar2 != (undefined *)0x0) {
            FUN_108f359a8(puVar2,puVar6,(long)(param_1 * 1000.0));
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar6);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f35500; end: 108f35673;  */

/* WARNING: Removing unreachable block (ram,0x000108f35968) */

void FUN_108f35500(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x25;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [3];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc078;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_108f35674;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_138,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_120,puVar3);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar3 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_108,puVar3);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar2 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_f0,puVar2);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_d8,4);
    puVar5 = &UNK_110acc0c8;
    unaff_x25 = &uStack_158;
    puVar3 = &uStack_158;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110acc0c8,puVar3,param_7);
    puStack_140 = unaff_x25;
    func_0x000107c278ac(&puStack_140);
    lVar9 = 0;
    do {
      if ((&cStack_d9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  puStack_1a0 = auStack_138;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puStack_1a0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_168 = FUN_108f359a8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puStack_198 = puVar2;
  puStack_190 = param_6;
  puStack_188 = param_5;
  puStack_180 = puVar7;
  puStack_178 = puVar1;
  ppuStack_170 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar4 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_1c0,puVar1);
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    func_0x000107c27984(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
    puVar6 = &UNK_110acc118;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110acc118,&uStack_1e0,puVar3);
    puStack_1c8 = (undefined1 *)&uStack_1e0;
    func_0x000107c278ac(&puStack_1c8);
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    __Unwind_Resume();
    _objc_retain(puVar6);
    if (puVar1 != (undefined *)0x0) {
      FUN_108f359a8(puVar1,puVar6,(long)(param_1 * 1000.0));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 108f35674; end: 108f359a7;  */

/* WARNING: Removing unreachable block (ram,0x000108f35968) */

void FUN_108f35674(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x25;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_a0,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = &UNK_110acc0c8;
    unaff_x25 = &uStack_d8;
    puVar2 = &uStack_d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc0c8,puVar2,param_7);
    puStack_c0 = unaff_x25;
    func_0x000107c278ac(&puStack_c0);
    lVar6 = 0;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_6);
    puStack_120 = auStack_b8;
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != puStack_120);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    puVar4 = puVar3;
    __Unwind_Resume();
    pcStack_e8 = FUN_108f359a8;
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar1;
    puStack_118 = puVar3;
    puStack_110 = param_6;
    puStack_108 = param_5;
    puStack_100 = param_4;
    puStack_f8 = param_3;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    if (puVar4 != (undefined *)0x0) {
      plVar7 = *(long **)(puVar4 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar3 = &UNK_10f53482e;
      }
      else {
        puVar3 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_140,puVar3);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x000107c27984(&uStack_160,auStack_140,&lStack_128,1);
      puVar5 = &UNK_110acc118;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc118,&uStack_160,puVar2);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x000107c278ac(&puStack_148);
      if (cStack_129 < '\0') {
        __ZdlPv(auStack_140[0]);
      }
    }
    puVar3 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      _objc_release(puVar1);
      __Unwind_Resume();
      _objc_retain(puVar5);
      if (puVar3 != (undefined *)0x0) {
        FUN_108f359a8(puVar3,puVar5,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f359a8; end: 108f35b1b;  */

void FUN_108f359a8(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc118;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110acc118,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_108f359a8(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f35b1c; end: 108f35b87;  */

void FUN_108f35b1c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_108f359a8(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f35b88; end: 108f35db7;  */

/* WARNING: Removing unreachable block (ram,0x000108f36534) */
/* WARNING: Removing unreachable block (ram,0x000108f36308) */
/* WARNING: Removing unreachable block (ram,0x000108f36758) */

void FUN_108f35b88(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar20 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110acc168;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar17 = 0;
    puVar20 = auStack_78;
    puVar8 = param_4;
    do {
      if ((&cStack_49)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar19 = puVar3;
  __Unwind_Resume();
  puVar12 = &uStack_120;
  pcStack_a8 = FUN_108f35db8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar20;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar18 = (long *)0x0;
  if (puVar19 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar19 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar10 = &UNK_110acc1b8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar12;
    puVar8 = puVar2;
    puVar20 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar12;
      puVar8 = puVar2;
      puVar20 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar12 = &uStack_1a0;
  pcStack_128 = FUN_108f35f2c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = puVar10;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar20;
  plStack_148 = plVar18;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar10);
  if (puVar4 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar4 + 8);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar19 = &UNK_110acc208;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar2 = puVar12;
    puVar8 = puVar7;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar12;
      puVar8 = puVar7;
    }
  }
  puVar1 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar10);
  __Unwind_Resume();
  pcStack_1a8 = FUN_108f360a0;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = (undefined8 *)puVar19;
  puVar7 = puVar2;
  puVar12 = puVar8;
  puVar9 = param_5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar8);
  _objc_retain(param_5);
  if (puVar1 != (undefined *)0x0) {
    plVar18 = *(long **)(puVar1 + 8);
    unaff_x25 = (undefined8 *)&UNK_10f534b68;
    unaff_x26 = (undefined8 *)&UNK_10f534b63;
    puVar20 = unaff_x26;
    if ((int)puVar19 == 0) {
      puVar20 = unaff_x25;
    }
    func_0x000107c278b8(auStack_258,puVar20);
    puVar20 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar20 = unaff_x25;
    }
    func_0x000107c278b8(auStack_240,puVar20);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_228,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_210,puVar2);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x000107c27984(&uStack_278,auStack_258,&lStack_1f8,4);
    puVar20 = (undefined8 *)&UNK_110acc258;
    puVar7 = &uStack_278;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_260 = &uStack_278;
    func_0x000107c278ac(&puStack_260);
    lVar17 = 0;
    puVar19 = auStack_258;
    puVar12 = param_6;
    do {
      if ((&cStack_1f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(param_5);
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_2b8 = auStack_258;
    do {
      puVar19 = puVar19 + -0x18;
    } while (puVar19 != puStack_2b8);
    _objc_release(param_5);
    _objc_release(puVar8);
    puVar6 = puVar5;
    __Unwind_Resume();
    puVar14 = &uStack_340;
    pcStack_288 = FUN_108f36338;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar21 = puVar20;
    puVar13 = puVar7;
    puVar15 = puVar12;
    puVar16 = puVar9;
    puStack_2d0 = unaff_x26;
    puStack_2c8 = unaff_x25;
    puStack_2c0 = puVar2;
    puStack_2b0 = puVar19;
    puStack_2a8 = puVar5;
    puStack_2a0 = param_5;
    puStack_298 = puVar8;
    pppuStack_290 = &pppuStack_1b0;
    _objc_retain(puVar12);
    iVar11 = (int)puVar13;
    if (puVar6 != (undefined8 *)0x0) {
      plVar18 = (long *)puVar6[1];
      puVar2 = (undefined8 *)&UNK_10f534b68;
      unaff_x25 = (undefined8 *)&UNK_10f534b63;
      puVar8 = unaff_x25;
      if ((int)puVar20 == 0) {
        puVar8 = puVar2;
      }
      func_0x000107c278b8(auStack_320,puVar8);
      puVar20 = unaff_x25;
      if ((int)puVar7 == 0) {
        puVar20 = puVar2;
      }
      func_0x000107c278b8(auStack_308,puVar20);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar7 = puVar12;
        func_0x00010bdc3520();
      }
      _objc_release(puVar12);
      func_0x000107c278b8(auStack_2f0,puVar7);
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x000107c27984(&uStack_340,auStack_320,&lStack_2d8,3);
      puVar21 = (undefined8 *)&UNK_110acc2a8;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_328 = (undefined1 *)&uStack_340;
      func_0x000107c278ac(&puStack_328);
      lVar17 = 0;
      puVar15 = puVar9;
      do {
        if ((&cStack_2d9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar17));
        }
        iVar11 = (int)puVar14;
        lVar17 = lVar17 + -0x18;
        puVar20 = &uStack_340;
      } while (lVar17 != -0x48);
    }
    puVar8 = puVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar12);
    puStack_368 = auStack_320;
    do {
      puVar20 = (undefined8 *)((long)puVar20 + -0x18);
    } while (puVar20 != (undefined8 *)puStack_368);
    _objc_release(puVar12);
    puVar9 = puVar8;
    __Unwind_Resume();
    pcStack_348 = FUN_108f3655c;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = (undefined *)puVar21;
    puStack_390 = unaff_x26;
    puStack_388 = unaff_x25;
    puStack_380 = puVar2;
    puStack_378 = puVar7;
    puStack_370 = (undefined *)puVar20;
    puStack_360 = puVar8;
    puStack_358 = puVar12;
    pppuStack_350 = &pppuStack_290;
    _objc_retain(puVar15);
    if (puVar9 != (undefined8 *)0x0) {
      plVar18 = (long *)puVar9[1];
      puVar1 = &UNK_10f534b63;
      if ((int)puVar21 == 0) {
        puVar1 = &UNK_10f534b68;
      }
      func_0x000107c278b8(auStack_3e0,puVar1);
      puVar1 = &UNK_10f534b63;
      if (iVar11 == 0) {
        puVar1 = &UNK_10f534b68;
      }
      func_0x000107c278b8(auStack_3c8,puVar1);
      _objc_retain(puVar15);
      if (puVar15 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar15);
        puVar2 = puVar15;
        func_0x00010bdc3520(puVar15);
      }
      _objc_release(puVar15);
      func_0x000107c278b8(auStack_3b0,puVar2);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x000107c27984(&uStack_400,auStack_3e0,&lStack_398,3);
      puVar1 = &UNK_110acc2f8;
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110acc2f8,&uStack_400,puVar16);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x000107c278ac(&puStack_3e8);
      lVar17 = 0;
      do {
        if ((&cStack_399)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        puVar21 = &uStack_400;
      } while (lVar17 != -0x48);
    }
    puVar2 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
      ___stack_chk_fail();
      _objc_release(puVar15);
      do {
        puVar21 = (undefined8 *)((long)puVar21 + -0x18);
      } while (puVar21 != (undefined8 *)auStack_3e0);
      _objc_release(puVar15);
      puVar20 = puVar2;
      __Unwind_Resume();
      puStack_428 = (undefined1 *)&uStack_440;
      pcStack_408 = FUN_108f36780;
      if (puVar20 != (undefined8 *)0x0) {
        uStack_440 = 0;
        uStack_438 = 0;
        uStack_430 = 0;
        puStack_420 = puVar2;
        puStack_418 = puVar15;
        pppuStack_410 = &pppuStack_350;
        (**(code **)(*(long *)puVar20[1] + 0x18))
                  ((long *)puVar20[1],&UNK_110acc348,&uStack_440,puVar1);
        func_0x000107c278ac(&puStack_428);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f35db8; end: 108f35f2b;  */

/* WARNING: Removing unreachable block (ram,0x000108f36534) */
/* WARNING: Removing unreachable block (ram,0x000108f36308) */
/* WARNING: Removing unreachable block (ram,0x000108f36758) */

void FUN_108f35db8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar17 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar17 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar17 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_108f35f2c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar1;
  puVar3 = puVar17;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar16 = &UNK_110acc208;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar3 = puVar6;
    param_4 = puVar17;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar6;
      param_4 = puVar17;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_108f360a0;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined8 *)puVar16;
  puVar6 = puVar3;
  puVar11 = param_4;
  puVar7 = param_5;
  ppuStack_110 = &puStack_90;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (puVar2 != (undefined *)0x0) {
    plVar14 = *(long **)(puVar2 + 8);
    unaff_x25 = (undefined8 *)&UNK_10f534b68;
    unaff_x26 = (undefined8 *)&UNK_10f534b63;
    puVar17 = unaff_x26;
    if ((int)puVar16 == 0) {
      puVar17 = unaff_x25;
    }
    func_0x000107c278b8(auStack_1b8,puVar17);
    puVar17 = unaff_x26;
    if ((int)puVar3 == 0) {
      puVar17 = unaff_x25;
    }
    func_0x000107c278b8(auStack_1a0,puVar17);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar17 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_188,puVar17);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar3 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_170,puVar3);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_158,4);
    puVar17 = (undefined8 *)&UNK_110acc258;
    puVar6 = &uStack_1d8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_1c0 = &uStack_1d8;
    func_0x000107c278ac(&puStack_1c0);
    lVar15 = 0;
    puVar16 = auStack_1b8;
    puVar11 = param_6;
    do {
      if ((&cStack_159)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(param_5);
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_218 = auStack_1b8;
    do {
      puVar16 = puVar16 + -0x18;
    } while (puVar16 != puStack_218);
    _objc_release(param_5);
    _objc_release(param_4);
    puVar5 = puVar4;
    __Unwind_Resume();
    puVar10 = &uStack_2a0;
    pcStack_1e8 = FUN_108f36338;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar18 = puVar17;
    puVar9 = puVar6;
    puVar12 = puVar11;
    puVar13 = puVar7;
    puStack_230 = unaff_x26;
    puStack_228 = unaff_x25;
    puStack_220 = puVar3;
    puStack_210 = puVar16;
    puStack_208 = puVar4;
    puStack_200 = param_5;
    puStack_1f8 = param_4;
    pppuStack_1f0 = &ppuStack_110;
    _objc_retain(puVar11);
    iVar8 = (int)puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar5[1];
      puVar3 = (undefined8 *)&UNK_10f534b68;
      unaff_x25 = (undefined8 *)&UNK_10f534b63;
      puVar4 = unaff_x25;
      if ((int)puVar17 == 0) {
        puVar4 = puVar3;
      }
      func_0x000107c278b8(auStack_280,puVar4);
      puVar17 = unaff_x25;
      if ((int)puVar6 == 0) {
        puVar17 = puVar3;
      }
      func_0x000107c278b8(auStack_268,puVar17);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar6 = puVar11;
        func_0x00010bdc3520();
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_250,puVar6);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_238,3);
      puVar18 = (undefined8 *)&UNK_110acc2a8;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_288 = (undefined1 *)&uStack_2a0;
      func_0x000107c278ac(&puStack_288);
      lVar15 = 0;
      puVar12 = puVar7;
      do {
        if ((&cStack_239)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar15));
        }
        iVar8 = (int)puVar10;
        lVar15 = lVar15 + -0x18;
        puVar17 = &uStack_2a0;
      } while (lVar15 != -0x48);
    }
    puVar7 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      puStack_2c8 = auStack_280;
      do {
        puVar17 = (undefined8 *)((long)puVar17 + -0x18);
      } while (puVar17 != (undefined8 *)puStack_2c8);
      _objc_release(puVar11);
      puVar4 = puVar7;
      __Unwind_Resume();
      pcStack_2a8 = FUN_108f3655c;
      lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = (undefined *)puVar18;
      puStack_2f0 = unaff_x26;
      puStack_2e8 = unaff_x25;
      puStack_2e0 = puVar3;
      puStack_2d8 = puVar6;
      puStack_2d0 = (undefined *)puVar17;
      puStack_2c0 = puVar7;
      puStack_2b8 = puVar11;
      pppuStack_2b0 = &pppuStack_1f0;
      _objc_retain(puVar12);
      if (puVar4 != (undefined8 *)0x0) {
        plVar14 = (long *)puVar4[1];
        puVar1 = &UNK_10f534b63;
        if ((int)puVar18 == 0) {
          puVar1 = &UNK_10f534b68;
        }
        func_0x000107c278b8(auStack_340,puVar1);
        puVar1 = &UNK_10f534b63;
        if (iVar8 == 0) {
          puVar1 = &UNK_10f534b68;
        }
        func_0x000107c278b8(auStack_328,puVar1);
        _objc_retain(puVar12);
        if (puVar12 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)&UNK_10f53482e;
        }
        else {
          _objc_retainAutorelease(puVar12);
          puVar17 = puVar12;
          func_0x00010bdc3520(puVar12);
        }
        _objc_release(puVar12);
        func_0x000107c278b8(auStack_310,puVar17);
        uStack_360 = 0;
        uStack_358 = 0;
        uStack_350 = 0;
        func_0x000107c27984(&uStack_360,auStack_340,&lStack_2f8,3);
        puVar1 = &UNK_110acc2f8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110acc2f8,&uStack_360,puVar13);
        puStack_348 = (undefined1 *)&uStack_360;
        func_0x000107c278ac(&puStack_348);
        lVar15 = 0;
        do {
          if ((&cStack_2f9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
          puVar18 = &uStack_360;
        } while (lVar15 != -0x48);
      }
      puVar17 = puVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
        ___stack_chk_fail();
        _objc_release(puVar12);
        do {
          puVar18 = (undefined8 *)((long)puVar18 + -0x18);
        } while (puVar18 != (undefined8 *)auStack_340);
        _objc_release(puVar12);
        puVar3 = puVar17;
        __Unwind_Resume();
        puStack_388 = (undefined1 *)&uStack_3a0;
        pcStack_368 = FUN_108f36780;
        if (puVar3 != (undefined8 *)0x0) {
          uStack_3a0 = 0;
          uStack_398 = 0;
          uStack_390 = 0;
          puStack_380 = puVar17;
          puStack_378 = puVar12;
          pppuStack_370 = &pppuStack_2b0;
          (**(code **)(*(long *)puVar3[1] + 0x18))
                    ((long *)puVar3[1],&UNK_110acc348,&uStack_3a0,puVar1);
          func_0x000107c278ac(&puStack_388);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f35f2c; end: 108f3609f;  */

/* WARNING: Removing unreachable block (ram,0x000108f36534) */
/* WARNING: Removing unreachable block (ram,0x000108f36308) */
/* WARNING: Removing unreachable block (ram,0x000108f36758) */

void FUN_108f35f2c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar16 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar15 = &UNK_10f53482e;
    }
    else {
      puVar15 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar15);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar15 = &UNK_110acc208;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar2 = puVar16;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = puVar16;
      param_4 = param_3;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108f360a0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = (undefined8 *)puVar15;
  puVar5 = puVar2;
  puVar10 = param_4;
  puVar6 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (puVar1 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar1 + 8);
    unaff_x25 = (undefined8 *)&UNK_10f534b68;
    unaff_x26 = (undefined8 *)&UNK_10f534b63;
    puVar16 = unaff_x26;
    if ((int)puVar15 == 0) {
      puVar16 = unaff_x25;
    }
    func_0x000107c278b8(auStack_138,puVar16);
    puVar16 = unaff_x26;
    if ((int)puVar2 == 0) {
      puVar16 = unaff_x25;
    }
    func_0x000107c278b8(auStack_120,puVar16);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_108,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_f0,puVar2);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_d8,4);
    puVar16 = (undefined8 *)&UNK_110acc258;
    puVar5 = &uStack_158;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_140 = &uStack_158;
    func_0x000107c278ac(&puStack_140);
    lVar14 = 0;
    puVar15 = auStack_138;
    puVar10 = param_6;
    do {
      if ((&cStack_d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x60);
  }
  _objc_release(param_5);
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puStack_198 = auStack_138;
  do {
    puVar15 = puVar15 + -0x18;
  } while (puVar15 != puStack_198);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_220;
  pcStack_168 = FUN_108f36338;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = puVar16;
  puVar8 = puVar5;
  puVar11 = puVar10;
  puVar12 = puVar6;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  puStack_1a0 = puVar2;
  puStack_190 = puVar15;
  puStack_188 = puVar3;
  puStack_180 = param_5;
  puStack_178 = param_4;
  ppuStack_170 = &puStack_90;
  _objc_retain(puVar10);
  iVar7 = (int)puVar8;
  if (puVar4 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar4[1];
    puVar2 = (undefined8 *)&UNK_10f534b68;
    unaff_x25 = (undefined8 *)&UNK_10f534b63;
    puVar3 = unaff_x25;
    if ((int)puVar16 == 0) {
      puVar3 = puVar2;
    }
    func_0x000107c278b8(auStack_200,puVar3);
    puVar16 = unaff_x25;
    if ((int)puVar5 == 0) {
      puVar16 = puVar2;
    }
    func_0x000107c278b8(auStack_1e8,puVar16);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar5 = puVar10;
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_1d0,puVar5);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1b8,3);
    puVar17 = (undefined8 *)&UNK_110acc2a8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    lVar14 = 0;
    puVar11 = puVar6;
    do {
      if ((&cStack_1b9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar14));
      }
      iVar7 = (int)puVar9;
      lVar14 = lVar14 + -0x18;
      puVar16 = &uStack_220;
    } while (lVar14 != -0x48);
  }
  puVar6 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    puStack_248 = auStack_200;
    do {
      puVar16 = (undefined8 *)((long)puVar16 + -0x18);
    } while (puVar16 != (undefined8 *)puStack_248);
    _objc_release(puVar10);
    puVar3 = puVar6;
    __Unwind_Resume();
    pcStack_228 = FUN_108f3655c;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar15 = (undefined *)puVar17;
    puStack_270 = unaff_x26;
    puStack_268 = unaff_x25;
    puStack_260 = puVar2;
    puStack_258 = puVar5;
    puStack_250 = (undefined *)puVar16;
    puStack_240 = puVar6;
    puStack_238 = puVar10;
    pppuStack_230 = &ppuStack_170;
    _objc_retain(puVar11);
    if (puVar3 != (undefined8 *)0x0) {
      plVar13 = (long *)puVar3[1];
      puVar15 = &UNK_10f534b63;
      if ((int)puVar17 == 0) {
        puVar15 = &UNK_10f534b68;
      }
      func_0x000107c278b8(auStack_2c0,puVar15);
      puVar15 = &UNK_10f534b63;
      if (iVar7 == 0) {
        puVar15 = &UNK_10f534b68;
      }
      func_0x000107c278b8(auStack_2a8,puVar15);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar2 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_290,puVar2);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x000107c27984(&uStack_2e0,auStack_2c0,&lStack_278,3);
      puVar15 = &UNK_110acc2f8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110acc2f8,&uStack_2e0,puVar12);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x000107c278ac(&puStack_2c8);
      lVar14 = 0;
      do {
        if ((&cStack_279)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        puVar17 = &uStack_2e0;
      } while (lVar14 != -0x48);
    }
    puVar2 = puVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      _objc_release(puVar11);
      do {
        puVar17 = (undefined8 *)((long)puVar17 + -0x18);
      } while (puVar17 != (undefined8 *)auStack_2c0);
      _objc_release(puVar11);
      puVar16 = puVar2;
      __Unwind_Resume();
      puStack_308 = (undefined1 *)&uStack_320;
      pcStack_2e8 = FUN_108f36780;
      if (puVar16 != (undefined8 *)0x0) {
        uStack_320 = 0;
        uStack_318 = 0;
        uStack_310 = 0;
        puStack_300 = puVar2;
        puStack_2f8 = puVar11;
        pppuStack_2f0 = &pppuStack_230;
        (**(code **)(*(long *)puVar16[1] + 0x18))
                  ((long *)puVar16[1],&UNK_110acc348,&uStack_320,puVar15);
        func_0x000107c278ac(&puStack_308);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f360a0; end: 108f36337;  */

/* WARNING: Removing unreachable block (ram,0x000108f36534) */
/* WARNING: Removing unreachable block (ram,0x000108f36308) */
/* WARNING: Removing unreachable block (ram,0x000108f36758) */

void FUN_108f360a0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = (undefined8 *)param_2;
  puVar3 = param_3;
  puVar9 = param_4;
  puVar4 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    unaff_x25 = (undefined8 *)&UNK_10f534b68;
    unaff_x26 = (undefined8 *)&UNK_10f534b63;
    puVar13 = unaff_x26;
    if ((int)param_2 == 0) {
      puVar13 = unaff_x25;
    }
    func_0x000107c278b8(auStack_b8,puVar13);
    puVar13 = unaff_x26;
    if ((int)param_3 == 0) {
      puVar13 = unaff_x25;
    }
    func_0x000107c278b8(auStack_a0,puVar13);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar13 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,puVar13);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_5);
      param_3 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,param_3);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar13 = (undefined8 *)&UNK_110acc258;
    puVar3 = &uStack_d8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_c0 = &uStack_d8;
    func_0x000107c278ac(&puStack_c0);
    lVar12 = 0;
    param_2 = auStack_b8;
    puVar9 = param_6;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_5);
  puVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puStack_118 = auStack_b8;
  do {
    param_2 = param_2 + -0x18;
  } while (param_2 != puStack_118);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_e8 = FUN_108f36338;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar13;
  puVar7 = puVar3;
  puVar10 = puVar9;
  puVar11 = puVar4;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_120 = param_3;
  puStack_110 = param_2;
  puStack_108 = puVar1;
  puStack_100 = param_5;
  puStack_f8 = param_4;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  iVar6 = (int)puVar7;
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    param_3 = (undefined8 *)&UNK_10f534b68;
    unaff_x25 = (undefined8 *)&UNK_10f534b63;
    puVar1 = unaff_x25;
    if ((int)puVar13 == 0) {
      puVar1 = param_3;
    }
    func_0x000107c278b8(auStack_180,puVar1);
    puVar13 = unaff_x25;
    if ((int)puVar3 == 0) {
      puVar13 = param_3;
    }
    func_0x000107c278b8(auStack_168,puVar13);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar3 = puVar9;
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_150,puVar3);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_138,3);
    puVar14 = (undefined8 *)&UNK_110acc2a8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    lVar12 = 0;
    puVar10 = puVar4;
    do {
      if ((&cStack_139)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar12));
      }
      iVar6 = (int)puVar8;
      lVar12 = lVar12 + -0x18;
      puVar13 = &uStack_1a0;
    } while (lVar12 != -0x48);
  }
  puVar4 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    puStack_1c8 = auStack_180;
    do {
      puVar13 = (undefined8 *)((long)puVar13 + -0x18);
    } while (puVar13 != (undefined8 *)puStack_1c8);
    _objc_release(puVar9);
    puVar1 = puVar4;
    __Unwind_Resume();
    pcStack_1a8 = FUN_108f3655c;
    lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = (undefined *)puVar14;
    puStack_1f0 = unaff_x26;
    puStack_1e8 = unaff_x25;
    puStack_1e0 = param_3;
    puStack_1d8 = puVar3;
    puStack_1d0 = (undefined *)puVar13;
    puStack_1c0 = puVar4;
    puStack_1b8 = puVar9;
    ppuStack_1b0 = &puStack_f0;
    _objc_retain(puVar10);
    if (puVar1 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar1[1];
      puVar5 = &UNK_10f534b63;
      if ((int)puVar14 == 0) {
        puVar5 = &UNK_10f534b68;
      }
      func_0x000107c278b8(auStack_240,puVar5);
      puVar5 = &UNK_10f534b63;
      if (iVar6 == 0) {
        puVar5 = &UNK_10f534b68;
      }
      func_0x000107c278b8(auStack_228,puVar5);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)&UNK_10f53482e;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar13 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x000107c278b8(auStack_210,puVar13);
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      func_0x000107c27984(&uStack_260,auStack_240,&lStack_1f8,3);
      puVar5 = &UNK_110acc2f8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110acc2f8,&uStack_260,puVar11);
      puStack_248 = (undefined1 *)&uStack_260;
      func_0x000107c278ac(&puStack_248);
      lVar12 = 0;
      do {
        if ((&cStack_1f9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        puVar14 = &uStack_260;
      } while (lVar12 != -0x48);
    }
    puVar13 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      do {
        puVar14 = (undefined8 *)((long)puVar14 + -0x18);
      } while (puVar14 != (undefined8 *)auStack_240);
      _objc_release(puVar10);
      puVar3 = puVar13;
      __Unwind_Resume();
      puStack_288 = (undefined1 *)&uStack_2a0;
      pcStack_268 = FUN_108f36780;
      if (puVar3 != (undefined8 *)0x0) {
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        puStack_280 = puVar13;
        puStack_278 = puVar10;
        pppuStack_270 = &ppuStack_1b0;
        (**(code **)(*(long *)puVar3[1] + 0x18))
                  ((long *)puVar3[1],&UNK_110acc348,&uStack_2a0,puVar5);
        func_0x000107c278ac(&puStack_288);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 108f36338; end: 108f3655b;  */

/* WARNING: Removing unreachable block (ram,0x000108f36534) */
/* WARNING: Removing unreachable block (ram,0x000108f36758) */

void FUN_108f36338(long param_1,undefined8 *param_2,int param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  puVar1 = param_4;
  puVar3 = param_5;
  iVar5 = param_3;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f534b63;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_a0,puVar1);
    puVar1 = &UNK_10f534b63;
    if (param_3 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar9 = (undefined8 *)&UNK_110acc2a8;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar7 = 0;
    puVar1 = param_5;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      iVar5 = (int)puVar6;
      lVar7 = lVar7 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar7 != -0x48);
  }
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    param_2 = (undefined8 *)((long)param_2 + -0x18);
  } while (param_2 != (undefined8 *)auStack_a0);
  _objc_release(param_4);
  __Unwind_Resume();
  pcStack_c8 = FUN_108f3655c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)puVar9;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    puVar2 = &UNK_10f534b63;
    if ((int)puVar9 == 0) {
      puVar2 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_160,puVar2);
    puVar2 = &UNK_10f534b63;
    if (iVar5 == 0) {
      puVar2 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_148,puVar2);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar2 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar4 = &UNK_110acc2f8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110acc2f8,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar7 = 0;
    do {
      if ((&cStack_119)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      puVar9 = &uStack_180;
    } while (lVar7 != -0x48);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    do {
      puVar9 = (undefined8 *)((long)puVar9 + -0x18);
    } while (puVar9 != (undefined8 *)auStack_160);
    _objc_release(puVar1);
    puVar2 = puVar3;
    __Unwind_Resume();
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    pcStack_188 = FUN_108f36780;
    if (puVar2 != (undefined *)0x0) {
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      puStack_1a0 = puVar3;
      puStack_198 = puVar1;
      ppuStack_190 = &puStack_d0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_110acc348,&uStack_1c0,puVar4);
      func_0x000107c278ac(&puStack_1a8);
    }
    return;
  }
  return;
}



/* Entry: 108f3655c; end: 108f3677f;  */

/* WARNING: Removing unreachable block (ram,0x000108f36758) */

void FUN_108f3655c(long param_1,undefined8 *param_2,int param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)param_2;
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f534b63;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_a0,puVar1);
    puVar1 = &UNK_10f534b63;
    if (param_3 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110acc2f8;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110acc2f8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar4 = 0;
    do {
      if ((&cStack_59)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
      param_2 = &uStack_c0;
    } while (lVar4 != -0x48);
  }
  puVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      param_2 = (undefined8 *)((long)param_2 + -0x18);
    } while (param_2 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    puVar3 = puVar2;
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    pcStack_c8 = FUN_108f36780;
    if (puVar3 != (undefined *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_e0 = puVar2;
      puStack_d8 = param_4;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                (*(long **)(puVar3 + 8),&UNK_110acc348,&uStack_100,puVar1);
      func_0x000107c278ac(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 108f36780; end: 108f367f7;  */

void FUN_108f36780(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc348,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f367f8; end: 108f3696b;  */

void FUN_108f367f8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 *puStack_438;
  undefined8 *puStack_430;
  undefined *puStack_428;
  undefined8 ***pppuStack_420;
  code *pcStack_418;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 auStack_3e8 [2];
  char cStack_3d1;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  long *plStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  long *plStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 ***pppuStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined1 *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc398;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = puVar7;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  pcStack_88 = FUN_108f3696c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110acc3e8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = puVar8;
    param_4 = puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar8;
      param_4 = puVar4;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_108f36ae0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar4 = puVar7;
  puVar8 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  puVar12 = (undefined1 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_1c8,puVar1);
    puVar1 = &UNK_10f534b63;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_1b0,puVar1);
    puVar1 = &UNK_10f534b63;
    if ((int)param_4 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_198,puVar1);
    unaff_x24 = auStack_180;
    puVar1 = &UNK_10f534b63;
    if ((int)param_5 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(unaff_x24,puVar1);
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    func_0x000107c27984(&uStack_1e8,auStack_1c8,&lStack_168,4);
    puVar1 = &UNK_110acc438;
    param_5 = &uStack_1e8;
    puVar4 = &uStack_1e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc438,puVar4,param_6);
    puStack_1d0 = param_5;
    func_0x000107c278ac(&puStack_1d0);
    lVar10 = 0;
    puVar12 = auStack_1c8;
    puVar8 = param_6;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x60);
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_270;
  pcStack_1f8 = FUN_108f36d20;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar4;
  puStack_230 = unaff_x24;
  puStack_228 = param_4;
  puStack_220 = param_5;
  puStack_218 = puVar12;
  puStack_210 = puVar2;
  puStack_208 = puVar5;
  pppuStack_200 = &ppuStack_110;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    param_4 = auStack_250;
    func_0x000107c278b8(auStack_250,puVar2);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x000107c27984(&uStack_270,auStack_250,&lStack_238,1);
    puVar6 = &UNK_110acc488;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc488,&uStack_270,puVar4);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x000107c278ac(&puStack_258);
    puVar7 = puVar9;
    puVar8 = puVar4;
    param_5 = &uStack_270;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar7 = puVar9;
      puVar8 = puVar4;
      param_5 = &uStack_270;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_2f0;
  pcStack_278 = FUN_108f36e94;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puVar4 = puVar7;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = param_4;
  puStack_2a0 = param_5;
  plStack_298 = plVar11;
  puStack_290 = puVar2;
  puStack_288 = puVar1;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    param_4 = auStack_2d0;
    func_0x000107c278b8(auStack_2d0,puVar1);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x000107c27984(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    puVar5 = &UNK_110acc4d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc4d8,&uStack_2f0,puVar7);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x000107c278ac(&puStack_2d8);
    puVar4 = puVar9;
    puVar8 = puVar7;
    param_5 = &uStack_2f0;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar4 = puVar9;
      puVar8 = puVar7;
      param_5 = &uStack_2f0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_370;
  pcStack_2f8 = FUN_108f37008;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar7 = puVar4;
  puStack_330 = unaff_x24;
  puStack_328 = param_4;
  puStack_320 = param_5;
  plStack_318 = plVar11;
  puStack_310 = puVar1;
  puStack_308 = puVar6;
  pppuStack_300 = &pppuStack_280;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    param_4 = auStack_350;
    func_0x000107c278b8(auStack_350,puVar1);
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    func_0x000107c27984(&uStack_370,auStack_350,&lStack_338,1);
    puVar2 = &UNK_110acc528;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc528,&uStack_370,puVar4);
    puStack_358 = (undefined1 *)&uStack_370;
    func_0x000107c278ac(&puStack_358);
    puVar7 = puVar9;
    puVar8 = puVar4;
    param_5 = &uStack_370;
    if (cStack_339 < '\0') {
      __ZdlPv(auStack_350[0]);
      puVar7 = puVar9;
      puVar8 = puVar4;
      param_5 = &uStack_370;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_378 = FUN_108f3717c;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_3b0 = unaff_x24;
  puStack_3a8 = param_4;
  puStack_3a0 = param_5;
  plStack_398 = plVar11;
  puStack_390 = puVar1;
  puStack_388 = puVar5;
  pppuStack_380 = &pppuStack_300;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_3e8,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_3d0,puVar4);
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    func_0x000107c27984(&uStack_408,auStack_3e8,&lStack_3b8,2);
    puVar6 = &UNK_110acc578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc578,&uStack_408,puVar8);
    puStack_3f0 = &uStack_408;
    func_0x000107c278ac(&puStack_3f0);
    lVar10 = 0;
    do {
      if ((&cStack_3b9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_3d1 < '\0') {
    __ZdlPv(auStack_3e8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  __Unwind_Resume();
  puStack_438 = (undefined1 *)&uStack_450;
  pcStack_418 = FUN_108f373ac;
  if (puVar1 != (undefined *)0x0) {
    uStack_450 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    puStack_430 = puVar7;
    puStack_428 = puVar2;
    pppuStack_420 = &pppuStack_380;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110acc5c8,&uStack_450,puVar6);
    func_0x000107c278ac(&puStack_438);
  }
  return;
}



/* Entry: 108f3696c; end: 108f36adf;  */

void FUN_108f3696c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 auStack_368 [2];
  char cStack_351;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  long *plStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 ***pppuStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc3e8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar4;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108f36ae0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar4 = puVar7;
  puVar9 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar12 = (undefined1 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_148,puVar2);
    puVar2 = &UNK_10f534b63;
    if ((int)puVar7 == 0) {
      puVar2 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_130,puVar2);
    puVar2 = &UNK_10f534b63;
    if ((int)param_4 == 0) {
      puVar2 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_118,puVar2);
    unaff_x24 = auStack_100;
    puVar2 = &UNK_10f534b63;
    if ((int)param_5 == 0) {
      puVar2 = &UNK_10f534b68;
    }
    func_0x000107c278b8(unaff_x24,puVar2);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    func_0x000107c27984(&uStack_168,auStack_148,&lStack_e8,4);
    puVar5 = &UNK_110acc438;
    param_5 = &uStack_168;
    puVar4 = &uStack_168;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc438,puVar4,param_6);
    puStack_150 = param_5;
    func_0x000107c278ac(&puStack_150);
    lVar10 = 0;
    puVar12 = auStack_148;
    puVar9 = param_6;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x60);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar8 = &uStack_1f0;
  pcStack_178 = FUN_108f36d20;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar7 = puVar4;
  puStack_1b0 = unaff_x24;
  puStack_1a8 = param_4;
  puStack_1a0 = param_5;
  puStack_198 = puVar12;
  puStack_190 = puVar2;
  puStack_188 = puVar1;
  ppuStack_180 = &puStack_90;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    param_4 = auStack_1d0;
    func_0x000107c278b8(auStack_1d0,puVar1);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x000107c27984(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    puVar6 = &UNK_110acc488;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc488,&uStack_1f0,puVar4);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x000107c278ac(&puStack_1d8);
    puVar7 = puVar8;
    puVar9 = puVar4;
    param_5 = &uStack_1f0;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar7 = puVar8;
      puVar9 = puVar4;
      param_5 = &uStack_1f0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar3 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_270;
  pcStack_1f8 = FUN_108f36e94;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar4 = puVar7;
  puStack_230 = unaff_x24;
  puStack_228 = param_4;
  puStack_220 = param_5;
  plStack_218 = plVar11;
  puStack_210 = puVar1;
  puStack_208 = puVar5;
  pppuStack_200 = &ppuStack_180;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    param_4 = auStack_250;
    func_0x000107c278b8(auStack_250,puVar1);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x000107c27984(&uStack_270,auStack_250,&lStack_238,1);
    puVar2 = &UNK_110acc4d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc4d8,&uStack_270,puVar7);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x000107c278ac(&puStack_258);
    puVar4 = puVar8;
    puVar9 = puVar7;
    param_5 = &uStack_270;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar4 = puVar8;
      puVar9 = puVar7;
      param_5 = &uStack_270;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_2f0;
  pcStack_278 = FUN_108f37008;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar7 = puVar4;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = param_4;
  puStack_2a0 = param_5;
  plStack_298 = plVar11;
  puStack_290 = puVar1;
  puStack_288 = puVar6;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    param_4 = auStack_2d0;
    func_0x000107c278b8(auStack_2d0,puVar1);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x000107c27984(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    puVar5 = &UNK_110acc528;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc528,&uStack_2f0,puVar4);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x000107c278ac(&puStack_2d8);
    puVar7 = puVar8;
    puVar9 = puVar4;
    param_5 = &uStack_2f0;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar7 = puVar8;
      puVar9 = puVar4;
      param_5 = &uStack_2f0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar3 = puVar1;
  __Unwind_Resume();
  pcStack_2f8 = FUN_108f3717c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puStack_330 = unaff_x24;
  puStack_328 = param_4;
  puStack_320 = param_5;
  plStack_318 = plVar11;
  puStack_310 = puVar1;
  puStack_308 = puVar2;
  pppuStack_300 = &pppuStack_280;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_368,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar4 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_350,puVar4);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    func_0x000107c27984(&uStack_388,auStack_368,&lStack_338,2);
    puVar6 = &UNK_110acc578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc578,&uStack_388,puVar9);
    puStack_370 = &uStack_388;
    func_0x000107c278ac(&puStack_370);
    lVar10 = 0;
    do {
      if ((&cStack_339)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_351 < '\0') {
    __ZdlPv(auStack_368[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  __Unwind_Resume();
  puStack_3b8 = (undefined1 *)&uStack_3d0;
  pcStack_398 = FUN_108f373ac;
  if (puVar1 != (undefined *)0x0) {
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    puStack_3b0 = puVar7;
    puStack_3a8 = puVar5;
    pppuStack_3a0 = &pppuStack_300;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110acc5c8,&uStack_3d0,puVar6);
    func_0x000107c278ac(&puStack_3b8);
  }
  return;
}



/* Entry: 108f36ae0; end: 108f36d1f;  */

void FUN_108f36ae0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 *puStack_338;
  undefined8 *puStack_330;
  undefined *puStack_328;
  undefined8 ***pppuStack_320;
  code *pcStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  puVar12 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_c8,puVar1);
    puVar1 = &UNK_10f534b63;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_b0,puVar1);
    puVar1 = &UNK_10f534b63;
    if ((int)param_4 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_98,puVar1);
    unaff_x24 = auStack_80;
    puVar1 = &UNK_10f534b63;
    if ((int)param_5 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(unaff_x24,puVar1);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    func_0x000107c27984(&uStack_e8,auStack_c8,&lStack_68,4);
    puVar1 = &UNK_110acc438;
    param_5 = &uStack_e8;
    puVar5 = &uStack_e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc438,puVar5,param_6);
    puStack_d0 = param_5;
    func_0x000107c278ac(&puStack_d0);
    lVar10 = 0;
    puVar12 = auStack_c8;
    puVar9 = param_6;
    do {
      if ((&cStack_69)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x60);
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar8 = &uStack_170;
  pcStack_f8 = FUN_108f36d20;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar5;
  puStack_130 = unaff_x24;
  puStack_128 = param_4;
  puStack_120 = param_5;
  puStack_118 = puVar12;
  puStack_110 = puVar2;
  puStack_108 = param_2;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    param_4 = auStack_150;
    func_0x000107c278b8(auStack_150,puVar2);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x000107c27984(&uStack_170,auStack_150,&lStack_138,1);
    puVar6 = &UNK_110acc488;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc488,&uStack_170,puVar5);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x000107c278ac(&puStack_158);
    puVar7 = puVar8;
    puVar9 = puVar5;
    param_5 = &uStack_170;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar7 = puVar8;
      puVar9 = puVar5;
      param_5 = &uStack_170;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar8 = &uStack_1f0;
  pcStack_178 = FUN_108f36e94;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar5 = puVar7;
  puStack_1b0 = unaff_x24;
  puStack_1a8 = param_4;
  puStack_1a0 = param_5;
  plStack_198 = plVar11;
  puStack_190 = puVar2;
  puStack_188 = puVar1;
  ppuStack_180 = &puStack_100;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    param_4 = auStack_1d0;
    func_0x000107c278b8(auStack_1d0,puVar1);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x000107c27984(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    puVar3 = &UNK_110acc4d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc4d8,&uStack_1f0,puVar7);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x000107c278ac(&puStack_1d8);
    puVar5 = puVar8;
    puVar9 = puVar7;
    param_5 = &uStack_1f0;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar5 = puVar8;
      puVar9 = puVar7;
      param_5 = &uStack_1f0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_270;
  pcStack_1f8 = FUN_108f37008;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar3;
  puVar7 = puVar5;
  puStack_230 = unaff_x24;
  puStack_228 = param_4;
  puStack_220 = param_5;
  plStack_218 = plVar11;
  puStack_210 = puVar1;
  puStack_208 = puVar6;
  pppuStack_200 = &ppuStack_180;
  _objc_retain(puVar3);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    param_4 = auStack_250;
    func_0x000107c278b8(auStack_250,puVar1);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x000107c27984(&uStack_270,auStack_250,&lStack_238,1);
    puVar2 = &UNK_110acc528;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc528,&uStack_270,puVar5);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x000107c278ac(&puStack_258);
    puVar7 = puVar8;
    puVar9 = puVar5;
    param_5 = &uStack_270;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar7 = puVar8;
      puVar9 = puVar5;
      param_5 = &uStack_270;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_278 = FUN_108f3717c;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = param_4;
  puStack_2a0 = param_5;
  plStack_298 = plVar11;
  puStack_290 = puVar1;
  puStack_288 = puVar3;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_2e8,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar5 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_2d0,puVar5);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    func_0x000107c27984(&uStack_308,auStack_2e8,&lStack_2b8,2);
    puVar6 = &UNK_110acc578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc578,&uStack_308,puVar9);
    puStack_2f0 = &uStack_308;
    func_0x000107c278ac(&puStack_2f0);
    lVar10 = 0;
    do {
      if ((&cStack_2b9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar7);
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_2d1 < '\0') {
    __ZdlPv(auStack_2e8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  __Unwind_Resume();
  puStack_338 = (undefined1 *)&uStack_350;
  pcStack_318 = FUN_108f373ac;
  if (puVar1 != (undefined *)0x0) {
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    puStack_330 = puVar7;
    puStack_328 = puVar2;
    pppuStack_320 = &pppuStack_280;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110acc5c8,&uStack_350,puVar6);
    func_0x000107c278ac(&puStack_338);
  }
  return;
}



/* Entry: 108f36d20; end: 108f36e93;  */

void FUN_108f36d20(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc488;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc488,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  pcStack_88 = FUN_108f36e94;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110acc4d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc4d8,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_180;
  pcStack_108 = FUN_108f37008;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar2 = puVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110acc528;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc528,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar2 = (undefined *)puVar5;
    param_4 = puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar2 = (undefined *)puVar5;
      param_4 = puVar6;
    }
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  pcStack_188 = FUN_108f3717c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1f8,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar4 = &UNK_110acc578;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc578,&uStack_218,param_4);
    puStack_200 = &uStack_218;
    func_0x000107c278ac(&puStack_200);
    lVar8 = 0;
    do {
      if ((&cStack_1c9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_248 = (undefined1 *)&uStack_260;
  pcStack_228 = FUN_108f373ac;
  if (puVar3 != (undefined *)0x0) {
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    puStack_240 = puVar2;
    puStack_238 = puVar1;
    pppuStack_230 = &pppuStack_190;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110acc5c8,&uStack_260,puVar4);
    func_0x000107c278ac(&puStack_248);
  }
  return;
}



/* Entry: 108f36e94; end: 108f37007;  */

void FUN_108f36e94(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc4d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc4d8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  pcStack_88 = FUN_108f37008;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110acc528;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc528,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_108f3717c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_178,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_110acc578;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acc578,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x000107c278ac(&puStack_180);
    lVar8 = 0;
    do {
      if ((&cStack_149)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar6);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_108f373ac;
  if (puVar3 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar6;
    puStack_1b8 = puVar4;
    pppuStack_1b0 = &ppuStack_110;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110acc5c8,&uStack_1e0,puVar1);
    func_0x000107c278ac(&puStack_1c8);
  }
  return;
}



/* Entry: 108f37008; end: 108f3717b;  */

void FUN_108f37008(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc528;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110acc528,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108f3717c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar3 = &UNK_110acc578;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110acc578,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x000107c278ac(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_108f373ac;
  if (puVar2 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar4;
    puStack_138 = puVar1;
    ppuStack_130 = &puStack_90;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110acc5c8,&uStack_160,puVar3);
    func_0x000107c278ac(&puStack_148);
  }
  return;
}



/* Entry: 108f3717c; end: 108f373ab;  */

void FUN_108f3717c(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110acc578;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110acc578,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_108f373ac;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110acc5c8,&uStack_e0,puVar1);
    func_0x000107c278ac(&puStack_c8);
  }
  return;
}



/* Entry: 108f373ac; end: 108f37423;  */

void FUN_108f373ac(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc5c8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f37424; end: 108f376e3;  */

/* WARNING: Removing unreachable block (ram,0x000108f376ac) */

void FUN_108f37424(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110acc618;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110acc618,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    pcStack_c8 = FUN_108f376e4;
    if (puVar2 != (undefined *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_e0 = param_3;
      puStack_d8 = param_2;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_110acc668,&uStack_100,puVar1);
      func_0x000107c278ac(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 108f376e4; end: 108f3775b;  */

void FUN_108f376e4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc668,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f3775c; end: 108f377d3;  */

void FUN_108f3775c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc6b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f377d4; end: 108f3784b;  */

void FUN_108f377d4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc708,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f3784c; end: 108f378c3;  */

void FUN_108f3784c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc758,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f378c4; end: 108f3793b;  */

void FUN_108f378c4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc7a8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f3793c; end: 108f379b3;  */

void FUN_108f3793c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc7f8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f379b4; end: 108f37a2b;  */

void FUN_108f379b4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc848,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f37a2c; end: 108f37aa3;  */

void FUN_108f37a2c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc898,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f37aa4; end: 108f37c17;  */

void FUN_108f37aa4(long param_1,long *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 *unaff_x22;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  long *plStack_190;
  long **pplStack_188;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  long alStack_170 [3];
  long *plStack_158;
  long **applStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 *puStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      plVar2 = (long *)&UNK_10f53482e;
    }
    else {
      plVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,plVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    plVar2 = (long *)&UNK_110acc8e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc8e8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = (undefined1 *)puVar9;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = (undefined1 *)puVar9;
      unaff_x22 = &uStack_80;
    }
  }
  plVar11 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_100;
  pcStack_88 = FUN_108f37c18;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar2;
  puVar10 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar2);
  if (plVar11 != (long *)0x0) {
    plVar3 = (long *)plVar11[1];
    plVar4 = (long *)&UNK_110acc938;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar4 = (long *)&UNK_10f53482e;
      }
      else {
        plVar4 = plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      func_0x000107c278b8(auStack_e0,plVar4);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
      plVar4 = (long *)&UNK_110acc938;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc938,&uStack_100,(long)puVar8 * 10);
      puStack_e8 = (undefined1 *)&uStack_100;
      func_0x000107c278ac(&puStack_e8);
      puVar10 = (undefined1 *)puVar9;
      unaff_x22 = &uStack_100;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        puVar10 = (undefined1 *)puVar9;
        unaff_x22 = &uStack_100;
      }
    }
  }
  plVar3 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar5 = plVar3;
  __Unwind_Resume();
  pcStack_108 = FUN_108f37db0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = (long **)0x0;
  puStack_130 = (undefined1 *)unaff_x22;
  plStack_128 = plVar11;
  plStack_120 = plVar3;
  plStack_118 = plVar2;
  ppuStack_110 = &puStack_90;
  if (plVar5 != (long *)0x0) {
    plVar3 = (long *)plVar5[1];
    puVar1 = &UNK_10f534b63;
    if ((int)plVar4 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(applStack_150,puVar1);
    alStack_170[0] = 0;
    alStack_170[1] = 0;
    alStack_170[2] = 0;
    func_0x000107c27984(alStack_170,applStack_150,&lStack_138,1);
    plVar4 = (long *)&UNK_110acc988;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110acc988,alStack_170,puVar10);
    pplVar6 = &plStack_158;
    plStack_158 = alStack_170;
    func_0x000107c278ac();
    plVar11 = alStack_170;
    if (cStack_139 < '\0') {
      pplVar6 = applStack_150[0];
      __ZdlPv();
      plVar11 = alStack_170;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  plStack_158 = plVar11;
  func_0x000107c278ac(&plStack_158);
  if (cStack_139 < '\0') {
    __ZdlPv(applStack_150[0]);
  }
  pplVar7 = pplVar6;
  __Unwind_Resume();
  puStack_198 = (undefined1 *)&uStack_1b0;
  pcStack_178 = FUN_108f37ec8;
  if (pplVar7 != (long **)0x0) {
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    plStack_190 = plVar3;
    pplStack_188 = pplVar6;
    ppuStack_180 = &ppuStack_110;
    (**(code **)(*pplVar7[1] + 0x18))(pplVar7[1],&UNK_110acc9d8,&uStack_1b0,plVar4);
    func_0x000107c278ac(&puStack_198);
  }
  return;
}



/* Entry: 108f37c18; end: 108f37daf;  */

void FUN_108f37c18(long *param_1,long *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x22;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  long **pplStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar3 = (long *)&UNK_110acc938;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      param_1 = (long *)param_1[1];
      _objc_retain(param_2);
      if (param_2 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f53482e;
      }
      else {
        plVar3 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_60,plVar3);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
      plVar3 = (long *)&UNK_110acc938;
      (**(code **)(*param_1 + 0x18))(param_1,&UNK_110acc938,&uStack_80,(long)param_3 * 10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x000107c278ac(&puStack_68);
      puVar7 = (undefined1 *)puVar8;
      unaff_x22 = &uStack_80;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar7 = (undefined1 *)puVar8;
        unaff_x22 = &uStack_80;
      }
    }
  }
  plVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  plVar4 = plVar2;
  __Unwind_Resume();
  pcStack_88 = FUN_108f37db0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = param_1;
  plStack_a0 = plVar2;
  plStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)plVar4[1];
    puVar1 = &UNK_10f534b63;
    if ((int)plVar3 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(applStack_d0,puVar1);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x000107c27984(alStack_f0,applStack_d0,&lStack_b8,1);
    plVar3 = (long *)&UNK_110acc988;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110acc988,alStack_f0,puVar7);
    pplVar5 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x000107c278ac();
    param_1 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar5 = applStack_d0[0];
      __ZdlPv();
      param_1 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = param_1;
  func_0x000107c278ac(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  pplVar6 = pplVar5;
  __Unwind_Resume();
  puStack_118 = (undefined1 *)&uStack_130;
  pcStack_f8 = FUN_108f37ec8;
  if (pplVar6 != (long **)0x0) {
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    plStack_110 = plVar2;
    pplStack_108 = pplVar5;
    ppuStack_100 = &puStack_90;
    (**(code **)(*pplVar6[1] + 0x18))(pplVar6[1],&UNK_110acc9d8,&uStack_130,plVar3);
    func_0x000107c278ac(&puStack_118);
  }
  return;
}



/* Entry: 108f37db0; end: 108f37ec7;  */

void FUN_108f37db0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f534b63;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f534b68;
    }
    func_0x000107c278b8(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107c27984(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_110acc988;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110acc988,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x000107c278ac();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x000107c278ac(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_108f37ec8;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_110acc9d8,&uStack_b0,param_2);
    func_0x000107c278ac(&puStack_98);
  }
  return;
}



/* Entry: 108f37ec8; end: 108f37f3f;  */

void FUN_108f37ec8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110acc9d8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f37f40; end: 108f3816f;  */

void FUN_108f37f40(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110acca28;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acca28,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_108f38170;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110acca78;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110acca78,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_108f382e4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110accac8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110accac8,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_108f38458;
  if (puVar3 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110accb18,&uStack_1e0,puVar4);
    func_0x000107c278ac(&puStack_1c8);
  }
  return;
}



/* Entry: 108f38170; end: 108f382e3;  */

void FUN_108f38170(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acca78;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110acca78,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_108f382e4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110accac8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110accac8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_108f38458;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110accb18,&uStack_140,puVar4);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 108f382e4; end: 108f38457;  */

void FUN_108f382e4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110accac8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110accac8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_108f38458;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110accb18,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 108f38458; end: 108f384cf;  */

void FUN_108f38458(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110accb18,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f384d0; end: 108f38547;  */

void FUN_108f384d0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110accb68,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108f38548; end: 108f38847;  */

void FUN_108f38548(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_1);
  _objc_alloc();
  _objc_retain(param_3);
  uVar2 = param_1;
  FUN_108f42a50();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b5650;
  _objc_alloc();
  func_0x00010c043e20();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  uVar5 = uVar2;
  func_0x000108f43028();
  if (((uVar5 & 1) == 0) && (uVar5 = uVar2, func_0x000108f430b0(), (uVar5 & 1) == 0)) {
    uVar5 = uVar2;
    func_0x000108f43138();
    if (((param_2 & 1) != 0) || ((int)uVar5 == 0)) goto LAB_108f387ac;
  }
  else if ((param_2 & 1) != 0) goto LAB_108f387ac;
  uVar5 = uVar2;
  func_0x000108f43028();
  if (((uVar5 & 1) == 0) && (uVar5 = uVar2, func_0x000108f430b0(), (uVar5 & 1) == 0)) {
    uVar5 = uVar2;
    func_0x000108f43138();
    puVar11 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    if ((int)uVar5 != 0) goto LAB_108f38690;
  }
  else {
LAB_108f38690:
    puVar10 = PTR_PTR_1126c51c8;
    func_0x00010c0d4dc0(PTR_PTR_1126c51c8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c51c8;
    func_0x00010c0d4dc0(PTR_PTR_1126c51c8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar10;
  FUN_108f42a50(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b5650;
  _objc_alloc(PTR_PTR_1126b5650);
  func_0x00010c043e20();
  func_0x00010befa120(puVar4);
  puVar8 = puVar11;
  FUN_108f42a50(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b5650;
  _objc_alloc(PTR_PTR_1126b5650);
  func_0x00010c043e20();
  func_0x00010befa120(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
LAB_108f387ac:
  puVar10 = PTR_PTR_1126b5658;
  _objc_alloc(PTR_PTR_1126b5658);
  puVar11 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c043e40(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  func_0x00010c01b460(puVar1);
  _objc_release(puVar10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f38848; end: 108f389a3;  */

void FUN_108f38848(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  pcStack_48 = FUN_108f389a4;
  uStack_40 = 0x108f389b4;
  uStack_38 = 0;
  _objc_retain(param_1);
  func_0x00010c0bee40(param_1);
  if (puStack_58[5] == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar1 = PTR_PTR_1126c24e0;
    _objc_alloc(PTR_PTR_1126c24e0);
    func_0x00010c043de0();
    func_0x00010c01b460(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f389a4; end: 108f389bb;  */

void FUN_108f389a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f389bc; end: 108f389fb;  */

void FUN_108f389bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108f42a50();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f389fc; end: 108f38d7f;  */

void FUN_108f389fc(undefined8 param_1,int param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(in_x6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108f38d80;
  uStack_88 = 0x108f38d90;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_108f38d80;
  uStack_b8 = 0x108f38d90;
  uStack_b0 = 0;
  if ((param_2 != 0) && (param_3 == (undefined *)0x0)) {
    param_3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bee40(param_1);
  puVar1 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(in_x6);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(in_x6);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f38d80; end: 108f38d97;  */

void FUN_108f38d80(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f38d98; end: 108f3935b;  */

void FUN_108f38d98(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if ((param_4 != 2) || (*(char *)(param_1 + 0x50) == '\0')) {
    if ((param_7 == 0) && (*(char *)(param_1 + 0x50) != '\0')) {
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 2) {
        puVar7 = (undefined *)0x12c;
LAB_108f39258:
        FUN_108f3935c(puVar7,0xcd);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar4 == 1) {
          puVar7 = (undefined *)0x12b;
          goto LAB_108f39258;
        }
        if (lVar4 == 0) {
          puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar7;
          func_0x00010bfe9720();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar1;
          func_0x00010c14d100(puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(puVar2);
        }
        else {
          puVar7 = (undefined *)0x0;
        }
      }
      puVar1 = PTR_PTR_1126b4860;
      func_0x00010bfe94a0(PTR_PTR_1126b4860);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b45f8;
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined **)(lVar4 + 0x28) = puVar2;
      _objc_release(uVar5);
LAB_108f392e4:
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    else {
      if ((param_7 == 0 && param_4 == 0) &&
         (puVar7 = *(undefined **)(param_1 + 0x40), puVar7 != (undefined *)0x0)) {
        func_0x000108f393e8(puVar7,*(undefined8 *)(param_1 + 0x48));
        _objc_retainAutoreleasedReturnValue();
LAB_108f391f8:
        puVar1 = PTR_PTR_1126b4860;
        func_0x00010bfe94a0(PTR_PTR_1126b4860);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b45f8;
        func_0x00010bfe9200();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        puVar6 = *(undefined **)(lVar4 + 0x28);
        *(undefined **)(lVar4 + 0x28) = puVar2;
        goto LAB_108f392e4;
      }
      lVar4 = param_5;
      func_0x00010c08fa60();
      puVar7 = PTR_PTR_1126b19f8;
      if ((lVar4 == 0) && (*(char *)(param_1 + 0x51) == '\x01')) {
        puVar7 = (undefined *)0x1d0;
        FUN_108f3935c(0x1d0,*(undefined8 *)(param_1 + 0x48));
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108f391f8;
      }
      _objc_retain(param_2);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010c15cea0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_2;
      FUN_108feb5c8(param_2,0,0,param_5,param_6,0,0,puVar1,0x1b,1,0,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(param_5);
      _objc_release(param_6);
      _objc_release(puVar1);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b4600;
      _objc_alloc();
      func_0x00010bff7e80();
      _objc_release(uVar5);
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined **)(lVar4 + 0x28) = puVar7;
      _objc_release(uVar5);
      if (*(char *)(param_1 + 0x52) != '\x01') goto LAB_108f392f8;
      puVar1 = PTR_PTR_1126b45f8;
      func_0x00010c246860(0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      puVar7 = *(undefined **)(lVar4 + 0x28);
      *(undefined **)(lVar4 + 0x28) = puVar1;
    }
    _objc_release(puVar7);
    goto LAB_108f392f8;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 2) {
    puVar7 = (undefined *)0x80;
LAB_108f3911c:
    FUN_108f3935c(puVar7,0xcd);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar4 == 1) {
      puVar7 = (undefined *)0x7f;
      goto LAB_108f3911c;
    }
    if (lVar4 == 0) {
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c14d100(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar2);
    }
    else {
      puVar7 = (undefined *)0x0;
    }
  }
  puVar2 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b45f8;
  puVar8 = *(undefined **)(param_1 + 0x20);
  puVar6 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar5);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(puVar7);
LAB_108f392f8:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4058000000000000,0x4058000000000000,0x403c000000000000,0x403c000000000000,
                      0x403c000000000000,0x403c000000000000,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108f3935c; end: 108f394ff;  */

void FUN_108f3935c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4058000000000000,0x4058000000000000,0x403c000000000000,0x403c000000000000,
                      0x403c000000000000,0x403c000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f39500; end: 108f396af;  */

void FUN_108f39500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar6 = *(undefined **)(param_1 + 0x20);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
  }
  lVar4 = *(long *)(param_1 + 0x30);
  puVar3 = puVar6;
  if (lVar4 != 2) {
    if (lVar4 == 1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf414e0(0x3fb999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar2);
      uVar1 = 0x195;
      FUN_108f3935c(0x195,0x94);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108f39614;
    }
    if (lVar4 != 0) {
      uVar1 = 0;
      goto LAB_108f39614;
    }
  }
  uVar1 = 0x196;
  FUN_108f396b0(0x196);
  _objc_retainAutoreleasedReturnValue();
LAB_108f39614:
  puVar6 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b45f8;
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f396b0; end: 108f3973b;  */

void FUN_108f396b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4058000000000000,0x4058000000000000,0x4038000000000000,0x4038000000000000,
                      0x4038000000000000,0x4038000000000000,puVar2,param_2,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f3973c; end: 108f39a0b;  */

void FUN_108f3973c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long in_stack_00000010;
  undefined *puStack_60;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(in_stack_00000010);
  lVar11 = in_stack_00000010;
  func_0x00010c070540();
  if (((int)lVar11 == 0) || (puVar1 = *(undefined **)(param_1 + 0x30), puVar1 == (undefined *)0x0))
  {
    lVar11 = in_stack_00000010;
    func_0x00010c070540();
    if ((int)lVar11 != 0) {
      lVar11 = in_stack_00000010;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        lVar2 = in_stack_00000010;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        if (lVar3 != 0) {
          lVar3 = in_stack_00000010;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c08fa60();
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar11);
          puVar1 = PTR_PTR_1126b4858;
          if (lVar4 != 0) {
            puStack_60 = PTR_PTR_1126b19f8;
            func_0x00010bfe9de0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            param_7 = 1;
            param_8 = 0;
            func_0x00010bf1c100();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puStack_60);
            puVar5 = PTR_PTR_1126b4860;
            lVar11 = in_stack_00000010;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = in_stack_00000010;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = in_stack_00000010;
            func_0x00010bf1c0a0();
            _objc_retainAutoreleasedReturnValue();
            param_5 = lVar3;
            param_6 = puVar1;
            func_0x00010bf1c1e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            _objc_release(lVar2);
            _objc_release(lVar11);
            goto LAB_108f39950;
          }
          goto LAB_108f39968;
        }
        _objc_release(lVar2);
      }
      _objc_release(lVar11);
    }
LAB_108f39968:
    puVar5 = PTR_PTR_1126b4860;
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_2 = *(undefined8 *)(param_1 + 0x38);
    func_0x000108f393e8();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b4860;
    func_0x00010bfe94a0();
    _objc_retainAutoreleasedReturnValue();
LAB_108f39950:
    _objc_release(puVar1);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b45f8;
  puVar6 = puVar5;
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar1;
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(in_stack_00000010);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(uVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(puStack_60);
  puVar1 = *(undefined **)(param_4 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
  puVar5 = puVar1;
  if ((long)puVar6 < 4) {
    if (puVar6 + -2 < (undefined *)0x2) {
      lVar11 = *(long *)(param_4 + 0x30);
      if (lVar11 != 2) {
        if (lVar11 == 1) {
          puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf414e0(0x3fb999999999999a);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(puVar6);
          uVar9 = 0x1d1;
LAB_108f39cd8:
          uVar10 = 0x8c;
LAB_108f39cdc:
          func_0x000108f3935c(uVar9,uVar10);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108f39cf0;
        }
        if (lVar11 != 0) goto LAB_108f39bec;
      }
      uVar9 = 0x1d4;
    }
    else {
      if (puVar6 != (undefined *)0x1) goto LAB_108f39d54;
LAB_108f39b14:
      lVar11 = *(long *)(param_4 + 0x30);
      if (lVar11 != 2) {
        if (lVar11 == 1) {
          puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf414e0(0x3fb999999999999a);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(puVar6);
          uVar9 = 0x1a9;
          uVar10 = 0x88;
          goto LAB_108f39cdc;
        }
        if (lVar11 != 0) {
LAB_108f39bec:
          uVar9 = 0;
          goto LAB_108f39cf0;
        }
      }
      uVar9 = 0x1aa;
    }
LAB_108f39b58:
    FUN_108f396b0(uVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar6 == (undefined *)0x4) {
      lVar11 = *(long *)(param_4 + 0x30);
      if (lVar11 != 2) {
        if (lVar11 == 1) {
          puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bf414e0(0x3fb999999999999a);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(puVar6);
          uVar9 = 0x131;
          goto LAB_108f39cd8;
        }
        if (lVar11 != 0) goto LAB_108f39bec;
      }
      uVar9 = 0x132;
      goto LAB_108f39b58;
    }
    if (puVar6 != (undefined *)0x6) {
      if (puVar6 != (undefined *)0x5) goto LAB_108f39d54;
      goto LAB_108f39b14;
    }
    lVar11 = *(long *)(param_4 + 0x30);
    uVar10 = 0xcd;
    if ((lVar11 != 0) && (lVar11 != 2)) {
      if (lVar11 != 1) goto LAB_108f39bec;
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,0xcd,0x8d);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf414e0(0x3fb999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar6);
      uVar10 = 0x8c;
    }
    uVar9 = 0x1d1;
    func_0x000108f3935c(0x1d1,uVar10);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108f39cf0:
  puVar1 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b45f8;
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_4 + 0x28) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined **)(lVar11 + 0x28) = puVar6;
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar9);
  puVar1 = puVar5;
LAB_108f39d54:
  _objc_release(puVar1);
  _objc_release(puStack_60);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f39a0c; end: 108f3a17b;  */

void FUN_108f39a0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar6 = *(undefined **)(param_1 + 0x20);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
  }
  puVar3 = puVar6;
  if (param_3 < 4) {
    if (param_3 - 2U < 2) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 2) {
        if (lVar4 == 1) {
          puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf414e0(0x3fb999999999999a);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar2);
          uVar1 = 0x1d1;
LAB_108f39cd8:
          uVar5 = 0x8c;
LAB_108f39cdc:
          FUN_108f3935c(uVar1,uVar5);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108f39cf0;
        }
        if (lVar4 != 0) goto LAB_108f39bec;
      }
      uVar1 = 0x1d4;
    }
    else {
      if (param_3 != 1) goto LAB_108f39d54;
LAB_108f39b14:
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 2) {
        if (lVar4 == 1) {
          puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf414e0(0x3fb999999999999a);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar2);
          uVar1 = 0x1a9;
          uVar5 = 0x88;
          goto LAB_108f39cdc;
        }
        if (lVar4 != 0) {
LAB_108f39bec:
          uVar1 = 0;
          goto LAB_108f39cf0;
        }
      }
      uVar1 = 0x1aa;
    }
LAB_108f39b58:
    FUN_108f396b0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 4) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 2) {
        if (lVar4 == 1) {
          puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf414e0(0x3fb999999999999a);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar2);
          uVar1 = 0x131;
          goto LAB_108f39cd8;
        }
        if (lVar4 != 0) goto LAB_108f39bec;
      }
      uVar1 = 0x132;
      goto LAB_108f39b58;
    }
    if (param_3 != 6) {
      if (param_3 != 5) goto LAB_108f39d54;
      goto LAB_108f39b14;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    uVar5 = 0xcd;
    if ((lVar4 != 0) && (lVar4 != 2)) {
      if (lVar4 != 1) goto LAB_108f39bec;
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,0xcd,0x8d);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf414e0(0x3fb999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar2);
      uVar5 = 0x8c;
    }
    uVar1 = 0x1d1;
    FUN_108f3935c(0x1d1,uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108f39cf0:
  puVar6 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b45f8;
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(uVar1);
  puVar6 = puVar3;
LAB_108f39d54:
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f3a17c; end: 108f3a227;  */

void FUN_108f3a17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_108f389fc(param_3,*(undefined1 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0,0,
                *(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x51));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf14860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf1ac80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f3a228; end: 108f3a4a7;  */

void FUN_108f3a228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar1 = (undefined *)0x5;
    FUN_108f470a4(5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b4860;
    func_0x00010bfe94a0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b45f8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108f3a434;
  }
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 2) {
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf414e0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar6 = (undefined *)0x1aa;
    puVar1 = puVar2;
LAB_108f3a3e8:
    FUN_108f3935c(puVar6,0x88);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar5 == 1) {
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010bf414e0(0x3fb999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar6 = (undefined *)0x1a9;
      puVar1 = puVar2;
      goto LAB_108f3a3e8;
    }
    if (lVar5 == 0) {
      puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = (undefined *)0x0;
    }
  }
  puVar3 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b45f8;
LAB_108f3a434:
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f3a4a8; end: 108f3a8b3;  */

void FUN_108f3a4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_108f38d80;
  uStack_88 = 0x108f38d90;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_108f38d80;
  uStack_b8 = 0x108f38d90;
  uStack_b0 = 0;
  uVar2 = param_1;
  FUN_108f389fc(param_1,param_2,param_3,param_4,param_5,0,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf14860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_108f3a8b8;
  puStack_e8 = &UNK_1108add70;
  puStack_108 = &uStack_d8;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_108f3a8f0;
  puStack_118 = &UNK_110acd130;
  puStack_110 = &uStack_a8;
  puStack_e0 = puStack_108;
  func_0x00010c0bcc40();
  _objc_release(uVar4);
  if (puStack_a0[5] == 0) {
    uVar4 = uVar2;
    func_0x00010bf1ac80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar5;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_108f3a968;
    puStack_140 = &UNK_110987be8;
    puStack_138 = &uStack_a8;
    func_0x00010c0be480();
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  puVar1 = puStack_d0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_108f38d80;
  uStack_168 = 0x108f38d90;
  uStack_160 = 0;
  lVar7 = puStack_d0[5];
  if (lVar7 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_d0[5];
    puStack_d0[5] = puVar5;
  }
  else {
    _objc_retain(lVar7);
    uVar4 = puVar1[5];
    puVar1[5] = lVar7;
  }
  _objc_release(uVar4);
  func_0x00010c0bf3e0(puStack_a0[5]);
  puVar5 = PTR_PTR_1126dc9a0;
  lVar7 = puStack_180[5];
  if (lVar7 == 0) {
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14cfc0(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe94c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_180[5];
    puStack_180[5] = puVar5;
    _objc_release(uVar4);
    _objc_release(puVar6);
    lVar7 = puStack_180[5];
  }
  _objc_retain(lVar7);
  __Block_object_dispose(&uStack_188,8);
  _objc_release(uStack_160);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 108f3a8b4; end: 108f3a8b7;  */

void FUN_108f3a8b4(void)

{
  return;
}



/* Entry: 108f3a8b8; end: 108f3a8ef;  */

void FUN_108f3a8b8(long param_1,undefined8 param_2)

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



/* Entry: 108f3a8f0; end: 108f3a963;  */

void FUN_108f3a8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f3a964; end: 108f3a967;  */

void FUN_108f3a964(void)

{
  return;
}



/* Entry: 108f3a968; end: 108f3a99f;  */

void FUN_108f3a968(long param_1,undefined8 param_2)

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



/* Entry: 108f3a9a0; end: 108f3a9a7;  */

void FUN_108f3a9a0(void)

{
  return;
}



/* Entry: 108f3a9a8; end: 108f3aa4b;  */

void FUN_108f3a9a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dc9a0;
  func_0x00010c28fb60(PTR_PTR_1126dc9a0,param_2,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f3aa4c; end: 108f3aa4f;  */

void FUN_108f3aa4c(void)

{
  return;
}



/* Entry: 108f3aa50; end: 108f3aaa3;  */

void FUN_108f3aa50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dc9a0;
  func_0x00010bfe94c0(PTR_PTR_1126dc9a0,param_2,param_2,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f3aaa4; end: 108f3aaa7;  */

void FUN_108f3aaa4(void)

{
  return;
}



/* Entry: 108f3aaa8; end: 108f3abc3;  */

void FUN_108f3aaa8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_108f3abc4(param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b53e0;
  _objc_alloc(PTR_PTR_1126b53e0);
  uVar3 = param_1;
  FUN_108f3ad64(param_1,0,1);
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 & 1) == 0) {
    func_0x00010c053c00(puVar2);
  }
  else {
    uVar4 = uVar3;
    func_0x000108f58114();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053c00(puVar2);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b53e8;
  FUN_108f3af1c(param_1);
  func_0x00010bf16660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



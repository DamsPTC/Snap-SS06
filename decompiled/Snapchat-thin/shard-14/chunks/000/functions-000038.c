/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af44b48; end: 10af44b4f; -[SCCreateCustomStoryLogParameters customStoryType] */

undefined8 FUN_10af44b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af44b50; end: 10af44b57; -[SCCreateCustomStoryLogParameters creationSourceType] */

undefined8 FUN_10af44b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af44b58; end: 10af44b5f; -[SCCreateCustomStoryLogParameters numOfSnapchattersSelected] */

undefined8 FUN_10af44b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af44b60; end: 10af44b67; -[SCCreateCustomStoryLogParameters numOfGroupsSelected] */

undefined8 FUN_10af44b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af44b68; end: 10af44b6f; -[SCCreateCustomStoryLogParameters sourcePageSessionId] */

undefined8 FUN_10af44b68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af44b70; end: 10af44b9f; -[SCCreateCustomStoryLogParameters .cxx_destruct] */

void FUN_10af44b70(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10af44ba0; end: 10af44c73; -[SCStoriesTopicPageItemLogParameters initWithItemId:itemPosition:sectionType:sectionPosition:pageUpdateId:originalRequestId:] */

undefined1 *
FUN_10af44ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112702a98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af44c74; end: 10af44c97; -[SCStoriesTopicPageItemLogParameters copyWithZone:] */

undefined8 FUN_10af44c74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af44c98; end: 10af44d1b; -[SCStoriesTopicPageItemLogParameters hash] */

undefined8 * FUN_10af44c98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af44ddc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af44de8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])) && (puVar3[4] == param_3[4])))) &&
       (puVar3[5] == param_3[5])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[6];
        if (puVar6 != (undefined8 *)param_3[6]) {
          func_0x00010c071ae0();
          goto LAB_10af44de8;
        }
        goto LAB_10af44ddc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af44de8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af44d1c; end: 10af44e03; -[SCStoriesTopicPageItemLogParameters isEqual:] */

long FUN_10af44d1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af44ddc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af44de8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) &&
       (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10af44de8;
        }
        goto LAB_10af44ddc;
      }
    }
    lVar3 = 0;
  }
LAB_10af44de8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af44e04; end: 10af44e0b; -[SCStoriesTopicPageItemLogParameters itemId] */

undefined8 FUN_10af44e04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af44e0c; end: 10af44e13; -[SCStoriesTopicPageItemLogParameters itemPosition] */

undefined8 FUN_10af44e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af44e14; end: 10af44e1b; -[SCStoriesTopicPageItemLogParameters sectionType] */

undefined8 FUN_10af44e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af44e1c; end: 10af44e23; -[SCStoriesTopicPageItemLogParameters sectionPosition] */

undefined8 FUN_10af44e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af44e24; end: 10af44e2b; -[SCStoriesTopicPageItemLogParameters pageUpdateId] */

undefined8 FUN_10af44e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af44e2c; end: 10af44e33; -[SCStoriesTopicPageItemLogParameters originalRequestId] */

undefined8 FUN_10af44e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af44e34; end: 10af44e63; -[SCStoriesTopicPageItemLogParameters .cxx_destruct] */

void FUN_10af44e34(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af44e64; end: 10af44eff; -[SCSharedStoryInviteLogParameters initWithPublicationId:isCreator:numOfSnapchattersSelected:numOfGroupsSelected:] */

undefined1 *
FUN_10af44e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112702aa0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af44f00; end: 10af44f23; -[SCSharedStoryInviteLogParameters copyWithZone:] */

undefined8 FUN_10af44f00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af44f24; end: 10af44f97; -[SCSharedStoryInviteLogParameters hash] */

undefined8 * FUN_10af44f24(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = &uStack_48;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af4503c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(char *)(puVar2 + 1) != *(char *)(param_3 + 1) || (puVar2[3] != param_3[3])) ||
        (puVar2[4] != param_3[4])))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10af4503c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10af4503c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10af4503c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10af44f98; end: 10af45057; -[SCSharedStoryInviteLogParameters isEqual:] */

long FUN_10af44f98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af4503c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_10af4503c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af4503c;
    }
  }
  lVar3 = 1;
LAB_10af4503c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af45058; end: 10af4505f; -[SCSharedStoryInviteLogParameters publicationId] */

undefined8 FUN_10af45058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af45060; end: 10af45067; -[SCSharedStoryInviteLogParameters isCreator] */

undefined1 FUN_10af45060(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af45068; end: 10af4506f; -[SCSharedStoryInviteLogParameters numOfSnapchattersSelected] */

undefined8 FUN_10af45068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af45070; end: 10af45077; -[SCSharedStoryInviteLogParameters numOfGroupsSelected] */

undefined8 FUN_10af45070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af45078; end: 10af45083; -[SCSharedStoryInviteLogParameters .cxx_destruct] */

void FUN_10af45078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af45084; end: 10af4509f; +[SCSharedStoryInviteLogParametersBuilder sharedStoryInviteLogParameters] */

void FUN_10af45084(void)

{
  _objc_alloc_init(PTR_PTR_1126d8f68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af450a0; end: 10af451bb; +[SCSharedStoryInviteLogParametersBuilder sharedStoryInviteLogParametersFromExistingSharedStoryInviteLogParameters:] */

void FUN_10af450a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d8f68;
  _objc_retain(param_3);
  func_0x00010c22c1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b6440(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c06f8e0(param_3);
  puVar5 = puVar3;
  func_0x00010c2b0500(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0de320(param_3);
  puVar6 = puVar5;
  func_0x00010c2b4a00(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0de100(param_3);
  _objc_release(param_3);
  puVar7 = puVar6;
  func_0x00010c2b49e0(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10af451bc; end: 10af451f3; -[SCSharedStoryInviteLogParametersBuilder build] */

void FUN_10af451bc(void)

{
  _objc_alloc(PTR_PTR_1126dead0);
  func_0x00010c03bec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af451f4; end: 10af4522b; -[SCSharedStoryInviteLogParametersBuilder withPublicationId:] */

long FUN_10af451f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10af4522c; end: 10af45233; -[SCSharedStoryInviteLogParametersBuilder withIsCreator:] */

void FUN_10af4522c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10af45234; end: 10af4523b; -[SCSharedStoryInviteLogParametersBuilder withNumOfSnapchattersSelected:] */

void FUN_10af45234(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10af4523c; end: 10af45243; -[SCSharedStoryInviteLogParametersBuilder withNumOfGroupsSelected:] */

void FUN_10af4523c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10af45244; end: 10af4524f; -[SCSharedStoryInviteLogParametersBuilder .cxx_destruct] */

void FUN_10af45244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af45250; end: 10af45363; -[SCPublicStoryRepostLogParameters initWithRepostedUserId:mentionedUserIds:repostFriendlinkStatus:mentionedUsersFriendlinkStatus:trayMentionedUserIds:] */

undefined1 *
FUN_10af45250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112702aa8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af45364; end: 10af45387; -[SCPublicStoryRepostLogParameters copyWithZone:] */

undefined8 FUN_10af45364(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af45388; end: 10af4541f; -[SCPublicStoryRepostLogParameters hash] */

undefined8 * FUN_10af45388(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af454e0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af454ec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10af454ec;
            }
            goto LAB_10af454e0;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af454ec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10af45420; end: 10af45507; -[SCPublicStoryRepostLogParameters isEqual:] */

long FUN_10af45420(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af454e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af454ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10af454ec;
            }
            goto LAB_10af454e0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af454ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af45508; end: 10af4550f; -[SCPublicStoryRepostLogParameters repostedUserId] */

undefined8 FUN_10af45508(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af45510; end: 10af45517; -[SCPublicStoryRepostLogParameters mentionedUserIds] */

undefined8 FUN_10af45510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af45518; end: 10af4551f; -[SCPublicStoryRepostLogParameters repostFriendlinkStatus] */

undefined8 FUN_10af45518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af45520; end: 10af45527; -[SCPublicStoryRepostLogParameters mentionedUsersFriendlinkStatus] */

undefined8 FUN_10af45520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af45528; end: 10af4552f; -[SCPublicStoryRepostLogParameters trayMentionedUserIds] */

undefined8 FUN_10af45528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af45530; end: 10af45577; -[SCPublicStoryRepostLogParameters .cxx_destruct] */

void FUN_10af45530(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af45578; end: 10af456f3; -[SCStoriesBlizzardEventLoggingListenerAnnouncer description] */

void FUN_10af45578(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10af456f4(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10af456f4; end: 10af45753;  */

void FUN_10af456f4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10af45754; end: 10af459ff; -[SCStoriesBlizzardEventLoggingListenerAnnouncer addListener:] */

undefined8 FUN_10af45754(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c97fd8;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10af45a00(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10af45b40(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10af45908:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10af45928;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10af45a00(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10af45a00(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10af45b40(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10af45908;
    }
  }
  uVar9 = 1;
LAB_10af45928:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10af45a00; end: 10af45b3f;  */

void FUN_10af45a00(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10af45fa8();
LAB_10af45b3c:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10af45b3c;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10af45b40; end: 10af45b87;  */

void FUN_10af45b40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10af45b88; end: 10af45db7; -[SCStoriesBlizzardEventLoggingListenerAnnouncer removeListener:] */

void FUN_10af45b88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10af45d3c;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10af45bf0;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10af45b40(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10af45d3c;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10af45bf0:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c97fd8;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10af45a00(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10af45b40(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10af45d3c;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10af45d3c:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af45db8; end: 10af45e9b; -[SCStoriesBlizzardEventLoggingListenerAnnouncer didLogStorySnapPostEventWithLoggingParams:] */

void FUN_10af45db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_10af456f4(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf77ce0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af45e9c; end: 10af45f7f; -[SCStoriesBlizzardEventLoggingListenerAnnouncer didLogGeoFilterStorySnapPostEventWithLoggingParams:] */

void FUN_10af45e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_10af456f4(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf77ca0();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af45f80; end: 10af45fa7; -[SCStoriesBlizzardEventLoggingListenerAnnouncer .cxx_destruct] */

void FUN_10af45f80(long param_1)

{
  FUN_10af45fbc(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10af45fa8; end: 10af45fbb;  */

undefined * FUN_10af45fa8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10af45fbc; end: 10af46013;  */

long FUN_10af45fbc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10af46014; end: 10af46023;  */

void FUN_10af46014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c97fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10af46024; end: 10af46043;  */

void FUN_10af46024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c97fd8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af46044; end: 10af460ab;  */

void FUN_10af46044(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10af460ac; end: 10af460af;  */

void FUN_10af460ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af460b0; end: 10af460b7; -[SCShortLinkService shortLinkDecodingService] */

undefined8 FUN_10af460b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af460b8; end: 10af460bf; -[SCShortLinkService shortLinkEncodingService] */

undefined8 FUN_10af460b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af460c0; end: 10af460ef; -[SCShortLinkService .cxx_destruct] */

void FUN_10af460c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af460f0; end: 10af46163; -[SCUnauthShortLinkService initWithShortLinkDecoder:] */

undefined1 * FUN_10af460f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702ab8;
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



/* Entry: 10af46164; end: 10af4616b; -[SCUnauthShortLinkService shortLinkDecoder] */

undefined8 FUN_10af46164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af4616c; end: 10af46177; -[SCUnauthShortLinkService .cxx_destruct] */

void FUN_10af4616c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af46178; end: 10af46183; -[SCComposerJobSchedulerServices .cxx_destruct] */

void FUN_10af46178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af46184; end: 10af461ff; +[SCBitmojiCustomojiConfig descriptor] */

undefined * FUN_10af46184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efed0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f2e0,
                        &PTR____CFConstantStringClassReference_110f39158,&PTR_DAT_1133321b0,
                        &PTR_DAT_113332208,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137efed0 = puVar1;
  }
  return puRam00000001137efed0;
}



/* Entry: 10af46200; end: 10af4627b; +[SCBitmojiCustomojiConfig_CustomojiMetadata descriptor] */

undefined * FUN_10af46200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f330,
                        &PTR____CFConstantStringClassReference_110f39178,&PTR_DAT_1133321b0,
                        &PTR_DAT_1133321c8,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137efed8 = puVar1;
  }
  return puRam00000001137efed8;
}



/* Entry: 10af4627c; end: 10af462f7; +[SCBitmojiCustomojiConfig_IdList descriptor] */

undefined * FUN_10af4627c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1f380,
                        &PTR____CFConstantStringClassReference_110f39198,&PTR_DAT_1133321b0,
                        &PTR_DAT_1133321e8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137efee0 = puVar1;
  }
  return puRam00000001137efee0;
}



/* Entry: 10af462f8; end: 10af4636b; -[SCGrapheneScwMetric2 init] */

undefined1 * FUN_10af462f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702ac8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af4636c; end: 10af4659b;  */

void FUN_10af4636c(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  double dVar13;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  char *pcStack_290;
  char *pcStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 auStack_248 [2];
  char cStack_231;
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  lVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c98018,pcVar5,param_5);
    pcStack_80 = unaff_x23;
    func_0x000107c278ac(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    lVar9 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
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
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar8 = acStack_120;
  pcStack_a8 = FUN_10af4659c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar7 = pcVar1;
  dVar13 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar3 != (char *)0x0) {
    _objc_retain(pcVar1);
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    puVar12 = auStack_100;
    func_0x000107c278b8(auStack_100,pcVar5);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x000107c27984(acStack_120,auStack_100,&lStack_e8,1);
    dVar13 = param_1 * 1000.0;
    lVar9 = (long)dVar13;
    pcVar7 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c98068,acStack_120,lVar9);
    puStack_108 = acStack_120;
    func_0x000107c278ac(&puStack_108);
    pcVar5 = pcVar8;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar5 = pcVar8;
    }
    pcVar4 = pcVar1;
    _objc_release();
    pcVar2 = acStack_120;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    pcVar6 = pcVar4;
    __Unwind_Resume();
    pcStack_128 = FUN_10af46730;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar7;
    pcVar8 = pcVar5;
    puStack_160 = unaff_x24;
    pcStack_158 = unaff_x23;
    puStack_150 = puVar12;
    pcStack_148 = pcVar2;
    pcStack_140 = pcVar4;
    pcStack_138 = pcVar1;
    ppuStack_130 = &puStack_b0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar5);
    if (pcVar6 != (char *)0x0) {
      plVar11 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(auStack_198,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_180,pcVar1);
      acStack_1b8[0] = '\0';
      acStack_1b8[1] = '\0';
      acStack_1b8[2] = '\0';
      acStack_1b8[3] = '\0';
      acStack_1b8[4] = '\0';
      acStack_1b8[5] = '\0';
      acStack_1b8[6] = '\0';
      acStack_1b8[7] = '\0';
      acStack_1b8[8] = '\0';
      acStack_1b8[9] = '\0';
      acStack_1b8[10] = '\0';
      acStack_1b8[0xb] = '\0';
      acStack_1b8[0xc] = '\0';
      acStack_1b8[0xd] = '\0';
      acStack_1b8[0xe] = '\0';
      acStack_1b8[0xf] = '\0';
      acStack_1b8[0x10] = '\0';
      acStack_1b8[0x11] = '\0';
      acStack_1b8[0x12] = '\0';
      acStack_1b8[0x13] = '\0';
      acStack_1b8[0x14] = '\0';
      acStack_1b8[0x15] = '\0';
      acStack_1b8[0x16] = '\0';
      acStack_1b8[0x17] = '\0';
      func_0x000107c27984(acStack_1b8,auStack_198,&lStack_168,2);
      pcVar3 = "";
      pcVar8 = acStack_1b8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c980b8,pcVar8,lVar9);
      pcStack_1a0 = acStack_1b8;
      func_0x000107c278ac(&pcStack_1a0);
      lVar9 = 0;
      do {
        if ((&cStack_169)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
    }
    _objc_release(pcVar5);
    pcVar2 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    pcVar1 = pcVar3;
    if (cStack_181 < '\0') {
      __ZdlPv(auStack_198[0]);
      pcVar1 = pcVar3;
    }
    _objc_release(pcVar5);
    _objc_release(pcVar7);
    __Unwind_Resume();
    pcStack_1c8 = FUN_10af46960;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar1;
    pppuStack_1d0 = &ppuStack_130;
    _objc_retain(pcVar1);
    _objc_retain(pcVar8);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(pcVar1);
      _objc_retain(pcVar8);
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(auStack_248,pcVar5);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar5 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(auStack_230,pcVar5);
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      func_0x000107c27984(&uStack_268,auStack_248,&lStack_218,2);
      pcVar5 = "\x01";
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c98108,&uStack_268,(long)(dVar13 * 1000.0));
      puStack_250 = &uStack_268;
      func_0x000107c278ac(&puStack_250);
      lVar9 = 0;
      do {
        if ((&cStack_219)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
      _objc_release(pcVar8);
      _objc_release(pcVar1);
    }
    pcVar2 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_231 < '\0') {
        __ZdlPv(auStack_248[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar1);
      _objc_release(pcVar8);
      _objc_release(pcVar1);
      __Unwind_Resume();
      puStack_298 = (undefined1 *)&uStack_2b0;
      pcStack_278 = FUN_10af46bd0;
      if (pcVar2 != (char *)0x0) {
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        pcStack_290 = pcVar8;
        pcStack_288 = pcVar1;
        pppuStack_280 = &pppuStack_1d0;
        (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                  (*(long **)(pcVar2 + 8),&UNK_110c98158,&uStack_2b0,pcVar5);
        func_0x000107c278ac(&puStack_298);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 10af4659c; end: 10af4672f;  */

void FUN_10af4659c(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  dVar6 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar4 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x000107c27984(acStack_80,auStack_60,&lStack_48,1);
    dVar6 = param_1 * 1000.0;
    param_5 = (long)dVar6;
    pcVar2 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c98068,acStack_80,param_5);
    puStack_68 = acStack_80;
    func_0x000107c278ac(&puStack_68);
    param_4 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = pcVar3;
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    pcStack_88 = FUN_10af46730;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_3 = pcVar2;
    pcVar3 = param_4;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar2);
    _objc_retain(param_4);
    if (pcVar1 != (char *)0x0) {
      plVar4 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(auStack_f8,pcVar1);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar1 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_e0,pcVar1);
      acStack_118[0] = '\0';
      acStack_118[1] = '\0';
      acStack_118[2] = '\0';
      acStack_118[3] = '\0';
      acStack_118[4] = '\0';
      acStack_118[5] = '\0';
      acStack_118[6] = '\0';
      acStack_118[7] = '\0';
      acStack_118[8] = '\0';
      acStack_118[9] = '\0';
      acStack_118[10] = '\0';
      acStack_118[0xb] = '\0';
      acStack_118[0xc] = '\0';
      acStack_118[0xd] = '\0';
      acStack_118[0xe] = '\0';
      acStack_118[0xf] = '\0';
      acStack_118[0x10] = '\0';
      acStack_118[0x11] = '\0';
      acStack_118[0x12] = '\0';
      acStack_118[0x13] = '\0';
      acStack_118[0x14] = '\0';
      acStack_118[0x15] = '\0';
      acStack_118[0x16] = '\0';
      acStack_118[0x17] = '\0';
      func_0x000107c27984(acStack_118,auStack_f8,&lStack_c8,2);
      param_3 = "";
      pcVar3 = acStack_118;
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c980b8,pcVar3,param_5);
      pcStack_100 = acStack_118;
      func_0x000107c278ac(&pcStack_100);
      lVar5 = 0;
      do {
        if ((&cStack_c9)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
    _objc_release(param_4);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(param_4);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcStack_128 = FUN_10af46960;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = param_3;
    ppuStack_130 = &puStack_90;
    _objc_retain(param_3);
    _objc_retain(pcVar3);
    if (pcVar1 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar3);
      plVar4 = *(long **)(pcVar1 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_1a8,pcVar2);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar2 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x000107c278b8(auStack_190,pcVar2);
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      func_0x000107c27984(&uStack_1c8,auStack_1a8,&lStack_178,2);
      pcVar2 = "\x01";
      (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c98108,&uStack_1c8,(long)(dVar6 * 1000.0));
      puStack_1b0 = &uStack_1c8;
      func_0x000107c278ac(&puStack_1b0);
      lVar5 = 0;
      do {
        if ((&cStack_179)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
      _objc_release(pcVar3);
      _objc_release(param_3);
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      _objc_release(pcVar3);
      _objc_release(param_3);
      _objc_release(pcVar3);
      _objc_release(param_3);
      __Unwind_Resume();
      puStack_1f8 = (undefined1 *)&uStack_210;
      pcStack_1d8 = FUN_10af46bd0;
      if (pcVar1 != (char *)0x0) {
        uStack_210 = 0;
        uStack_208 = 0;
        uStack_200 = 0;
        pcStack_1f0 = pcVar3;
        pcStack_1e8 = param_3;
        pppuStack_1e0 = &ppuStack_130;
        (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                  (*(long **)(pcVar1 + 8),&UNK_110c98158,&uStack_210,pcVar2);
        func_0x000107c278ac(&puStack_1f8);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af46730; end: 10af4695f;  */

void FUN_10af46730(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  char *pcStack_170;
  char *pcStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar4 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110c980b8,pcVar4,param_5);
    pcStack_80 = acStack_98;
    func_0x000107c278ac(&pcStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
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
  __Unwind_Resume();
  pcStack_a8 = FUN_10af46960;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    plVar6 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_128,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_110,pcVar2);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x000107c27984(&uStack_148,auStack_128,&lStack_f8,2);
    pcVar3 = "\x01";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110c98108,&uStack_148,(long)(param_1 * 1000.0));
    puStack_130 = &uStack_148;
    func_0x000107c278ac(&puStack_130);
    lVar5 = 0;
    do {
      if ((&cStack_f9)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puStack_178 = (undefined1 *)&uStack_190;
  pcStack_158 = FUN_10af46bd0;
  if (pcVar2 != (char *)0x0) {
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    pcStack_170 = pcVar4;
    pcStack_168 = pcVar1;
    ppuStack_160 = &puStack_b0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_110c98158,&uStack_190,pcVar3);
    func_0x000107c278ac(&puStack_178);
  }
  return;
}



/* Entry: 10af46960; end: 10af46bcf;  */

void FUN_10af46960(double param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x000107c27984(&uStack_a8,auStack_88,&lStack_58,2);
    pcVar1 = "\x01";
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c98108,&uStack_a8,(long)(param_1 * 1000.0));
    puStack_90 = &uStack_a8;
    func_0x000107c278ac(&puStack_90);
    lVar4 = 0;
    do {
      if ((&cStack_59)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puStack_d8 = (undefined1 *)&uStack_f0;
  pcStack_b8 = FUN_10af46bd0;
  if (pcVar2 != (char *)0x0) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    pcStack_d0 = param_4;
    pcStack_c8 = param_3;
    puStack_c0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_110c98158,&uStack_f0,pcVar1);
    func_0x000107c278ac(&puStack_d8);
  }
  return;
}



/* Entry: 10af46bd0; end: 10af46c47;  */

void FUN_10af46bd0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110c98158,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af46c48; end: 10af46dc3; -[SCAudioSessionConfiguratorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af46c48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07e1a0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f6e6404);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,4);
    lVar4 = (long)_DAT_11278706c;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10af46d44;
    puStack_48 = &UNK_110848c48;
    uStack_38 = 0;
    lStack_40 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_60);
  }
  return;
}



/* Entry: 10af46dc4; end: 10af46e0b; -[SCAudioSessionConfiguratorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af46dc4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112787074);
  _objc_destroyWeak(param_1 + _DAT_112787070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278706c,0);
  return;
}



/* Entry: 10af46e0c; end: 10af474cb;  */

void FUN_10af46e0c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f391b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f391b8,
                      &PTR____CFConstantStringClassReference_110f391d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10af474cc; end: 10af474d3; -[SCActivationDeviceIdHoldoutServices deviceIdHoldoutStateProvider] */

undefined8 FUN_10af474cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af474d4; end: 10af47503; -[SCActivationDeviceIdHoldoutServices setDeviceIdHoldoutStateProvider:] */

void FUN_10af474d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af47504; end: 10af4750f; -[SCActivationDeviceIdHoldoutServices .cxx_destruct] */

void FUN_10af47504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af47510; end: 10af4754b; -[SCLegacyPermissionRequestServices .cxx_destruct] */

void FUN_10af47510(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af4754c; end: 10af47553; -[SCPermissionRequestServices permissionRequestService] */

undefined8 FUN_10af4754c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af47554; end: 10af4755f; -[SCPermissionRequestServices .cxx_destruct] */

void FUN_10af47554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af47560; end: 10af47567; -[SCCameraPermissionsServices permissionRequester] */

undefined8 FUN_10af47560(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af47568; end: 10af47573; -[SCCameraPermissionsServices .cxx_destruct] */

void FUN_10af47568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af47574; end: 10af4757b; -[SCSettingsEventLoggerServices settingsEventLogger] */

undefined8 FUN_10af47574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af4757c; end: 10af47587; -[SCSettingsEventLoggerServices .cxx_destruct] */

void FUN_10af4757c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af47588; end: 10af4762b; -[SCAuthenticationSessionServices initWithAuthenticationSessionInfoProvider:authenticationSessionPayloadProvider:] */

undefined1 *
FUN_10af47588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702af0;
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



/* Entry: 10af4762c; end: 10af47633; -[SCAuthenticationSessionServices authenticationSessionInfoProvider] */

undefined8 FUN_10af4762c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af47634; end: 10af4763b; -[SCAuthenticationSessionServices authenticationSessionPayloadProvider] */

undefined8 FUN_10af47634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af4763c; end: 10af476e7; -[SCAuthenticationSessionServices .cxx_destruct] */

void FUN_10af4763c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af476e8; end: 10af476f3;  */

bool FUN_10af476e8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af476f4; end: 10af4776f;  */

undefined * FUN_10af476f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efef0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f39a98,
                        &UNK_10e53a25c,&UNK_10e53a294,3,FUN_10af47770,0);
    do {
      if (puRam00000001137efef0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efef0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efef0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efef0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efef0;
}



/* Entry: 10af47770; end: 10af4777b;  */

bool FUN_10af47770(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af4777c; end: 10af477f7;  */

undefined * FUN_10af4777c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efef8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f39ab8,
                        &UNK_10e53a2a0,&UNK_10e53a304,4,FUN_10af477f8,0);
    do {
      if (puRam00000001137efef8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efef8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efef8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efef8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efef8;
}



/* Entry: 10af477f8; end: 10af47803;  */

bool FUN_10af477f8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af47804; end: 10af4787f;  */

undefined * FUN_10af47804(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eff00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f39ad8,
                        &UNK_10e53a314,&UNK_10e53a3c0,4,FUN_10af47880,0);
    do {
      if (puRam00000001137eff00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eff00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eff00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eff00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eff00;
}



/* Entry: 10af47880; end: 10af4788b;  */

bool FUN_10af47880(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af4788c; end: 10af47907;  */

undefined * FUN_10af4788c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eff08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f39af8,
                        &UNK_10e53a3d0,&UNK_10e53a3fc,3,FUN_10af47908,0);
    do {
      if (puRam00000001137eff08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eff08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eff08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eff08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eff08;
}



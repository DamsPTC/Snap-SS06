/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070701a8; end: 1070701df;  */

void FUN_1070701a8(long param_1,undefined8 param_2)

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



/* Entry: 1070701e0; end: 107070307;  */

void FUN_1070701e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar1 = param_2;
    func_0x00010c0cb9a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  puVar2 = PTR_PTR_1126d4448;
  _objc_alloc(PTR_PTR_1126d4448);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_2;
  func_0x00010bf490e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c08b1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021820(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107070308; end: 10707034b;  */

bool FUN_107070308(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010beeed20();
  _objc_release(param_2);
  return (int)uVar1 == 4;
}



/* Entry: 10707034c; end: 1070704bf;  */

bool FUN_10707034c(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07c540();
  _objc_release(uVar2);
  if (((int)uVar3 == 0) || (uVar2 = param_1, func_0x00010c15dfc0(), (uVar2 & 1) != 0)) {
    bVar1 = false;
    goto LAB_1070703ac;
  }
  uVar2 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2ce80();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    bVar1 = true;
    goto LAB_1070703ac;
  }
  uVar2 = param_1;
  func_0x00010c27dd80();
  uVar3 = param_1;
  func_0x00010c0cb340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar2 < 0x27) {
    if ((1L << (uVar2 & 0x3f) & 0x4000010d86U) == 0) {
      if (uVar2 != 0x24) goto LAB_1070704b8;
      uVar2 = uVar4;
      func_0x00010c22ac40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c25a420();
      _objc_release(uVar2);
      bVar1 = uVar5 == 1;
    }
    else {
      bVar1 = true;
    }
  }
  else {
LAB_1070704b8:
    bVar1 = false;
  }
  _objc_release(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_1070703ac:
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1070704c0; end: 10707058b; -[SCQuotedMessageViewModelFactory initWithCurrentUserId:messageRenderingPluginManager:groupsCustomColorsFetcher:] */

undefined1 *
FUN_1070704c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f86c8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10707058c; end: 107070933; -[SCQuotedMessageViewModelFactory quotedMessageRenderableForMessage:payloadContentWidth:valdiContextCreator:conversationParticipants:currentUserSnapchatter:snapchatterData:] */

void FUN_10707058c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010c07fd80();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c06e660(), (int)uVar1 == 0)) {
    uVar17 = 0;
  }
  else {
    uVar2 = param_5;
    FUN_1070b2918();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c101c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c2952a0(puVar4,param_2,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c252d60();
    if ((puVar3 != (undefined *)0x0) || ((uVar17 = 0, uVar5 != 0 && (uVar1 != 1)))) {
      uVar1 = param_3;
      func_0x00010c07fd80();
      uVar18 = 0x4018000000000000;
      if (((uVar1 & 1) == 0) &&
         ((puVar4 == (undefined *)0x0 ||
          (puVar6 = puVar4, func_0x00010c11ede0(puVar4,param_2,param_3), puVar6 == (undefined *)0x0)
          ))) {
        uVar1 = uVar5;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar1;
        func_0x00010c15de20();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf5a4a0();
        uVar11 = uVar5;
        func_0x00010c252d60();
        uVar12 = uVar5;
        func_0x00010bf4bc60(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010c07d080();
        uVar14 = param_3;
        func_0x00010bfdbd60(param_3);
        func_0x00010beeb680(param_1,param_2,puVar3,uVar8,uVar10,uVar11,uVar13,uVar14,param_5,param_7
                           );
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar1);
        puVar6 = PTR_PTR_1126c67d8;
        _objc_alloc(PTR_PTR_1126c67d8);
        puVar15 = PTR_PTR_1126d4450;
        func_0x00010bf44480(PTR_PTR_1126d4450);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000660(puVar6,param_2,puVar15,param_1,0);
        _objc_release(puVar3);
        _objc_release(puVar15);
        uVar21 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
        uVar20 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
        uVar19 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
        uVar18 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
        _objc_release(param_1);
      }
      else {
        uVar19 = 0x4018000000000000;
        uVar20 = 0x4018000000000000;
        uVar21 = 0x4018000000000000;
        puVar6 = puVar3;
      }
      uVar16 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bf490e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bfe5ec0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bfc8480(uVar16,param_2,uVar1,puVar3,1,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar1);
      _objc_release(uVar16);
      func_0x00010c1c2b40(uVar21,uVar20,uVar19,uVar18,uVar17,param_2,0);
      _objc_release(puVar6);
    }
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar17);
  return;
}



/* Entry: 107070934; end: 107070d53; -[SCQuotedMessageViewModelFactory _wrapComposerContextParams:senderUserId:messageCreationTimestamp:status:isSaved:hasExpired:conversationParticipants:snapchatterData:] */

void FUN_107070934(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  ppuVar2 = param_4;
  func_0x000108ef47bc(param_4,*(undefined8 *)(param_1 + 8),in_stack_00000000);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c0bddc0();
  if (param_4 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = param_4;
    func_0x0001070684f8(param_4,*(undefined8 *)(param_1 + 8),in_stack_00000000,in_stack_00000008);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf651a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d4368;
  _objc_alloc(PTR_PTR_1126d4368);
  func_0x00010c003ba0();
  puVar6 = PTR_PTR_1126d4458;
  _objc_alloc(PTR_PTR_1126d4458);
  iVar1 = *(int *)(puStack_78 + 3);
  _objc_retain(puVar4);
  puVar7 = puVar4;
  func_0x00010c0812c0();
  if ((int)puVar7 == 0) {
    puVar7 = puVar4;
    FUN_107064870(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c26f200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  func_0x00010c044660((double)iVar1,puVar6);
  func_0x00010c181b40(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar6 = puVar5;
  func_0x00010bf4bc60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcb80();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf4bc60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5ea0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (param_3 != 0) {
    puVar6 = PTR_PTR_1126d4460;
    _objc_alloc(PTR_PTR_1126d4460);
    lVar8 = param_3;
    func_0x00010bf44480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000620(puVar6);
    puVar7 = puVar5;
    func_0x00010bf4bc60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ddf00();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar8);
    lVar8 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf4bc60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c101a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar8);
    lVar8 = param_3;
    func_0x00010bf443a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf4bc60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c101a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17fd60();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar8);
  }
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(ppuVar2);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107070d54; end: 107070d83;  */

void FUN_107070d54(long param_1,undefined4 param_2)

{
  func_0x00010bf09c20();
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 107070d84; end: 107070de7;  */

void FUN_107070d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09c20();
  *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (int)uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107070de8; end: 107070fc7; -[SCQuotedMessageViewModelFactory quotedMessageViewModelForChatReplyComposeView:conversationParticipants:snapchatterData:] */

void FUN_107070de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5a4a0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c101c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar5 = lVar4;
  func_0x00010010fab4(lVar4,PTR_DAT_1126a54c8);
  lVar3 = lVar4;
  if ((int)lVar5 == 0) {
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  _objc_release(lVar4);
  puVar1 = PTR_DAT_1126a54c8;
  _objc_retain(lVar3);
  lVar5 = lVar3;
  func_0x00010010fab4(lVar3,puVar1);
  _objc_release(lVar3);
  lVar7 = 0;
  if ((int)lVar5 != 0 && lVar3 != 0) {
    uVar6 = param_4;
    FUN_1070b2918(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2952c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d080(param_3);
    func_0x00010bfdbd60(param_3);
    func_0x00010beeb680(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar6);
    lVar7 = param_1;
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 107070fc8; end: 107071003; -[SCQuotedMessageViewModelFactory .cxx_destruct] */

void FUN_107070fc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107071004; end: 107071073; -[SCChatMessageCellViewModel loadingStatus] */

ulong FUN_107071004(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d43f0;
  _objc_opt_class(PTR_PTR_1126d43f0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c09c2c0(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107071074; end: 1070710eb; -[SCChatMessageCellViewModel displayLoadHistoryAction] */

void FUN_107071074(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d43f0;
  _objc_opt_class(PTR_PTR_1126d43f0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bf85b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070710ec; end: 107071163; -[SCChatMessageCellViewModel tapLoadHistoryAction] */

void FUN_1070710ec(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d43f0;
  _objc_opt_class(PTR_PTR_1126d43f0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c269120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107071164; end: 1070711f3; -[SCChatMessageCellViewModel paginationToken] */

void FUN_107071164(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010bf85ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126d43e8;
  _objc_opt_class(PTR_PTR_1126d43e8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c23ca60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070711f4; end: 1070712d7; -[SCChatMessageCellViewModel xLogObjectInfo] */

void FUN_1070711f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_48 = PTR_PTR_1126f86d0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070712d8; end: 1070712ff;  */

undefined ** FUN_1070712d8(long param_1)

{
  if (param_1 - 1U < 4) {
    return (undefined **)(&PTR_PTR_110989c18)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e99958;
}



/* Entry: 107071300; end: 1070713d7; -[SCChatArroyoConversationSnapshot initWithLastSeenMessageTimestamp:lastSeenMessageId:latestReceivedReactionSeenId:] */

undefined1 *
FUN_107071300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f86d8;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070713d8; end: 1070713fb; -[SCChatArroyoConversationSnapshot copyWithZone:] */

undefined8 FUN_1070713d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070713fc; end: 10707147b; -[SCChatArroyoConversationSnapshot hash] */

undefined8 * FUN_1070713fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107071514:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107071520;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107071520;
          }
          goto LAB_107071514;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107071520:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10707147c; end: 10707153b; -[SCChatArroyoConversationSnapshot isEqual:] */

long FUN_10707147c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107071514:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107071520;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107071520;
          }
          goto LAB_107071514;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107071520:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707153c; end: 107071543; -[SCChatArroyoConversationSnapshot lastSeenMessageTimestamp] */

undefined8 FUN_10707153c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107071544; end: 10707154b; -[SCChatArroyoConversationSnapshot lastSeenMessageId] */

undefined8 FUN_107071544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10707154c; end: 107071553; -[SCChatArroyoConversationSnapshot latestReceivedReactionSeenId] */

undefined8 FUN_10707154c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107071554; end: 10707158f; -[SCChatArroyoConversationSnapshot .cxx_destruct] */

void FUN_107071554(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107071590; end: 1070716af; -[SCChatDateHeaderViewModel initWithFont:size:margins:bubbleInsets:timestampText:kerning:] */

undefined8 *
FUN_107071590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f86e0;
  puVar1 = &uStack_80;
  uStack_80 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    puVar1[6] = param_3;
    puVar1[7] = param_4;
    puVar1[8] = param_5;
    puVar1[9] = param_6;
    puVar1[10] = in_stack_00000000;
    puVar1[0xb] = in_stack_00000008;
    puVar1[0xc] = in_stack_00000010;
    puVar1[0xd] = in_stack_00000018;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = in_stack_00000020;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 1070716b0; end: 1070716d3; -[SCChatDateHeaderViewModel copyWithZone:] */

undefined8 FUN_1070716b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070716d4; end: 1070718ab; -[SCChatDateHeaderViewModel hash] */

undefined8 * FUN_1070716d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  double dVar12;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_88 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_80 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_78 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_70 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_68 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_60 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_58 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = uVar4;
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_30 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar5;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == (undefined8 *)param_3) {
LAB_1070719bc:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    puVar10 = (undefined1 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1070719c8;
    puVar10 = (undefined1 *)puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if (((ulong)puVar7 & 1) != 0) {
      bVar3 = false;
      if ((*(double *)((long)puVar6 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar3 = false, !NAN(*(double *)((long)puVar6 + 0x28)) && !NAN(*(double *)(param_3 + 0x28))
         )) {
        bVar3 = *(double *)((long)puVar6 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (((bVar3) &&
          (uVar11 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar6 + 0x48) ==
                                                 *(double *)(param_3 + 0x48)),
                                        CONCAT24(-(ushort)(*(double *)((long)puVar6 + 0x40) ==
                                                          *(double *)(param_3 + 0x40)),
                                                 CONCAT22(-(ushort)(*(double *)((long)puVar6 + 0x38)
                                                                   == *(double *)(param_3 + 0x38)),
                                                          -(ushort)(*(double *)((long)puVar6 + 0x30)
                                                                   == *(double *)(param_3 + 0x30))))
                                       ),2), (uVar11 & 1) != 0)) &&
         (uVar11 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar6 + 0x68) ==
                                                *(double *)(param_3 + 0x68)),
                                       CONCAT24(-(ushort)(*(double *)((long)puVar6 + 0x60) ==
                                                         *(double *)(param_3 + 0x60)),
                                                CONCAT22(-(ushort)(*(double *)((long)puVar6 + 0x58)
                                                                  == *(double *)(param_3 + 0x58)),
                                                         -(ushort)(*(double *)((long)puVar6 + 0x50)
                                                                  == *(double *)(param_3 + 0x50)))))
                              ,2), (uVar11 & 1) != 0)) {
        dVar12 = ABS(*(double *)((long)puVar6 + 0x18) - *(double *)(param_3 + 0x18));
        dVar2 = ABS(*(double *)((long)puVar6 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
          bVar3 = dVar12 < dVar2;
        }
        if ((bVar3) &&
           ((lVar8 = *(long *)((long)puVar6 + 8), lVar8 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
          puVar10 = *(undefined1 **)((long)puVar6 + 0x10);
          if (puVar10 != *(undefined1 **)(param_3 + 0x10)) {
            func_0x00010c071ae0();
            goto LAB_1070719c8;
          }
          goto LAB_1070719bc;
        }
      }
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_1070719c8:
  _objc_release(param_3);
  return (undefined8 *)puVar10;
}



/* Entry: 1070718ac; end: 1070719e3; -[SCChatDateHeaderViewModel isEqual:] */

long FUN_1070718ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070719bc:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1070719c8;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if ((uVar4 & 1) != 0) {
      bVar2 = false;
      if ((*(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20)) &&
         (bVar2 = false, !NAN(*(double *)(param_1 + 0x28)) && !NAN(*(double *)(param_3 + 0x28)))) {
        bVar2 = *(double *)(param_1 + 0x28) == *(double *)(param_3 + 0x28);
      }
      if (((bVar2) &&
          (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x48) ==
                                                *(double *)(param_3 + 0x48)),
                                       CONCAT24(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                         *(double *)(param_3 + 0x40)),
                                                CONCAT22(-(ushort)(*(double *)(param_1 + 0x38) ==
                                                                  *(double *)(param_3 + 0x38)),
                                                         -(ushort)(*(double *)(param_1 + 0x30) ==
                                                                  *(double *)(param_3 + 0x30))))),2)
          , (uVar6 & 1) != 0)) &&
         (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x68) ==
                                               *(double *)(param_3 + 0x68)),
                                      CONCAT24(-(ushort)(*(double *)(param_1 + 0x60) ==
                                                        *(double *)(param_3 + 0x60)),
                                               CONCAT22(-(ushort)(*(double *)(param_1 + 0x58) ==
                                                                 *(double *)(param_3 + 0x58)),
                                                        -(ushort)(*(double *)(param_1 + 0x50) ==
                                                                 *(double *)(param_3 + 0x50))))),2),
         (uVar6 & 1) != 0)) {
        dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar1 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
          bVar2 = dVar7 < dVar1;
        }
        if ((bVar2) &&
           ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 != *(long *)(param_3 + 0x10)) {
            func_0x00010c071ae0();
            goto LAB_1070719c8;
          }
          goto LAB_1070719bc;
        }
      }
    }
    lVar5 = 0;
  }
LAB_1070719c8:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1070719e4; end: 1070719eb; -[SCChatDateHeaderViewModel font] */

undefined8 FUN_1070719e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070719ec; end: 1070719f3; -[SCChatDateHeaderViewModel size] */

undefined1  [16] FUN_1070719ec(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 1070719f4; end: 1070719ff; -[SCChatDateHeaderViewModel margins] */

undefined8 FUN_1070719f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107071a00; end: 107071a0b; -[SCChatDateHeaderViewModel bubbleInsets] */

undefined8 FUN_107071a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107071a0c; end: 107071a13; -[SCChatDateHeaderViewModel timestampText] */

undefined8 FUN_107071a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107071a14; end: 107071a1b; -[SCChatDateHeaderViewModel kerning] */

undefined8 FUN_107071a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107071a1c; end: 107071a4b; -[SCChatDateHeaderViewModel .cxx_destruct] */

void FUN_107071a1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107071a4c; end: 107071b63; -[SCChatSavableViewModel initWithSavedBackgroundColor:savedByUsersText:cornerMask:cornerRadius:isSavedLabelSaved:isSavedByAnyone:animationData:additionalWidthForWhitespaceTapToSave:] */

undefined1 *
FUN_107071a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f86e8;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
  }
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107071b64; end: 107071b87; -[SCChatSavableViewModel copyWithZone:] */

undefined8 FUN_107071b64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107071b88; end: 107071c5b; -[SCChatSavableViewModel hash] */

undefined8 * FUN_107071b88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_68;
  uStack_38 = uVar2;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107071d8c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107071d98;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((puVar4[4] == param_3[4] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
        (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))))) {
      dVar10 = ABS((double)puVar4[5] - (double)param_3[5]);
      dVar9 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS((double)puVar4[7] - (double)param_3[7]);
        dVar9 = ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (((bVar1) &&
            ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071c60(), (int)lVar6 != 0))))
           && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))
           ) {
          puVar8 = (undefined8 *)puVar4[6];
          if (puVar8 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_107071d98;
          }
          goto LAB_107071d8c;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107071d98:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107071c5c; end: 107071db3; -[SCChatSavableViewModel isEqual:] */

long FUN_107071c5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107071d8c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107071d98;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
        dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x30);
          if (lVar4 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_107071d98;
          }
          goto LAB_107071d8c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_107071d98:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107071db4; end: 107071dbb; -[SCChatSavableViewModel savedBackgroundColor] */

undefined8 FUN_107071db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107071dbc; end: 107071dc3; -[SCChatSavableViewModel savedByUsersText] */

undefined8 FUN_107071dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107071dc4; end: 107071dcb; -[SCChatSavableViewModel cornerMask] */

undefined8 FUN_107071dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107071dcc; end: 107071dd3; -[SCChatSavableViewModel cornerRadius] */

undefined8 FUN_107071dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107071dd4; end: 107071ddb; -[SCChatSavableViewModel isSavedLabelSaved] */

undefined1 FUN_107071dd4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107071ddc; end: 107071de3; -[SCChatSavableViewModel isSavedByAnyone] */

undefined1 FUN_107071ddc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107071de4; end: 107071deb; -[SCChatSavableViewModel animationData] */

undefined8 FUN_107071de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107071dec; end: 107071df3; -[SCChatSavableViewModel additionalWidthForWhitespaceTapToSave] */

undefined8 FUN_107071dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107071df4; end: 107071e2f; -[SCChatSavableViewModel .cxx_destruct] */

void FUN_107071df4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107071e30; end: 107071ec7; -[SCChatReactableViewModel initWithReactionsHeight:reactions:isEligibleForMultipleReactions:] */

undefined1 *
FUN_107071e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f86f0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107071ec8; end: 107071eeb; -[SCChatReactableViewModel copyWithZone:] */

undefined8 FUN_107071ec8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107071eec; end: 107071f7b; -[SCChatReactableViewModel hash] */

ulong * FUN_107071eec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_107072028:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107072034;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107072034;
        }
        goto LAB_107072028;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107072034:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 107071f7c; end: 10707204f; -[SCChatReactableViewModel isEqual:] */

long FUN_107071f7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107072028:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107072034;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107072034;
        }
        goto LAB_107072028;
      }
    }
    lVar4 = 0;
  }
LAB_107072034:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107072050; end: 107072057; -[SCChatReactableViewModel reactionsHeight] */

undefined8 FUN_107072050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107072058; end: 10707205f; -[SCChatReactableViewModel reactions] */

undefined8 FUN_107072058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107072060; end: 107072067; -[SCChatReactableViewModel isEligibleForMultipleReactions] */

undefined1 FUN_107072060(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107072068; end: 107072073; -[SCChatReactableViewModel .cxx_destruct] */

void FUN_107072068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107072074; end: 10707223b; -[SCChatSenderHeaderViewModel initWithSenderHeaderText:editedHeaderText:labelSize:margins:sendingDisplayType:senderIcon:contextualHeader:groupChatAddButton:stackVertically:stackEdited:senderTapAction:] */

undefined1 *
FUN_107072074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  puStack_98 = PTR_PTR_1126f86f8;
  uStack_a0 = param_7;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
    *(undefined8 *)((long)puVar1 + 0x50) = param_2;
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
    *(undefined8 *)((long)puVar1 + 0x60) = param_4;
    *(undefined8 *)((long)puVar1 + 0x68) = param_5;
    *(undefined8 *)((long)puVar1 + 0x70) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 9) = param_15._1_1_;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 10707223c; end: 10707225f; -[SCChatSenderHeaderViewModel copyWithZone:] */

undefined8 FUN_10707223c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107072260; end: 1070723d3; -[SCChatSenderHeaderViewModel hash] */

undefined8 * FUN_107072260(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_88 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_80 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_78 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10707253c:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107072540;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(char *)((long)puVar4 + 8) == param_3[8])) && (*(char *)((long)puVar4 + 9) == param_3[9])
        ))) {
      puVar8 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar4 + 0x48) != *(double *)(param_3 + 0x48)) ||
         (*(double *)((long)puVar4 + 0x50) != *(double *)(param_3 + 0x50))) goto LAB_107072540;
      uVar9 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar4 + 0x70) ==
                                           *(double *)(param_3 + 0x70)),
                                  CONCAT24(-(ushort)(*(double *)((long)puVar4 + 0x68) ==
                                                    *(double *)(param_3 + 0x68)),
                                           CONCAT22(-(ushort)(*(double *)((long)puVar4 + 0x60) ==
                                                             *(double *)(param_3 + 0x60)),
                                                    -(ushort)(*(double *)((long)puVar4 + 0x58) ==
                                                             *(double *)(param_3 + 0x58))))),2);
      if (((((uVar9 & 1) != 0) &&
           ((((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x38), lVar6 == *(long *)(param_3 + 0x38) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x40);
        if (puVar8 != *(undefined1 **)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_107072540;
        }
        goto LAB_10707253c;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107072540:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 1070723d4; end: 10707255b; -[SCChatSenderHeaderViewModel isEqual:] */

long FUN_1070723d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10707253c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107072540;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48)) ||
         (*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50))) goto LAB_107072540;
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x70) ==
                                           *(double *)(param_3 + 0x70)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x68) ==
                                                    *(double *)(param_3 + 0x68)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x60) ==
                                                             *(double *)(param_3 + 0x60)),
                                                    -(ushort)(*(double *)(param_1 + 0x58) ==
                                                             *(double *)(param_3 + 0x58))))),2);
      if (((((uVar4 & 1) != 0) &&
           ((((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
          ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x40);
        if (lVar3 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_107072540;
        }
        goto LAB_10707253c;
      }
    }
    lVar3 = 0;
  }
LAB_107072540:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10707255c; end: 107072563; -[SCChatSenderHeaderViewModel senderHeaderText] */

undefined8 FUN_10707255c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107072564; end: 10707256b; -[SCChatSenderHeaderViewModel editedHeaderText] */

undefined8 FUN_107072564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10707256c; end: 107072573; -[SCChatSenderHeaderViewModel labelSize] */

undefined1  [16] FUN_10707256c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x48);
}



/* Entry: 107072574; end: 10707257f; -[SCChatSenderHeaderViewModel margins] */

undefined8 FUN_107072574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107072580; end: 107072587; -[SCChatSenderHeaderViewModel sendingDisplayType] */

undefined8 FUN_107072580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107072588; end: 10707258f; -[SCChatSenderHeaderViewModel senderIcon] */

undefined8 FUN_107072588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107072590; end: 107072597; -[SCChatSenderHeaderViewModel contextualHeader] */

undefined8 FUN_107072590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107072598; end: 10707259f; -[SCChatSenderHeaderViewModel groupChatAddButton] */

undefined8 FUN_107072598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1070725a0; end: 1070725a7; -[SCChatSenderHeaderViewModel stackVertically] */

undefined1 FUN_1070725a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1070725a8; end: 1070725af; -[SCChatSenderHeaderViewModel stackEdited] */

undefined1 FUN_1070725a8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1070725b0; end: 1070725b7; -[SCChatSenderHeaderViewModel senderTapAction] */

undefined8 FUN_1070725b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1070725b8; end: 107072617; -[SCChatSenderHeaderViewModel .cxx_destruct] */

void FUN_1070725b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107072618; end: 1070726db; -[SCChatSenderLineViewModel initWithConversationColor:headerColor:width:cornerMask:] */

undefined1 *
FUN_107072618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8700;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1070726dc; end: 1070726ff; -[SCChatSenderLineViewModel copyWithZone:] */

undefined8 FUN_1070726dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107072700; end: 10707279b; -[SCChatSenderLineViewModel hash] */

undefined8 * FUN_107072700(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107072860:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10707286c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[4] == param_3[4])) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071c60();
          goto LAB_10707286c;
        }
        goto LAB_107072860;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10707286c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10707279c; end: 107072887; -[SCChatSenderLineViewModel isEqual:] */

long FUN_10707279c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107072860:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10707286c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071c60();
          goto LAB_10707286c;
        }
        goto LAB_107072860;
      }
    }
    lVar4 = 0;
  }
LAB_10707286c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107072888; end: 10707288f; -[SCChatSenderLineViewModel conversationColor] */

undefined8 FUN_107072888(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107072890; end: 107072897; -[SCChatSenderLineViewModel headerColor] */

undefined8 FUN_107072890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107072898; end: 10707289f; -[SCChatSenderLineViewModel width] */

undefined8 FUN_107072898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070728a0; end: 1070728a7; -[SCChatSenderLineViewModel cornerMask] */

undefined8 FUN_1070728a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070728a8; end: 1070728d7; -[SCChatSenderLineViewModel .cxx_destruct] */

void FUN_1070728a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070728d8; end: 107072997; -[SCChatContextualHeaderViewModel initWithText:imageViewModel:size:] */

undefined1 *
FUN_1070728d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8708;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107072998; end: 1070729bb; -[SCChatContextualHeaderViewModel copyWithZone:] */

undefined8 FUN_107072998(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070729bc; end: 107072a73; -[SCChatContextualHeaderViewModel hash] */

undefined8 * FUN_1070729bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107072b08:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107072b14;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if (((double)puVar4[3] == (double)param_3[3]) &&
         (bVar1 = false, !NAN((double)puVar4[4]) && !NAN((double)param_3[4]))) {
        bVar1 = (double)puVar4[4] == (double)param_3[4];
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107072b14;
        }
        goto LAB_107072b08;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107072b14:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107072a74; end: 107072b2f; -[SCChatContextualHeaderViewModel isEqual:] */

long FUN_107072a74(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107072b08:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107072b14;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107072b14;
        }
        goto LAB_107072b08;
      }
    }
    lVar4 = 0;
  }
LAB_107072b14:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107072b30; end: 107072b37; -[SCChatContextualHeaderViewModel text] */

undefined8 FUN_107072b30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107072b38; end: 107072b3f; -[SCChatContextualHeaderViewModel imageViewModel] */

undefined8 FUN_107072b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107072b40; end: 107072b47; -[SCChatContextualHeaderViewModel size] */

undefined1  [16] FUN_107072b40(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 107072b48; end: 107072b77; -[SCChatContextualHeaderViewModel .cxx_destruct] */

void FUN_107072b48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107072b78; end: 107072bdb; +[SCChatContextualHeaderImageViewModel onDemandResourceWithIcon:] */

void FUN_107072b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d43d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107072bdc; end: 107072c3b; +[SCChatContextualHeaderImageViewModel sigIconWithIconType:iconColor:] */

void FUN_107072bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d43d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107072c3c; end: 107072c5f; -[SCChatContextualHeaderImageViewModel copyWithZone:] */

undefined8 FUN_107072c3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107072c60; end: 107072cdb; -[SCChatContextualHeaderImageViewModel hash] */

void FUN_107072c60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f8710;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107072cdc; end: 107072d1f; -[SCChatContextualHeaderImageViewModel internalInit] */

void FUN_107072cdc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f8710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107072d20; end: 107072ddf; -[SCChatContextualHeaderImageViewModel isEqual:] */

long FUN_107072d20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107072dc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_107072dc4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107072dc4;
    }
  }
  lVar3 = 1;
LAB_107072dc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107072de0; end: 107072e67; -[SCChatContextualHeaderImageViewModel matchOnDemandResource:sigIcon:] */

void FUN_107072de0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107072e68; end: 107072e73; -[SCChatContextualHeaderImageViewModel .cxx_destruct] */

void FUN_107072e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107072e74; end: 107072f1f; -[SCChatTimestampViewModel initWithCellTimestampText:actionHeaderTimestampText:] */

undefined1 *
FUN_107072e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8718;
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



/* Entry: 107072f20; end: 107072f43; -[SCChatTimestampViewModel copyWithZone:] */

undefined8 FUN_107072f20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



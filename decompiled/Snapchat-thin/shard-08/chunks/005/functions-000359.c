/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062202e4; end: 10622038f;  */

void FUN_1062202e4(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010c242c00(*(undefined8 *)(param_1 + 0x60));
    }
    else {
      func_0x00010befb920(*(undefined8 *)(param_1 + 8));
      func_0x00010c28a140(*(undefined8 *)(param_1 + 8));
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bf529e0(param_3);
      func_0x00010bef7880(uVar1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106220390; end: 1062203c7; -[SCSpotlightRepliesActionHandler _modalPresentationOnCommentsTrayDidEnd] */

void FUN_106220390(long param_1)

{
  func_0x00010c0f5c80(*(undefined8 *)(param_1 + 0x60));
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cfbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062203c8; end: 1062203ff; -[SCSpotlightRepliesActionHandler _modalDismissalOnCommentsTrayDidEnd] */

void FUN_1062203c8(long param_1)

{
  func_0x00010c13d3a0(*(undefined8 *)(param_1 + 0x60));
  param_1 = param_1 + 0x148;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cfa80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106220400; end: 10622057b; -[SCSpotlightRepliesActionHandler _launchSearchWithQuery:interactionContext:spotlightReply:] */

void FUN_106220400(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x150);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar1 == 0) && (*(long *)(param_1 + 0x158) != 0)) {
      lVar1 = param_1;
      func_0x00010c10fbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010be9c5e0();
        _objc_initWeak(auStack_48,param_1);
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_10622057c;
        puStack_68 = &UNK_110842a68;
        _objc_copyWeak(auStack_58,auStack_48);
        lStack_50 = lVar1;
        _objc_retain(param_3);
        lStack_60 = param_3;
        func_0x0001000d76cc("APPSTORE",&puStack_80);
        func_0x00010be60e80(param_1);
        func_0x00010be55260(param_1);
        _objc_release(lStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_48);
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10622057c; end: 106220647;  */

void FUN_10622057c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c10fbe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beee620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b5f80;
      _objc_alloc(PTR_PTR_1126b5f80);
      func_0x00010c038f40();
      uVar5 = *(undefined8 *)(lVar1 + 0x158);
      func_0x00010bf23ea0(uVar5,param_2,puVar4,*(undefined8 *)(param_1 + 0x30),lVar1,
                          *(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x150),param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106220648; end: 106220663; -[SCSpotlightRepliesActionHandler _searchContextFromInteractionContext:] */

undefined8 FUN_106220648(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xc;
  if (param_3 != 7) {
    uVar1 = 0;
  }
  uVar2 = 0xd;
  if (param_3 != 5) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106220664; end: 1062207df; -[SCSpotlightRepliesActionHandler _logLaunchSuggestedSearchWithSearchQueryText:interactionContext:spotlightReply:] */

void FUN_106220664(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_68 = param_3;
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f43778;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f43838;
  _objc_retain(param_5);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f42ff8;
  puVar2 = param_5;
  puStack_60 = puVar1;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_68,&ppuStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = 0x22;
  func_0x00010c0a5a20(*(undefined8 *)(param_1 + 0x60),param_2,0x22,puVar4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e45c38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b580(param_3[0x28],param_2,puVar1,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062207e0; end: 10622084b; -[SCSpotlightRepliesActionHandler _handleCameraButtonTappedWithInteractionContext:] */

void FUN_1062207e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e45c38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b580(*(undefined8 *)(param_1 + 0x140),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10622084c; end: 106220917; -[SCSpotlightRepliesActionHandler _lookupReplyWithReplyIds:] */

void FUN_10622084c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106220918;
  puStack_58 = &UNK_110917788;
  uStack_50 = uVar3;
  uStack_48 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  func_0x00010c131d60(uVar4,param_2,param_3,uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106220918; end: 1062209f3;  */

void FUN_106220918(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if ((param_2 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04640();
    _objc_release(uVar2);
    func_0x00010befaf40(*(undefined8 *)(param_1 + 0x28));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1062209f4;
    puStack_40 = &UNK_110842e18;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000100c749e0(0x40000000,"APPSTORE",&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062209f4; end: 106220a27;  */

void FUN_1062209f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf045c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106220a28; end: 106220b67; -[SCSpotlightRepliesActionHandler _launchProfileForMentionedUser:spotlightReply:] */

void FUN_106220a28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0d4260(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_3;
  if (lVar3 == 0) {
    lVar1 = param_3;
    func_0x00010c11a720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar4 == 0) goto LAB_106220b40;
    func_0x00010c11a720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48180(param_1,param_2,lVar2,param_4);
  }
  else {
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48880(param_1,param_2,lVar2,param_4,1);
  }
  _objc_release(lVar2);
  func_0x00010be55220(param_1,param_2,param_4,lVar3 != 0);
LAB_106220b40:
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106220b68; end: 106220fdf; -[SCSpotlightRepliesActionHandler _logLaunchProfileForMentionedUserWithSpotlightReply:isFriendProfile:] */

void FUN_106220b68(long param_1,int param_2,undefined *param_3,int param_4)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_3;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = param_3;
  func_0x00010bfc9900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar28 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar12 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  FUN_10622b918();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_3;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  if (puVar14 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar26 = *(undefined **)(param_1 + 0x10);
  puVar16 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c080();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar26;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  if (puVar17 == (undefined *)0x0) {
    puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar23 = param_3;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar23;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar19 == (undefined *)0x0) {
    _objc_release(puVar20);
  }
  _objc_release(puVar19);
  _objc_release(puVar23);
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar18);
  }
  _objc_release(puVar17);
  _objc_release(puVar26);
  _objc_release(puVar16);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar15);
  }
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar28);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = (undefined *)0x1c;
  if (param_4 != 0) {
    puVar1 = (undefined *)0x1d;
  }
  func_0x00010c0a5a20(*(undefined8 *)(param_1 + 0x60));
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  func_0x00010bfe2ba0(*(undefined8 *)(param_3 + 8));
  uVar22 = *(undefined8 *)(param_3 + 0x80);
  func_0x00010c269d40(uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c131d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf046c0(uVar22);
  _objc_release(puVar2);
  _objc_release(uVar22);
  uVar22 = *(undefined8 *)(param_3 + 0x60);
  puVar2 = puVar1;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar1;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar1;
  func_0x00010bfc9900();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar13 = puVar1;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar1;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar28;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar11 = puVar1;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  FUN_10622b918();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar15 = puVar1;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  if (puVar16 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = (undefined *)0x19;
  puVar26 = puVar18;
  func_0x00010c0a5a20(uVar22);
  _objc_release(puVar18);
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar17);
  }
  _objc_release(puVar16);
  _objc_release(puVar15);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar14);
  }
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar28);
  _objc_release(puVar8);
  _objc_release(puVar13);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar23);
  uVar22 = *(undefined8 *)(puVar1 + 0x10);
  puVar2 = puVar23;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d4c0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010beb6a80();
  if ((int)puVar2 != 0) {
    uVar22 = *(undefined8 *)(puVar1 + 8);
    puVar2 = puVar23;
    func_0x00010c0f3b40(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ce0(uVar22);
    _objc_release(puVar2);
    uVar27 = *(undefined8 *)(puVar1 + 0x10);
    puVar2 = puVar23;
    func_0x00010c0f3b40(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar22 = *(undefined8 *)(puVar1 + 0x80);
    func_0x00010c269d40(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04620();
    _objc_release(uVar22);
    uVar29 = *(undefined8 *)(puVar1 + 8);
    _objc_retain(uVar29);
    uVar22 = *(undefined8 *)(puVar1 + 0x28);
    puVar2 = puVar23;
    func_0x00010c241220(puVar23);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar23;
    func_0x00010c0f3b40(puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar29);
    _objc_retain(puVar23);
    func_0x00010bfa9ca0(uVar22);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar25 = *(undefined8 *)(puVar1 + 0x60);
    puVar2 = puVar23;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar23;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar23;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c072ae0(puVar23);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = *(undefined **)(puVar1 + 0x10);
    puVar1 = puVar23;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar28;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = 0x1a;
    puVar26 = puVar10;
    func_0x00010c0a5a20(uVar25);
    _objc_release(puVar10);
    if (puVar9 == (undefined *)0x0) {
      _objc_release(puVar13);
    }
    _objc_release(puVar9);
    _objc_release(puVar28);
    _objc_release(puVar1);
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar23);
    _objc_release(uVar29);
    _objc_release(uVar29);
    _objc_release(uVar27);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar22);
  _objc_retain(puVar26);
  uVar27 = *(undefined8 *)(puVar23 + 0x20);
  uVar25 = *(undefined8 *)(puVar23 + 0x28);
  func_0x00010c0f3b40(uVar25);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010c213ce0(uVar27);
  }
  else {
    func_0x00010bf07180();
    _objc_release(uVar25);
    uVar27 = *(undefined8 *)(puVar23 + 0x20);
    uVar25 = *(undefined8 *)(puVar23 + 0x28);
    func_0x00010c0f3b40(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ce0(uVar27);
    _objc_release(uVar25);
    uVar27 = *(undefined8 *)(puVar23 + 0x20);
    uVar25 = *(undefined8 *)(puVar23 + 0x28);
    func_0x00010c0f3b40(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8b60(uVar27);
  }
  _objc_release(uVar25);
  _objc_release(puVar26);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar22);
  return;
}



/* Entry: 106220fe0; end: 1062213b7; -[SCSpotlightRepliesActionHandler _removeThreadedRepliesUnderTopLevelComment:] */

void FUN_106220fe0(long param_1,int param_2,undefined *param_3)

{
  undefined8 uVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfe2ba0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c131d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf046c0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puVar2 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_3;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = param_3;
  func_0x00010bfc9900();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar8 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar10;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar11 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  FUN_10622b918();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_3;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar15 = param_3;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  if (puVar16 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined *)0x19;
  puVar20 = puVar18;
  func_0x00010c0a5a20(uVar1);
  _objc_release(puVar18);
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar17);
  }
  _objc_release(puVar16);
  _objc_release(puVar15);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar14);
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar24);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar19);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  puVar2 = puVar19;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d4c0();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010beb6a80();
  if ((int)puVar2 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 8);
    puVar2 = puVar19;
    func_0x00010c0f3b40(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ce0(uVar1);
    _objc_release(puVar2);
    uVar23 = *(undefined8 *)(param_3 + 0x10);
    puVar2 = puVar19;
    func_0x00010c0f3b40(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_3 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04620();
    _objc_release(uVar1);
    uVar25 = *(undefined8 *)(param_3 + 8);
    _objc_retain(uVar25);
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    puVar2 = puVar19;
    func_0x00010c241220(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar19;
    func_0x00010c0f3b40(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar25);
    _objc_retain(puVar19);
    func_0x00010bfa9ca0(uVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar22 = *(undefined8 *)(param_3 + 0x60);
    puVar2 = puVar19;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar19;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = puVar19;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c072ae0(puVar19);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = *(undefined **)(param_3 + 0x10);
    puVar12 = puVar19;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar24;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0x1a;
    puVar20 = puVar11;
    func_0x00010c0a5a20(uVar22);
    _objc_release(puVar11);
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    _objc_release(puVar8);
    _objc_release(puVar24);
    _objc_release(puVar12);
    _objc_release(puVar9);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar19);
    _objc_release(uVar25);
    _objc_release(uVar25);
    _objc_release(uVar23);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar1);
  _objc_retain(puVar20);
  uVar23 = *(undefined8 *)(puVar19 + 0x20);
  uVar22 = *(undefined8 *)(puVar19 + 0x28);
  func_0x00010c0f3b40(uVar22);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010c213ce0(uVar23);
  }
  else {
    func_0x00010bf07180();
    _objc_release(uVar22);
    uVar23 = *(undefined8 *)(puVar19 + 0x20);
    uVar22 = *(undefined8 *)(puVar19 + 0x28);
    func_0x00010c0f3b40(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ce0(uVar23);
    _objc_release(uVar22);
    uVar23 = *(undefined8 *)(puVar19 + 0x20);
    uVar22 = *(undefined8 *)(puVar19 + 0x28);
    func_0x00010c0f3b40(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8b60(uVar23);
  }
  _objc_release(uVar22);
  _objc_release(puVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062213b8; end: 1062217fb; -[SCSpotlightRepliesActionHandler _fetchPaginatedThreadedRepliesWithLastThreadedReply:] */

void FUN_1062213b8(long param_1,int param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d4c0();
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beb6a80();
  if ((int)lVar2 != 0) {
    uVar15 = *(undefined8 *)(param_1 + 8);
    puVar1 = param_3;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ce0(uVar15);
    _objc_release(puVar1);
    uVar16 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = param_3;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar15 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04620();
    _objc_release(uVar15);
    uVar18 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar18);
    uVar15 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar18);
    _objc_retain(param_3);
    func_0x00010bfa9ca0(uVar15);
    _objc_release(puVar3);
    _objc_release(puVar1);
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    puVar1 = param_3;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = param_3;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = param_3;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c072ae0(param_3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = *(undefined **)(param_1 + 0x10);
    puVar9 = param_3;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar17;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    if (puVar10 == (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x1a;
    param_4 = puVar12;
    func_0x00010c0a5a20(uVar14);
    _objc_release(puVar12);
    if (puVar10 == (undefined *)0x0) {
      _objc_release(puVar11);
    }
    _objc_release(puVar10);
    _objc_release(puVar17);
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(uVar18);
    _objc_release(uVar18);
    _objc_release(uVar16);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar15);
  _objc_retain(param_4);
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  uVar14 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0f3b40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010c213ce0(uVar16);
  }
  else {
    func_0x00010bf07180();
    _objc_release(uVar14);
    uVar16 = *(undefined8 *)(param_3 + 0x20);
    uVar14 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0f3b40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ce0(uVar16);
    _objc_release(uVar14);
    uVar16 = *(undefined8 *)(param_3 + 0x20);
    uVar14 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c0f3b40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8b60(uVar16);
  }
  _objc_release(uVar14);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 1062217fc; end: 1062218f3;  */

void FUN_1062217fc(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f3b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010c213ce0(uVar1);
  }
  else {
    func_0x00010bf07180();
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f3b40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213ce0(uVar1);
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f3b40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8b60(uVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062218f4; end: 106221ed7; -[SCSpotlightRepliesActionHandler _expandFirstPageOfThreadedRepliesUnderParentReply:] */

void FUN_1062218f4(long param_1,int param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar25 = *(long *)(param_1 + 0x10);
  puVar1 = param_3;
  func_0x00010c131d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe14c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar26 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = param_3;
  func_0x00010c131d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar27 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar27);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_106221ed8;
  puStack_130 = &UNK_1109177e8;
  _objc_retain(uVar27);
  uStack_128 = uVar27;
  _objc_retain(param_3);
  puStack_120 = param_3;
  _objc_retain(uVar2);
  ppuVar3 = &puStack_148;
  uStack_118 = uVar2;
  _objc_retainBlock();
  if (lVar25 == 0) {
    puVar1 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf046c0(uVar2);
    _objc_release(puVar1);
    uVar22 = *(undefined8 *)(param_1 + 0xc0);
    func_0x000108f51d40(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar22;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
    uVar22 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9ca0(uVar22);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(uVar24);
  }
  else {
    param_2 = 1;
    (*(code *)ppuVar3[2])(ppuVar3,1,lVar25,uVar26,0);
  }
  uVar24 = *(undefined8 *)(param_1 + 0x60);
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f42ff8;
  puVar1 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ea2238;
  puVar5 = param_3;
  puStack_c0 = puVar4;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f43058;
  puVar7 = param_3;
  puStack_b8 = puVar6;
  func_0x00010bfc9900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431b8;
  puVar9 = param_3;
  puStack_b0 = puVar8;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f431f8;
  puVar11 = param_3;
  puStack_a0 = puVar10;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f43358;
  puStack_98 = puVar12;
  func_0x00010c072ae0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f431d8;
  puVar14 = param_3;
  puStack_90 = puVar13;
  func_0x00010c0ca820(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10622b918();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f435d8;
  puVar16 = param_3;
  puStack_88 = puVar15;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  if (puVar16 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f43618;
  puVar18 = param_3;
  puStack_80 = puVar17;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar20;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = 0x18;
  puVar23 = puVar21;
  func_0x00010c0a5a20(uVar24);
  _objc_release(puVar21);
  if (puVar19 == (undefined *)0x0) {
    _objc_release(puVar20);
  }
  _objc_release(puVar19);
  _objc_release(puVar18);
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar17);
  }
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(ppuVar3);
  _objc_release(uStack_118);
  _objc_release(puStack_120);
  _objc_release(uStack_128);
  _objc_release(uVar2);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(lVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar22);
  _objc_retain(puVar23);
  uVar26 = *(undefined8 *)(param_3 + 0x28);
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c131d20(uVar26);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c131d20(uVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf07180(uVar2);
    _objc_release(uVar26);
    uVar26 = *(undefined8 *)(param_3 + 0x20);
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c131d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8b60(uVar26);
    _objc_release(uVar2);
    uVar26 = *(undefined8 *)(param_3 + 0x28);
    uVar2 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c131d20(uVar26);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf046c0(uVar2);
  _objc_release(uVar26);
  _objc_release(puVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar22);
  return;
}



/* Entry: 106221ed8; end: 106221fdb;  */

void FUN_106221ed8(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c131d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c131d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf07180(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c131d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8b60(uVar1);
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c131d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf046c0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106221fdc; end: 106221feb; -[SCSpotlightRepliesActionHandler _shouldStartFetchingWithFetchState:] */

bool FUN_106221fdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 3U < 0xfffffffffffffffe;
}



/* Entry: 106221fec; end: 106222063; -[SCSpotlightRepliesActionHandler _replyToCommentWithReply:interactionContext:parentCommentRequestId:] */

void FUN_106221fec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04600();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106222064; end: 1062225a7; -[SCSpotlightRepliesActionHandler _shareReplyWithSpotlightReply:avatarImage:attachmentImage:] */

/* WARNING: Possible PIC construction at 0x000106222560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106222564) */
/* WARNING: Removing unreachable block (ram,0x0001062225a4) */
/* WARNING: Removing unreachable block (ram,0x000106222584) */

void FUN_106222064(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *puVar27;
  
  _objc_retain(param_3);
  uVar26 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_3;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = param_3;
  func_0x00010bfc9900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c072ae0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar14 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  FUN_10622b918();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_3;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  if (puVar16 == (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar27 = *(undefined **)(param_1 + 0x10);
  puVar18 = param_3;
  func_0x00010c0f3b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c080();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar27;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = param_3;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  if (puVar21 == (undefined *)0x0) {
    puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(uVar26);
  _objc_release(puVar23);
  if (puVar21 == (undefined *)0x0) {
    _objc_release(puVar22);
  }
  _objc_release(puVar21);
  _objc_release(param_3);
  if (puVar19 == (undefined *)0x0) {
    _objc_release(puVar20);
  }
  _objc_release(puVar19);
  _objc_release(puVar27);
  _objc_release(puVar18);
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar17);
  }
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  uVar26 = *(undefined8 *)(param_1 + 0xb8);
  lVar24 = param_1;
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22adc0(uVar26);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar25);
  _objc_release(lVar24);
                    /* WARNING: Could not recover jumptable at 0x00010be60e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalPresentationOnCommentsTray_112575d40);
  return;
}



/* Entry: 1062225a8; end: 106222637; -[SCSpotlightRepliesActionHandler _shareContentFromTray] */

void FUN_1062225a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c0a5a20(*(undefined8 *)(param_1 + 0x60),param_2,0x1e,
                      PTR____NSDictionary0__struct_11034ab58);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  lVar1 = param_1;
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22a880(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be60e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__modalPresentationOnCommentsTray_112575d40);
  return;
}



/* Entry: 106222638; end: 1062227b7; -[SCSpotlightRepliesActionHandler _launchRepliesSettingPage] */

void FUN_106222638(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c9040;
  _objc_alloc();
  func_0x00010c0567e0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x78));
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5128;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x14;
  puVar7 = puVar5;
  func_0x00010c0a5a20(uVar8);
  _objc_release(puVar5);
  func_0x00010be60e80(param_1);
  _objc_release(puVar4);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1062227b8;
  uStack_90 = uVar8;
  puStack_88 = puVar4;
  puStack_80 = puVar2;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(uVar6);
  if ((puVar5[0x41] & 1) == 0) {
    puVar5[0x41] = 1;
    puVar2 = PTR_PTR_1126afde0;
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00010bf55ce0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf54760();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = *(undefined8 *)(puVar5 + 0x20);
    _objc_retain(uVar8);
    _objc_initWeak(auStack_98,puVar5);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x1062228c8;
    puStack_b8 = &UNK_110848218;
    uStack_b0 = uVar8;
    puStack_a8 = puVar2;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_d0);
    _objc_destroyWeak(auStack_a0);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_98);
    _objc_release(puVar2);
  }
  _objc_release(uVar6);
  return;
}



/* Entry: 1062227b8; end: 106222987; -[SCSpotlightRepliesActionHandler _showNotificationWithText:success:] */

void FUN_1062227b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    puVar1 = PTR_PTR_1126afde0;
    if ((param_4 & 1) == 0) {
      func_0x00010bf55ce0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf54760();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1062228c8;
    puStack_58 = &UNK_110848218;
    uStack_50 = uVar2;
    puStack_48 = puVar1;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
    _objc_destroyWeak(auStack_40);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106222988; end: 1062229b3;  */

void FUN_106222988(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062229b4; end: 1062229eb; -[SCSpotlightRepliesActionHandler _fetchReplyWithApprovalState:] */

void FUN_1062229b4(undefined8 param_1)

{
  func_0x00010c10fbe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062229ec; end: 106222bab; -[SCSpotlightRepliesActionHandler _showCharLimitNotification] */

void FUN_1062229ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    puVar2 = PTR_PTR_1126afde0;
    lVar1 = param_1;
    func_0x000106261bd8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106222aec;
    puStack_58 = &UNK_110848218;
    uStack_50 = uVar3;
    puStack_48 = puVar2;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
    _objc_destroyWeak(auStack_40);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 106222bac; end: 106222bd7;  */

void FUN_106222bac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106222bd8; end: 106222bdf; -[SCSpotlightRepliesActionHandler _resetIsShowingCharLimitNotification] */

void FUN_106222bd8(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 106222be0; end: 106222be7; -[SCSpotlightRepliesActionHandler _resetIsShowingPendingReviewNotification] */

void FUN_106222be0(long param_1)

{
  *(undefined1 *)(param_1 + 0x41) = 0;
  return;
}



/* Entry: 106222be8; end: 106222cd3; -[SCSpotlightRepliesActionHandler _shouldQuotingSpotlightReplyFeatureBeAvailable:] */

byte FUN_106222be8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1062687a4();
  if ((((int)uVar1 == 0) || (*(char *)(param_1 + 0x120) != '\x01')) ||
     (*(char *)(param_1 + 0x139) != '\x01')) {
    bVar5 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c131f40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      bVar5 = 0;
    }
    else {
      uVar2 = param_3;
      func_0x00010c131f40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000106261c20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,uVar3);
      if ((uVar4 & 1) == 0) {
        bVar5 = *(byte *)(param_1 + 0x138);
      }
      else {
        bVar5 = 0;
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return bVar5 & 1;
}



/* Entry: 106222cd4; end: 10622387f; -[SCSpotlightRepliesActionHandler _showActionMenuWithSpotlightReply:avatarImage:attachmentImage:] */

void FUN_106222cd4(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined **ppuStack_200;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = param_3;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_3;
  FUN_106268744();
  puVar9 = param_3;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0720c0();
  _objc_release(puVar9);
  puVar9 = auStack_80;
  _objc_initWeak(puVar9,param_1);
  if (((ulong)puVar3 & 1) != 0) goto LAB_1062236a0;
  puVar9 = param_3;
  FUN_1062687a4();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if (((int)puVar9 != 0) && (puVar9 = param_3, func_0x00010c132000(), puVar9 == (undefined1 *)0x1))
  {
    if (puVar2 == (undefined1 *)0x0) {
      puVar9 = param_3;
      func_0x00010bfc9900();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
    }
    else {
      puVar9 = *(undefined1 **)(param_1 + 0x10);
      puVar3 = param_3;
      func_0x00010c0f3b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24c080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar9;
      func_0x00010bfc9900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000106261ff8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar8;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106223880;
    puStack_a0 = &UNK_110917678;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    puStack_98 = param_3;
    _objc_retain(puVar3);
    puVar5 = puVar4;
    puStack_90 = puVar3;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar9);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(puStack_90);
    _objc_release(puStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar3);
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff);
  }
  if ((param_1[0x18] & 1) == 0) {
    puVar9 = param_3;
    func_0x00010c242640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c0720c0();
    _objc_release(puVar9);
    uVar12 = 0;
    if (puVar2 == (undefined1 *)0x0) {
      uVar12 = (uint)puVar3;
    }
    if ((uVar12 & 1) != 0) goto LAB_106222f60;
  }
  else if (puVar2 == (undefined1 *)0x0) {
LAB_106222f60:
    puVar9 = param_3;
    FUN_1062687a4();
    if ((int)puVar9 != 0) {
      puVar9 = param_3;
      func_0x00010c131a00();
      if (puVar9 == (undefined1 *)0x3) {
        func_0x000106261f50();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000106261f68();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar4 = PTR_PTR_1126b10a0;
      func_0x00010c0ec240(PTR_PTR_1126b10a0);
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = puVar8;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_10622398c;
      puStack_d0 = &UNK_110852d00;
      _objc_copyWeak(auStack_c0,auStack_80);
      _objc_retain(param_3);
      puVar5 = puVar4;
      puStack_c8 = param_3;
      func_0x00010bf1d200(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010befa120(puVar1);
      _objc_release(puVar5);
      _objc_release(puStack_c8);
      _objc_destroyWeak(auStack_c0);
      _objc_release(puVar9);
    }
  }
  puVar9 = param_3;
  FUN_1062687a4();
  puVar4 = PTR_PTR_1126b10a0;
  if (((int)puVar9 != 0) && (param_1[0xd0] == '\x01')) {
    func_0x000106261f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar8;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_106223a7c;
    puStack_110 = &UNK_1108d2968;
    _objc_copyWeak(auStack_f0,auStack_80);
    _objc_retain(param_3);
    puStack_108 = param_3;
    _objc_retain(param_4);
    uStack_100 = param_4;
    _objc_retain(param_5);
    puVar5 = puVar4;
    uStack_f8 = param_5;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar9);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(puStack_108);
    _objc_destroyWeak(auStack_f0);
  }
  if (param_1[0x90] == '\x01') {
    puVar9 = param_3;
    func_0x00010c242640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c0720c0();
    _objc_release(puVar9);
    puVar4 = PTR_PTR_1126b10a0;
    if ((int)puVar2 != 0) {
      func_0x000106261fe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec240(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_158 = puVar8;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_106223ba0;
      puStack_140 = &UNK_110852d00;
      _objc_copyWeak(auStack_130,auStack_80);
      _objc_retain(param_3);
      puVar5 = puVar4;
      puStack_138 = param_3;
      func_0x00010bf1d200(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar9);
      func_0x00010befa120(puVar1);
      _objc_release(puVar5);
      _objc_release(puStack_138);
      _objc_destroyWeak(auStack_130);
    }
  }
  puVar9 = param_1;
  func_0x00010beb51e0();
  puVar4 = PTR_PTR_1126b10a0;
  if ((int)puVar9 != 0) {
    func_0x000106261fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar8;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_106223c90;
    puStack_170 = &UNK_110852d00;
    _objc_copyWeak(auStack_160,auStack_80);
    _objc_retain(param_3);
    puVar5 = puVar4;
    puStack_168 = param_3;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar9);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(puStack_168);
    puVar9 = auStack_160;
    _objc_destroyWeak(puVar9);
  }
  if ((param_1[0x18] & 1) == 0) {
    puVar9 = param_3;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c0720c0();
    if ((int)puVar2 != 0) {
      _objc_release(puVar9);
      goto LAB_106223378;
    }
    puVar2 = param_3;
    func_0x00010c242640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar9);
    if ((int)puVar3 != 0) goto LAB_106223378;
  }
  else {
LAB_106223378:
    puVar4 = PTR_PTR_1126b10a0;
    func_0x000106261f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar8;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_106223d80;
    puStack_1a0 = &UNK_110852d00;
    _objc_copyWeak(auStack_190,auStack_80);
    _objc_retain(param_3);
    puVar5 = puVar4;
    puStack_198 = param_3;
    func_0x00010bf1d200(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar9);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
    _objc_release(puStack_198);
    puVar9 = auStack_190;
    _objc_destroyWeak(puVar9);
  }
  if (((ulong)puVar10 & 1) != 0) goto LAB_1062236a0;
  if ((param_1[0x138] & 1) == 0) {
    puVar9 = param_3;
    func_0x00010c131f80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c08fa60();
    _objc_release(puVar9);
    if (puVar2 != (undefined1 *)0x0) goto LAB_106223468;
  }
  else {
LAB_106223468:
    puVar9 = *(undefined1 **)(param_1 + 0x60);
    _objc_retain(puVar9);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar11);
    puStack_1f0 = puVar8;
    uStack_1e8 = 0xc2000000;
    pcStack_1e0 = FUN_106223e70;
    puStack_1d8 = &UNK_110848ba8;
    _objc_retain(puVar9);
    puStack_1d0 = puVar9;
    _objc_retain(param_3);
    puStack_1c8 = param_3;
    _objc_retain(uVar11);
    ppuVar6 = &puStack_1f0;
    uStack_1c0 = uVar11;
    _objc_retainBlock();
    puVar8 = PTR_PTR_1126b10a0;
    ppuVar7 = ppuVar6;
    func_0x000106262100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_1062242bc;
    puStack_210 = &UNK_110917818;
    _objc_copyWeak(auStack_1f8,auStack_80);
    _objc_retain(param_3);
    puStack_208 = param_3;
    _objc_retain(ppuVar6);
    puVar4 = puVar8;
    ppuStack_200 = ppuVar6;
    func_0x00010bf1d200(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
    _objc_release(ppuStack_200);
    _objc_release(puStack_208);
    _objc_destroyWeak(auStack_1f8);
    _objc_release(ppuVar6);
    _objc_release(uStack_1c0);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1d0);
    _objc_release(uVar11);
    _objc_release(puVar9);
  }
  puVar8 = PTR_PTR_1126b10a0;
  func_0x000106261f38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_230,auStack_80);
  _objc_retain(param_3);
  puVar4 = puVar8;
  func_0x00010bf1d200(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar9);
  func_0x00010befa120(puVar1);
  _objc_release(puVar4);
  _objc_release(param_3);
  puVar9 = auStack_230;
  _objc_destroyWeak(puVar9);
LAB_1062236a0:
  puVar8 = PTR_PTR_1126b10a0;
  func_0x000106261bf0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar8;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar9);
  puVar8 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10af80();
  _objc_release(puVar9);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106223880; end: 106223953;  */

void FUN_106223880(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106223954; end: 10622398b;  */

void FUN_106223954(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8f220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10622398c; end: 106223a47;  */

void FUN_10622398c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106223a48; end: 106223a7b;  */

void FUN_106223a48(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde39a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106223a7c; end: 106223b67;  */

void FUN_106223a7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106223b68; end: 106223b9f;  */

void FUN_106223b68(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb1e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106223ba0; end: 106223c5b;  */

void FUN_106223ba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106223c5c; end: 106223c8f;  */

void FUN_106223c5c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106223c90; end: 106223d4b;  */

void FUN_106223c90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106223d4c; end: 106223d7f;  */

void FUN_106223d4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106223d80; end: 106223e3b;  */

void FUN_106223d80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106223e3c; end: 106223e6f;  */

void FUN_106223e3c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106223e70; end: 1062242bb;  */

void FUN_106223e70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f42ff8;
  uStack_140 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puStack_178 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ea2238;
  puVar2 = *(undefined **)(param_1 + 0x28);
  puStack_c8 = puStack_178;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar2;
  puStack_130 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puStack_180 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f43038;
  puVar2 = *(undefined **)(param_1 + 0x28);
  puStack_c0 = puStack_180;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puStack_188 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f43058;
  puVar3 = *(undefined **)(param_1 + 0x28);
  puStack_138 = puVar2;
  puStack_128 = puVar1;
  puStack_b8 = puStack_188;
  func_0x00010bfc9900();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puStack_190 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431b8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_b0 = puStack_190;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = uVar4;
  func_0x00010bf529e0();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431f8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_150 = puVar1;
  puStack_a0 = puVar1;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = uVar4;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f431d8;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_160 = uVar4;
  uStack_98 = uVar4;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uVar5;
  FUN_10622b918();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435d8;
  puVar2 = *(undefined **)(param_1 + 0x28);
  puStack_170 = puVar1;
  puStack_90 = puVar1;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puStack_198 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435f8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = *(undefined **)(param_1 + 0x30);
  puStack_88 = puStack_198;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43618;
  puVar8 = *(undefined **)(param_1 + 0x28);
  puStack_80 = puVar7;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(uStack_140);
  _objc_release(puVar11);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar9 = puStack_130;
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(uVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puStack_198);
  }
  _objc_release(puVar2);
  _objc_release(puStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(puStack_150);
  _objc_release(uStack_148);
  puVar1 = puStack_138;
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puStack_190);
  }
  _objc_release(puVar3);
  puVar2 = puStack_128;
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puStack_188);
  }
  _objc_release(puVar1);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puStack_180);
  }
  _objc_release(puVar9);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puStack_178);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_1c8 = puVar1;
  puStack_1c0 = puVar9;
  puStack_1b8 = puVar2;
  pcStack_1a8 = FUN_1062242bc;
  uStack_1d0 = uVar4;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_1d8,puVar3 + 0x30);
  uVar5 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(puVar3 + 0x28);
  _objc_retain(uVar4);
  func_0x00010bf83000(param_2);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(param_2);
  return;
}



/* Entry: 1062242bc; end: 10622438f;  */

void FUN_1062242bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106224390; end: 1062243ef;  */

void FUN_106224390(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c131f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd4f20(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062243f0; end: 1062244ab;  */

void FUN_1062243f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1062244ac; end: 1062244df;  */

void FUN_1062244ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062244e0; end: 1062244eb;  */

void FUN_1062244e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheetWithCompletion_1125be5a8,0)
  ;
  return;
}



/* Entry: 1062244ec; end: 106224713; -[SCSpotlightRepliesActionHandler _showDialogWithTitle:dialogText:actionTitle:cancelTitle:completion:] */

void FUN_1062244ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126aed70;
  if (param_5 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106224714;
    puStack_70 = &UNK_11084e500;
    _objc_retain(param_7);
    uStack_68 = param_7;
    func_0x00010beff4c0(puVar2,param_2,param_5,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uStack_68);
  }
  if (param_6 != 0) {
    puVar2 = PTR_PTR_1126aed70;
    func_0x00010beff4c0(PTR_PTR_1126aed70,param_2,param_6,&PTR___NSConcreteGlobalBlock_110917868);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  func_0x00010bfefea0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c211b40(puVar2,param_2,1);
  puVar3 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar3);
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106224714; end: 106224733;  */

void FUN_106224714(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106224734; end: 10622490f; -[SCSpotlightRepliesActionHandler _completionOfTopReplyOptionWithSpotlightReply:] */

void FUN_106224734(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_1062687a4();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c131a00();
    if (lVar1 == 3) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010c1317a0();
      if (lVar1 == 0) {
        func_0x000106261d10();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x000106261d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x000106261b48();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000106261d28();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x000106261d58();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x000106261b78();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar4 = lVar3;
      func_0x000106261b18();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      func_0x00010beb8ae0(param_1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      func_0x00010be8db40(param_1);
    }
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106224910; end: 106224943;  */

void FUN_106224910(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8ed60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106224944; end: 106224f7f; -[SCSpotlightRepliesActionHandler _reactWithReply:reactionTypeId:gesture:] */

void FUN_106224944(undefined *param_1,undefined1 *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  puVar8 = param_5;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined ***)(param_1 + 0x30);
    puVar2 = puVar1;
    func_0x00010c120d20();
    if ((param_5 != (undefined *)0x8) || (unaff_x23 == (undefined **)0x0)) {
      func_0x00010c1e7d80(*(undefined8 *)(param_1 + 0x30));
      if (unaff_x23 != (undefined **)0x0) {
        func_0x00010be86080(param_1);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        puVar2 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f760(uVar9);
        _objc_release(puVar2);
      }
      if (unaff_x23 != (undefined **)param_4) {
        puVar2 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar2);
        func_0x00010be86080(param_1);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        puVar2 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f760(uVar9);
        _objc_release(puVar2);
      }
      puStack_180 = (undefined *)0x6;
      if (unaff_x23 != (undefined **)0x0) {
        puStack_180 = (undefined *)0x7;
      }
      uStack_188 = *(undefined8 *)(param_1 + 0x60);
      ppuStack_150 = &PTR____CFConstantStringClassReference_110f42ff8;
      puVar2 = param_3;
      func_0x00010c131d20();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        puStack_1d0 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_148 = &PTR____CFConstantStringClassReference_110ea2238;
      puVar3 = param_3;
      puStack_e0 = puStack_1d0;
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d8 = puVar3;
      puStack_168 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puStack_1d8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_140 = &PTR____CFConstantStringClassReference_110f43038;
      puVar3 = param_3;
      puStack_d8 = puStack_1d8;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e0 = puVar3;
      puStack_170 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puStack_1e0 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110f430b8;
      ppuStack_130 = &PTR____CFConstantStringClassReference_110f43218;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110db0518;
      ppuStack_128 = &PTR____CFConstantStringClassReference_110f43058;
      puVar3 = param_3;
      puStack_160 = puVar2;
      puStack_d0 = puStack_1e0;
      func_0x00010bfc9900();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e8 = puVar3;
      puStack_178 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puStack_1e8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_120 = &PTR____CFConstantStringClassReference_110f431b8;
      puVar3 = param_3;
      puStack_158 = puVar1;
      puStack_b8 = puStack_1e8;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      puStack_190 = puVar3;
      func_0x00010bf529e0();
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_118 = &PTR____CFConstantStringClassReference_110f431f8;
      puVar3 = param_3;
      puStack_198 = puVar2;
      puStack_b0 = puVar2;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a0 = puVar3;
      FUN_10622ba5c();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_110 = &PTR____CFConstantStringClassReference_110f43358;
      puStack_1a8 = puVar3;
      puStack_a8 = puVar3;
      func_0x00010c072ae0(param_3);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_108 = &PTR____CFConstantStringClassReference_110ed79b8;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_1b0 = puVar2;
      puStack_a0 = puVar2;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110f431d8;
      puVar8 = param_3;
      puStack_1b8 = puVar3;
      puStack_98 = puVar3;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar8;
      FUN_10622b918();
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110f435d8;
      puVar1 = param_3;
      puStack_1c8 = puVar2;
      puStack_90 = puVar2;
      FUN_10623cbd8();
      _objc_retainAutoreleasedReturnValue();
      puStack_1f0 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        puStack_1f0 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110f435f8;
      puVar10 = *(undefined **)(param_1 + 0x10);
      param_1 = param_3;
      puStack_88 = puStack_1f0;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24c080();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = puVar10;
      FUN_10623cbd8();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = unaff_x25;
      if (unaff_x25 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110f43618;
      puVar5 = param_3;
      puStack_80 = puVar4;
      func_0x00010c131a20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar5;
      FUN_10623ce14();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = unaff_x24;
      if (unaff_x24 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = (undefined *)0xe;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar6;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puStack_180;
      puVar3 = puVar7;
      func_0x00010c0a5a20(uStack_188);
      _objc_release(puVar7);
      if (unaff_x24 == (undefined *)0x0) {
        _objc_release(puVar6);
      }
      _objc_release(unaff_x24);
      _objc_release(puVar5);
      param_4 = puStack_168;
      if (unaff_x25 == (undefined *)0x0) {
        _objc_release(puVar4);
      }
      _objc_release(unaff_x25);
      _objc_release(puVar10);
      _objc_release(param_1);
      unaff_x20 = puStack_160;
      if (puVar1 == (undefined *)0x0) {
        _objc_release(puStack_1f0);
      }
      _objc_release(puVar1);
      _objc_release(puStack_1c8);
      _objc_release(puStack_1c0);
      _objc_release(puStack_1b8);
      _objc_release(puStack_1b0);
      _objc_release(puStack_1a8);
      _objc_release(puStack_1a0);
      _objc_release(puStack_198);
      _objc_release(puStack_190);
      puVar1 = puStack_158;
      param_5 = puStack_170;
      unaff_x23 = (undefined **)puStack_178;
      if (puStack_178 == (undefined *)0x0) {
        _objc_release(puStack_1e8);
      }
      _objc_release(unaff_x23);
      if (param_5 == (undefined *)0x0) {
        _objc_release(puStack_1e0);
      }
      _objc_release(param_5);
      if (param_4 == (undefined *)0x0) {
        _objc_release(puStack_1d8);
      }
      _objc_release(param_4);
      if (unaff_x20 == (undefined *)0x0) {
        _objc_release(puStack_1d0);
      }
      _objc_release(unaff_x20);
    }
    _objc_release(puVar1);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_106224f80;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puStack_240 = param_1;
  puStack_238 = unaff_x25;
  puStack_230 = unaff_x24;
  puStack_228 = (undefined *)unaff_x23;
  puStack_220 = param_5;
  puStack_218 = param_4;
  puStack_210 = unaff_x20;
  puStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar10 = puVar2;
    func_0x00010c132000();
    if (puVar10 == (undefined *)0x0) {
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_250 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc8000(puVar1);
        _objc_release(puVar4);
      }
      else {
        uVar9 = *(undefined8 *)(puVar1 + 8);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_258 = puVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010c0f3b40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf07180(uVar9);
        _objc_release(puVar10);
        _objc_release(puVar4);
      }
    }
    else {
      func_0x00010bede840(puVar1);
    }
    _objc_initWeak(auStack_260,puVar1);
    uVar9 = *(undefined8 *)(puVar1 + 0x160);
    puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_298 = 0xc2000000;
    pcStack_290 = FUN_1062251ac;
    puStack_288 = &UNK_110917888;
    param_2 = auStack_260;
    _objc_copyWeak(auStack_270,param_2);
    _objc_retain(puVar2);
    puStack_280 = puVar2;
    puStack_268 = puVar3;
    _objc_retain(puVar8);
    puVar4 = puVar2;
    puStack_278 = puVar8;
    func_0x00010c13a740(uVar9);
    _objc_release(puStack_278);
    _objc_release(puStack_280);
    _objc_destroyWeak(auStack_270);
    _objc_destroyWeak(auStack_260);
    unaff_x23 = &puStack_2a0;
  }
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)unaff_x23 + 0x30));
  _objc_destroyWeak(auStack_260);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar2 = puVar2 + 0x30;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010bede8a0(puVar2);
    }
    else {
      func_0x00010be76820(puVar2);
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106224f80; end: 1062251ab; -[SCSpotlightRepliesActionHandler _postReply:gesture:parentCommentRequestId:] */

void FUN_106224f80(long param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = param_3;
    func_0x00010c132000();
    if (uVar2 == 0) {
      if (uVar1 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_60 = param_3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc8000(param_1);
        _objc_release(puVar3);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 8);
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_68 = param_3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c0f3b40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf07180(uVar5);
        _objc_release(uVar1);
        _objc_release(puVar3);
      }
    }
    else {
      func_0x00010bede840(param_1);
    }
    _objc_initWeak(auStack_70,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x160);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1062251ac;
    puStack_98 = &UNK_110917888;
    param_2 = auStack_70;
    _objc_copyWeak(auStack_80,param_2);
    _objc_retain(param_3);
    uStack_90 = param_3;
    uStack_78 = param_4;
    _objc_retain(param_5);
    uVar1 = param_3;
    uStack_88 = param_5;
    func_0x00010c13a740(uVar5);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    unaff_x23 = &puStack_b0;
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x30));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar4 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    if ((uVar1 & 1) == 0) {
      func_0x00010bede8a0(lVar4);
    }
    else {
      func_0x00010be76820(lVar4);
    }
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062251ac; end: 10622522f;  */

void FUN_1062251ac(long param_1,undefined8 param_2,ulong param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_3 & 1) == 0) {
      func_0x00010bede8a0(param_1);
    }
    else {
      func_0x00010be76820(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106225230; end: 10622585f; -[SCSpotlightRepliesActionHandler _postResolvedReply:optimisticReply:gesture:parentCommentRequestId:] */

void FUN_106225230(undefined *param_1,int param_2,undefined *param_3,undefined *param_4,
                  ulong param_5,undefined *param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined1 uVar30;
  long lVar31;
  undefined *unaff_x22;
  undefined *puVar32;
  undefined *unaff_x23;
  undefined8 uVar33;
  undefined *unaff_x24;
  undefined *unaff_x26;
  undefined *unaff_x28;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined1 auStack_368 [8];
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  ulong uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  ulong uStack_138;
  undefined1 uStack_130;
  undefined1 auStack_128 [8];
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar29 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  puStack_190 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 != (undefined *)0x0) {
    lVar31 = *(long *)(param_1 + 0x10);
    unaff_x22 = puStack_190;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = unaff_x22;
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(unaff_x22);
    param_4 = (undefined *)0x0;
    if (lVar31 != 0) {
      uVar30 = (undefined1)*(undefined8 *)(param_1 + 0x38);
      puVar29 = param_3;
      func_0x00010c242640(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(puVar29);
      uStack_1b8 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain();
      uStack_1a8 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain();
      _objc_initWeak(auStack_128,param_1);
      uVar33 = *(undefined8 *)(param_1 + 0x28);
      puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_106225860;
      puStack_170 = &UNK_1109178b8;
      param_2 = (int)auStack_128;
      _objc_copyWeak(auStack_140);
      puVar29 = puStack_190;
      _objc_retain(puStack_190);
      puStack_168 = puVar29;
      uStack_160 = uStack_1b8;
      _objc_retain(param_3);
      puStack_158 = param_3;
      uStack_138 = param_5;
      _objc_retain(param_6);
      uStack_148 = uStack_1a8;
      puStack_150 = param_6;
      uStack_130 = uVar30;
      func_0x00010c105240(uVar33);
      puStack_1f8 = *(undefined **)(param_1 + 0x60);
      ppuStack_120 = &PTR____CFConstantStringClassReference_110f43038;
      puVar29 = param_3;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      puStack_200 = puVar29;
      puStack_198 = puVar29;
      if (puVar29 == (undefined *)0x0) {
        puStack_200 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
      ppuStack_118 = &PTR____CFConstantStringClassReference_110f430b8;
      ppuStack_110 = &PTR____CFConstantStringClassReference_110f431b8;
      puVar2 = param_3;
      puStack_c8 = puStack_200;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = puVar2;
      func_0x00010bf529e0(puVar2);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_108 = &PTR____CFConstantStringClassReference_110f431f8;
      puVar2 = param_3;
      puStack_1c0 = puVar29;
      puStack_b8 = puVar29;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c8 = puVar2;
      FUN_10622ba5c();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110f431d8;
      puVar3 = param_3;
      puStack_1d0 = puVar2;
      puStack_b0 = puVar2;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      puStack_1d8 = puVar3;
      FUN_10622b918(puVar3);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110ed79b8;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_1e0 = puVar29;
      puStack_a8 = puVar29;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110f43078;
      puStack_208 = param_6;
      puStack_a0 = puVar3;
      if (param_6 == (undefined *)0x0) {
        puStack_208 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110f435d8;
      puVar29 = param_3;
      puStack_98 = puStack_208;
      FUN_10623cbd8();
      _objc_retainAutoreleasedReturnValue();
      puStack_210 = puVar29;
      puStack_1a0 = puVar29;
      if (puVar29 == (undefined *)0x0) {
        puStack_210 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435f8;
      unaff_x28 = *(undefined **)(param_1 + 0x10);
      puVar29 = param_3;
      puStack_90 = puStack_210;
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e8 = puVar29;
      func_0x00010c24c080();
      _objc_retainAutoreleasedReturnValue();
      puStack_1f0 = unaff_x28;
      FUN_10623cbd8();
      _objc_retainAutoreleasedReturnValue();
      puStack_218 = unaff_x28;
      if (unaff_x28 == (undefined *)0x0) {
        puStack_218 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110f43618;
      unaff_x24 = param_3;
      puStack_88 = puStack_218;
      func_0x00010c131a20();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x24;
      FUN_10623ce14();
      _objc_retainAutoreleasedReturnValue();
      param_1 = unaff_x22;
      if (unaff_x22 == (undefined *)0x0) {
        param_1 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      unaff_x26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43658;
      unaff_x23 = param_3;
      puStack_80 = param_1;
      func_0x00010c131a20();
      _objc_retainAutoreleasedReturnValue();
      FUN_10623cf54();
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = unaff_x26;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = (undefined *)0x1;
      puVar2 = puVar4;
      func_0x00010c0a5a20(puStack_1f8);
      param_5 = (ulong)(unaff_x22 == (undefined *)0x0);
      puStack_1f8 = puVar3;
      _objc_release(puVar4);
      _objc_release(unaff_x26);
      _objc_release(unaff_x23);
      if (unaff_x22 == (undefined *)0x0) {
        _objc_release(param_1);
      }
      _objc_release(unaff_x22);
      _objc_release(unaff_x24);
      if (unaff_x28 == (undefined *)0x0) {
        _objc_release(puStack_218);
      }
      bVar1 = puStack_1a0 == (undefined *)0x0;
      _objc_release(unaff_x28);
      _objc_release(puStack_1f0);
      _objc_release(puStack_1e8);
      if (bVar1) {
        _objc_release(puStack_210);
      }
      _objc_release(puStack_1a0);
      if (param_6 == (undefined *)0x0) {
        _objc_release(puStack_208);
      }
      bVar1 = puStack_198 == (undefined *)0x0;
      param_4 = (undefined *)(ulong)bVar1;
      _objc_release(puStack_1f8);
      _objc_release(puStack_1e0);
      _objc_release(puStack_1d8);
      _objc_release(puStack_1d0);
      _objc_release(puStack_1c8);
      _objc_release(puStack_1c0);
      _objc_release(puStack_1b0);
      if (bVar1) {
        _objc_release(puStack_200);
      }
      _objc_release(puStack_198);
      _objc_release(puStack_150);
      _objc_release(puStack_158);
      _objc_release(puStack_168);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_128);
      _objc_release(uStack_1a8);
      _objc_release(uStack_1b8);
    }
  }
  _objc_release(param_6);
  _objc_release(puStack_190);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_128);
  puVar4 = param_3;
  __Unwind_Resume();
  pcStack_228 = FUN_106225860;
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_280 = unaff_x28;
  puStack_278 = param_1;
  puStack_270 = unaff_x26;
  uStack_268 = param_5;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = unaff_x22;
  puStack_248 = param_6;
  puStack_240 = param_4;
  puStack_238 = param_3;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(puVar29);
  puVar3 = puVar4 + 0x48;
  _objc_loadWeakRetained(puVar3);
  func_0x00010bede8a0();
  _objc_release(puVar3);
  if (param_2 != 0) {
    ppuStack_360 = &PTR____CFConstantStringClassReference_110f43038;
    uVar33 = *(undefined8 *)(puVar4 + 0x28);
    puVar3 = *(undefined **)(puVar4 + 0x30);
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_358 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar6 = puVar29;
    puStack_2f8 = puVar5;
    if (puVar29 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_350 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar7 = *(undefined **)(puVar4 + 0x30);
    puStack_2f0 = puVar6;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
    ppuStack_348 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_340 = &PTR____CFConstantStringClassReference_110f431b8;
    uVar9 = *(undefined8 *)(puVar4 + 0x30);
    puStack_2e8 = puVar8;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_338 = &PTR____CFConstantStringClassReference_110f431f8;
    uVar11 = *(undefined8 *)(puVar4 + 0x30);
    puStack_2d8 = puVar10;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_330 = &PTR____CFConstantStringClassReference_110f431d8;
    uVar13 = *(undefined8 *)(puVar4 + 0x30);
    uStack_2d0 = uVar12;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_328 = &PTR____CFConstantStringClassReference_110ed79b8;
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2c8 = puVar14;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_320 = &PTR____CFConstantStringClassReference_110f43078;
    puVar16 = *(undefined **)(puVar4 + 0x38);
    puVar17 = puVar16;
    puStack_2c0 = puVar15;
    if (puVar16 == (undefined *)0x0) {
      puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_318 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar18 = *(undefined **)(puVar4 + 0x30);
    puStack_2b8 = puVar17;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    if (puVar18 == (undefined *)0x0) {
      puVar19 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_310 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar32 = *(undefined **)(puVar4 + 0x40);
    uVar20 = *(undefined8 *)(puVar4 + 0x30);
    puStack_2b0 = puVar19;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar32;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    if (puVar21 == (undefined *)0x0) {
      puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_308 = &PTR____CFConstantStringClassReference_110f43618;
    puVar23 = *(undefined **)(puVar4 + 0x30);
    puStack_2a8 = puVar22;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    if (puVar24 == (undefined *)0x0) {
      puVar25 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_300 = &PTR____CFConstantStringClassReference_110f43658;
    uVar26 = *(undefined8 *)(puVar4 + 0x30);
    puStack_2a0 = puVar25;
    func_0x00010c131a20(uVar26);
    _objc_retainAutoreleasedReturnValue();
    FUN_10623cf54();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_298 = puVar27;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a20(uVar33);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(uVar26);
    if (puVar24 == (undefined *)0x0) {
      _objc_release(puVar25);
    }
    _objc_release(puVar24);
    _objc_release(puVar23);
    if (puVar21 == (undefined *)0x0) {
      _objc_release(puVar22);
    }
    _objc_release(puVar21);
    _objc_release(puVar32);
    _objc_release(uVar20);
    if (puVar18 == (undefined *)0x0) {
      _objc_release(puVar19);
    }
    _objc_release(puVar18);
    if (puVar16 == (undefined *)0x0) {
      _objc_release(puVar17);
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    if (puVar29 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    if ((puVar2 == (undefined *)0x3) && ((puVar4[0x58] & 1) == 0)) {
      puStack_398 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_390 = 0xc2000000;
      pcStack_388 = FUN_106225e1c;
      puStack_380 = &UNK_110848218;
      _objc_copyWeak(auStack_368,puVar4 + 0x48);
      uVar33 = *(undefined8 *)(puVar4 + 0x30);
      _objc_retain(uVar33);
      uStack_378 = uVar33;
      _objc_retain(puVar29);
      puStack_370 = puVar29;
      func_0x000100c749e0(0x40000000,"APPSTORE",&puStack_398);
      _objc_release(puStack_370);
      _objc_release(uStack_378);
      _objc_destroyWeak(auStack_368);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar2 = puVar29 + 0x30;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bee2400();
  _objc_release(puVar2);
  puVar29 = puVar29 + 0x30;
  _objc_loadWeakRetained(puVar29);
  func_0x00010be38740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar29);
  return;
}



/* Entry: 106225860; end: 106225e1b;  */

void FUN_106225860(long param_1,int param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bede8a0();
  _objc_release(lVar1);
  if (param_2 != 0) {
    ppuStack_140 = &PTR____CFConstantStringClassReference_110f43038;
    uVar27 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = *(undefined **)(param_1 + 0x30);
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_138 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar4 = param_3;
    puStack_d8 = puVar3;
    if (param_3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_130 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar5 = *(undefined **)(param_1 + 0x30);
    puStack_d0 = puVar4;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f431b8;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puStack_c8 = puVar6;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f431f8;
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    puStack_b8 = puVar8;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f431d8;
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = uVar10;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110ed79b8;
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a8 = puVar12;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f43078;
    puVar14 = *(undefined **)(param_1 + 0x38);
    puVar15 = puVar14;
    puStack_a0 = puVar13;
    if (puVar14 == (undefined *)0x0) {
      puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar16 = *(undefined **)(param_1 + 0x30);
    puStack_98 = puVar15;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    if (puVar16 == (undefined *)0x0) {
      puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar28 = *(undefined **)(param_1 + 0x40);
    uVar18 = *(undefined8 *)(param_1 + 0x30);
    puStack_90 = puVar17;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar28;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    if (puVar19 == (undefined *)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f43618;
    puVar21 = *(undefined **)(param_1 + 0x30);
    puStack_88 = puVar20;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    if (puVar22 == (undefined *)0x0) {
      puVar23 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f43658;
    uVar24 = *(undefined8 *)(param_1 + 0x30);
    puStack_80 = puVar23;
    func_0x00010c131a20(uVar24);
    _objc_retainAutoreleasedReturnValue();
    FUN_10623cf54();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar25;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a20(uVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(uVar24);
    if (puVar22 == (undefined *)0x0) {
      _objc_release(puVar23);
    }
    _objc_release(puVar22);
    _objc_release(puVar21);
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puVar20);
    }
    _objc_release(puVar19);
    _objc_release(puVar28);
    _objc_release(uVar18);
    if (puVar16 == (undefined *)0x0) {
      _objc_release(puVar17);
    }
    _objc_release(puVar16);
    if (puVar14 == (undefined *)0x0) {
      _objc_release(puVar15);
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    if ((param_4 == 3) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) {
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_106225e1c;
      puStack_160 = &UNK_110848218;
      _objc_copyWeak(auStack_148,param_1 + 0x48);
      uVar27 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar27);
      uStack_158 = uVar27;
      _objc_retain(param_3);
      puStack_150 = param_3;
      func_0x000100c749e0(0x40000000,"APPSTORE",&puStack_178);
      _objc_release(puStack_150);
      _objc_release(uStack_158);
      _objc_destroyWeak(auStack_148);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar2 = param_3 + 0x30;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bee2400();
  _objc_release(puVar2);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be38740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106225e1c; end: 106225e67;  */

void FUN_106225e1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee2400();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be38740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106225e68; end: 10622649b; -[SCSpotlightRepliesActionHandler _reportReply:] */

void FUN_106225e68(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined *puVar28;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
    FUN_1062687a4(param_3);
    uVar26 = *(undefined8 *)(param_1 + 0x60);
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f42ff8;
    ppuVar2 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110ea2238;
    ppuVar4 = param_3;
    ppuStack_c8 = ppuVar3;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f43038;
    ppuVar6 = param_3;
    ppuStack_c0 = ppuVar5;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f43058;
    ppuVar8 = param_3;
    ppuStack_b8 = ppuVar7;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f430b8;
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = ppuVar9;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(uint)ppuVar1 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431b8;
    ppuVar1 = param_3;
    puStack_a8 = puVar10;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar1;
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar12,param_2,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431f8;
    ppuVar11 = param_3;
    puStack_a0 = puVar12;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar11;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f431d8;
    ppuVar14 = param_3;
    ppuStack_98 = ppuVar13;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar14;
    FUN_10622b918();
    func_0x00010c0df6e0(puVar16,param_2,ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435d8;
    ppuVar15 = param_3;
    puStack_90 = puVar16;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar15;
    if (ppuVar15 == (undefined **)0x0) {
      ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar28 = *(undefined **)(param_1 + 0x10);
    ppuVar18 = param_3;
    ppuStack_88 = ppuVar17;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080(puVar28,param_2,ppuVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar28;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    if (puVar19 == (undefined *)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43618;
    ppuVar21 = param_3;
    puStack_80 = puVar20;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar21;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar22;
    if (ppuVar22 == (undefined **)0x0) {
      ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_78 = ppuVar23;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_c8,&ppuStack_120,
                        0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a20(uVar26,param_2,2,puVar24);
    _objc_release(puVar24);
    if (ppuVar22 == (undefined **)0x0) {
      _objc_release(ppuVar23);
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puVar20);
    }
    _objc_release(puVar19);
    _objc_release(puVar28);
    _objc_release(ppuVar18);
    if (ppuVar15 == (undefined **)0x0) {
      _objc_release(ppuVar17);
    }
    _objc_release(ppuVar15);
    _objc_release(puVar16);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar11);
    _objc_release(puVar12);
    _objc_release(ppuVar1);
    _objc_release(puVar10);
    if (ppuVar8 == (undefined **)0x0) {
      _objc_release(ppuVar9);
    }
    _objc_release(ppuVar8);
    if (ppuVar6 == (undefined **)0x0) {
      _objc_release(ppuVar7);
    }
    _objc_release(ppuVar6);
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar4);
    if (ppuVar2 == (undefined **)0x0) {
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar2);
    lVar27 = *(long *)(param_1 + 0xf0);
    if (lVar27 - 10U < 2) {
      uVar25 = 2;
    }
    else {
      uVar25 = 3;
      if (((lVar27 != 1) && (lVar27 != 0xf)) && (uVar25 = 0, *(long *)(param_1 + 0xe0) != 0)) {
        uVar25 = 4;
      }
    }
    _objc_retain(param_3);
    uVar26 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined ***)(param_1 + 0xe8) = param_3;
    _objc_release(uVar26);
    ppuVar1 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar1;
    func_0x000100576e9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar2 = param_3;
    if (*(char *)(param_1 + 0x138) == '\x01') {
      func_0x00010c131f60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = param_3;
      func_0x00010c131f80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar1;
      func_0x00010c08fa60();
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        func_0x00010c131f60();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar1);
    }
    puVar12 = PTR_PTR_1126c9048;
    _objc_alloc();
    ppuVar1 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0b5940(ppuVar3);
    ppuVar5 = ppuVar3;
    func_0x00010bfe2ee0(ppuVar3);
    func_0x00010c03e900(puVar12,param_2,ppuVar2,ppuVar1,ppuVar4,ppuVar5,uVar25);
    _objc_release(ppuVar1);
    ppuVar4 = (undefined **)PTR_PTR_1126b2e98;
    func_0x00010c2594e0(PTR_PTR_1126b2e98,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar4;
    func_0x00010be90640(param_1,param_2,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(puVar12);
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar12 = PTR_PTR_1126aead8;
    _objc_retain(ppuVar1);
    _objc_alloc(puVar12);
    ppuVar2 = param_3;
    func_0x00010c10fbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010beee620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar12,param_2,ppuVar3,1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    puVar16 = PTR_PTR_1126b2ec8;
    _objc_alloc(PTR_PTR_1126b2ec8);
    func_0x00010c0587e0();
    _objc_release(ppuVar1);
    func_0x00010bf9d620(param_3[9],param_2,puVar16);
    func_0x00010be60e80(param_3);
    _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar12);
    return;
  }
  return;
}



/* Entry: 10622649c; end: 10622658f; -[SCSpotlightRepliesActionHandler _reportWithReportParams:] */

void FUN_10622649c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  func_0x00010c0587e0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar4);
  func_0x00010be60e80(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106226590; end: 106226bbf; -[SCSpotlightRepliesActionHandler _approveReply:] */

void FUN_106226590(ulong param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  bool bVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  ulong unaff_x20;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *unaff_x21;
  undefined8 uVar33;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [8];
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  ulong uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  ulong uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  ulong uStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    uVar31 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d16a0(uVar31);
    _objc_release(puVar2);
    _objc_initWeak(auStack_130,param_1);
    uVar31 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_106226bc0;
    puStack_148 = &UNK_11084b7a0;
    param_2 = auStack_130;
    _objc_copyWeak(auStack_138);
    _objc_retain(param_3);
    puStack_140 = param_3;
    func_0x00010c28a300(uVar31);
    _objc_release(puVar29);
    _objc_release(puVar2);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x60);
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar2 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar2;
    puStack_170 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puStack_1c8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_120 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar2 = param_3;
    puStack_d0 = puStack_1c8;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puVar2;
    puStack_180 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puStack_1d0 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f43038;
    puVar2 = param_3;
    puStack_c8 = puStack_1d0;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar2;
    puStack_178 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puStack_1d8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f43058;
    puVar2 = param_3;
    puStack_c0 = puStack_1d8;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puVar2;
    puStack_168 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puStack_1e0 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5128;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f431b8;
    puVar29 = param_3;
    puStack_b8 = puStack_1e0;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar29;
    func_0x00010bf529e0(puVar29);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431f8;
    puVar29 = param_3;
    puStack_198 = puVar2;
    puStack_a8 = puVar2;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar29;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431d8;
    puVar3 = param_3;
    puStack_1a8 = puVar29;
    puStack_a0 = puVar29;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar3;
    FUN_10622b918(puVar3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar29 = param_3;
    puStack_1b8 = puVar2;
    puStack_98 = puVar2;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar29;
    puStack_188 = puVar29;
    if (puVar29 == (undefined *)0x0) {
      puStack_1e8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435f8;
    unaff_x22 = *(undefined **)(param_1 + 0x10);
    unaff_x21 = param_3;
    puStack_90 = puStack_1e8;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x22;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x27;
    if (unaff_x27 == (undefined *)0x0) {
      unaff_x23 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f43618;
    unaff_x24 = param_3;
    puStack_88 = unaff_x23;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x24;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      unaff_x26 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = unaff_x26;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar29;
    func_0x00010c0a5a20(uStack_1c0);
    param_1 = (ulong)(puVar2 == (undefined *)0x0);
    _objc_release(puVar29);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(unaff_x26);
    }
    unaff_x25 = (ulong)(unaff_x27 == (undefined *)0x0);
    _objc_release(puVar2);
    _objc_release(unaff_x24);
    if (unaff_x27 == (undefined *)0x0) {
      _objc_release(unaff_x23);
    }
    bVar1 = puStack_188 == (undefined *)0x0;
    _objc_release(unaff_x27);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    if (bVar1) {
      _objc_release(puStack_1e8);
    }
    bVar1 = puStack_168 == (undefined *)0x0;
    _objc_release(puStack_188);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_1a0);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    if (bVar1) {
      _objc_release(puStack_1e0);
    }
    bVar1 = puStack_178 == (undefined *)0x0;
    _objc_release(puStack_168);
    if (bVar1) {
      _objc_release(puStack_1d8);
    }
    bVar1 = puStack_180 == (undefined *)0x0;
    _objc_release(puStack_178);
    if (bVar1) {
      _objc_release(puStack_1d0);
    }
    bVar1 = puStack_170 == (undefined *)0x0;
    unaff_x20 = (ulong)bVar1;
    _objc_release(puStack_180);
    if (bVar1) {
      _objc_release(puStack_1c8);
    }
    _objc_release(puStack_170);
    _objc_release(puStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_130);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_130);
  puVar3 = param_3;
  __Unwind_Resume();
  pcStack_1f8 = FUN_106226bc0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar3 + 0x28;
  puVar29 = param_2;
  puStack_220 = unaff_x22;
  puStack_218 = unaff_x21;
  uStack_210 = unaff_x20;
  puStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (((ulong)param_2 & 1) == 0) {
    uStack_230 = *(undefined8 *)(puVar3 + 0x20);
    param_2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61380(puVar2);
    _objc_release(param_2);
    _objc_release(puVar2);
    puVar2 = puVar3 + 0x28;
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x000106261e60();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined *)0x0;
    puVar28 = puVar3;
    func_0x00010beba140(puVar2);
    _objc_release(puVar3);
    puVar4 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
      return;
    }
  }
  else {
    puVar28 = (undefined *)0x1;
    puVar4 = puVar2;
    func_0x00010bdffe00();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_106226cec;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_290 = param_1;
  puStack_288 = unaff_x27;
  puStack_280 = unaff_x26;
  uStack_278 = unaff_x25;
  puStack_270 = unaff_x24;
  puStack_268 = unaff_x23;
  puStack_260 = unaff_x22;
  puStack_258 = param_2;
  puStack_250 = puVar3;
  puStack_248 = puVar2;
  ppuStack_240 = &puStack_200;
  _objc_retain(puVar28);
  if (puVar28 != (undefined *)0x0) {
    uVar31 = *(undefined8 *)(puVar4 + 8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_2a8 = puVar28;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127fc0(uVar31);
    _objc_release(puVar2);
    _objc_initWeak(auStack_360,puVar4);
    uVar31 = *(undefined8 *)(puVar4 + 0x28);
    puVar2 = puVar28;
    func_0x00010c131d20(puVar28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar28;
    func_0x00010c241220(puVar28);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = (undefined *)0x0;
    _objc_copyWeak(auStack_368);
    _objc_retain(puVar28);
    func_0x00010c28a300(uVar31);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar31 = *(undefined8 *)(puVar4 + 0x60);
    ppuStack_358 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar2 = puVar28;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_350 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar5 = puVar28;
    puStack_300 = puVar3;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_348 = &PTR____CFConstantStringClassReference_110f43038;
    puVar7 = puVar28;
    puStack_2f8 = puVar6;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_340 = &PTR____CFConstantStringClassReference_110f43058;
    puVar9 = puVar28;
    puStack_2f0 = puVar8;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5128;
    ppuStack_338 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_330 = &PTR____CFConstantStringClassReference_110f431b8;
    puVar11 = puVar28;
    puStack_2e8 = puVar10;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar11);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_328 = &PTR____CFConstantStringClassReference_110f431f8;
    puVar13 = puVar28;
    puStack_2d8 = puVar12;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_320 = &PTR____CFConstantStringClassReference_110f431d8;
    puVar15 = puVar28;
    puStack_2d0 = puVar14;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918(puVar15);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_318 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar17 = puVar28;
    puStack_2c8 = puVar16;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    if (puVar17 == (undefined *)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_310 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar32 = *(undefined **)(puVar4 + 0x10);
    puVar4 = puVar28;
    puStack_2c0 = puVar18;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar32;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    if (puVar19 == (undefined *)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_308 = &PTR____CFConstantStringClassReference_110f43618;
    puVar21 = puVar28;
    puStack_2b8 = puVar20;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    if (puVar22 == (undefined *)0x0) {
      puVar23 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_2b0 = puVar23;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar24;
    func_0x00010c0a5a20(uVar31);
    _objc_release(puVar24);
    if (puVar22 == (undefined *)0x0) {
      _objc_release(puVar23);
    }
    _objc_release(puVar22);
    _objc_release(puVar21);
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puVar20);
    }
    _objc_release(puVar19);
    _objc_release(puVar32);
    _objc_release(puVar4);
    if (puVar17 == (undefined *)0x0) {
      _objc_release(puVar18);
    }
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    if (puVar9 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar28);
    _objc_destroyWeak(auStack_368);
    _objc_destroyWeak(auStack_360);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_368);
  _objc_destroyWeak(auStack_360);
  __Unwind_Resume();
  lVar30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar28 + 0x28;
  _objc_loadWeakRetained();
  if (((ulong)puVar29 & 1) == 0) {
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8000(puVar2);
    _objc_release(puVar29);
    _objc_release(puVar2);
    puVar28 = puVar28 + 0x28;
    _objc_loadWeakRetained();
    puVar2 = puVar28;
    func_0x000106261ea8();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined *)0x0;
    puVar29 = puVar2;
    func_0x00010beba140(puVar28);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
      return;
    }
  }
  else {
    puVar29 = (undefined *)0x0;
    puVar28 = puVar2;
    func_0x00010bdffe00();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar30) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(puVar29);
  _objc_retain(param_4);
  uVar33 = *(undefined8 *)(puVar28 + 0x130);
  uVar31 = uVar33;
  _objc_retain(uVar33);
  func_0x000106262100();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar31;
  func_0x0001062620e8();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x0001062620d0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x000106261b18();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar29);
  _objc_retain(uVar33);
  func_0x00010beb8ae0(puVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar31);
  _objc_release(param_4);
  _objc_release(puVar29);
  _objc_release(uVar33);
  _objc_release(uVar33);
  _objc_release(param_4);
  _objc_release(puVar29);
  return;
}



/* Entry: 106226bc0; end: 106226ceb;  */

void FUN_106226bc0(long param_1,ulong param_2,undefined8 param_3,undefined *param_4)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(param_1 + 0x28);
  uVar26 = param_2;
  _objc_loadWeakRetained();
  if ((param_2 & 1) == 0) {
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61380(puVar1);
    _objc_release(puVar28);
    _objc_release(puVar1);
    puVar28 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    puVar1 = puVar28;
    func_0x000106261e60();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined *)0x0;
    puVar27 = puVar1;
    func_0x00010beba140(puVar28);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
      return;
    }
  }
  else {
    puVar27 = (undefined *)0x1;
    puVar28 = puVar1;
    func_0x00010bdffe00();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar27);
  if (puVar27 != (undefined *)0x0) {
    uVar30 = *(undefined8 *)(puVar28 + 8);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar27;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127fc0(uVar30);
    _objc_release(puVar1);
    _objc_initWeak(auStack_170,puVar28);
    uVar30 = *(undefined8 *)(puVar28 + 0x28);
    puVar1 = puVar27;
    func_0x00010c131d20(puVar27);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar27;
    func_0x00010c241220(puVar27);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = 0;
    _objc_copyWeak(auStack_178);
    _objc_retain(puVar27);
    func_0x00010c28a300(uVar30);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar30 = *(undefined8 *)(puVar28 + 0x60);
    ppuStack_168 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar1 = puVar27;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_160 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar3 = puVar27;
    puStack_110 = puVar2;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_158 = &PTR____CFConstantStringClassReference_110f43038;
    puVar5 = puVar27;
    puStack_108 = puVar4;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_150 = &PTR____CFConstantStringClassReference_110f43058;
    puVar7 = puVar27;
    puStack_100 = puVar6;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5128;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_140 = &PTR____CFConstantStringClassReference_110f431b8;
    puVar9 = puVar27;
    puStack_f8 = puVar8;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar9);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_138 = &PTR____CFConstantStringClassReference_110f431f8;
    puVar11 = puVar27;
    puStack_e8 = puVar10;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_130 = &PTR____CFConstantStringClassReference_110f431d8;
    puVar13 = puVar27;
    puStack_e0 = puVar12;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918(puVar13);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar15 = puVar27;
    puStack_d8 = puVar14;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    if (puVar15 == (undefined *)0x0) {
      puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar31 = *(undefined **)(puVar28 + 0x10);
    puVar28 = puVar27;
    puStack_d0 = puVar16;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar31;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    if (puVar17 == (undefined *)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f43618;
    puVar19 = puVar27;
    puStack_c8 = puVar18;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    if (puVar20 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_c0 = puVar21;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar22;
    func_0x00010c0a5a20(uVar30);
    _objc_release(puVar22);
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar21);
    }
    _objc_release(puVar20);
    _objc_release(puVar19);
    if (puVar17 == (undefined *)0x0) {
      _objc_release(puVar18);
    }
    _objc_release(puVar17);
    _objc_release(puVar31);
    _objc_release(puVar28);
    if (puVar15 == (undefined *)0x0) {
      _objc_release(puVar16);
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_release(puVar27);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_170);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_170);
  __Unwind_Resume();
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar27 + 0x28;
  _objc_loadWeakRetained();
  if ((uVar26 & 1) == 0) {
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8000(puVar1);
    _objc_release(puVar28);
    _objc_release(puVar1);
    puVar27 = puVar27 + 0x28;
    _objc_loadWeakRetained();
    puVar1 = puVar27;
    func_0x000106261ea8();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined *)0x0;
    puVar28 = puVar1;
    func_0x00010beba140(puVar27);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
      return;
    }
  }
  else {
    puVar28 = (undefined *)0x0;
    puVar27 = puVar1;
    func_0x00010bdffe00();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(puVar28);
  _objc_retain(param_4);
  uVar32 = *(undefined8 *)(puVar27 + 0x130);
  uVar30 = uVar32;
  _objc_retain(uVar32);
  func_0x000106262100();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar30;
  func_0x0001062620e8();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x0001062620d0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x000106261b18();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar28);
  _objc_retain(uVar32);
  func_0x00010beb8ae0(puVar27);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar30);
  _objc_release(param_4);
  _objc_release(puVar28);
  _objc_release(uVar32);
  _objc_release(uVar32);
  _objc_release(param_4);
  _objc_release(puVar28);
  return;
}



/* Entry: 106226cec; end: 106227317; -[SCSpotlightRepliesActionHandler _rejectReply:] */

void FUN_106226cec(long param_1,ulong param_2,undefined *param_3,undefined *param_4)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  long lVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    uVar28 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c127fc0(uVar28);
    _objc_release(puVar1);
    _objc_initWeak(auStack_130,param_1);
    uVar28 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0;
    _objc_copyWeak(auStack_138);
    _objc_retain(param_3);
    func_0x00010c28a300(uVar28);
    _objc_release(puVar26);
    _objc_release(puVar1);
    uVar28 = *(undefined8 *)(param_1 + 0x60);
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar1 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar26 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_120 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar2 = param_3;
    puStack_d0 = puVar26;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f43038;
    puVar4 = param_3;
    puStack_c8 = puVar3;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f43058;
    puVar6 = param_3;
    puStack_c0 = puVar5;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5128;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f431b8;
    puVar8 = param_3;
    puStack_b8 = puVar7;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar8);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431f8;
    puVar10 = param_3;
    puStack_a8 = puVar9;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431d8;
    puVar12 = param_3;
    puStack_a0 = puVar11;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918(puVar12);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar14 = param_3;
    puStack_98 = puVar13;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    if (puVar14 == (undefined *)0x0) {
      puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar29 = *(undefined **)(param_1 + 0x10);
    puVar16 = param_3;
    puStack_90 = puVar15;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar29;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    if (puVar17 == (undefined *)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f43618;
    puVar19 = param_3;
    puStack_88 = puVar18;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    if (puVar20 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar21;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar22;
    func_0x00010c0a5a20(uVar28);
    _objc_release(puVar22);
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar21);
    }
    _objc_release(puVar20);
    _objc_release(puVar19);
    if (puVar17 == (undefined *)0x0) {
      _objc_release(puVar18);
    }
    _objc_release(puVar17);
    _objc_release(puVar29);
    _objc_release(puVar16);
    if (puVar14 == (undefined *)0x0) {
      _objc_release(puVar15);
    }
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar26);
    }
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_130);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_130);
  __Unwind_Resume();
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 & 1) == 0) {
    puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8000(puVar1);
    _objc_release(puVar26);
    _objc_release(puVar1);
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained();
    puVar1 = param_3;
    func_0x000106261ea8();
    _objc_retainAutoreleasedReturnValue();
    param_4 = (undefined *)0x0;
    puVar26 = puVar1;
    func_0x00010beba140(param_3);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
      return;
    }
  }
  else {
    puVar26 = (undefined *)0x0;
    param_3 = puVar1;
    func_0x00010bdffe00();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(puVar26);
  _objc_retain(param_4);
  uVar30 = *(undefined8 *)(param_3 + 0x130);
  uVar28 = uVar30;
  _objc_retain(uVar30);
  func_0x000106262100();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar28;
  func_0x0001062620e8();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x0001062620d0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x000106261b18();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar26);
  _objc_retain(uVar30);
  func_0x00010beb8ae0(param_3);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar28);
  _objc_release(param_4);
  _objc_release(puVar26);
  _objc_release(uVar30);
  _objc_release(uVar30);
  _objc_release(param_4);
  _objc_release(puVar26);
  return;
}



/* Entry: 106227318; end: 10622743f;  */

void FUN_106227318(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8000(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x000106261ea8();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    lVar7 = lVar1;
    func_0x00010beba140(param_1);
    _objc_release(lVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  else {
    lVar7 = 0;
    param_1 = lVar1;
    func_0x00010bdffe00();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  _objc_retain(param_4);
  uVar9 = *(undefined8 *)(param_1 + 0x130);
  uVar3 = uVar9;
  _objc_retain(uVar9);
  func_0x000106262100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001062620e8();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001062620d0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000106261b18();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(lVar7);
  _objc_retain(uVar9);
  func_0x00010beb8ae0(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(lVar7);
  _objc_release(uVar9);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release(lVar7);
  return;
}



/* Entry: 106227440; end: 106227597; -[SCSpotlightRepliesActionHandler _blockUserWithUserId:completion:] */

void FUN_106227440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  uVar1 = uVar5;
  _objc_retain(uVar5);
  func_0x000106262100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001062620e8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001062620d0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000106261b18();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106227598;
  puStack_70 = &UNK_11084a9e8;
  uStack_68 = uVar5;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  func_0x00010beb8ae0(param_1,param_2,uVar1,uVar2,uVar3,uVar4,&puStack_88);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106227598; end: 106227613;  */

void FUN_106227598(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1d5a0(uVar1);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106227600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106227614; end: 106227617;  */

void FUN_106227614(void)

{
  return;
}



/* Entry: 106227618; end: 106227d13; -[SCSpotlightRepliesActionHandler _deleteReply:] */

void FUN_106227618(long param_1,ulong param_2,undefined *param_3,undefined *param_4)

{
  undefined **ppuVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 uVar29;
  int iVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar27 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    func_0x00010bf6c6a0(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_128,param_1);
    uVar29 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar29);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_106227d14;
    puStack_148 = &UNK_11085dbf8;
    _objc_retain(param_3);
    puStack_140 = param_3;
    _objc_retain(uVar29);
    param_2 = 0;
    uStack_138 = uVar29;
    _objc_copyWeak(auStack_130);
    ppuVar1 = &puStack_160;
    _objc_retainBlock();
    iVar30 = (int)*(undefined8 *)(param_1 + 0x38);
    puVar27 = param_3;
    func_0x00010c131f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(puVar27);
    uVar31 = *(undefined8 *)(param_1 + 0x28);
    puVar27 = param_3;
    puVar2 = param_3;
    if (iVar30 == 0) {
      func_0x00010c131d20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a300(uVar31);
    }
    else {
      func_0x00010c131d20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6ca20(uVar31);
    }
    _objc_release(puVar2);
    _objc_release(puVar27);
    puVar27 = param_3;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar27;
    func_0x00010c0720c0();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010c131a00(param_3);
    }
    _objc_release(puVar27);
    uVar31 = *(undefined8 *)(param_1 + 0x60);
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar2 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar4 = param_3;
    puStack_c8 = puVar3;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f43038;
    puVar6 = param_3;
    puStack_c0 = puVar5;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f43058;
    puVar8 = param_3;
    puStack_b8 = puVar7;
    func_0x00010bfc9900();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f430b8;
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_b0 = puVar9;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431b8;
    puVar11 = param_3;
    puStack_a8 = puVar10;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar11);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431f8;
    puVar13 = param_3;
    puStack_a0 = puVar12;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f431d8;
    puVar15 = param_3;
    puStack_98 = puVar14;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918(puVar15);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar17 = param_3;
    puStack_90 = puVar16;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    if (puVar17 == (undefined *)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar32 = *(undefined **)(param_1 + 0x10);
    puVar19 = param_3;
    puStack_88 = puVar18;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar32;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    if (puVar20 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43618;
    puVar22 = param_3;
    puStack_80 = puVar21;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    if (puVar23 == (undefined *)0x0) {
      puVar24 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar24;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = (undefined *)0x5;
    param_4 = puVar25;
    func_0x00010c0a5a20(uVar31);
    _objc_release(puVar25);
    if (puVar23 == (undefined *)0x0) {
      _objc_release(puVar24);
    }
    _objc_release(puVar23);
    _objc_release(puVar22);
    if (puVar20 == (undefined *)0x0) {
      _objc_release(puVar21);
    }
    _objc_release(puVar20);
    _objc_release(puVar32);
    _objc_release(puVar19);
    if (puVar17 == (undefined *)0x0) {
      _objc_release(puVar18);
    }
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_130);
    _objc_release(uStack_138);
    _objc_release(puStack_140);
    _objc_release(uVar29);
    _objc_destroyWeak(auStack_128);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
    __Unwind_Resume();
    lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar26 = *(long *)(param_3 + 0x20);
    if ((param_2 & 1) == 0) {
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar29 = *(undefined8 *)(param_3 + 0x28);
      puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
      if (lVar26 == 0) {
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befaf40(uVar29);
      }
      else {
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        uVar31 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010c0f3b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf07180(uVar29);
        _objc_release(uVar31);
      }
      _objc_release(puVar27);
      puVar2 = param_3 + 0x30;
      _objc_loadWeakRetained();
      puVar3 = puVar2;
      func_0x000106261e90();
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined *)0x0;
      puVar27 = puVar3;
      func_0x00010beba140(puVar2);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
        return;
      }
    }
    else {
      func_0x00010c131a00();
      param_3 = param_3 + 0x30;
      _objc_loadWeakRetained();
      puVar2 = param_3;
      if (lVar26 == 2) {
        puVar27 = (undefined *)0x0;
        func_0x00010bdffe00();
      }
      else {
        func_0x00010bdffde0();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_3);
        return;
      }
    }
    ___stack_chk_fail();
    _objc_retain(param_4);
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar27;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    if ((puVar3 == (undefined *)0x0) || (lVar26 = *(long *)(puVar2 + 0x160), lVar26 == 0)) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      _objc_retain(param_4);
      func_0x00010bfa7820(lVar26);
      _objc_release(param_4);
    }
    _objc_release(puVar3);
    _objc_release(param_4);
    return;
  }
  return;
}



/* Entry: 106227d14; end: 106227eb7;  */

void FUN_106227d14(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  if ((param_2 & 1) == 0) {
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (lVar2 == 0) {
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befaf40(uVar1);
    }
    else {
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0f3b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf07180(uVar1);
      _objc_release(uVar3);
    }
    _objc_release(puVar4);
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = lVar5;
    func_0x000106261e90();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    param_3 = lVar2;
    func_0x00010beba140(lVar5);
    _objc_release(lVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    func_0x00010c131a00();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar5 = param_1;
    if (lVar2 == 2) {
      param_3 = 0;
      func_0x00010bdffe00();
    }
    else {
      func_0x00010bdffde0();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((lVar2 == 0) || (lVar6 = *(long *)(lVar5 + 0x160), lVar6 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_retain(param_4);
    func_0x00010bfa7820(lVar6);
    _objc_release(param_4);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106227eb8; end: 106227f9f; -[SCSpotlightRepliesActionHandler _fetchAttachmentImageForReply:completion:] */

void FUN_106227eb8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((lVar1 == 0) || (lVar2 = *(long *)(param_1 + 0x160), lVar2 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_retain(param_4);
    func_0x00010bfa7820(lVar2);
    _objc_release(param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106227fa0; end: 106227fb3;  */

void FUN_106227fa0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 0) {
    param_4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000106227fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
  return;
}



/* Entry: 106227fb4; end: 106228507; -[SCSpotlightRepliesActionHandler _quoteCommunityReply:] */

void FUN_106227fb4(long param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  ulong uStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  ulong uStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_128,param_1);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_106228508;
  puStack_140 = &UNK_110865e48;
  puVar15 = auStack_128;
  _objc_copyWeak(auStack_130,puVar15);
  _objc_retain(param_3);
  puStack_138 = param_3;
  func_0x00010be0fc20(param_1);
  puStack_1b0 = *(undefined **)(param_1 + 0x60);
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f42ff8;
  puVar2 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar2;
  puStack_168 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puStack_1b8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ea2238;
  puVar2 = param_3;
  puStack_c8 = puStack_1b8;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = puVar2;
  puStack_170 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puStack_1c0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f43038;
  puVar2 = param_3;
  puStack_c0 = puStack_1c0;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar2;
  puStack_160 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puStack_1c8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f431b8;
  puVar3 = param_3;
  puStack_b8 = puStack_1c8;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar3;
  func_0x00010bf529e0(puVar3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431f8;
  puVar3 = param_3;
  puStack_180 = puVar2;
  puStack_a8 = puVar2;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar3;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431d8;
  puVar4 = param_3;
  puStack_190 = puVar3;
  puStack_a0 = puVar3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar4;
  FUN_10622b918(puVar4);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f43358;
  puStack_1a0 = puVar2;
  puStack_98 = puVar2;
  func_0x00010c072ae0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435d8;
  puVar2 = param_3;
  puStack_1a8 = puVar3;
  puStack_90 = puVar3;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puStack_1d0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435f8;
  puVar16 = *(undefined **)(param_1 + 0x10);
  puVar3 = param_3;
  puStack_88 = puStack_1d0;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar16;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43618;
  puVar6 = param_3;
  puStack_80 = puVar5;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(puStack_1b0);
  puStack_1b0 = puVar3;
  _objc_release(puVar9);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar16);
  _objc_release(puStack_1b0);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puStack_1d0);
  }
  bVar1 = puStack_160 == (undefined *)0x0;
  _objc_release(puVar2);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  if (bVar1) {
    _objc_release(puStack_1c8);
  }
  bVar1 = puStack_170 == (undefined *)0x0;
  _objc_release(puStack_160);
  if (bVar1) {
    _objc_release(puStack_1c0);
  }
  bVar1 = puStack_168 == (undefined *)0x0;
  _objc_release(puStack_170);
  if (bVar1) {
    _objc_release(puStack_1b8);
  }
  _objc_release(puStack_168);
  _objc_release(puStack_138);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  puVar3 = param_3;
  __Unwind_Resume();
  pcStack_1d8 = FUN_106228508;
  puStack_230 = puVar9;
  uStack_228 = (ulong)(puVar4 == (undefined *)0x0);
  puStack_220 = puVar6;
  uStack_218 = (ulong)(puVar7 == (undefined *)0x0);
  puStack_210 = puVar7;
  puStack_208 = puVar4;
  uStack_200 = (ulong)(puVar2 == (undefined *)0x0);
  puStack_1f8 = puVar2;
  uStack_1f0 = (ulong)bVar1;
  puStack_1e8 = param_3;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar15);
  puVar2 = puVar3 + 0x28;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    uVar17 = *(undefined8 *)(puVar2 + 0x98);
    uVar10 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c131f40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c132180(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c131f00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c131f20(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_250 = 0xc2000000;
    pcStack_248 = FUN_106228688;
    puStack_240 = &UNK_110846320;
    _objc_copyWeak(auStack_238,puVar3 + 0x28);
    func_0x000108ea6ec8(uVar17,uVar10,uVar11,uVar12,uVar13,puVar15,uVar14,&puStack_258);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_238);
  }
  _objc_release(puVar2);
  _objc_release(puVar15);
  return;
}



/* Entry: 106228508; end: 106228687;  */

void FUN_106228508(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x98);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c131f40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c132180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c131f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c131f20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106228688;
    puStack_70 = &UNK_110846320;
    _objc_copyWeak(auStack_68,param_1 + 0x28);
    func_0x000108ea6ec8(uVar7,uVar2,uVar3,uVar4,uVar5,param_2,uVar6,&puStack_88);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106228688; end: 106228703;  */

void FUN_106228688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b5b40;
    func_0x00010bf69940(PTR_PTR_1126b5b40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7a680(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106228704; end: 106228ca3; -[SCSpotlightRepliesActionHandler _quoteSpotlightReply:] */

void FUN_106228704(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_128,param_1);
  puVar3 = param_3;
  func_0x00010c131f40();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_106228ca4;
  puStack_148 = &UNK_110917938;
  puVar14 = auStack_128;
  puStack_180 = puVar3;
  _objc_copyWeak(auStack_130,puVar14);
  puVar3 = puStack_180;
  _objc_retain(puStack_180);
  puStack_140 = puVar3;
  _objc_retain(param_3);
  puStack_138 = param_3;
  func_0x00010be0fc20(param_1);
  puStack_1c0 = *(undefined **)(param_1 + 0x60);
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f42ff8;
  puVar3 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar3;
  puStack_170 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puStack_1c8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ea2238;
  puVar3 = param_3;
  puStack_c8 = puStack_1c8;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar3;
  puStack_178 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puStack_1d0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f43038;
  puVar3 = param_3;
  puStack_c0 = puStack_1d0;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar3;
  puStack_168 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puStack_1d8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f430b8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f431b8;
  puVar4 = param_3;
  puStack_b8 = puStack_1d8;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar4;
  func_0x00010bf529e0(puVar4);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431f8;
  puVar4 = param_3;
  puStack_190 = puVar3;
  puStack_a8 = puVar3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar4;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431d8;
  puVar5 = param_3;
  puStack_1a0 = puVar4;
  puStack_a0 = puVar4;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar5;
  FUN_10622b918(puVar5);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f43358;
  puStack_1b0 = puVar3;
  puStack_98 = puVar3;
  func_0x00010c072ae0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435d8;
  puVar3 = param_3;
  puStack_1b8 = puVar4;
  puStack_90 = puVar4;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puStack_1e0 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435f8;
  puVar15 = *(undefined **)(param_1 + 0x10);
  puVar4 = param_3;
  puStack_88 = puStack_1e0;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43618;
  puVar7 = param_3;
  puStack_80 = puVar6;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a20(puStack_1c0);
  puStack_1c0 = puVar4;
  _objc_release(puVar10);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar15);
  _objc_release(puStack_1c0);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puStack_1e0);
  }
  bVar2 = puStack_168 == (undefined *)0x0;
  _objc_release(puVar3);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  if (bVar2) {
    _objc_release(puStack_1d8);
  }
  bVar2 = puStack_178 == (undefined *)0x0;
  _objc_release(puStack_168);
  if (bVar2) {
    _objc_release(puStack_1d0);
  }
  bVar2 = puStack_170 == (undefined *)0x0;
  _objc_release(puStack_178);
  if (bVar2) {
    _objc_release(puStack_1c8);
  }
  _objc_release(puStack_170);
  _objc_release(puStack_138);
  _objc_release(puStack_140);
  _objc_destroyWeak(auStack_130);
  _objc_release(puStack_180);
  _objc_destroyWeak(auStack_128);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  puVar4 = param_3;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106228ca4;
  puStack_240 = puVar9;
  puStack_238 = puVar7;
  puStack_230 = puVar5;
  puStack_228 = puVar8;
  uStack_220 = (ulong)(puVar5 == (undefined *)0x0);
  uStack_218 = (ulong)(puVar3 == (undefined *)0x0);
  puStack_210 = puVar3;
  puStack_208 = puVar15;
  uStack_200 = (ulong)bVar2;
  puStack_1f8 = param_3;
  puStack_1f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  puVar3 = puVar4 + 0x30;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined *)0x0) {
    uVar17 = *(undefined8 *)(puVar3 + 0x98);
    uVar1 = *(undefined8 *)(puVar4 + 0x20);
    uVar11 = *(undefined8 *)(puVar4 + 0x28);
    func_0x00010c132180(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(puVar4 + 0x28);
    func_0x00010c131f00(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(puVar4 + 0x28);
    func_0x00010c131f20(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    pcStack_260 = FUN_106228e1c;
    puStack_258 = &UNK_110865e48;
    _objc_copyWeak(auStack_248,puVar4 + 0x30);
    uVar16 = *(undefined8 *)(puVar4 + 0x28);
    _objc_retain(uVar16);
    uStack_250 = uVar16;
    func_0x000108ea6ec8(uVar17,uVar1,uVar11,uVar12,uVar13,puVar14,puVar5,&puStack_270);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uStack_250);
    _objc_destroyWeak(auStack_248);
  }
  _objc_release(puVar3);
  _objc_release(puVar14);
  return;
}



/* Entry: 106228ca4; end: 106228e1b;  */

void FUN_106228ca4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x98);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c132180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c131f00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c131f20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106228e1c;
    puStack_78 = &UNK_110865e48;
    _objc_copyWeak(auStack_68,param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uStack_70 = uVar7;
    func_0x000108ea6ec8(uVar8,uVar1,uVar4,uVar5,uVar6,param_2,puVar2,&puStack_90);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 106228e1c; end: 106228e77;  */

void FUN_106228e1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7df60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106228e78; end: 10622946b; -[SCSpotlightRepliesActionHandler _makeTopReply:] */

void FUN_106228e78(long param_1,ulong param_2,undefined *param_3)

{
  undefined8 uVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfaaf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8ed40(param_1);
    _objc_initWeak(auStack_128,param_1);
    uVar25 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0;
    _objc_copyWeak(auStack_130);
    _objc_retain(uVar1);
    func_0x00010c28a300(uVar25);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar25 = *(undefined8 *)(param_1 + 0x60);
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar2 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar4 = param_3;
    puStack_c8 = puVar3;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f43038;
    puVar6 = param_3;
    puStack_c0 = puVar5;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f431b8;
    puVar8 = param_3;
    puStack_b8 = puVar7;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar8);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431f8;
    puVar10 = param_3;
    puStack_a8 = puVar9;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431d8;
    puVar12 = param_3;
    puStack_a0 = puVar11;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918(puVar12);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f43358;
    puStack_98 = puVar13;
    func_0x00010c072ae0(param_3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar15 = param_3;
    puStack_90 = puVar14;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    if (puVar15 == (undefined *)0x0) {
      puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar24 = *(undefined **)(param_1 + 0x10);
    puVar17 = param_3;
    puStack_88 = puVar16;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar24;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    if (puVar18 == (undefined *)0x0) {
      puVar19 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43618;
    puVar20 = param_3;
    puStack_80 = puVar19;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    if (puVar21 == (undefined *)0x0) {
      puVar22 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar22;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a20(uVar25);
    _objc_release(puVar23);
    if (puVar21 == (undefined *)0x0) {
      _objc_release(puVar22);
    }
    _objc_release(puVar21);
    _objc_release(puVar20);
    if (puVar18 == (undefined *)0x0) {
      _objc_release(puVar19);
    }
    _objc_release(puVar18);
    _objc_release(puVar24);
    _objc_release(puVar17);
    if (puVar15 == (undefined *)0x0) {
      _objc_release(puVar16);
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
    _objc_release(uVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  if ((param_2 & 1) != 0) {
    return;
  }
  puVar2 = param_3 + 0x28;
  _objc_loadWeakRetained(puVar2);
  func_0x00010be8ed40();
  _objc_release(puVar2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  puVar2 = param_3;
  func_0x000106261ed8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beba140(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10622946c; end: 1062294e3;  */

void FUN_10622946c(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8ed40();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x000106261ed8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beba140(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062294e4; end: 10622954f; -[SCSpotlightRepliesActionHandler _replaceTopReplyIfExistingWithReply:] */

void FUN_1062294e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bfaaf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8db40(param_1,param_2,uVar1);
  func_0x00010be5c500(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106229550; end: 106229b1b; -[SCSpotlightRepliesActionHandler _removeTopReplyBadge:] */

void FUN_106229550(long param_1,ulong param_2,undefined *param_3)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    uVar22 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d16a0(uVar22);
    _objc_release(puVar1);
    _objc_initWeak(auStack_120,param_1);
    uVar22 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = param_3;
    func_0x00010c131d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0;
    _objc_copyWeak(auStack_128);
    _objc_retain(param_3);
    func_0x00010c28a300(uVar22);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar22 = *(undefined8 *)(param_1 + 0x60);
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f42ff8;
    puVar1 = param_3;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_110 = &PTR____CFConstantStringClassReference_110ea2238;
    puVar3 = param_3;
    puStack_c8 = puVar2;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f43038;
    puVar5 = param_3;
    puStack_c0 = puVar4;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5110;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f431b8;
    puVar7 = param_3;
    puStack_b8 = puVar6;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar7);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431f8;
    puVar9 = param_3;
    puStack_a8 = puVar8;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    FUN_10622ba5c();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110f431d8;
    puVar11 = param_3;
    puStack_a0 = puVar10;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    FUN_10622b918(puVar11);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f435d8;
    puVar13 = param_3;
    puStack_98 = puVar12;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    if (puVar13 == (undefined *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435f8;
    puVar23 = *(undefined **)(param_1 + 0x10);
    puVar15 = param_3;
    puStack_90 = puVar14;
    func_0x00010c0f3b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c080();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar23;
    FUN_10623cbd8();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    if (puVar16 == (undefined *)0x0) {
      puVar17 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f43618;
    puVar18 = param_3;
    puStack_88 = puVar17;
    func_0x00010c131a20();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    FUN_10623ce14();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    if (puVar19 == (undefined *)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar20;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a20(uVar22);
    _objc_release(puVar21);
    if (puVar19 == (undefined *)0x0) {
      _objc_release(puVar20);
    }
    _objc_release(puVar19);
    _objc_release(puVar18);
    if (puVar16 == (undefined *)0x0) {
      _objc_release(puVar17);
    }
    _objc_release(puVar16);
    _objc_release(puVar23);
    _objc_release(puVar15);
    if (puVar13 == (undefined *)0x0) {
      _objc_release(puVar14);
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_120);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_120);
  __Unwind_Resume();
  if ((param_2 & 1) != 0) {
    return;
  }
  puVar1 = param_3 + 0x28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be8ed40();
  _objc_release(puVar1);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  puVar1 = param_3;
  func_0x000106261ef0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beba140(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106229b1c; end: 106229b93;  */

void FUN_106229b1c(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8ed40();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x000106261ef0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beba140(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106229b94; end: 106229d8f; -[SCSpotlightRepliesActionHandler _approveAllSpotlightReplies:] */

void FUN_106229b94(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **unaff_x24;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0d16a0(*(undefined8 *)(param_2 + 8));
    lVar1 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_initWeak(auStack_70,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bfb19c0(*(undefined8 *)(param_2 + 0x10));
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106229d90;
    puStack_88 = &UNK_11084b7a0;
    param_3 = 0;
    _objc_copyWeak(auStack_78);
    _objc_retain(param_4);
    lStack_80 = param_4;
    func_0x00010c283540(param_1,uVar4);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5128;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a20(uVar4);
    _objc_release(puVar3);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar2);
    unaff_x24 = &puStack_a0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x28));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  lVar1 = param_4 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if ((param_3 & 1) == 0) {
    func_0x00010be61380(lVar1);
    _objc_release(lVar1);
    lVar1 = param_4 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x000106261e78();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba140(lVar1);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bdffd60(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106229d90; end: 106229e27;  */

void FUN_106229d90(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if ((param_2 & 1) == 0) {
    func_0x00010be61380(lVar1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x000106261e78();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba140(lVar1);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bdffd60(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106229e28; end: 10622a01f; -[SCSpotlightRepliesActionHandler _rejectAllSpotlightReplies:] */

void FUN_106229e28(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **unaff_x24;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c127fc0(*(undefined8 *)(param_2 + 8));
    lVar1 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_initWeak(auStack_70,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bfb19c0(*(undefined8 *)(param_2 + 0x10));
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10622a020;
    puStack_88 = &UNK_11084b7a0;
    param_3 = 0;
    _objc_copyWeak(auStack_78);
    _objc_retain(param_4);
    lStack_80 = param_4;
    func_0x00010c283540(param_1,uVar4);
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f430b8;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5128;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5a20(uVar4);
    _objc_release(puVar3);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar2);
    unaff_x24 = &puStack_a0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x28));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  lVar1 = param_4 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if ((param_3 & 1) == 0) {
    func_0x00010bdc8000(lVar1);
    _objc_release(lVar1);
    lVar1 = param_4 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x000106261ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba140(lVar1);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bdffd60(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10622a020; end: 10622a0b3;  */

void FUN_10622a020(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if ((param_2 & 1) == 0) {
    func_0x00010bdc8000(lVar1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x000106261ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beba140(lVar1);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bdffd60(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10622a0b4; end: 10622a133; -[SCSpotlightRepliesActionHandler _updateReplyPostingState:serverGeneratedReplyId:success:] */

void FUN_10622a0b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = 1;
    if ((int)param_5 == 0) {
      uVar1 = 2;
    }
    func_0x00010c2892a0(uVar2,param_2,param_3,uVar1,param_4);
    if ((int)param_5 == 0) {
      func_0x000106261e48();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106261f08();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010beba140(param_1,param_2,uVar2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10622a134; end: 10622a2af; -[SCSpotlightRepliesActionHandler _updateToApprovedStatusWithReply:serverGeneratedReplyId:] */

void FUN_10622a134(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0e88;
  func_0x00010c24bfc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010c2b6ea0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c6a0(uVar3);
  _objc_release(puVar2);
  func_0x00010c2b6e40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6fa0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10622a2b0;
  puStack_60 = &UNK_110848ba8;
  uStack_58 = param_3;
  uStack_50 = uVar3;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  func_0x000100c749e0(0x3dcccccd,"APPSTORE",&puStack_78);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10622a2b0; end: 10622a3cf;  */

undefined8 FUN_10622a2b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (lVar2 == 0) {
    uStack_40 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010befaf40(uVar1,param_2,puVar5,0);
  }
  else {
    uStack_48 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf07180(uVar1,param_2,puVar5,uVar4);
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar5 = puVar8;
  func_0x00010c131fe0();
  puVar6 = puVar8;
  func_0x00010c131fe0(puVar8);
  puVar7 = puVar8;
  if (puVar5 != (undefined *)0x1) {
    func_0x00010c131f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48880(uVar3,param_2,puVar7,puVar8,puVar6 == (undefined *)0x2);
  }
  else {
    func_0x00010c131f80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48180(uVar3,param_2,puVar7,puVar8);
  }
  _objc_release(puVar7);
  func_0x00010be55240(uVar3,param_2,puVar8,puVar5 != (undefined *)0x1 && puVar6 == (undefined *)0x2)
  ;
  _objc_release(puVar8);
  return 1;
}



/* Entry: 10622a3d0; end: 10622a49b; -[SCSpotlightRepliesActionHandler _handleTapOnDisplayNameWithSpotlightReply:] */

undefined8 FUN_10622a3d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c131fe0();
  lVar2 = param_3;
  func_0x00010c131fe0(param_3);
  lVar3 = param_3;
  if (lVar1 != 1) {
    func_0x00010c131f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48880(param_1,param_2,lVar3,param_3,lVar2 == 2);
  }
  else {
    func_0x00010c131f80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be48180(param_1,param_2,lVar3,param_3);
  }
  _objc_release(lVar3);
  func_0x00010be55240(param_1,param_2,param_3,lVar1 != 1 && lVar2 == 2);
  _objc_release(param_3);
  return 1;
}



/* Entry: 10622a49c; end: 10622a8f3; -[SCSpotlightRepliesActionHandler _logLaunchPublicProfileWithSpotlightReply:isFriendProfile:] */

void FUN_10622a49c(long param_1,undefined8 param_2,undefined *param_3,int param_4)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  FUN_1062687a4(param_3);
  lVar23 = 0x15;
  if (param_4 == 0) {
    lVar23 = 0x13;
  }
  uVar25 = *(undefined8 *)(param_1 + 0x60);
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f42ff8;
  puVar2 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ea2238;
  puVar4 = param_3;
  puStack_c0 = puVar3;
  func_0x00010c131f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f43038;
  puVar6 = param_3;
  puStack_b8 = puVar5;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f430b8;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar7;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(uint)puVar1 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f431b8;
  puVar9 = param_3;
  puStack_a8 = puVar8;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar1,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f431f8;
  puVar11 = param_3;
  puStack_a0 = puVar1;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  FUN_10622ba5c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f431d8;
  puVar13 = param_3;
  puStack_98 = puVar12;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  FUN_10622b918();
  func_0x00010c0df6e0(puVar10,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f435d8;
  puVar14 = param_3;
  puStack_90 = puVar10;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  if (puVar14 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f435f8;
  puVar26 = *(undefined **)(param_1 + 0x10);
  puVar16 = param_3;
  puStack_88 = puVar15;
  func_0x00010c0f3b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c080(puVar26,param_2,puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar26;
  FUN_10623cbd8();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  if (puVar17 == (undefined *)0x0) {
    puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f43618;
  puVar19 = param_3;
  puStack_80 = puVar18;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  FUN_10623ce14();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  if (puVar20 == (undefined *)0x0) {
    puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar21;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&ppuStack_110,10)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c0a5a20(uVar25,param_2,lVar23,puVar22);
  _objc_release(puVar22);
  if (puVar20 == (undefined *)0x0) {
    _objc_release(puVar21);
  }
  _objc_release(puVar20);
  _objc_release(puVar19);
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar18);
  }
  _objc_release(puVar17);
  _objc_release(puVar26);
  _objc_release(puVar16);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar15);
  }
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar23);
  _objc_retain(puVar24);
  if ((lVar23 != 0) && (*(long *)(param_3 + 0x70) == 0)) {
    if (*(long *)(param_3 + 0xb0) != 0) {
      func_0x00010bf6f360(param_3);
      uVar25 = *(undefined8 *)(param_3 + 0xb0);
      *(undefined8 *)(param_3 + 0xb0) = 0;
      _objc_release(uVar25);
    }
    puVar1 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    func_0x00010c033440();
    puVar2 = PTR_PTR_1126b0f18;
    _objc_alloc(PTR_PTR_1126b0f18);
    func_0x00010bff9da0();
    func_0x00010c1cd960();
    func_0x00010c1cd9a0(puVar2,param_2,0x10ca441e);
    puVar3 = PTR_PTR_1126b3530;
    _objc_alloc();
    puVar4 = param_3;
    func_0x00010c10fbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010beee620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar3,param_2,puVar5,1);
    uVar25 = *(undefined8 *)(param_3 + 0xb0);
    *(undefined **)(param_3 + 0xb0) = puVar3;
    _objc_release(uVar25);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b0f20;
    _objc_alloc();
    func_0x00010c056680();
    uVar25 = *(undefined8 *)(param_3 + 0x70);
    *(undefined **)(param_3 + 0x70) = puVar3;
    _objc_release(uVar25);
    func_0x00010c08b7c0(*(undefined8 *)(param_3 + 0x68),param_2,*(undefined8 *)(param_3 + 0x70),
                        param_3);
    func_0x00010be60e80(param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar23);
  return;
}



/* Entry: 10622a8f4; end: 10622aa9b; -[SCSpotlightRepliesActionHandler _launchPublicProfileWithBusinessProfileId:spotlightReply:] */

void FUN_10622a8f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (*(long *)(param_1 + 0x70) == 0)) {
    if (*(long *)(param_1 + 0xb0) != 0) {
      func_0x00010bf6f360(param_1);
      uVar1 = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      _objc_release(uVar1);
    }
    puVar2 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    func_0x00010c033440();
    puVar3 = PTR_PTR_1126b0f18;
    _objc_alloc(PTR_PTR_1126b0f18);
    func_0x00010bff9da0();
    func_0x00010c1cd960();
    func_0x00010c1cd9a0(puVar3,param_2,0x10ca441e);
    puVar4 = PTR_PTR_1126b3530;
    _objc_alloc();
    lVar5 = param_1;
    func_0x00010c10fbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010beee620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar4,param_2,lVar6,1);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar4;
    _objc_release(uVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar4 = PTR_PTR_1126b0f20;
    _objc_alloc();
    func_0x00010c056680();
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar4;
    _objc_release(uVar1);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x70),
                        param_1);
    func_0x00010be60e80(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10622aa9c; end: 10622abeb; -[SCSpotlightRepliesActionHandler _launchUnifiedUserProfile:spotlightReply:isFriendProfile:] */

void FUN_10622aa9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1;
  func_0x00010c10fbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beee620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar3,1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  puVar4 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c015a00();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x88),param_2,puVar4);
  func_0x00010be60e80(param_1);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10622abec; end: 10622abf3; -[SCSpotlightRepliesActionHandler _reactReply:reactionTypeId:reactOption:isCommentAdmin:] */

void FUN_10622abec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c120910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_reactReply_reactionTypeId_reactO_112625c60);
  return;
}



/* Entry: 10622abf4; end: 10622abfb; -[SCSpotlightRepliesActionHandler _moveReplies:toApprovalState:] */

void FUN_10622abf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_moveReplies_toApprovalState__112611fc0);
  return;
}



/* Entry: 10622abfc; end: 10622ad0b; -[SCSpotlightRepliesActionHandler _replaceTopReplyIfExistingWithNewReplyInDataStore:] */

void FUN_10622abfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfaaf00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d16a0(uVar4);
    _objc_release(puVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d16a0(uVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2892b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 8),PTR_s_updateReply_postingState_serverG_11267fed0);
  return;
}



/* Entry: 10622ad0c; end: 10622ad13; -[SCSpotlightRepliesActionHandler _updateReply:postingState:serverGeneratedReplyId:] */

void FUN_10622ad0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2892b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateReply_postingState_serverG_11267fed0);
  return;
}



/* Entry: 10622ad14; end: 10622ad1f; -[SCSpotlightRepliesActionHandler _addReplies:] */

void FUN_10622ad14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addReplies_position__11259c578,param_3,0);
  return;
}



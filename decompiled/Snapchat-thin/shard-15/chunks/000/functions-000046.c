/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7b1348; end: 10b7b139b; -[SCAlertViewActionButtonController edgeInsets] */

undefined8 FUN_10b7b1348(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = 0x4024000000000000;
  if (uVar1 < 0xf) {
    if ((1L << (uVar1 & 0x3f) & 0x2450U) != 0) {
      return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    }
    uVar2 = 0x4034000000000000;
    if (uVar1 != 0xe) {
      uVar2 = 0x4024000000000000;
    }
  }
  return uVar2;
}



/* Entry: 10b7b139c; end: 10b7b13b7; -[SCAlertViewActionButtonController requiresAdditionalPaddingIfLastItem] */

uint FUN_10b7b139c(long param_1)

{
  return (uint)(*(ulong *)(param_1 + 0x18) < 0x10) &
         0xdbaaU >> (ulong)((uint)*(ulong *)(param_1 + 0x18) & 0x1f);
}



/* Entry: 10b7b13b8; end: 10b7b1533; -[SCAlertViewActionButtonController replaceTitleWithView:disableInteraction:] */

void FUN_10b7b13b8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c16b780(uVar1,param_2,0,0);
  func_0x00010c16b780(*(undefined8 *)(param_1 + 0x38),param_2,0,1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(param_3,param_2,0);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b7b14c8;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(param_3,param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300();
  _objc_release(param_3);
  _objc_release(uVar1);
  if (param_4 != 0) {
    func_0x00010c21e900(*(undefined8 *)(param_1 + 0x38),param_2,0);
  }
  return;
}



/* Entry: 10b7b1534; end: 10b7b1607; -[SCAlertViewActionButtonController showTitleWithRemovingView:disableInteraction:] */

void FUN_10b7b1534(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6e88;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf0e680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b780(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126d6e88;
  func_0x00010bf0e680(PTR_PTR_1126d6e88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b780(uVar2);
  _objc_release(puVar1);
  func_0x00010c12c960(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setUserInteractionEnabled__112665468,param_4 ^ 1)
  ;
  return;
}



/* Entry: 10b7b1608; end: 10b7b16ab; -[SCAlertViewActionButtonController setEnabled:] */

void FUN_10b7b1608(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x38));
  puVar1 = PTR_PTR_1126d6e88;
  if ((param_3 & 1) == 0) {
    func_0x00010bf80920(PTR_PTR_1126d6e88,param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfad520();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7b16ac; end: 10b7b16b3; -[SCAlertViewActionButtonController setAccessibilityIdentifier:] */

void FUN_10b7b16ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 10b7b16b4; end: 10b7b16bb; -[SCAlertViewActionButtonController title] */

undefined8 FUN_10b7b16b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7b16bc; end: 10b7b16c3; -[SCAlertViewActionButtonController style] */

undefined8 FUN_10b7b16bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7b16c4; end: 10b7b16cb; -[SCAlertViewActionButtonController actionHandler] */

undefined8 FUN_10b7b16c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7b16cc; end: 10b7b16d3; -[SCAlertViewActionButtonController promptActionHandler] */

undefined8 FUN_10b7b16cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7b16d4; end: 10b7b16db; -[SCAlertViewActionButtonController accessibilityIdentifier] */

undefined8 FUN_10b7b16d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7b16dc; end: 10b7b16e3; -[SCAlertViewActionButtonController enabled] */

undefined1 FUN_10b7b16dc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7b16e4; end: 10b7b16eb; -[SCAlertViewActionButtonController actionButton] */

undefined8 FUN_10b7b16e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7b16ec; end: 10b7b171b; -[SCAlertViewActionButtonController setActionButton:] */

void FUN_10b7b16ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7b171c; end: 10b7b176f; -[SCAlertViewActionButtonController .cxx_destruct] */

void FUN_10b7b171c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7b1770; end: 10b7b19c3; +[SCAlertViewActionButtonFactory buttonWithTitle:style:] */

void FUN_10b7b1770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  
  uVar1 = param_1;
  func_0x00010becb860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af4f0;
  _objc_alloc(PTR_PTR_1126af4f0);
  dVar5 = *(double *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar5,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf0e680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b780(puVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bdd0f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b780(puVar2,param_2,uVar3,1);
  _objc_release(uVar3);
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bdd5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1732a0(puVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be36060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1732a0(puVar2,param_2,uVar3,1);
  _objc_release(uVar3);
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bfad520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480(puVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  uVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be360a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480(puVar2,param_2,uVar3,1);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010c271420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c83a0(0x3fe0000000000000);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c271420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar4);
  _objc_opt_class(param_1);
  func_0x00010c23d6a0();
  func_0x00010c2163a0(0,dVar5 * 0.5,0,dVar5 * 0.5,puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7b19c4; end: 10b7b1b4b; +[SCAlertViewActionButtonFactory _attributedHighlightTitle:style:] */

undefined * FUN_10b7b19c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar2 = param_1;
  func_0x00010be185a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_80 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
  uVar3 = param_1;
  uStack_70 = uVar2;
  func_0x00010be466e0(param_1,param_2,param_4);
  func_0x00010c0df840(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puStack_68 = puVar4;
  func_0x00010be36180(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_70,&uStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  puVar9 = puVar5;
  func_0x00010c04e840();
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar7);
    _objc_alloc(puVar1);
    uStack_118 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar3 = uVar2;
    func_0x00010be185a0(uVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uStack_110 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    uVar6 = uVar2;
    uStack_100 = uVar3;
    func_0x00010be466e0(uVar2,param_2,puVar9);
    func_0x00010c0df840(puVar4,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puStack_f8 = puVar4;
    func_0x00010becb480(uVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_f0 = uVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_100,&uStack_118,3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c04e840(puVar1,param_2,lVar7,puVar5);
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      if (8 < lVar8 - 2U) {
        return (undefined *)0x0;
      }
      return *(undefined **)(&UNK_10e5db878 + (lVar8 - 2U) * 8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10b7b1b4c; end: 10b7b1cd3; +[SCAlertViewActionButtonFactory attributedTitle:style:] */

undefined * FUN_10b7b1b4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uStack_88 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar2 = param_1;
  func_0x00010be185a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_80 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
  uVar3 = param_1;
  uStack_70 = uVar2;
  func_0x00010be466e0(param_1,param_2,param_4);
  func_0x00010c0df840(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puStack_68 = puVar4;
  func_0x00010becb480(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_70,&uStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c04e840(puVar1,param_2,param_3,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  if (lVar6 - 2U < 9) {
    return *(undefined **)(&UNK_10e5db878 + (lVar6 - 2U) * 8);
  }
  return (undefined *)0x0;
}



/* Entry: 10b7b1cd4; end: 10b7b1cf7; +[SCAlertViewActionButtonFactory _kerningWithStyle:] */

undefined8 FUN_10b7b1cd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 9) {
    return *(undefined8 *)(&UNK_10e5db878 + (param_3 - 2U) * 8);
  }
  return 0;
}



/* Entry: 10b7b1cf8; end: 10b7b1e1f; +[SCAlertViewActionButtonFactory sizeWithTitle:style:] */

void FUN_10b7b1cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  _objc_retain(param_4);
  uVar1 = param_2;
  _objc_opt_class();
  func_0x00010be185a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = uVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_60,&uStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_4,param_3,puVar2);
  uVar4 = param_1;
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_opt_class(param_2);
  lVar3 = param_5;
  func_0x00010becb660();
  _objc_release(param_4);
  _objc_opt_class(param_2);
  func_0x00010becb840(uVar4,param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  if (lVar3 - 1U < 0xf) {
    _objc_retain(param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b7b1e20; end: 10b7b1e67; +[SCAlertViewActionButtonFactory _textWithText:style:] */

void FUN_10b7b1e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 - 1U < 0xf) {
    _objc_retain(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b7b1e68; end: 10b7b1e83; +[SCAlertViewActionButtonFactory _textHeightWithTitle:style:] */

undefined8 FUN_10b7b1e68(void)

{
  long in_x3;
  undefined8 uVar1;
  
  uVar1 = 0x403e000000000000;
  if (1 < in_x3 - 7U) {
    uVar1 = 0x4046000000000000;
  }
  return uVar1;
}



/* Entry: 10b7b1e84; end: 10b7b1ebf; +[SCAlertViewActionButtonFactory _textWidthWithHeight:width:style:] */

double FUN_10b7b1e84(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  if ((param_5 < 0x10) && ((1L << (param_5 & 0x3f) & 0xfe7eU) != 0)) {
    return param_2 + param_1 * 0.5 * 2.0;
  }
  return 90.0;
}



/* Entry: 10b7b1ec0; end: 10b7b1f37; +[SCAlertViewActionButtonFactory _fontForButtonStyle:] */

void FUN_10b7b1ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  switch(param_3) {
  case 1:
  case 3:
  case 5:
  case 9:
  case 0xb:
  case 0xc:
    uVar1 = 4;
    break;
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xd:
    uVar1 = 1;
    break;
  case 0xe:
  case 0xf:
    uVar1 = 3;
    uVar2 = 4;
    goto code_r0x00010b7b1f0c;
  default:
    goto _objc_autoreleaseReturnValue;
  }
  uVar2 = 2;
code_r0x00010b7b1f0c:
  func_0x00010bfb4200(PTR_PTR_1126d3f50,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b1f38; end: 10b7b1f53; +[SCAlertViewActionButtonFactory _buttonHasBacking:] */

uint FUN_10b7b1f38(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(0xf < param_3) | 0x5babU >> (ulong)((uint)param_3 & 0x1f) & 1;
}



/* Entry: 10b7b1f54; end: 10b7b1f8f; +[SCAlertViewActionButtonFactory _textColorWithButtonStyle:] */

void FUN_10b7b1f54(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdd7340();
  uVar1 = 0xbd;
  if (param_1 == 0) {
    uVar1 = 0x6d;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b1f90; end: 10b7b1f93; +[SCAlertViewActionButtonFactory _highlightTextColorWithButtonStyle:] */

void FUN_10b7b1f90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__textColorWithButtonStyle__1125906c8);
  return;
}



/* Entry: 10b7b1f94; end: 10b7b1f97; +[SCAlertViewActionButtonFactory _borderColorWithButtonStyle:] */

void FUN_10b7b1f94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fillColorWithButtonStyle__1125c8ef0);
  return;
}



/* Entry: 10b7b1f98; end: 10b7b1f9b; +[SCAlertViewActionButtonFactory _highlightBorderColorWithButtonStyle:] */

void FUN_10b7b1f98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fillColorWithButtonStyle__1125c8ef0);
  return;
}



/* Entry: 10b7b1f9c; end: 10b7b1fd7; +[SCAlertViewActionButtonFactory fillColorWithButtonStyle:] */

void FUN_10b7b1f9c(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdd7340();
  uVar1 = 0x6d;
  if (param_1 == 0) {
    uVar1 = 0x1d;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b1fd8; end: 10b7b2013; +[SCAlertViewActionButtonFactory disableStateColorWithButtonStyle:] */

void FUN_10b7b1fd8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdd7340();
  uVar1 = 0x6f;
  if (param_1 == 0) {
    uVar1 = 0x1d;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b2014; end: 10b7b2017; +[SCAlertViewActionButtonFactory _highlightFillColorWithButtonStyle:] */

void FUN_10b7b2014(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fillColorWithButtonStyle__1125c8ef0);
  return;
}



/* Entry: 10b7b2018; end: 10b7b20f7; -[SCAlertViewActionLabelController initWithLabel:] */

undefined1 * FUN_10b7b2018(double param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_40;
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010bfb3a80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    if (param_1 <= 0.0) {
      _objc_release(lVar1);
    }
    else {
      lVar2 = param_4;
      func_0x00010c0def20();
      _objc_release(lVar1);
      if (0 < lVar2) {
        puStack_38 = PTR_PTR_11270ae58;
        puStack_40 = param_2;
        _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
        if (ppuVar4 != (undefined1 **)0x0) {
          _objc_retain(param_4);
          uVar3 = *(undefined8 *)((long)ppuVar4 + 8);
          *(long *)((long)ppuVar4 + 8) = param_4;
          _objc_release(uVar3);
        }
        _objc_retain(ppuVar4);
        param_2 = (undefined1 *)ppuVar4;
        goto LAB_10b7b20d0;
      }
    }
  }
  ppuVar4 = (undefined1 **)0x0;
LAB_10b7b20d0:
  _objc_release(param_4);
  _objc_release(param_2);
  return (undefined1 *)ppuVar4;
}



/* Entry: 10b7b20f8; end: 10b7b2143; +[SCAlertViewActionLabelController actionWithLabel:] */

void FUN_10b7b20f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c021360();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b2144; end: 10b7b21a7; -[SCAlertViewActionLabelController actionViewSize] */

undefined1  [16] FUN_10b7b2144(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfb3a80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c0def20(lVar2);
  _objc_release(uVar1);
  auVar3._8_8_ = param_1 * (double)lVar2;
  auVar3._0_8_ = 0x7fefffffffffffff;
  return auVar3;
}



/* Entry: 10b7b21a8; end: 10b7b21cf; -[SCAlertViewActionLabelController actionView] */

void FUN_10b7b21a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7b21d0; end: 10b7b21d7; -[SCAlertViewActionLabelController alertViewActionType] */

undefined8 FUN_10b7b21d0(void)

{
  return 2;
}



/* Entry: 10b7b21d8; end: 10b7b21df; -[SCAlertViewActionLabelController adjustsSizeToMatchStandard] */

undefined8 FUN_10b7b21d8(void)

{
  return 0;
}



/* Entry: 10b7b21e0; end: 10b7b21e7; -[SCAlertViewActionLabelController becomeFirstResponder] */

void FUN_10b7b21e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 10b7b21e8; end: 10b7b21fb; -[SCAlertViewActionLabelController edgeInsets] */

undefined8 FUN_10b7b21e8(void)

{
  return 0x4024000000000000;
}



/* Entry: 10b7b21fc; end: 10b7b2203; -[SCAlertViewActionLabelController requiresAdditionalPaddingIfLastItem] */

undefined8 FUN_10b7b21fc(void)

{
  return 1;
}



/* Entry: 10b7b2204; end: 10b7b220b; -[SCAlertViewActionLabelController label] */

undefined8 FUN_10b7b2204(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7b220c; end: 10b7b2217; -[SCAlertViewActionLabelController .cxx_destruct] */

void FUN_10b7b220c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7b2218; end: 10b7b233b; -[SCAlertViewActionTextFieldController initWithStyle:configuration:] */

undefined8 * FUN_10b7b2218(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270ae60;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9080(puVar1);
    puVar2 = PTR_PTR_1126e1380;
    func_0x00010c26bee0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1[1]);
    uVar3 = puVar1[3];
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,puVar1[3]);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b7b233c; end: 10b7b2403;  */

void FUN_10b7b233c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7b2404; end: 10b7b26af; -[SCAlertViewActionTextFieldController initWithStyle:configuration:secondaryConfiguration:] */

undefined8 *
FUN_10b7b2404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_11270ae60;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9080(puVar1);
    puVar2 = PTR_PTR_1126e1380;
    func_0x00010c26bee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126e1380;
    func_0x00010c26bee0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1677c0(0x3fb999999999999a,puVar2);
    func_0x00010befbb60(puVar1[1]);
    func_0x00010befbb60(puVar1[1]);
    func_0x00010befbb60(puVar1[1]);
    uVar4 = puVar1[3];
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,puVar1[3]);
    }
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,puVar1[4]);
    }
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b7b26b0; end: 10b7b2833;  */

void FUN_10b7b26b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7b2834; end: 10b7b2a13;  */

void FUN_10b7b2834(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0bc020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7b2a14; end: 10b7b2b33;  */

void FUN_10b7b2a14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b7b2b34; end: 10b7b2b8f; +[SCAlertViewActionTextFieldController actionWithStyle:configuration:] */

void FUN_10b7b2b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c04eb20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b2b90; end: 10b7b2c03; +[SCAlertViewActionTextFieldController actionWithStyle:configuration:secondaryConfiguration:] */

void FUN_10b7b2b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c04eb40();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b2c04; end: 10b7b2c33; +[SCAlertViewActionTextFieldController _backgroundColorWithStyle:] */

void FUN_10b7b2c04(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2c);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b2c34; end: 10b7b2d4f; -[SCAlertViewActionTextFieldController _setUpContainerView:] */

void FUN_10b7b2c34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bdd2300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 8),param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4014000000000000);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b7b2d50; end: 10b7b2dd3; -[SCAlertViewActionTextFieldController actionViewSize] */

undefined1  [16] FUN_10b7b2d50(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_PTR_1126e1380;
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010c26b700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d6a0(puVar1,param_4,uVar2,0);
  _objc_release(uVar2);
  if (*(long *)(param_3 + 0x20) != 0) {
    param_2 = param_2 * 2.0 + 0.5;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b7b2dd4; end: 10b7b2dfb; -[SCAlertViewActionTextFieldController actionView] */

void FUN_10b7b2dd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7b2dfc; end: 10b7b2e03; -[SCAlertViewActionTextFieldController alertViewActionType] */

undefined8 FUN_10b7b2dfc(void)

{
  return 1;
}



/* Entry: 10b7b2e04; end: 10b7b2e0b; -[SCAlertViewActionTextFieldController adjustsSizeToMatchStandard] */

undefined8 FUN_10b7b2e04(void)

{
  return 0;
}



/* Entry: 10b7b2e0c; end: 10b7b2e13; -[SCAlertViewActionTextFieldController becomeFirstResponder] */

void FUN_10b7b2e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 10b7b2e14; end: 10b7b2e27; -[SCAlertViewActionTextFieldController edgeInsets] */

undefined8 FUN_10b7b2e14(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 10b7b2e28; end: 10b7b2e2f; -[SCAlertViewActionTextFieldController requiresAdditionalPaddingIfLastItem] */

undefined8 FUN_10b7b2e28(void)

{
  return 1;
}



/* Entry: 10b7b2e30; end: 10b7b2e37; -[SCAlertViewActionTextFieldController style] */

undefined8 FUN_10b7b2e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7b2e38; end: 10b7b2e3f; -[SCAlertViewActionTextFieldController textField] */

undefined8 FUN_10b7b2e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7b2e40; end: 10b7b2e47; -[SCAlertViewActionTextFieldController textField_secondary] */

undefined8 FUN_10b7b2e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7b2e48; end: 10b7b2e83; -[SCAlertViewActionTextFieldController .cxx_destruct] */

void FUN_10b7b2e48(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7b2e84; end: 10b7b30e3; +[SCAlertViewActionTextFieldFactory textFieldWithStyle:] */

undefined1  [16] FUN_10b7b2e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc(PTR__OBJC_CLASS___UITextField_1126af060);
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(uVar8,uVar9,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010becc400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar7 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar2 = param_1;
  uStack_88 = uVar7;
  _objc_opt_class();
  func_0x00010becc460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uVar4 = param_1;
  uStack_80 = uVar6;
  uStack_78 = uVar2;
  _objc_opt_class();
  func_0x00010becc400();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_70 = uVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar5);
  func_0x00010c16b720(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar2 = param_1;
  uStack_a8 = uVar7;
  _objc_opt_class();
  func_0x00010becc460();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar6;
  uStack_98 = uVar2;
  _objc_opt_class();
  func_0x00010be74340();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_90 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_98,&uStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar5);
  func_0x00010c16b680(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    auVar11._8_8_ = uVar9;
    auVar11._0_8_ = uVar8;
    return auVar11;
  }
  ___stack_chk_fail();
  auVar10._8_8_ = 0x4046000000000000;
  auVar10._0_8_ = 0x7fefffffffffffff;
  return auVar10;
}



/* Entry: 10b7b30e4; end: 10b7b30f7; +[SCAlertViewActionTextFieldFactory sizeWithTitle:style:] */

undefined1  [16] FUN_10b7b30e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4046000000000000;
  auVar1._0_8_ = 0x7fefffffffffffff;
  return auVar1;
}



/* Entry: 10b7b30f8; end: 10b7b3127; +[SCAlertViewActionTextFieldFactory _titleFontWithStyle:] */

void FUN_10b7b30f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010c266f40(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b3128; end: 10b7b3157; +[SCAlertViewActionTextFieldFactory _titleColorWithStyle:] */

void FUN_10b7b3128(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b3158; end: 10b7b3187; +[SCAlertViewActionTextFieldFactory _placeholderColorWithStyle:] */

void FUN_10b7b3158(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b3188; end: 10b7b31cf; +[SCAlertViewConfigFactory configWithStyle:] */

void FUN_10b7b3188(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    _objc_opt_class();
    func_0x00010be3d2c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    _objc_opt_class();
    func_0x00010bdf9340();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b31d0; end: 10b7b31eb; +[SCAlertViewConfigFactory _defaultConfiguration] */

void FUN_10b7b31d0(void)

{
  _objc_alloc_init(PTR_PTR_1126e1388);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b31ec; end: 10b7b3247; +[SCAlertViewConfigFactory _interactiveConfiguration] */

void FUN_10b7b31ec(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
  func_0x00010bdf9340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f600();
  func_0x00010c18f620(param_1,param_2,1);
  func_0x00010c18f660(param_1,param_2,1);
  func_0x00010c18f640(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b3248; end: 10b7b328f; -[SCAlertViewConfig init] */

void FUN_10b7b3248(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270ae68;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0x1000100;
    *(undefined2 *)((long)puVar1 + 0xc) = 0x101;
  }
  return;
}



/* Entry: 10b7b3290; end: 10b7b3297; -[SCAlertViewConfig dismissOnBackgroundTap] */

undefined1 FUN_10b7b3290(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7b3298; end: 10b7b329f; -[SCAlertViewConfig setDismissOnBackgroundTap:] */

void FUN_10b7b3298(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b7b32a0; end: 10b7b32a7; -[SCAlertViewConfig dismissOnApplicationBackground] */

undefined1 FUN_10b7b32a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b7b32a8; end: 10b7b32af; -[SCAlertViewConfig setDismissOnApplicationBackground:] */

void FUN_10b7b32a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b7b32b0; end: 10b7b32b7; -[SCAlertViewConfig dismissOnPan] */

undefined1 FUN_10b7b32b0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b7b32b8; end: 10b7b32bf; -[SCAlertViewConfig setDismissOnPan:] */

void FUN_10b7b32b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b7b32c0; end: 10b7b32c7; -[SCAlertViewConfig dismissOnAction] */

undefined1 FUN_10b7b32c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b7b32c8; end: 10b7b32cf; -[SCAlertViewConfig setDismissOnAction:] */

void FUN_10b7b32c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 10b7b32d0; end: 10b7b32d7; -[SCAlertViewConfig dismissKeyboardOnShow] */

undefined1 FUN_10b7b32d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b7b32d8; end: 10b7b32df; -[SCAlertViewConfig setDismissKeyboardOnShow:] */

void FUN_10b7b32d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b7b32e0; end: 10b7b32e7; -[SCAlertViewConfig becomeFirstResponderOnShow] */

undefined1 FUN_10b7b32e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b7b32e8; end: 10b7b32ef; -[SCAlertViewConfig setBecomeFirstResponderOnShow:] */

void FUN_10b7b32e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 10b7b32f0; end: 10b7b33cf; +[SCAlertViewAnimationPerformer presentView:inView:withPresentationType:completion:] */

void FUN_10b7b32f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  if (param_5 == 2) {
    func_0x00010c0f8800(param_1,param_2,param_3,param_4,param_6);
  }
  else if (param_5 == 1) {
    func_0x00010c0f86e0(param_1,param_2,param_3,param_4,param_6);
  }
  else if (param_5 == 0) {
    func_0x00010c0f8b20(param_1,param_2,param_3,param_4,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b33d0; end: 10b7b348f; +[SCAlertViewAnimationPerformer dismissView:withDismissalType:completion:] */

void FUN_10b7b33d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  if (param_4 == 2) {
    func_0x00010c0f87e0(param_1,param_2,param_3,param_5);
  }
  else if (param_4 == 1) {
    func_0x00010c0f86c0(param_1,param_2,param_3,param_5);
  }
  else if (param_4 == 0) {
    func_0x00010c0f8b00(param_1,param_2,param_3,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b3490; end: 10b7b3623; +[SCAlertViewAnimationPerformer performDefaultPresentationForAlertView:inView:withCompletion:] */

void FUN_10b7b3490(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar2 = param_1;
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  dVar2 = dVar2 * -0.5;
  param_1 = param_1 + dVar2;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar3 = dVar2;
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  dVar4 = dVar3;
  func_0x00010bf20c00(param_4);
  _CGRectGetHeight();
  _CGRectIntegral(param_1,dVar2,dVar3,dVar4);
  func_0x00010c19f0e0(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b7b3624;
  puStack_68 = &UNK_110841f80;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b7b36d0;
  puStack_90 = &UNK_110842508;
  uStack_88 = param_6;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf03460(0x3fd999999999999a,0,0x3fe6666666666666,0x3ff0000000000000,puVar1,param_3,2,
                      &puStack_80,&puStack_a8);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7b3624; end: 10b7b36cf;  */

void FUN_10b7b3624(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x28));
  _CGRectGetMidX();
  dVar1 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  dVar1 = dVar1 * 0.5;
  param_1 = param_1 - dVar1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x28));
  _CGRectGetMidY();
  dVar2 = dVar1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetHeight();
  dVar2 = dVar2 * 0.5;
  dVar1 = dVar1 - dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  dVar3 = dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetHeight();
  _CGRectIntegral(param_1,dVar1,dVar2,dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b7b36d0; end: 10b7b36e3;  */

void FUN_10b7b36d0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7b36dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7b36e4; end: 10b7b381b; +[SCAlertViewAnimationPerformer performDefaultDismissalForAlertView:withCompletion:] */

void FUN_10b7b36e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b7b381c;
  puStack_68 = &UNK_110841f80;
  _objc_retain(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10b7b38ac;
  puStack_98 = &UNK_110858070;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_60 = param_3;
  uStack_58 = uVar3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010bf03440(0x3fc999999999999a,0,puVar2,param_2,0x30002,&puStack_80,&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  return;
}



/* Entry: 10b7b381c; end: 10b7b38ab;  */

void FUN_10b7b381c(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x28));
  _CGRectGetMidX();
  dVar1 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetMidX();
  param_1 = param_1 - dVar1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x28));
  _CGRectGetHeight();
  dVar2 = dVar1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  dVar3 = dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetHeight();
  _CGRectIntegral(param_1,dVar1,dVar2,dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b7b38ac; end: 10b7b38e7;  */

void FUN_10b7b38ac(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7b38d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7b38e8; end: 10b7b39cb; +[SCAlertViewAnimationPerformer performNoAnimationPresentationForAlertView:inView:withCompletion:] */

void FUN_10b7b38e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c262ca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  dVar2 = param_1;
  func_0x00010bf20c00(param_4);
  _CGRectGetMidX();
  param_1 = param_1 - dVar2;
  func_0x00010bf20c00(uVar1);
  _CGRectGetHeight();
  dVar3 = dVar2;
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  dVar4 = dVar3;
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
  _CGRectIntegral(param_1,dVar2,dVar3,dVar4);
  func_0x00010c19f0e0(param_4);
  _objc_release(param_4);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10b7b39cc; end: 10b7b3a0f; +[SCAlertViewAnimationPerformer performNoAnimationDismissalForAlertView:withCompletion:] */

void FUN_10b7b39cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c12c960(param_3);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b7b3a10; end: 10b7b3b6b; +[SCAlertViewAnimationPerformer performFlowPresentationForAlertView:inView:withCompletion:] */

void FUN_10b7b3a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar2 = 0;
  func_0x00010c1677c0(0,param_5);
  func_0x00010bf345e0(param_6);
  _objc_release(param_6);
  func_0x00010c17a6a0(uVar2,param_2,param_5);
  _CGAffineTransformMakeScale(&uStack_70,0x3feccccccccccccd,0x3feccccccccccccd);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960(param_5,param_4,&uStack_a0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10b7b3b6c;
  puStack_b0 = &UNK_110842e18;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10b7b3bc0;
  puStack_d8 = &UNK_110842508;
  uStack_d0 = param_7;
  uStack_a8 = param_5;
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010bf03440(0x3fc3333333333333,0,puVar1,param_4,2,&puStack_c8,&puStack_f0);
  _objc_release(uStack_d0);
  _objc_release(uStack_a8);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 10b7b3b6c; end: 10b7b3bbf;  */

void FUN_10b7b3b6c(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7b3bc0; end: 10b7b3bd3;  */

void FUN_10b7b3bc0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7b3bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7b3bd4; end: 10b7b3cd7; +[SCAlertViewAnimationPerformer performFlowDismissalForAlertView:withCompletion:] */

void FUN_10b7b3bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1677c0(0x3ff0000000000000,param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b7b3cd8;
  puStack_50 = &UNK_110842e18;
  _objc_retain(param_3);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10b7b3d38;
  puStack_80 = &UNK_110858070;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fc3333333333333,puVar2,param_2,&puStack_68,&puStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7b3cd8; end: 10b7b3d73;  */

void FUN_10b7b3cd8(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale(&uStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  return;
}



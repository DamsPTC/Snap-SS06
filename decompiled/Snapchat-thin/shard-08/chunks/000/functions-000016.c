/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105be7d30; end: 105be7d3b;  */

void FUN_105be7d30(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__1126481e8,param_2);
  return;
}



/* Entry: 105be7d3c; end: 105be7fa7; +[SCBusinessAccountSelectorHelpers createViewModelWithUserInfoServices:resourceDownloader:bitmojiSelfieFetcher:useSelectorDesign:selectedBusinessId:] */

void FUN_105be7d3c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,long param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_class();
  func_0x00010c291460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126c2fe8;
  func_0x00010beee820(PTR_PTR_1126c2fe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != 0) {
    lVar3 = param_7;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar12 = PTR_PTR_1126c2fe8;
      func_0x00010beee820(PTR_PTR_1126c2fe8,param_2,2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar12 = (undefined *)0x0;
    }
    _objc_release(puVar2);
    puVar2 = puVar12;
  }
  puVar12 = PTR_PTR_1126c2ff0;
  _objc_alloc();
  ppuVar4 = param_3;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  ppuVar7 = param_3;
  func_0x00010c2946e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x000105bee350();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  func_0x00010bf2fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016a00(puVar12,param_2,ppuVar1,ppuVar9,ppuVar11,param_1,0,0,0,0x100);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105be7fa8; end: 105be841b; +[SCBusinessAccountSelectorHelpers memberAvatarViewWithLogoURL:resourceDownloader:] */

void FUN_105be7fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar11;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  puVar3 = PTR_PTR_1126aebd8;
  uVar11 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c14e320();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar3;
  _objc_release(uVar11);
  uVar11 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105be841c;
  puStack_c0 = &UNK_11084d858;
  puStack_b8 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bf88c20(uVar11);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar11);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c08c0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar3);
  func_0x00010befbb60(puVar1);
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_f0 = puVar3;
  puStack_b0 = puVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar4;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puStack_100 = puVar4;
  puStack_a8 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_108 = puVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  puStack_118 = puVar3;
  puStack_a0 = puVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_128 = puVar4;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  puStack_98 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puStack_90 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_120);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_128);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puStack_e8);
  _objc_release(puStack_b8);
  _objc_release(puVar2);
  puVar3 = puStack_e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_130);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105be841c;
  puStack_150 = puVar2;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_105be84b8;
  puStack_168 = &UNK_110841f80;
  uVar11 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(uVar11);
  uStack_160 = uVar11;
  uStack_158 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_180);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(param_2);
  return;
}



/* Entry: 105be841c; end: 105be84b7;  */

void FUN_105be841c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105be84b8;
  puStack_38 = &UNK_110841f80;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 105be84b8; end: 105be84bf;  */

void FUN_105be84b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105be84c0; end: 105be87b7; +[SCBusinessAccountSelectorHelpers createViewModelWithBusinessProfile:businessId:resourceDownloader:useSelectorDesign:selectedBusinessId:] */

void FUN_105be84c0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_opt_class();
  ppuVar1 = param_3;
  func_0x00010c1164a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c7780(param_1,param_2,ppuVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126c2fe8;
  func_0x00010beee820(PTR_PTR_1126c2fe8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0720c0(param_4,param_2,param_7);
  _objc_release(param_7);
  if (param_6 != 0) {
    if ((int)uVar4 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR_PTR_1126c2fe8;
      func_0x00010beee820(PTR_PTR_1126c2fe8,param_2,2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    puVar3 = puVar16;
  }
  puVar16 = PTR_PTR_1126c2ff0;
  _objc_alloc();
  ppuVar2 = param_3;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  ppuVar6 = param_3;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bfe4500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_3;
  func_0x00010c09e720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010bf2fac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_3;
  func_0x00010c1164a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_3;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c0e1a60();
  ppuVar15 = param_3;
  func_0x00010bf2d4e0();
  func_0x00010bf2d140();
  func_0x00010c016a00(puVar16,param_2,ppuVar1,ppuVar7,ppuVar10,param_1,param_4,ppuVar12,ppuVar14,
                      (char)ppuVar15);
  _objc_release(ppuVar13);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar2);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 105be87b8; end: 105be88b3; -[SCBusinessAccountSelectorTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105be87b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ec478;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be46c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731e78);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112731e78) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be46c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731e7c);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112731e7c) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    func_0x00010beaf1c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105be88b4; end: 105be8943; -[SCBusinessAccountSelectorTableViewCell layoutStrategy] */

void FUN_105be88b4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2ff8;
  func_0x00010bfb9620(PTR_PTR_1126c2ff8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2b40(0x4020000000000000,0x4020000000000000,0x4010000000000000,0x4020000000000000);
  func_0x00010c1f9080(0,0x4020000000000000,0x4010000000000000,0x4020000000000000,puVar1);
  func_0x00010c212ec0(0,0x4020000000000000,0x4020000000000000,0x4020000000000000,puVar1);
  func_0x00010c1b9fc0(0x4020000000000000,0x4020000000000000,0x4020000000000000,0x4020000000000000,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105be8944; end: 105be8dbf; -[SCBusinessAccountSelectorTableViewCell _setupPrimaryContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be8944(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010be46c20(param_1,param_2,0x14,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112731e80;
  uVar27 = *(undefined8 *)(param_1 + lVar28);
  *(long *)(param_1 + lVar28) = lVar29;
  _objc_release(uVar27);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  lVar29 = (long)_DAT_112731e84;
  uVar27 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar1;
  _objc_release(uVar27);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar30 = (long)_DAT_112731e88;
  uVar27 = *(undefined8 *)(param_1 + lVar30);
  *(undefined **)(param_1 + lVar30) = puVar1;
  _objc_release(uVar27);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar30),param_2,*(undefined8 *)(param_1 + lVar28));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar30),param_2,*(undefined8 *)(param_1 + lVar29));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar28);
  uStack_b0 = uVar27;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  uStack_a8 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar28);
  uStack_a0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493c0(0xc010000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar29);
  uStack_98 = uVar12;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar29);
  uStack_90 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c274200(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf49460(uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar29);
  uStack_88 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar19;
  func_0x00010bf49500(uVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar29);
  uStack_80 = uVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar22;
  func_0x00010bf493a0(uVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = 8;
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar27);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(uVar26);
  _objc_opt_new(puVar1);
  func_0x00010c21ad00();
  func_0x00010c213180(puVar1,param_2,uVar26);
  _objc_release(uVar26);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c181cc0(0x443b8000,puVar1,param_2,0);
  func_0x00010c181f00(0x437a0000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105be8dc0; end: 105be8e57; -[SCBusinessAccountSelectorTableViewCell _labelWithTypeStyle:color:] */

void FUN_105be8dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c21ad00();
  func_0x00010c213180(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010c181cc0(0x443b8000,puVar1,param_2,0);
  func_0x00010c181f00(0x437a0000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105be8e58; end: 105be8e87; -[SCBusinessAccountSelectorTableViewCell primaryTextSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be8e58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731e88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105be8e88; end: 105be8eb7; -[SCBusinessAccountSelectorTableViewCell secondaryTextSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be8e88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731e78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105be8eb8; end: 105be8ee7; -[SCBusinessAccountSelectorTableViewCell tertiaryTextSlot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be8eb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731e7c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105be8ee8; end: 105be90bb; -[SCBusinessAccountSelectorTableViewCell updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be8ee8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c3000;
  lVar1 = param_3;
  func_0x00010c08df80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c279320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d660();
  func_0x00010bfb96a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126ec478;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_updateWithViewModel__112680e58,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e1a60();
  if (lVar1 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112731e84));
  }
  else {
    lVar1 = param_3;
    func_0x00010c0e1a60(param_3);
    func_0x000108f470a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112731e84));
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bfbbe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112731e80));
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112731e78));
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c1413a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112731e7c));
  _objc_release(lVar1);
  func_0x00010c25eaa0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 105be90bc; end: 105be912b; -[SCBusinessAccountSelectorTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be90bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112731e7c,0);
  _objc_storeStrong(param_1 + _DAT_112731e78,0);
  _objc_storeStrong(param_1 + _DAT_112731e80,0);
  _objc_storeStrong(param_1 + _DAT_112731e84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731e88,0);
  return;
}



/* Entry: 105be912c; end: 105be9297; -[SCBusinessAccountSelectorViewController initWithBusinessProfiles:resourceDownloader:bitmojiSelfieFetcher:userInfoServices:useSelectorDesign:selectedBusinessId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105be912c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ec480;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112731e8c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112731e90;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112731e94),param_9);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112731e98) = param_7;
    lVar3 = (long)_DAT_112731e9c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    func_0x00010c21c380(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105be9298; end: 105be9337; -[SCBusinessAccountSelectorViewController viewDidLoad] */

void FUN_105be9298(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c2297a0(param_1);
  func_0x00010c229760(param_1);
  return;
}



/* Entry: 105be9338; end: 105be9663; -[SCBusinessAccountSelectorViewController setupTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105be9338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar18 = (long)_DAT_112731ea0;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar16);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112731ea4));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar1);
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c21ad00(uVar16);
  if ((*(byte *)(param_1 + _DAT_112731e98) & 1) == 0) {
    func_0x000105bee338();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105bee380();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar18));
  _objc_release(uVar16);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar18));
  lVar21 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar21);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar6;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar22);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(lVar8);
  _objc_release(lVar19);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = lVar2;
    return auVar23;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc_init();
  lVar19 = (long)_DAT_112731ea4;
  uVar16 = *(undefined8 *)(lVar2 + lVar19);
  *(undefined **)(lVar2 + lVar19) = puVar1;
  _objc_release(uVar16);
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar19));
  func_0x00010c1fce40(*(undefined8 *)(lVar2 + lVar19));
  uVar16 = *(undefined8 *)(lVar2 + lVar19);
  _objc_opt_class(PTR_PTR_1126c3008);
  func_0x00010c125fe0(uVar16);
  func_0x00010c189840(*(undefined8 *)(lVar2 + lVar19));
  func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar19));
  lVar15 = lVar2;
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar8 = *(long *)(lVar2 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + _DAT_112731ea0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar9;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 4;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(lVar19);
  _objc_release(lVar2);
  _objc_release(uVar11);
  _objc_release(uVar22);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar21);
  _objc_release(lVar18);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = lVar8;
    return auVar24;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(uVar14);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar21 = (long)_DAT_112731ea8;
  uVar16 = *(undefined8 *)(lVar8 + lVar21);
  *(undefined **)(lVar8 + lVar21) = puVar1;
  _objc_release(uVar16);
  puVar7 = PTR_PTR_1126c3010;
  func_0x00010bf5a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(lVar8 + lVar21));
  _objc_retain(puVar13);
  puVar1 = puVar13;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(puVar13);
      }
      puVar12 = PTR_PTR_1126c3010;
      uVar22 = *(undefined8 *)((long)puVar20 * 8);
      func_0x00010c1164a0(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar22;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a080(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      _objc_release(uVar22);
      func_0x00010befa120(*(undefined8 *)(lVar8 + lVar21));
      _objc_release(puVar12);
      puVar20 = puVar20 + 1;
    } while (puVar1 != puVar20);
    puVar1 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = puVar13;
    return auVar25;
  }
  ___stack_chk_fail();
  return ZEXT816(1);
}



/* Entry: 105be9664; end: 105be997b; -[SCBusinessAccountSelectorViewController setupTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105be9664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc_init();
  lVar18 = (long)_DAT_112731ea4;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar16);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar18));
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  _objc_opt_class(PTR_PTR_1126c3008);
  func_0x00010c125fe0(uVar16);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar18));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112731ea0);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar7;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 4;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar21);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar16);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar20);
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = lVar3;
    return auVar22;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(uVar14);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar20 = (long)_DAT_112731ea8;
  uVar16 = *(undefined8 *)(lVar3 + lVar20);
  *(undefined **)(lVar3 + lVar20) = puVar1;
  _objc_release(uVar16);
  puVar11 = PTR_PTR_1126c3010;
  func_0x00010bf5a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(lVar3 + lVar20));
  _objc_retain(puVar13);
  puVar1 = puVar13;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar13);
      }
      puVar12 = PTR_PTR_1126c3010;
      uVar21 = *(undefined8 *)((long)puVar19 * 8);
      func_0x00010c1164a0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar21;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a080(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      _objc_release(uVar21);
      func_0x00010befa120(*(undefined8 *)(lVar3 + lVar20));
      _objc_release(puVar12);
      puVar19 = puVar19 + 1;
    } while (puVar1 != puVar19);
    puVar1 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(uVar14);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = puVar13;
    return auVar23;
  }
  ___stack_chk_fail();
  return ZEXT816(1);
}



/* Entry: 105be997c; end: 105be9ba7; -[SCBusinessAccountSelectorViewController setUpViewModelsWithBusinessProfiles:userInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105be997c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar8 = (long)_DAT_112731ea8;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar2;
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c3010;
  func_0x00010bf5a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar8));
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126c3010;
      uVar9 = *(undefined8 *)(lVar7 * 8);
      func_0x00010c1164a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a080(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar9);
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar8));
      _objc_release(puVar4);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_3;
    return auVar10;
  }
  ___stack_chk_fail();
  return ZEXT816(1);
}



/* Entry: 105be9ba8; end: 105be9bb3; -[SCBusinessAccountSelectorViewController _cellContainerStyle] */

undefined1  [16] FUN_105be9ba8(void)

{
  return ZEXT816(1);
}



/* Entry: 105be9bb4; end: 105be9c6b; -[SCBusinessAccountSelectorViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be9bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc1c0(param_1);
  func_0x00010c20eaa0(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731ea8);
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d0c0(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105be9c6c; end: 105be9c7b; -[SCBusinessAccountSelectorViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105be9c6c(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105be9c7c; end: 105be9c8b; -[SCBusinessAccountSelectorViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be9c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731ea8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105be9c8c; end: 105be9e2b; -[SCBusinessAccountSelectorViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be9c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + _DAT_112731ea8);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(lVar9,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR_PTR_1126c3018;
  lVar2 = lVar9;
  func_0x00010bfbbe40(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010c294420(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf60a80(puVar8,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = lVar9;
    func_0x00010bf24ec0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    func_0x00010c0c7820(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010bf2d4e0(lVar9);
    lVar6 = lVar9;
    func_0x00010c0e1a60(lVar9);
    lVar7 = lVar9;
    func_0x00010bf2d140();
    func_0x00010c0c7840(puVar8,param_2,lVar2,lVar3,lVar1,lVar4,lVar5,lVar6,(char)lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112731e94;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7b320();
  _objc_release(param_1);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 105be9e2c; end: 105be9e33; -[SCBusinessAccountSelectorViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_105be9e2c(void)

{
  return 1;
}



/* Entry: 105be9e34; end: 105be9e63; -[SCBusinessAccountSelectorViewController scrollViewForTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be9e34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731ea4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105be9e64; end: 105be9ebb; -[SCBusinessAccountSelectorViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be9e64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 2) {
    lVar2 = (long)_DAT_112731e94;
    lVar1 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf752e0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + lVar2,0);
    return;
  }
  return;
}



/* Entry: 105be9ebc; end: 105be9fdb; -[SCBusinessAccountSelectorViewController tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105be9ebc(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar7 = param_3 + -32.0;
  _objc_release(lVar4);
  dVar6 = 1.79769313486232e+308;
  func_0x00010c23d5a0(dVar7,0x7fefffffffffffff,*(undefined8 *)(param_4 + _DAT_112731ea0));
  uVar1 = *(ulong *)(param_4 + _DAT_112731ea8);
  func_0x00010bf529e0();
  lVar4 = (long)_DAT_112731ea4;
  func_0x00010befda00(*(undefined8 *)(param_4 + lVar4));
  uVar2 = *(undefined8 *)(param_4 + lVar4);
  func_0x00010c29fc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(uVar3);
  _objc_release(uVar2);
  dVar5 = 0.0;
  if (param_7 == 8) {
    if (4 < uVar1) {
      uVar1 = 5;
    }
    dVar5 = dVar6 + 8.0 + 6.0 + param_3 + (double)uVar1 * dVar7 + 23.0;
  }
  return dVar5;
}



/* Entry: 105be9fdc; end: 105be9feb; -[SCBusinessAccountSelectorViewController bitmojiSelfieFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105be9fdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731e8c);
}



/* Entry: 105be9fec; end: 105bea02b; -[SCBusinessAccountSelectorViewController setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be9fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731e8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bea02c; end: 105bea03b; -[SCBusinessAccountSelectorViewController resourceDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bea02c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731e90);
}



/* Entry: 105bea03c; end: 105bea07b; -[SCBusinessAccountSelectorViewController setResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bea03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731e90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bea07c; end: 105bea08b; -[SCBusinessAccountSelectorViewController viewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bea07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731ea8);
}



/* Entry: 105bea08c; end: 105bea0cb; -[SCBusinessAccountSelectorViewController setViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bea08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731ea8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bea0cc; end: 105bea0db; -[SCBusinessAccountSelectorViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bea0cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731ea4);
}



/* Entry: 105bea0dc; end: 105bea11b; -[SCBusinessAccountSelectorViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bea0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731ea4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bea11c; end: 105bea12b; -[SCBusinessAccountSelectorViewController titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105bea11c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112731ea0);
}



/* Entry: 105bea12c; end: 105bea16b; -[SCBusinessAccountSelectorViewController setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bea12c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731ea0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105bea16c; end: 105bea18b; -[SCBusinessAccountSelectorViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bea16c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112731e94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105bea18c; end: 105bea19f; -[SCBusinessAccountSelectorViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bea18c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112731e94,param_3);
  return;
}



/* Entry: 105bea1a0; end: 105bea22b; -[SCBusinessAccountSelectorViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bea1a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731e94);
  _objc_storeStrong(param_1 + _DAT_112731ea0,0);
  _objc_storeStrong(param_1 + _DAT_112731ea4,0);
  _objc_storeStrong(param_1 + _DAT_112731ea8,0);
  _objc_storeStrong(param_1 + _DAT_112731e90,0);
  _objc_storeStrong(param_1 + _DAT_112731e8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731e9c,0);
  return;
}



/* Entry: 105bea22c; end: 105bea3df; -[SCBusinessAccountSelectorViewModel initWithFullname:username:role:leadingView:businessId:memberRoleHostUserLogoURL:officialBadgeType:canSaveHighlights:canPostToSpotlight:trailingAccessoryViewModel:isSelected:] */

undefined8 *
FUN_105bea22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined1 param_13)

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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ec488;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar1[8] = param_9;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 10) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105bea3e0; end: 105bea3e7; -[SCBusinessAccountSelectorViewModel fullname] */

undefined8 FUN_105bea3e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105bea3e8; end: 105bea3ef; -[SCBusinessAccountSelectorViewModel username] */

undefined8 FUN_105bea3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105bea3f0; end: 105bea3f7; -[SCBusinessAccountSelectorViewModel role] */

undefined8 FUN_105bea3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105bea3f8; end: 105bea3ff; -[SCBusinessAccountSelectorViewModel leadingView] */

undefined8 FUN_105bea3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105bea400; end: 105bea407; -[SCBusinessAccountSelectorViewModel businessId] */

undefined8 FUN_105bea400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105bea408; end: 105bea40f; -[SCBusinessAccountSelectorViewModel memberRoleHostUserLogoURL] */

undefined8 FUN_105bea408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105bea410; end: 105bea417; -[SCBusinessAccountSelectorViewModel officialBadgeType] */

undefined8 FUN_105bea410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105bea418; end: 105bea41f; -[SCBusinessAccountSelectorViewModel canSaveHighlights] */

undefined1 FUN_105bea418(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105bea420; end: 105bea427; -[SCBusinessAccountSelectorViewModel canPostToSpotlight] */

undefined1 FUN_105bea420(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105bea428; end: 105bea42f; -[SCBusinessAccountSelectorViewModel trailingAccessoryViewModel] */

undefined8 FUN_105bea428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105bea430; end: 105bea437; -[SCBusinessAccountSelectorViewModel isSelected] */

undefined1 FUN_105bea430(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105bea438; end: 105bea4a3; -[SCBusinessAccountSelectorViewModel .cxx_destruct] */

void FUN_105bea438(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105bea4a4; end: 105bea5a3; -[SCSearchResultsAccountSelectorDataSource initWithAllViewModels:tableView:cellIdentifier:delegate:] */

undefined1 *
FUN_105bea4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ec490;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105bea5a4; end: 105bea67b; -[SCSearchResultsAccountSelectorDataSource tableView:cellForRowAtIndexPath:] */

void FUN_105bea5a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c142240();
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar3 <= lVar2 + 1U) {
    uVar1 = 4;
  }
  if (lVar2 == 0) {
    uVar1 = uVar1 + 1;
  }
  func_0x00010c20eaa0(param_3,param_2,2,uVar1 | 10);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d0c0(param_3,param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105bea67c; end: 105bea683; -[SCSearchResultsAccountSelectorDataSource tableView:numberOfRowsInSection:] */

void FUN_105bea67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105bea684; end: 105bea693; -[SCSearchResultsAccountSelectorDataSource tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105bea684(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105bea694; end: 105bea717; -[SCSearchResultsAccountSelectorDataSource tableView:didSelectRowAtIndexPath:] */

void FUN_105bea694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd40(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a720(lVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105bea718; end: 105bea82f; -[SCSearchResultsAccountSelectorDataSource updateSearchQuery:] */

void FUN_105bea718(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar3);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c128b60();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105bea830;
    puStack_40 = &UNK_1108dc518;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x00010bfaea20(uVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    _objc_release(uVar2);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c128b60();
    _objc_release(param_1);
    param_1 = lStack_38;
    param_3 = lVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105bea830; end: 105bea9eb;  */

long FUN_105bea830(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bfbbe40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(lVar2);
  _objc_release(lVar6);
  _objc_retain(lVar2);
  lVar6 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      lVar6 = 0;
LAB_105bea994:
      _objc_release(lVar2);
      _objc_release(lVar2);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return lVar6;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_2 + 0x28,0);
      _objc_storeStrong(param_2 + 0x20,0);
      _objc_destroyWeak(param_2 + 0x18);
      _objc_storeStrong(param_2 + 0x10,0);
      param_2 = param_2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_destroyWeak_11034d218)(param_2);
      return param_2;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(ulong *)(lVar7 * 8);
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfda7c0();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar6 = 1;
        goto LAB_105bea994;
      }
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    lVar6 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105bea9ec; end: 105beaa37; -[SCSearchResultsAccountSelectorDataSource .cxx_destruct] */

void FUN_105bea9ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105beaa38; end: 105beabd3; -[SCSearchableBusinessAccountSelectorDataSource initWithBusinessProfiles:bitmojiSelfieFetcher:resourceDownloader:userInfoServices:recentProfileUsernames:cellIdentifier:useSelectorDesign:selectedBusinessId:delegate:] */

undefined1 *
FUN_105beaa38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ec498;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_12);
    *(undefined1 *)((long)puVar1 + 0x40) = param_9;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
    func_0x00010c21c380(puVar1);
    func_0x00010c2292e0(puVar1);
    func_0x00010c229500(puVar1);
    func_0x00010c2297c0(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105beabd4; end: 105beac3b; -[SCSearchableBusinessAccountSelectorDataSource sectionTitleForViewModel:] */

void FUN_105beabd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfbbe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010901f074();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105beac3c; end: 105bead0f; -[SCSearchableBusinessAccountSelectorDataSource setupSectionTitles] */

void FUN_105beac3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105bead10;
  puStack_40 = &UNK_1108dc548;
  lStack_38 = param_1;
  func_0x00010bf43280(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c066b00(uVar2,param_2,&PTR____CFConstantStringClassReference_110f8a458,0);
  }
  puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  _objc_alloc();
  func_0x00010bff4000();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar4;
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105bead10; end: 105bead1b;  */

void FUN_105bead10(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c156650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_sectionTitleForViewModel__1126333b0,param_2);
  return;
}



/* Entry: 105bead1c; end: 105beb137; -[SCSearchableBusinessAccountSelectorDataSource setupRecentsWithUserInfoServices:recentProfileUsernames:] */

undefined8 FUN_105bead1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_170;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
LAB_105beb0a8:
      _objc_release(param_4);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar9;
      _objc_release(uVar16);
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        return param_3;
      }
      ___stack_chk_fail();
      func_0x00010c294420(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_2;
      func_0x00010c0720c0();
      _objc_release(param_2);
      return uVar16;
    }
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = param_3;
        func_0x00010c2946e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar5;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar16);
        _objc_release(lVar5);
        puStack_170 = PTR_PTR_1126c3010;
        if ((int)lVar8 == 0) {
          lVar5 = lVar4;
          func_0x00010c0c7820(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c7780();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
        }
        else {
          func_0x00010c291460();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar9 = PTR_PTR_1126c2ff0;
        _objc_alloc();
        lVar5 = lVar4;
        func_0x00010bfbbe40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar4;
        func_0x00010c294420(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar4;
        func_0x00010c1413a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar4;
        func_0x00010bf24ec0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar4;
        func_0x00010c0c7820(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e1a60();
        func_0x00010bf2d4e0();
        func_0x00010bf2d140();
        lVar13 = lVar4;
        func_0x00010c279320();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07d660();
        func_0x00010c016a00(puVar9);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar8);
        _objc_release(lVar5);
        func_0x00010befa120(puVar2);
        puVar14 = puVar2;
        func_0x00010bf529e0();
        _objc_release(puVar9);
        _objc_release(puStack_170);
        if (puVar14 == (undefined *)0x3) {
          _objc_release(lVar4);
          goto LAB_105beb0a8;
        }
      }
      _objc_release(lVar4);
      lVar17 = lVar17 + 1;
    } while (lVar3 != lVar17);
    lVar3 = param_4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105beb138; end: 105beb17f;  */

undefined8 FUN_105beb138(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105beb180; end: 105beb39f; -[SCSearchableBusinessAccountSelectorDataSource setUpViewModelsWithBusinessProfiles:userInfoServices:] */

ulong FUN_105beb180(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126c3010;
  func_0x00010bf5a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_3);
      }
      puVar4 = PTR_PTR_1126c3010;
      uVar11 = *(undefined8 *)(uVar10 * 8);
      func_0x00010c1164a0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar11;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a080(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar11);
      func_0x00010befa120(puVar1);
      _objc_release(puVar4);
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
    uVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  ppuVar7 = &PTR___NSConcreteGlobalBlock_1108dc598;
  puVar4 = puVar1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar4;
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  func_0x00010bfbbe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010bfbbe40(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  lVar6 = param_2;
  func_0x00010bf433c0(param_2);
  _objc_release(ppuVar5);
  _objc_release(param_2);
  return (ulong)(lVar6 == 1);
}



/* Entry: 105beb3a0; end: 105beb42b;  */

bool FUN_105beb3a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bfbbe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfbbe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_2;
  func_0x00010bf433c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return lVar2 == 1;
}



/* Entry: 105beb42c; end: 105beb68f; -[SCSearchableBusinessAccountSelectorDataSource setupTitleToViewModelsMapping] */

undefined1  [16] FUN_105beb42c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar5 = lVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar10);
      }
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar4);
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  lVar5 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  lVar10 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar10);
  lVar5 = lVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar10);
      }
      lVar6 = param_1;
      func_0x00010c156640(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0e00e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar4);
      _objc_release(lVar6);
      lVar11 = lVar11 + 1;
    } while (lVar5 != lVar11);
    lVar5 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar7 = puVar3;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar4;
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = puVar3;
    return auVar12;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  func_0x00010c29dc20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010c142240();
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (puVar7 <= puVar4 + 1) {
    uVar1 = 4;
  }
  if (puVar4 == (undefined *)0x0) {
    uVar1 = uVar1 + 1;
  }
  _objc_release(puVar3);
  auVar13._8_8_ = uVar1 | 10;
  auVar13._0_8_ = 2;
  return auVar13;
}



/* Entry: 105beb690; end: 105beb71f; -[SCSearchableBusinessAccountSelectorDataSource _cellContainerStyleForIndexPath:] */

undefined1  [16] FUN_105beb690(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_3);
  func_0x00010c29dc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c142240();
  _objc_release(param_3);
  uVar3 = param_1;
  func_0x00010bf529e0();
  uVar1 = 0;
  if (uVar3 <= lVar2 + 1U) {
    uVar1 = 4;
  }
  if (lVar2 == 0) {
    uVar1 = uVar1 + 1;
  }
  _objc_release(param_1);
  auVar4._8_8_ = uVar1 | 10;
  auVar4._0_8_ = 2;
  return auVar4;
}



/* Entry: 105beb720; end: 105beb77f; -[SCSearchableBusinessAccountSelectorDataSource viewModelsForIndexPath:] */

void FUN_105beb720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c1554e0(param_3);
  func_0x00010c0dfd40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105beb780; end: 105beb78f; -[SCSearchableBusinessAccountSelectorDataSource tableView:heightForHeaderInSection:] */

void FUN_105beb780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe09f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b78f0,PTR_s_heightWithSubtitle__1125d5c38,0);
  return;
}



/* Entry: 105beb790; end: 105beb833; -[SCSearchableBusinessAccountSelectorDataSource tableView:viewForHeaderInSection:] */

void FUN_105beb790(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c0dfd40(ppuVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    lVar2 = *(long *)(param_1 + 0x50);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      _objc_release(ppuVar1);
      ppuVar1 = &PTR____CFConstantStringClassReference_110e214f8;
    }
  }
  puVar3 = PTR_PTR_1126c3020;
  _objc_alloc(PTR_PTR_1126c3020);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c216240();
  func_0x00010c20eaa0(puVar3,param_2,2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105beb834; end: 105beb8b3; -[SCSearchableBusinessAccountSelectorDataSource viewModelForIndexPath:] */

void FUN_105beb834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c29dc20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0dfd40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105beb8b4; end: 105beb8bb; -[SCSearchableBusinessAccountSelectorDataSource numberOfSectionsInTableView:] */

void FUN_105beb8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105beb8bc; end: 105beb95f; -[SCSearchableBusinessAccountSelectorDataSource tableView:cellForRowAtIndexPath:] */

void FUN_105beb8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc1e0(param_1);
  func_0x00010c20eaa0(param_3);
  func_0x00010c29d720(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c28d0c0(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105beb960; end: 105beb96f; -[SCSearchableBusinessAccountSelectorDataSource tableView:heightForRowAtIndexPath:] */

undefined8 FUN_105beb960(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 105beb970; end: 105beb9db; -[SCSearchableBusinessAccountSelectorDataSource tableView:numberOfRowsInSection:] */

undefined8 FUN_105beb970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105beb9dc; end: 105beba2b; -[SCSearchableBusinessAccountSelectorDataSource tableView:didSelectRowAtIndexPath:] */

void FUN_105beb9dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29d720(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a720();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105beba2c; end: 105beba3f; -[SCSearchableBusinessAccountSelectorDataSource allViewModels] */

void FUN_105beba2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSArray_1126ae530,PTR_s_arrayWithArray__1125a01d8,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 105beba40; end: 105beba47; -[SCSearchableBusinessAccountSelectorDataSource sectionTitles] */

undefined8 FUN_105beba40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105beba48; end: 105beba4f; -[SCSearchableBusinessAccountSelectorDataSource recentViewModels] */

undefined8 FUN_105beba48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105beba50; end: 105bebacf; -[SCSearchableBusinessAccountSelectorDataSource .cxx_destruct] */

void FUN_105beba50(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105bebad0; end: 105bebcff; -[SCSearchableBusinessAccountSelectorViewController initWithBusinessProfiles:resourceDownloader:bitmojiSelfieFetcher:userPreferences:userInfoServices:useSelectorDesign:selectedBusinessId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105bebad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ec4a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_112731f14;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112731f18;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112731f1c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112731f20,param_10);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112731f24) = param_8;
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c3028;
    _objc_alloc();
    func_0x00010bff9ec0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112731f28);
    *(undefined **)((long)puVar1 + (long)_DAT_112731f28) = puVar4;
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105bebd00; end: 105bebdaf; -[SCSearchableBusinessAccountSelectorViewController viewDidLoad] */

void FUN_105bebd00(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec4a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c228b60(param_1);
  func_0x00010c229760(param_1);
  func_0x00010c2294a0(param_1);
  func_0x00010c228c40(param_1);
  return;
}



/* Entry: 105bebdb0; end: 105bec16b; -[SCSearchableBusinessAccountSelectorViewController setupHeaderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bebdb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af080;
  _objc_opt_new();
  func_0x00010c1f8460();
  func_0x00010c2162c0(puVar1,param_2,0);
  func_0x00010c20eaa0(puVar1,param_2,0);
  func_0x00010c18f820(puVar1,param_2,0);
  func_0x00010c211340(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010c216560(puVar1,param_2,4);
  if ((*(byte *)(param_1 + _DAT_112731f24) & 1) == 0) {
    func_0x000105bee338();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000105bee380();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216240(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar14 = (long)_DAT_112731f2c;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar2;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c187440(uVar13,param_2,puVar1);
  func_0x000105bee368();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c153980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0();
  _objc_release(uVar3);
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf5eee0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8420();
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c153980(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar13);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493c0(0x4020000000000000,uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493c0(0xc020000000000000,uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b78e8;
  _objc_alloc();
  func_0x00010c019120();
  uVar13 = *(undefined8 *)(puVar1 + _DAT_112731f30);
  *(undefined **)(puVar1 + _DAT_112731f30) = puVar2;
  _objc_release(uVar13);
  _objc_retain(puVar2);
  func_0x00010c18b5e0(puVar2,param_2,puVar1);
  func_0x00010c1e9b40(puVar2,param_2,*(undefined8 *)(puVar1 + _DAT_112731f34));
  uVar3 = *(undefined8 *)(puVar1 + _DAT_112731f28);
  func_0x00010c156680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2166c0(puVar2,param_2,uVar13);
  _objc_release(uVar13);
  _objc_release(uVar3);
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bec16c; end: 105bec24f; -[SCSearchableBusinessAccountSelectorViewController setupIndexView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bec16c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b78e8;
  _objc_alloc();
  func_0x00010c019120();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731f30);
  *(undefined **)(param_1 + _DAT_112731f30) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c1e9b40(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112731f34));
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731f28);
  func_0x00010c156680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2166c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105bec250; end: 105bec5b7; -[SCSearchableBusinessAccountSelectorViewController setupTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bec250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  code *pcVar18;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar17 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar16 = (long)_DAT_112731f34;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar13);
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar16),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar16),param_2,0);
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  puVar1 = PTR_PTR_1126c3008;
  _objc_opt_class(PTR_PTR_1126c3008);
  func_0x00010c125fe0(uVar13,param_2,puVar1,&PTR____CFConstantStringClassReference_110e21518);
  lVar15 = (long)_DAT_112731f28;
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar15));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar16),param_2,*(undefined8 *)(param_1 + lVar15));
  lVar15 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  lStack_88 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112731f2c);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcVar18 = FUN_105bec5b8;
  puVar1 = PTR_PTR_1126c3030;
  _objc_alloc();
  uVar13 = *(undefined8 *)(lVar2 + _DAT_112731f28);
  func_0x00010bf00d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2b00(puVar1,param_2,uVar13,*(undefined8 *)(lVar2 + _DAT_112731f34),
                      &PTR____CFConstantStringClassReference_110e21518,lVar2,in_x6,in_x7,uVar10,
                      uVar14,uVar9,param_1,puVar17,pcVar18);
  uVar14 = *(undefined8 *)(lVar2 + _DAT_112731f38);
  *(undefined **)(lVar2 + _DAT_112731f38) = puVar1;
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 105bec5b8; end: 105bec643; -[SCSearchableBusinessAccountSelectorViewController setupSearchDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bec5b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3030;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731f28);
  func_0x00010bf00d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2b00(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + _DAT_112731f34),
                      &PTR____CFConstantStringClassReference_110e21518,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731f38);
  *(undefined **)(param_1 + _DAT_112731f38) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105bec644; end: 105bec6d3; -[SCSearchableBusinessAccountSelectorViewController tray:canUseGestureToExpandOrCollapse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105bec644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_4,param_2,lVar2);
  _objc_release(param_4);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731f30);
  func_0x00010bfb68e0(uVar3);
  uVar1 = (uint)uVar3;
  _CGRectContainsPoint();
  return uVar1 ^ 1;
}



/* Entry: 105bec6d4; end: 105bec703; -[SCSearchableBusinessAccountSelectorViewController scrollViewForTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bec6d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731f34);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105bec704; end: 105bec75b; -[SCSearchableBusinessAccountSelectorViewController indexView:userDidSelectTitleAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bec704(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731f34);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152720(uVar2,param_2,puVar1,1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105bec75c; end: 105becadf; -[SCSearchableBusinessAccountSelectorViewController didSelectBusinessAccountViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105bec75c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731f2c);
  func_0x00010c153980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar11 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0309a0();
  _objc_release(lVar11);
  lVar3 = *(long *)(param_1 + _DAT_112731f28);
  func_0x00010c1226a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar3);
      }
      uVar12 = *(ulong *)(lVar10 * 8);
      puVar4 = puVar2;
      func_0x00010bf529e0();
      if ((undefined *)0x2 < puVar4) goto LAB_105bec920;
      uVar5 = uVar12;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c294420(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0720c0();
      _objc_release(lVar6);
      _objc_release(uVar5);
      if ((uVar7 & 1) == 0) {
        func_0x00010c294420(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar12);
      }
      lVar10 = lVar10 + 1;
    } while (lVar11 != lVar10);
    lVar11 = lVar3;
    func_0x00010bf52a60();
  }
LAB_105bec920:
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731f1c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  lVar11 = param_3;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126c3018;
  lVar8 = param_3;
  func_0x00010bfbbe40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    func_0x00010bf60a80(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar11 = param_3;
    func_0x00010bf24ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_3;
    func_0x00010c0c7820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2d4e0(param_3);
    func_0x00010c0e1a60(param_3);
    func_0x00010bf2d140();
    func_0x00010c0c7840(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar11);
  }
  _objc_release(lVar3);
  _objc_release(lVar8);
  param_1 = param_1 + _DAT_112731f20;
  _objc_loadWeakRetained();
  func_0x00010bf7b320();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_112731f34;
  func_0x00010c18b5e0(*(undefined8 *)(param_3 + lVar11));
  func_0x00010c189840(*(undefined8 *)(param_3 + lVar11));
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + lVar11),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105becae0; end: 105becb2f; -[SCSearchableBusinessAccountSelectorViewController switchToNonSearchDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105becae0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112731f34;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1),param_2,
                      *(undefined8 *)(param_1 + _DAT_112731f28));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105becb30; end: 105becbef; -[SCSearchableBusinessAccountSelectorViewController _textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105becb30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    func_0x00010c2657e0(param_1);
    lVar3 = (long)_DAT_112731f38;
  }
  else {
    lVar1 = (long)_DAT_112731f34;
    lVar3 = (long)_DAT_112731f38;
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1),param_2,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c189840(*(undefined8 *)(param_1 + lVar1),param_2,*(undefined8 *)(param_1 + lVar3));
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar3 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c289860(uVar2,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105becbf0; end: 105becc07; -[SCSearchableBusinessAccountSelectorViewController textFieldShouldClear:] */

undefined8 FUN_105becbf0(void)

{
  func_0x00010c2657e0();
  return 1;
}



/* Entry: 105becc08; end: 105becc4b; -[SCSearchableBusinessAccountSelectorViewController textFieldShouldReturn:] */

undefined8 FUN_105becc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2657e0(param_1);
  func_0x00010c13a0e0(param_3);
  _objc_release(param_3);
  return 0;
}



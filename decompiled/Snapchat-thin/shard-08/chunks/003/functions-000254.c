/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106060c08; end: 106060c17; -[TwoFAForgetDeviceView tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106060c08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dcf8);
}



/* Entry: 106060c18; end: 106060c57; -[TwoFAForgetDeviceView setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106060c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dcf8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106060c58; end: 106060c67; -[TwoFAForgetDeviceView footerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106060c58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dcfc);
}



/* Entry: 106060c68; end: 106060ca7; -[TwoFAForgetDeviceView setFooterView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106060c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dcfc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106060ca8; end: 106060cb7; -[TwoFAForgetDeviceView forgetAllDevicesLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106060ca8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd00);
}



/* Entry: 106060cb8; end: 106060cf7; -[TwoFAForgetDeviceView setForgetAllDevicesLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106060cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd00;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106060cf8; end: 106060d07; -[TwoFAForgetDeviceView forgetAllDeviceIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106060cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd04);
}



/* Entry: 106060d08; end: 106060d47; -[TwoFAForgetDeviceView setForgetAllDeviceIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106060d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106060d48; end: 106060d57; -[TwoFAForgetDeviceView twoFAVerifiedDevices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106060d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd08);
}



/* Entry: 106060d58; end: 106060d97; -[TwoFAForgetDeviceView setTwoFAVerifiedDevices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106060d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106060d98; end: 106060e33; -[TwoFAForgetDeviceView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106060d98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dd08,0);
  _objc_storeStrong(param_1 + _DAT_11273dd04,0);
  _objc_storeStrong(param_1 + _DAT_11273dd00,0);
  _objc_storeStrong(param_1 + _DAT_11273dcfc,0);
  _objc_storeStrong(param_1 + _DAT_11273dcf8,0);
  _objc_storeStrong(param_1 + _DAT_11273dcf4,0);
  _objc_storeStrong(param_1 + _DAT_11273dcf0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273dcec);
  return;
}



/* Entry: 106060e34; end: 106060f37; -[TwoFAForgetDeviceViewController initWithUserSession:userTwoFAServices:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106060e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ef5b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11273dd0c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dd10;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dd14;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010beb0d80(puVar1);
    func_0x00010be8aea0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106060f38; end: 106061023; -[TwoFAForgetDeviceViewController _setUIState:] */

void FUN_106060f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
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
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c209fc0(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010bf712c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106061024;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106061084;
  puStack_68 = &UNK_110850cc8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106061488;
  puStack_90 = &UNK_1108450c8;
  uStack_88 = param_1;
  uStack_60 = param_1;
  uStack_38 = param_1;
  func_0x00010c0bea60(param_3,param_2,&puStack_58,&puStack_80,&puStack_a8);
  _objc_release(param_3);
  return;
}



/* Entry: 106061024; end: 106061083;  */

void FUN_106061024(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09d4e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106061084; end: 106061487;  */

void FUN_106061084(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
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
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  uVar22 = param_2;
  _objc_retain(param_2);
  func_0x00010c09d4e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99140(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar24);
  puVar1 = PTR_PTR_1126c7600;
  _objc_alloc(PTR_PTR_1126c7600);
  func_0x00010c060960();
  _objc_release(param_2);
  func_0x00010c18d020(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf712c0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf712c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar24);
  _objc_release(uVar2);
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf712c0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar24);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf712c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf712c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf712c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf712c0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
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
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar24);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  uVar24 = *(undefined8 *)(lVar3 + 0x20);
  _objc_retain(uVar22);
  func_0x00010c09d4e0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010bf99140(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar24);
  uVar24 = *(undefined8 *)(lVar3 + 0x20);
  func_0x00010bf99140(uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103da0();
  _objc_release(uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar24);
  return;
}



/* Entry: 106061488; end: 10606152b;  */

void FUN_106061488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c09d4e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf99140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10606152c; end: 106061eb7; -[TwoFAForgetDeviceViewController _setupUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606152c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar13);
  _objc_release(puVar1);
  if (2 < lRam00000001138466f0) {
    puVar1 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar13 = (long)_DAT_11273dd18;
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    *(undefined **)(param_1 + lVar13) = puVar1;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    lVar13 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0678a0(uVar12);
    _objc_release(lVar13);
  }
  puVar1 = PTR_PTR_1126c31a0;
  _objc_alloc(PTR_PTR_1126c31a0);
  func_0x00010c063980();
  func_0x00010c1a7600(param_1);
  _objc_release(puVar1);
  lVar13 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar13);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010c08e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar2);
  _objc_release(lVar13);
  func_0x000106078414();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar13);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273dd1c);
  *(undefined **)(param_1 + _DAT_11273dd1c) = puVar1;
  _objc_release(uVar12);
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c09d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar13);
  lVar13 = param_1;
  func_0x00010c09d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar13);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar13 = param_1;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_e0 = lVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_f0 = lVar13;
  lStack_a8 = lVar13;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_110 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_a0 = lVar2;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  lStack_98 = lVar5;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release(lStack_108);
  _objc_release(lStack_110);
  _objc_release(lStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e8);
  _objc_release(lStack_d8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  lVar13 = param_1;
  func_0x00010c09d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(lVar13);
  puVar1 = PTR_PTR_1126c7608;
  _objc_alloc(PTR_PTR_1126c7608);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1973e0(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar13);
  _objc_release(lVar2);
  lVar13 = param_1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar13);
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_e0 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_f0 = lVar2;
  lStack_c8 = lVar2;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  lStack_108 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = (undefined *)lVar13;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  lStack_120 = lVar3;
  lStack_c0 = lVar3;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_130 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_b8 = lVar9;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  func_0x00010bf493c0(0xc03e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_b0 = lVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_118);
  _objc_release(puVar1);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lStack_130);
  _objc_release(lStack_128);
  _objc_release(lStack_120);
  _objc_release(lStack_110);
  _objc_release(puStack_100);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e8);
  _objc_release(lStack_d8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  lVar2 = param_1;
  func_0x00010bf99140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126c7610;
  func_0x00010c09cac0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106061eb8;
  puVar10 = PTR_PTR_1126c7610;
  puStack_160 = puVar1;
  lStack_158 = lVar13;
  lStack_150 = lVar2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c09cb40(PTR_PTR_1126c7610);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea8c40(puVar6);
  _objc_release(puVar10);
  _objc_initWeak(auStack_168,puVar6);
  uVar11 = *(undefined8 *)(puVar6 + _DAT_11273dd10);
  func_0x00010c27db80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  func_0x00010bfab460(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  return;
}



/* Entry: 106061eb8; end: 106061fd3; -[TwoFAForgetDeviceViewController _reloadVerifiedDevices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106061eb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126c7610;
  func_0x00010c09cb40(PTR_PTR_1126c7610);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea8c40(param_1);
  _objc_release(puVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273dd10);
  func_0x00010c27db80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfab460(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106061fd4; end: 106062073;  */

void FUN_106061fd4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7610;
  if (param_3 == 0) {
    func_0x00010c09cac0(PTR_PTR_1126c7610,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8c40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106062074; end: 106062077; -[TwoFAForgetDeviceViewController didTapRetryInErrorView:] */

void FUN_106062074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8aeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadVerifiedDevices_112580548);
  return;
}



/* Entry: 106062078; end: 106062087; -[TwoFAForgetDeviceViewController backgroundColorForHeader] */

void FUN_106062078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd6);
  return;
}



/* Entry: 106062088; end: 10606208b; -[TwoFAForgetDeviceViewController titleForHeader:] */

void FUN_106062088(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3b258;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3b258,
                      &PTR____CFConstantStringClassReference_110e3af18,0);
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



/* Entry: 10606208c; end: 10606209b; -[TwoFAForgetDeviceViewController textColorForHeader:] */

void FUN_10606208c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc6);
  return;
}



/* Entry: 10606209c; end: 1060620ef; -[TwoFAForgetDeviceViewController imageForLeftButtonInState:] */

void FUN_10606209c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 2) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf138e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060620f0; end: 1060620f7; -[TwoFAForgetDeviceViewController imageForRightButtonInState:] */

undefined8 FUN_1060620f0(void)

{
  return 0;
}



/* Entry: 1060620f8; end: 106062133; -[TwoFAForgetDeviceViewController leftButtonPressed] */

void FUN_1060620f8(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106062134; end: 10606225f; -[TwoFAForgetDeviceViewController forgetOneDevicePressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106062134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273dd10);
  func_0x00010c27db60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf70720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfb55c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106062260; end: 1060622c3;  */

void FUN_106062260(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
    func_0x00010be8aea0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060622c4; end: 1060622c7;  */

void FUN_1060622c4(void)

{
  return;
}



/* Entry: 1060622c8; end: 10606230b;  */

void FUN_1060622c8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c237520(PTR_PTR_1126afca8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10606230c; end: 1060624b3; -[TwoFAForgetDeviceViewController forgetAllDevicesPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606230c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1060624b4;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  ppuVar2 = &puStack_90;
  _objc_retainBlock();
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106062668;
  puStack_a0 = &UNK_110843540;
  _objc_copyWeak(auStack_98,auStack_68);
  ppuVar3 = &puStack_b8;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273dd10);
  func_0x00010c27db60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar3);
  func_0x00010bfb54c0(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1060624b4; end: 106062627;  */

void FUN_1060624b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be8aea0(param_1);
    puVar2 = PTR_PTR_1126af180;
    func_0x000106078744();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106062628;
    puStack_60 = &UNK_11084fd58;
    lStack_58 = param_1;
    func_0x00010beef320(puVar2,param_2,lVar1,3,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x0001060786cc();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar3,param_2,0,puVar4,puVar5,0,0);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106062628; end: 1060626c7;  */

void FUN_106062628(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060626c8; end: 1060626d3;  */

void FUN_1060626c8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_failure__11260dc18,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1060626d4; end: 106062777; -[TwoFAForgetDeviceViewController inValidView:] */

uint FUN_1060626d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3,param_2,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb68e0();
  uVar1 = (uint)uVar2;
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1 ^ 1;
}



/* Entry: 106062778; end: 106062783; -[TwoFAForgetDeviceViewController defaultProjectNameV3] */

void FUN_106062778(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106062784; end: 10606278f; -[TwoFAForgetDeviceViewController defaultProjectNameV2] */

void FUN_106062784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106062790; end: 10606279f; -[TwoFAForgetDeviceViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106062790(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd0c);
}



/* Entry: 1060627a0; end: 1060627df; -[TwoFAForgetDeviceViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060627a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd0c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060627e0; end: 1060627ef; -[TwoFAForgetDeviceViewController userTwoFAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060627e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd10);
}



/* Entry: 1060627f0; end: 10606282f; -[TwoFAForgetDeviceViewController setUserTwoFAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060627f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd10;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106062830; end: 10606283f; -[TwoFAForgetDeviceViewController header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106062830(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd20);
}



/* Entry: 106062840; end: 10606287f; -[TwoFAForgetDeviceViewController setHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106062840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd20;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106062880; end: 10606288f; -[TwoFAForgetDeviceViewController devicesView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106062880(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd24);
}



/* Entry: 106062890; end: 1060628cf; -[TwoFAForgetDeviceViewController setDevicesView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106062890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd24;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060628d0; end: 1060628df; -[TwoFAForgetDeviceViewController loadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060628d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd1c);
}



/* Entry: 1060628e0; end: 10606291f; -[TwoFAForgetDeviceViewController setLoadingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060628e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd1c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106062920; end: 10606292f; -[TwoFAForgetDeviceViewController errorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106062920(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd28);
}



/* Entry: 106062930; end: 10606296f; -[TwoFAForgetDeviceViewController setErrorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106062930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106062970; end: 10606297f; -[TwoFAForgetDeviceViewController state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106062970(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd2c);
}



/* Entry: 106062980; end: 1060629bf; -[TwoFAForgetDeviceViewController setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106062980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060629c0; end: 106062a6f; -[TwoFAForgetDeviceViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060629c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dd2c,0);
  _objc_storeStrong(param_1 + _DAT_11273dd28,0);
  _objc_storeStrong(param_1 + _DAT_11273dd1c,0);
  _objc_storeStrong(param_1 + _DAT_11273dd24,0);
  _objc_storeStrong(param_1 + _DAT_11273dd20,0);
  _objc_storeStrong(param_1 + _DAT_11273dd10,0);
  _objc_storeStrong(param_1 + _DAT_11273dd0c,0);
  _objc_storeStrong(param_1 + _DAT_11273dd18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dd14,0);
  return;
}



/* Entry: 106062a70; end: 106062baf; -[TwoFAGenericCodeVerificationController initWithInfoText:type:userBlizzard:customAppThemeProvider:] */

undefined1 *
FUN_106062a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ef5c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126c7618;
    _objc_alloc(PTR_PTR_1126c7618);
    func_0x00010c01dae0();
    func_0x00010c220ce0(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c298440(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c298440(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189840();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106062bb0; end: 106062beb; -[TwoFAGenericCodeVerificationController loadView] */

void FUN_106062bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c298440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222380(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106062bec; end: 106062cbb; -[TwoFAGenericCodeVerificationController viewDidLoad] */

void FUN_106062bec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef5c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1934e0(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 106062cbc; end: 106062d23; -[TwoFAGenericCodeVerificationController viewDidAppear:] */

void FUN_106062cbc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef5c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29c6a0();
  _objc_release(param_1);
  return;
}



/* Entry: 106062d24; end: 106062dc7; -[TwoFAGenericCodeVerificationController viewWillAppear:] */

void FUN_106062d24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef5c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106062dc8; end: 106062dcf; -[TwoFAGenericCodeVerificationController pageViewName] */

undefined8 FUN_106062dc8(void)

{
  return 0x14b;
}



/* Entry: 106062dd0; end: 106062dd7; -[TwoFAGenericCodeVerificationController shouldPopToRootViewController] */

undefined8 FUN_106062dd0(void)

{
  return 0;
}



/* Entry: 106062dd8; end: 106062e27; -[TwoFAGenericCodeVerificationController keyboardWillShow:] */

void FUN_106062dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c086ce0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106062e28; end: 106062e77; -[TwoFAGenericCodeVerificationController keyboardWillHide:] */

void FUN_106062e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c298440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c086cc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106062e78; end: 106062e7f; -[TwoFAGenericCodeVerificationController backgroundColorForHeader] */

undefined8 FUN_106062e78(void)

{
  return 0;
}



/* Entry: 106062e80; end: 106062e87; -[TwoFAGenericCodeVerificationController titleForHeader:] */

undefined8 FUN_106062e80(void)

{
  return 0;
}



/* Entry: 106062e88; end: 106062e8f; -[TwoFAGenericCodeVerificationController textColorForHeader:] */

undefined8 FUN_106062e88(void)

{
  return 0;
}



/* Entry: 106062e90; end: 106062e97; -[TwoFAGenericCodeVerificationController imageForLeftButtonInState:] */

undefined8 FUN_106062e90(void)

{
  return 0;
}



/* Entry: 106062e98; end: 106062e9f; -[TwoFAGenericCodeVerificationController imageForRightButtonInState:] */

undefined8 FUN_106062e98(void)

{
  return 0;
}



/* Entry: 106062ea0; end: 106062edb; -[TwoFAGenericCodeVerificationController leftButtonPressed:] */

void FUN_106062ea0(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106062edc; end: 106062edf; -[TwoFAGenericCodeVerificationController verifyPressed:successBlock:failureBlock:] */

void FUN_106062edc(void)

{
  return;
}



/* Entry: 106062ee0; end: 106062ee3; -[TwoFAGenericCodeVerificationController verifySucceed:recoveryCode:] */

void FUN_106062ee0(void)

{
  return;
}



/* Entry: 106062ee4; end: 106062ee7; -[TwoFAGenericCodeVerificationController resendPressed:successBlock:failureBlock:] */

void FUN_106062ee4(void)

{
  return;
}



/* Entry: 106062ee8; end: 106062ef3; -[TwoFAGenericCodeVerificationController defaultProjectNameV3] */

void FUN_106062ee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106062ef4; end: 106062eff; -[TwoFAGenericCodeVerificationController defaultProjectNameV2] */

void FUN_106062ef4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 106062f00; end: 106062f0f; -[TwoFAGenericCodeVerificationController verificationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106062f00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273dd30);
}



/* Entry: 106062f10; end: 106062f4f; -[TwoFAGenericCodeVerificationController setVerificationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106062f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dd30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106062f50; end: 106062f63; -[TwoFAGenericCodeVerificationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106062f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dd30,0);
  return;
}



/* Entry: 106062f64; end: 10606307b; -[TwoFAGenericCodeVerificationView initWithInfoText:type:userBlizzard:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106062f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  puStack_48 = PTR_PTR_1126ef5c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c1ac640(puVar2);
    func_0x00010c21acc0(puVar2);
    lVar4 = (long)_DAT_11273dd40;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273dd44;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_6;
    _objc_release(uVar3);
  }
  func_0x00010c09c740(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10606307c; end: 106063293; -[TwoFAGenericCodeVerificationView loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10606307c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if (2 < lRam00000001138466f0) {
    puVar1 = PTR_PTR_1126b1830;
    _objc_alloc();
    func_0x00010c051be0();
    lVar3 = (long)_DAT_11273dd48;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c0678a0(*(undefined8 *)(param_1 + lVar3),param_2,param_1,1);
  }
  func_0x00010bfeed60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1f7d00(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181fc0();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf56900(param_1);
  func_0x00010bf59ec0(param_1);
  func_0x00010bf557a0(param_1);
  return;
}



/* Entry: 106063294; end: 106063473;  */

void FUN_106063294(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c152980(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c45b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106063474; end: 106063603; -[TwoFAGenericCodeVerificationView initHeader] */

void FUN_106063474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c31a0;
  _objc_alloc(PTR_PTR_1126c31a0);
  func_0x00010c063980();
  func_0x00010c1a7600(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x000106078414();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106063604; end: 1060636bb;  */

void FUN_106063604(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c274140();
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
  (**(code **)(lVar4 + 0x10))();
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



/* Entry: 1060636bc; end: 106063923; -[TwoFAGenericCodeVerificationView createInfoLabel] */

void FUN_1060636bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af270;
  _objc_alloc_init(PTR_PTR_1126af270);
  func_0x00010c1ac4a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c26b980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bfee0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bfedd60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106063924; end: 106063cf3;  */

void FUN_106063924(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfedd60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0e0();
  _objc_release(uVar9);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c152980(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c152980(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c152980(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c152980(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106063cf4; end: 106063ebb; -[TwoFAGenericCodeVerificationView createVerificationCodeTextField] */

void FUN_106063cf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af260;
  _objc_alloc(PTR_PTR_1126af260);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c220be0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c2982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6ec0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106078b7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c2982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 106063ebc; end: 106064053;  */

void FUN_106063ebc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfedd60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106064054; end: 1060642a7; -[TwoFAGenericCodeVerificationView createContinueButton] */

void FUN_106064054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c75a8;
  func_0x00010bfc3280(PTR_PTR_1126c75a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1837a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x65);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 1060642a8; end: 106064433;  */

void FUN_1060642a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4fa60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(lVar7,uVar8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c45b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106064434; end: 1060644ff; -[TwoFAGenericCodeVerificationView setIsWorking:] */

void FUN_106064434(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  func_0x00010bf4fa60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106064500; end: 10606450f; -[TwoFAGenericCodeVerificationView textColorForView] */

void FUN_106064500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc6);
  return;
}



/* Entry: 106064510; end: 106064547; -[TwoFAGenericCodeVerificationView leftButtonPressed] */

void FUN_106064510(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106064548; end: 106064773; -[TwoFAGenericCodeVerificationView continueButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106064548(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x00010c1b5be0(param_1,param_2,1);
  lVar2 = param_1;
  func_0x00010c07cde0();
  if (((int)lVar2 == 0) || (lVar2 = param_1, func_0x00010bf52940(), (int)lVar2 == 0)) {
    *(long *)(param_1 + _DAT_11273dd50) = *(long *)(param_1 + _DAT_11273dd50) + 1;
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10606492c;
    puStack_c8 = &UNK_110843540;
    ppuVar5 = &puStack_e0;
    _objc_copyWeak(auStack_c0,auStack_68);
    ppuVar3 = &puStack_e0;
    _objc_retainBlock(ppuVar3);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1060649b4;
    puStack_f0 = &UNK_110843540;
    ppuVar6 = &puStack_108;
    _objc_copyWeak(auStack_e8,auStack_68);
    ppuVar4 = &puStack_108;
    _objc_retainBlock(ppuVar4);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298aa0();
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106064774;
    puStack_78 = &UNK_1108434b0;
    ppuVar5 = &puStack_90;
    _objc_copyWeak(auStack_70,auStack_68);
    ppuVar3 = &puStack_90;
    _objc_retainBlock(ppuVar3);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1060647c4;
    puStack_a0 = &UNK_110843540;
    ppuVar6 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_68);
    ppuVar4 = &puStack_b8;
    _objc_retainBlock(ppuVar4);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137ee0();
  }
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_destroyWeak(ppuVar6 + 4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(ppuVar5 + 4);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106064774; end: 1060647c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106064774(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11273dd4c) = 1;
    func_0x00010c1b5be0(param_1,param_2,0);
    func_0x00010c139900(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060647c4; end: 10606492b;  */

void FUN_1060647c4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b5be0(param_1);
    puVar1 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000106078774();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af180;
    puVar3 = puVar2;
    func_0x000106078744();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar6);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010be5a500(param_2);
    func_0x00010c1b5be0(param_2);
    lVar7 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298b40();
    _objc_release(lVar7);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10606492c; end: 1060649b3;  */

void FUN_10606492c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be5a500(param_1);
    func_0x00010c1b5be0(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298b40();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060649b4; end: 106064a0f;  */

void FUN_1060649b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1b5be0(param_1);
    func_0x00010c1971a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106064a10; end: 106064a17; -[TwoFAGenericCodeVerificationView textViewShouldBeginEditing:] */

undefined8 FUN_106064a10(void)

{
  return 1;
}



/* Entry: 106064a18; end: 106064a1f; -[TwoFAGenericCodeVerificationView textViewShouldReturn:] */

undefined8 FUN_106064a18(void)

{
  return 1;
}



/* Entry: 106064a20; end: 106064d97; -[TwoFAGenericCodeVerificationView textViewDidChange:] */

void FUN_106064a20(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c2982a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == puVar1) {
    puVar1 = param_1;
    func_0x00010c2982a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0();
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    puVar4 = param_1;
    if (puVar2 < (undefined *)0x6) {
      puVar1 = param_1;
      func_0x00010c07cde0();
      if ((int)puVar1 != 0) {
        func_0x0001060788ac();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c28ed80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c270640(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c25ce40(puVar2,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar2);
        _objc_release(puVar1);
        func_0x00010c227dc0(param_1,param_2,puVar3);
        puVar1 = param_1;
        func_0x00010c137de0();
        if ((long)puVar1 < 1) {
          puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010bf4fa60(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440();
          _objc_release(puVar2);
          _objc_release(puVar1);
          puVar1 = param_1;
          func_0x00010bf4fa60(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c195460();
        }
        else {
          puVar1 = param_1;
          func_0x00010bf4fa60(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c195460();
          _objc_release(puVar1);
          puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x65);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010bf4fa60(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440();
          _objc_release(puVar2);
        }
        _objc_release(puVar1);
        func_0x00010c184660(param_1,param_2,1);
        _objc_release(puVar3);
        goto LAB_106064d80;
      }
      func_0x0001060784a4();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227dc0(param_1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x65);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf4fa60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x00010bf4fa60(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001060784a4();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227dc0(param_1,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x74);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf4fa60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x00010bf4fa60(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c195460();
    _objc_release(puVar4);
    func_0x00010c184660(param_1,param_2,0);
  }
LAB_106064d80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106064d98; end: 106064d9b; -[TwoFAGenericCodeVerificationView textViewDidBeginEditing:] */

void FUN_106064d98(void)

{
  return;
}



/* Entry: 106064d9c; end: 106064e4f; -[TwoFAGenericCodeVerificationView viewDidAppear:] */

void FUN_106064d9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c2982a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf179a0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c078f20();
  if ((int)uVar1 != 0) {
    func_0x0001060784a4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227dc0(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  uVar1 = param_1;
  func_0x00010c07cde0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c139910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetTimerCountdownText_11262c060);
    return;
  }
  return;
}



/* Entry: 106064e50; end: 10606509f; -[TwoFAGenericCodeVerificationView keyboardWillShow:] */

void FUN_106064e50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  dVar7 = param_1;
  _objc_release(uVar1);
  fVar6 = SUB84(dVar7,0);
  uVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,
                      *(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_110345ce0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c0e00e0(param_7,param_6,
                      *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  uVar3 = param_5;
  func_0x00010c152980(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(-param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010bf4fa60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(-(param_1 + 33.0));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1060650a0;
  puStack_90 = &UNK_110842e18;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1060650a8;
  puStack_b8 = &UNK_110841f20;
  uStack_b0 = param_5;
  uStack_88 = param_5;
  func_0x00010bf03440((double)fVar6,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,
                      -(uVar2 >> 0x1f & 1) & 0xffff000000000000 | (uVar2 & 0xffffffff) << 0x10,
                      &puStack_a8,&puStack_d0);
  _objc_release(param_7);
  return;
}



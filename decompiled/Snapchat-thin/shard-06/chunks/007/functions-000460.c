/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ccc594; end: 104ccc767; -[SCLoginOdlvVerifyingBusinessLogic _handleSubmitAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc594(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710750);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab3a0();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puVar3 = PTR_PTR_1126af198;
  _objc_alloc(PTR_PTR_1126af198);
  func_0x00010c032640();
  param_1 = param_1 + _DAT_112710734;
  _objc_loadWeakRetained(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104ccc768;
  puStack_70 = &UNK_110848618;
  _objc_retain(lVar2);
  lStack_68 = lVar2;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(lVar2);
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0a87c0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(lStack_68);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  return;
}



/* Entry: 104ccc768; end: 104ccc827;  */

void FUN_104ccc768(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ccc828;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ccc828; end: 104ccc8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc828(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11271076c) = 0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112710750);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab3e0();
    _objc_release(uVar1);
    lVar2 = param_1 + _DAT_112710730;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0e1760();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ccc8bc; end: 104ccc97b;  */

void FUN_104ccc8bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ccc97c;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ccc97c; end: 104ccc9b7;  */

void FUN_104ccc97c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be672a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ccc9b8; end: 104cccc1f; -[SCLoginOdlvVerifyingBusinessLogic _odlvLogInFailedWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccc9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710750);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab3c0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11271076c) = 0;
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cccc20;
  puStack_50 = &UNK_110848678;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104cccc74;
  puStack_78 = &UNK_1108486a8;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104cccc80;
  puStack_a0 = &UNK_1108450c8;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104ccccbc;
  puStack_c8 = &UNK_1108450c8;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x104cccd0c;
  puStack_f0 = &UNK_1108450c8;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x104cccd60;
  puStack_118 = &UNK_110848678;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x104cccdb4;
  puStack_140 = &UNK_110848678;
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x104ccce08;
  puStack_168 = &UNK_110848678;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x104ccce5c;
  puStack_190 = &UNK_110848678;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  uStack_1c0 = 0x104ccceb0;
  puStack_1b8 = &UNK_110848678;
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x104cccf04;
  puStack_1e0 = &UNK_110848678;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  uStack_210 = 0x104cccf58;
  puStack_208 = &UNK_1108486d8;
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x104cccfac;
  puStack_230 = &UNK_1108450c8;
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  uStack_260 = 0x104ccd000;
  puStack_258 = &UNK_110848678;
  lStack_250 = param_1;
  lStack_228 = param_1;
  lStack_200 = param_1;
  lStack_1d8 = param_1;
  lStack_1b0 = param_1;
  lStack_188 = param_1;
  lStack_160 = param_1;
  lStack_138 = param_1;
  lStack_110 = param_1;
  lStack_e8 = param_1;
  lStack_c0 = param_1;
  lStack_98 = param_1;
  lStack_70 = param_1;
  lStack_48 = param_1;
  func_0x00010c0bd200(uVar1,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0,&puStack_108,
                      &puStack_130,&puStack_158,&puStack_180,&puStack_1a8,&puStack_1d0,&puStack_1f8,
                      &puStack_220,&puStack_248,&puStack_270);
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 104cccc20; end: 104cccc73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cccc20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0b080(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710764);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710764) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1fea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setShallClearConfirmationCode__11265d4b0,1);
  return;
}



/* Entry: 104cccc74; end: 104cccc7f;  */

void FUN_104cccc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setShallClearConfirmationCode__11265d4b0,1);
  return;
}



/* Entry: 104cccc80; end: 104ccd053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cccc80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710754);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710754) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ccd054; end: 104ccd223; -[SCLoginOdlvVerifyingBusinessLogic _sendNewOdlvAuthRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccd054(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar2 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104ccd224;
  puStack_90 = &UNK_110848708;
  _objc_retain(lVar2);
  lStack_88 = lVar2;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar3 = &puStack_a8;
  _objc_retainBlock(ppuVar3);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104ccd354;
  puStack_c0 = &UNK_110848738;
  _objc_retain(lVar2);
  lStack_b8 = lVar2;
  _objc_copyWeak(auStack_b0,auStack_78);
  ppuVar4 = &puStack_d8;
  _objc_retainBlock(ppuVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112710750);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab400();
  _objc_release(uVar5);
  param_1 = param_1 + _DAT_112710738;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15c300();
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(lStack_b8);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(lStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  return;
}



/* Entry: 104ccd224; end: 104ccd2b3;  */

void FUN_104ccd224(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ccd2b4;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ccd2b4; end: 104ccd353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccd2b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112710750);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab440();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_112710768) = 0;
    func_0x00010c1ec840(param_1,param_2,1);
    lVar2 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ccd354; end: 104ccd413;  */

void FUN_104ccd354(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ccd414;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_40 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ccd414; end: 104ccd50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccd414(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112710750);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab420();
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + _DAT_112710768) = 0;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf98940();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112710764);
      *(undefined8 *)(lVar1 + _DAT_112710764) = uVar2;
      _objc_release(uVar4);
      func_0x00010c1ec840(lVar1,param_2,1);
    }
    else {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112710758);
      *(undefined8 *)(lVar1 + _DAT_112710758) = uVar2;
      _objc_release(uVar4);
    }
    lVar3 = lVar1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ccd50c; end: 104ccd55f; -[SCLoginOdlvVerifyingBusinessLogic _errorMessageOrDefault:] */

void FUN_104ccd50c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 == 0) {
    FUN_104cd14d0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ccd560; end: 104ccd563; -[SCLoginOdlvVerifyingBusinessLogic _connectionErrorMessage] */

void FUN_104ccd560(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daeb18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daeb18,
                      &PTR____CFConstantStringClassReference_110daeaf8,0);
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



/* Entry: 104ccd564; end: 104ccd573; -[SCLoginOdlvVerifyingBusinessLogic resetResendTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104ccd564(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112710748);
}



/* Entry: 104ccd574; end: 104ccd583; -[SCLoginOdlvVerifyingBusinessLogic shallClearConfirmationCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104ccd574(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112710770);
}



/* Entry: 104ccd584; end: 104ccd637; -[SCLoginOdlvVerifyingBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccd584(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710750,0);
  _objc_storeStrong(param_1 + _DAT_112710758,0);
  _objc_storeStrong(param_1 + _DAT_112710754,0);
  _objc_storeStrong(param_1 + _DAT_112710764,0);
  _objc_storeStrong(param_1 + _DAT_112710760,0);
  _objc_storeStrong(param_1 + _DAT_11271073c,0);
  _objc_storeStrong(param_1 + _DAT_112710744,0);
  _objc_destroyWeak(param_1 + _DAT_112710738);
  _objc_destroyWeak(param_1 + _DAT_112710734);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112710730);
  return;
}



/* Entry: 104ccd638; end: 104ccd767; -[SCOdlvVerifyingViewController initWithObfuscatedContact:resendTimerCountDownValue:screen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ccd638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e3b70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112710774;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112710778) = param_4;
    lVar4 = (long)_DAT_11271077c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af160;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710780);
    *(undefined **)((long)puVar1 + (long)_DAT_112710780) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112710784;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ccd768; end: 104ccd76f; -[SCOdlvVerifyingViewController pageViewName] */

undefined8 FUN_104ccd768(void)

{
  return 0xa9;
}



/* Entry: 104ccd770; end: 104ccd7bf; -[SCOdlvVerifyingViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccd770(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112710788));
  puStack_28 = PTR_PTR_1126e3b70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ccd7c0; end: 104ccd8d3; -[SCOdlvVerifyingViewController viewDidLoad] */

void FUN_104ccd7c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3b70;
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
  func_0x00010beb0d80(param_1);
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



/* Entry: 104ccd8d4; end: 104ccd933; -[SCOdlvVerifyingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccd8d4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271077c);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104ccd934; end: 104ccd9b3; -[SCOdlvVerifyingViewController viewWillAppear:] */

void FUN_104ccd934(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  func_0x00010c086c20(PTR_PTR_1126af1a0);
  func_0x00010beb2160(param_1);
  return;
}



/* Entry: 104ccd9b4; end: 104ccda0f; -[SCOdlvVerifyingViewController _setupUI] */

void FUN_104ccd9b4(undefined8 param_1)

{
  func_0x00010beaadc0();
  func_0x00010bead4e0(param_1);
  func_0x00010beb09a0(param_1);
  func_0x00010beac020(param_1);
  func_0x00010beab8a0(param_1);
  func_0x00010beab880(param_1);
  func_0x00010beac640(param_1);
  func_0x00010beace80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 104ccda10; end: 104ccdf0f; -[SCOdlvVerifyingViewController _setupBaseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccda10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  long lStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  long lStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 **ppuStack_540;
  code *pcStack_538;
  undefined *puStack_528;
  long lStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 **ppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined *puStack_468;
  long lStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 **ppuStack_390;
  code *pcStack_388;
  long lStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af168;
  _objc_alloc();
  func_0x00010c04ed60();
  lVar26 = (long)_DAT_11271078c;
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar23);
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf13860(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar23);
  uVar2 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x000108b9a804();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar23,0);
  _objc_release(uVar23);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf4fa60(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar25 = (long)_DAT_112710790;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25),param_2,0);
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf4b2a0(uVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar23);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar26);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  lStack_b8 = lVar3;
  func_0x00010bf4fa60();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar23;
  func_0x00010bf493a0(lVar3,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  lStack_c8 = lVar3;
  lStack_a0 = lVar3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  uStack_d8 = uVar2;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar23;
  func_0x00010bf493a0(uVar2,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  uStack_e8 = uVar2;
  uStack_98 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  uStack_100 = uVar4;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uVar23;
  func_0x00010bf493a0(uVar4,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar25);
  uStack_110 = uVar4;
  uStack_90 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar26);
  uStack_120 = uVar5;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = uVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar23;
  func_0x00010bf493a0(uVar5,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  uStack_88 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar25);
  uStack_80 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0(uVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f0,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uStack_128);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(lStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(lStack_b8);
  lVar3 = lStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104ccdf10;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  uStack_190 = uVar6;
  uStack_188 = uVar5;
  puStack_180 = puVar1;
  uStack_178 = uVar11;
  uStack_170 = uVar4;
  uStack_168 = uVar8;
  uStack_160 = uVar2;
  uStack_158 = uVar23;
  uStack_150 = uVar7;
  uStack_148 = uVar9;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar24 = (long)_DAT_112710794;
  uVar23 = *(undefined8 *)(lVar3 + lVar24);
  *(undefined **)(lVar3 + lVar24) = puVar10;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(lVar3 + lVar24),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar3 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  lVar25 = lVar3;
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar25);
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar24),param_2,0);
  puStack_1e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = *(long *)(lVar3 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar3;
  lStack_1c8 = lVar26;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c0 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar25;
  func_0x00010bf493a0(lVar26,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar3 + lVar24);
  lStack_1d8 = lVar26;
  lStack_1b8 = lVar26;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar3;
  uStack_1e0 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar4,param_2,lVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + lVar24);
  uStack_1b0 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar11;
  func_0x00010bf49420(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + lVar24);
  uStack_1a8 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1a0 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1b8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1e8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(lVar24);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar23);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(uStack_1e0);
  _objc_release(lStack_1d8);
  _objc_release(lStack_1d0);
  _objc_release(lStack_1c0);
  lVar27 = lStack_1c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_104cce204;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aea58;
  uStack_250 = uVar4;
  lStack_248 = lVar26;
  uStack_240 = uVar11;
  lStack_238 = lVar25;
  puStack_230 = puVar1;
  uStack_228 = uVar2;
  lStack_220 = lVar24;
  uStack_218 = uVar5;
  lStack_210 = lVar3;
  uStack_208 = uVar23;
  ppuStack_200 = &puStack_140;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112710798;
  uVar23 = *(undefined8 *)(lVar27 + lVar3);
  *(undefined **)(lVar27 + lVar3) = puVar10;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(lVar27 + lVar3),param_2,0);
  func_0x00010c213040(*(undefined8 *)(lVar27 + lVar3),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar27 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar27 + lVar3);
  func_0x00010c21ad00(uVar23,param_2,3);
  func_0x000104cd1548();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar27 + lVar3),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar27 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  lVar24 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar27 + lVar24),param_2,*(undefined8 *)(lVar27 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(lVar27 + lVar3),param_2,0);
  puStack_280 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar25 = *(long *)(lVar27 + lVar3);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar27 + lVar24);
  lStack_278 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar27 + lVar26));
  func_0x00010bf493c0(lVar25,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar27 + lVar3);
  lStack_270 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar27 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar27 + lVar26));
  uVar23 = uVar11;
  func_0x00010bf493c0(-dVar29,uVar11,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar27 + lVar3);
  uStack_268 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar27 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a800(*(undefined8 *)(lVar27 + lVar26));
  uVar2 = uVar6;
  func_0x00010bf493c0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_260 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_270,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_280,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(lVar25);
  _objc_release(uVar4);
  lVar3 = lStack_278;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_104cce4e8;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aea58;
  uStack_2e0 = uVar7;
  uStack_2d8 = uVar6;
  uStack_2d0 = uVar23;
  uStack_2c8 = uVar5;
  uStack_2c0 = uVar11;
  puStack_2b8 = puVar1;
  lStack_2b0 = lVar25;
  uStack_2a8 = uVar4;
  lStack_2a0 = lVar26;
  uStack_298 = uVar2;
  ppuStack_290 = &ppuStack_200;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_11271079c;
  uVar23 = *(undefined8 *)(lVar3 + lVar28);
  *(undefined **)(lVar3 + lVar28) = puVar10;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(lVar3 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar3 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar3 + lVar28),param_2,1);
  func_0x00010c21ad00(*(undefined8 *)(lVar3 + lVar28),param_2,6);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar3 + lVar28),param_2,puVar10);
  _objc_release(puVar10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104cd1560();
  _objc_retainAutoreleasedReturnValue();
  uStack_310 = *(undefined8 *)(lVar3 + _DAT_112710774);
  func_0x00010c14de00(puVar1,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar3 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar10);
  lVar24 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar24),param_2,*(undefined8 *)(lVar3 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar28),param_2,0);
  puStack_308 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = *(long *)(lVar3 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar3 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar27));
  lVar25 = lVar26;
  func_0x00010bf493c0(lVar26,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + lVar28);
  lStack_300 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar27));
  uVar23 = uVar11;
  func_0x00010bf493c0(-dVar29,uVar11,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar3 + lVar28);
  uStack_2f8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar3 + _DAT_112710798);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf493c0(0x4028000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2f0 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_300,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_308,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(lVar25);
  _objc_release(uVar4);
  lVar3 = lVar26;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_104cce7fc;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aea58;
  uStack_360 = uVar23;
  uStack_358 = uVar5;
  uStack_350 = uVar11;
  puStack_348 = puVar1;
  lStack_340 = lVar25;
  uStack_338 = uVar4;
  lStack_330 = lVar26;
  uStack_328 = uVar7;
  ppuStack_320 = &ppuStack_290;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar24 = (long)_DAT_1127107a0;
  uVar23 = *(undefined8 *)(lVar3 + lVar24);
  *(undefined **)(lVar3 + lVar24) = puVar10;
  _objc_release(uVar23);
  dVar29 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(lVar3 + lVar24));
  func_0x00010c213040(*(undefined8 *)(lVar3 + lVar24),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar3 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(lVar3 + lVar24),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar3 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar3 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  lVar25 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar25),param_2,*(undefined8 *)(lVar3 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar24),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = *(long *)(lVar3 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar3 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar27));
  dVar29 = dVar29 + 2.8;
  lVar25 = lVar26;
  func_0x00010bf493c0(dVar29,lVar26,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar3 + lVar24);
  lStack_378 = lVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar3 + _DAT_11271079c);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(lVar3 + lVar27));
  uVar23 = uVar4;
  func_0x00010bf493c0(dVar29 * 0.5,uVar4,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_370 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_378,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar23);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(lVar25);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  pcStack_388 = FUN_104ccea80;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  ppuStack_390 = &ppuStack_320;
  _objc_alloc_init();
  lVar24 = (long)_DAT_1127107a4;
  uVar23 = *(undefined8 *)(lVar26 + lVar24);
  *(undefined **)(lVar26 + lVar24) = puVar1;
  _objc_release(uVar23);
  func_0x00010c18b5e0(*(undefined8 *)(lVar26 + lVar24),param_2,lVar26);
  func_0x00010bf179a0(*(undefined8 *)(lVar26 + lVar24));
  func_0x00010c1b6ec0(*(undefined8 *)(lVar26 + lVar24),param_2,4);
  uVar23 = *(undefined8 *)(lVar26 + lVar24);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar23,param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar26 + lVar24);
  func_0x00010c160fc0(uVar23,param_2,&PTR____CFConstantStringClassReference_110dae718);
  func_0x000106b78268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar26 + lVar24),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar26 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar26 + lVar24),param_2,lVar26,
                      PTR_s__textFieldDidChange__1125906f8,0x20000);
  lVar3 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar3),param_2,*(undefined8 *)(lVar26 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar24),param_2,0);
  puStack_490 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(lVar26 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 32.0;
  puStack_468 = (undefined *)uVar23;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar26 + lVar24);
  uStack_470 = uVar23;
  uStack_428 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar26 + lVar3);
  puStack_478 = (undefined *)uVar2;
  lStack_458 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112710780;
  puStack_480 = (undefined *)uVar23;
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar25));
  func_0x00010bf493c0(uVar2,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar26 + lVar24);
  uStack_488 = uVar2;
  uStack_420 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar26 + lVar3);
  puStack_498 = (undefined *)uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_4a0 = uVar23;
  lStack_460 = lVar25;
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar25));
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar26 + lVar24);
  uStack_418 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar26 + _DAT_1127107a0);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 12.0;
  uVar23 = uVar11;
  func_0x00010bf493c0(0x4028000000000000,uVar11,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar26 + lVar24);
  uStack_410 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar29 = dVar30;
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar25));
  uVar2 = uVar6;
  func_0x00010bf49420(dVar30 + dVar29 * -2.0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_408 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_428,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_490,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uStack_4a0);
  _objc_release(puStack_498);
  _objc_release(uStack_488);
  _objc_release(puStack_480);
  _objc_release(puStack_478);
  _objc_release(uStack_470);
  _objc_release(puStack_468);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  lVar25 = lStack_458;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lStack_458),param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_498 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar10 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar26 + lVar24);
  puStack_468 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_470 = uVar23;
  func_0x00010bf493a0(puVar10,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  puStack_478 = puVar10;
  puStack_450 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar26 + lVar24);
  puStack_480 = puVar17;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_488 = uVar23;
  func_0x00010bf493a0(puVar17,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_490 = puVar17;
  puStack_448 = puVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 1.0;
  puVar13 = puVar12;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_440 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lStack_460;
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lStack_460));
  puVar10 = puVar14;
  func_0x00010bf493c0(puVar14,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  puStack_438 = puVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar3));
  puVar16 = puVar15;
  func_0x00010bf493c0(-dVar29,puVar15,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_430 = puVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_450,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_498,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar2);
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(uVar23);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puStack_490);
  _objc_release(uStack_488);
  _objc_release(puStack_480);
  _objc_release(puStack_478);
  _objc_release(uStack_470);
  _objc_release(puStack_468);
  puVar18 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4a8 = FUN_104ccf0d8;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar19 = PTR_PTR_1126aea58;
  puStack_500 = puVar12;
  puStack_4f8 = puVar13;
  puStack_4f0 = puVar17;
  uStack_4e8 = uVar2;
  puStack_4e0 = puVar15;
  puStack_4d8 = puVar10;
  uStack_4d0 = uVar23;
  puStack_4c8 = puVar14;
  puStack_4c0 = puVar1;
  puStack_4b8 = puVar16;
  ppuStack_4b0 = &ppuStack_390;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar27 = (long)_DAT_1127107a8;
  uVar23 = *(undefined8 *)(puVar18 + lVar27);
  *(undefined **)(puVar18 + lVar27) = puVar19;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(puVar18 + lVar27),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar18 + lVar27),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar18 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar18 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(puVar18 + lVar27),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar18 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  lVar25 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(puVar18 + lVar25),param_2,*(undefined8 *)(puVar18 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(puVar18 + lVar27),param_2,0);
  puStack_528 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = *(long *)(puVar18 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar18 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(puVar18 + lVar24));
  lVar3 = lVar26;
  func_0x00010bf493c0(lVar26,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar18 + lVar27);
  lStack_520 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar18 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar18 + lVar24));
  uVar23 = uVar11;
  func_0x00010bf493c0(-dVar29,uVar11,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar18 + lVar27);
  uStack_518 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar18 + _DAT_1127107a4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 9.0;
  uVar2 = uVar6;
  func_0x00010bf493c0(0x4022000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_510 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_520,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_528,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(uVar4);
  lVar25 = lVar26;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  pcStack_538 = FUN_104ccf3a0;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126aec40;
  uStack_590 = uVar2;
  uStack_588 = uVar6;
  uStack_580 = uVar23;
  uStack_578 = uVar5;
  uStack_570 = uVar11;
  puStack_568 = puVar1;
  lStack_560 = lVar3;
  uStack_558 = uVar4;
  lStack_550 = lVar26;
  uStack_548 = uVar7;
  ppuStack_540 = &ppuStack_4b0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_1127107ac;
  uVar23 = *(undefined8 *)(lVar25 + lVar27);
  *(undefined **)(lVar25 + lVar27) = puVar10;
  _objc_release(uVar23);
  func_0x00010c20eaa0(*(undefined8 *)(lVar25 + lVar27),param_2,6);
  uVar23 = *(undefined8 *)(lVar25 + lVar27);
  func_0x00010c216380(uVar23,param_2,0x6a,0);
  uVar2 = *(undefined8 *)(lVar25 + lVar27);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar23,0);
  _objc_release(uVar23);
  func_0x00010befbd60(*(undefined8 *)(lVar25 + lVar27),param_2,lVar25,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar28 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar28),param_2,*(undefined8 *)(lVar25 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar26 = *(long *)(lVar25 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar25 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar24));
  lVar3 = lVar26;
  func_0x00010bf493c0(lVar26,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar25 + lVar27);
  lStack_5c0 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar25 + lVar28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar24));
  uVar23 = uVar6;
  func_0x00010bf493c0(-dVar29,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar25 + lVar27);
  uStack_5b8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar25 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf493c0(0x4028000000000000,uVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar25 + lVar27);
  uStack_5b0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar25 + lVar27);
  uStack_5a8 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar25 + lVar28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_5a0 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_5c0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar11);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return;
  }
  ___stack_chk_fail();
  uVar23 = *(undefined8 *)(lVar26 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar23,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccdf10; end: 104cce203; -[SCOdlvVerifyingViewController _setupKeyboardSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccdf10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  long lStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 **ppuStack_410;
  code *pcStack_408;
  undefined *puStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 **ppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  long lStack_330;
  long lStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar24 = (long)_DAT_112710794;
  uVar23 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar24),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar24),param_2,puVar1);
  _objc_release(puVar1);
  lVar25 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar25);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24),param_2,0);
  puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  lStack_98 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar25;
  func_0x00010bf493a0(lVar2,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  lStack_a8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  uStack_b0 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar24);
  uStack_80 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar4;
  func_0x00010bf49420(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar24);
  uStack_78 = uVar23;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_b8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar23);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar25);
  _objc_release(uStack_b0);
  _objc_release(lStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  lVar26 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_104cce204;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aea58;
  uStack_120 = uVar3;
  lStack_118 = lVar2;
  uStack_110 = uVar4;
  lStack_108 = lVar25;
  puStack_100 = puVar1;
  uStack_f8 = uVar9;
  lStack_f0 = lVar24;
  uStack_e8 = uVar5;
  lStack_e0 = param_1;
  uStack_d8 = uVar23;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar25 = (long)_DAT_112710798;
  uVar23 = *(undefined8 *)(lVar26 + lVar25);
  *(undefined **)(lVar26 + lVar25) = puVar6;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(lVar26 + lVar25),param_2,0);
  func_0x00010c213040(*(undefined8 *)(lVar26 + lVar25),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar26 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010c21ad00(uVar23,param_2,3);
  func_0x000104cd1548();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar26 + lVar25),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar26 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  lVar28 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar28),param_2,*(undefined8 *)(lVar26 + lVar25));
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar25),param_2,0);
  puStack_150 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar26 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar26 + lVar28);
  lStack_148 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar24));
  func_0x00010bf493c0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar26 + lVar25);
  lStack_140 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar26 + lVar28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar24));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar26 + lVar25);
  uStack_138 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar26 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a800(*(undefined8 *)(lVar26 + lVar24));
  uVar9 = uVar7;
  func_0x00010bf493c0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_140,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_150,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar25 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_104cce4e8;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aea58;
  uStack_1b0 = uVar8;
  uStack_1a8 = uVar7;
  uStack_1a0 = uVar23;
  uStack_198 = uVar5;
  uStack_190 = uVar4;
  puStack_188 = puVar1;
  lStack_180 = lVar2;
  uStack_178 = uVar3;
  lStack_170 = lVar24;
  uStack_168 = uVar9;
  ppuStack_160 = &puStack_d0;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar27 = (long)_DAT_11271079c;
  uVar23 = *(undefined8 *)(lVar25 + lVar27);
  *(undefined **)(lVar25 + lVar27) = puVar6;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(lVar25 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar25 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar25 + lVar27),param_2,1);
  func_0x00010c21ad00(*(undefined8 *)(lVar25 + lVar27),param_2,6);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar25 + lVar27),param_2,puVar6);
  _objc_release(puVar6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104cd1560();
  _objc_retainAutoreleasedReturnValue();
  uStack_1e0 = *(undefined8 *)(lVar25 + _DAT_112710774);
  func_0x00010c14de00(puVar1,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar25 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar6);
  lVar26 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar26),param_2,*(undefined8 *)(lVar25 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar27),param_2,0);
  puStack_1d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(lVar25 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar25 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar28));
  lVar2 = lVar24;
  func_0x00010bf493c0(lVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar25 + lVar27);
  lStack_1d0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar25 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar28));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar25 + lVar27);
  uStack_1c8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar25 + _DAT_112710798);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4028000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1c0 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1d0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar25 = lVar24;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1e8 = FUN_104cce7fc;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aea58;
  uStack_230 = uVar23;
  uStack_228 = uVar5;
  uStack_220 = uVar4;
  puStack_218 = puVar1;
  lStack_210 = lVar2;
  uStack_208 = uVar3;
  lStack_200 = lVar24;
  uStack_1f8 = uVar8;
  ppuStack_1f0 = &ppuStack_160;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar26 = (long)_DAT_1127107a0;
  uVar23 = *(undefined8 *)(lVar25 + lVar26);
  *(undefined **)(lVar25 + lVar26) = puVar6;
  _objc_release(uVar23);
  dVar29 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(lVar25 + lVar26));
  func_0x00010c213040(*(undefined8 *)(lVar25 + lVar26),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar25 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(lVar25 + lVar26),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar25 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar25 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar2),param_2,*(undefined8 *)(lVar25 + lVar26));
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar26),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(lVar25 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar25 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar28));
  dVar29 = dVar29 + 2.8;
  lVar2 = lVar24;
  func_0x00010bf493c0(dVar29,lVar24,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar25 + lVar26);
  lStack_248 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar25 + _DAT_11271079c);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(lVar25 + lVar28));
  uVar23 = uVar3;
  func_0x00010bf493c0(dVar29 * 0.5,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_240 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_248,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar23);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_104ccea80;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  ppuStack_260 = &ppuStack_1f0;
  _objc_alloc_init();
  lVar26 = (long)_DAT_1127107a4;
  uVar23 = *(undefined8 *)(lVar24 + lVar26);
  *(undefined **)(lVar24 + lVar26) = puVar1;
  _objc_release(uVar23);
  func_0x00010c18b5e0(*(undefined8 *)(lVar24 + lVar26),param_2,lVar24);
  func_0x00010bf179a0(*(undefined8 *)(lVar24 + lVar26));
  func_0x00010c1b6ec0(*(undefined8 *)(lVar24 + lVar26),param_2,4);
  uVar23 = *(undefined8 *)(lVar24 + lVar26);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar23,param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar24 + lVar26);
  func_0x00010c160fc0(uVar23,param_2,&PTR____CFConstantStringClassReference_110dae718);
  func_0x000106b78268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar24 + lVar26),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar24 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar24 + lVar26),param_2,lVar24,
                      PTR_s__textFieldDidChange__1125906f8,0x20000);
  lVar25 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar24 + lVar25),param_2,*(undefined8 *)(lVar24 + lVar26));
  func_0x00010c219b60(*(undefined8 *)(lVar24 + lVar26),param_2,0);
  puStack_360 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(lVar24 + lVar26);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 32.0;
  puStack_338 = (undefined *)uVar23;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar24 + lVar26);
  uStack_340 = uVar23;
  uStack_2f8 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar25);
  puStack_348 = (undefined *)uVar9;
  lStack_328 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112710780;
  puStack_350 = (undefined *)uVar23;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar2));
  func_0x00010bf493c0(uVar9,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar24 + lVar26);
  uStack_358 = uVar9;
  uStack_2f0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar25);
  puStack_368 = (undefined *)uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_370 = uVar23;
  lStack_330 = lVar2;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar2));
  func_0x00010bf493c0(-dVar29,uVar3,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar24 + lVar26);
  uStack_2e8 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar24 + _DAT_1127107a0);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 12.0;
  uVar23 = uVar4;
  func_0x00010bf493c0(0x4028000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar24 + lVar26);
  uStack_2e0 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar29 = dVar30;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar2));
  uVar9 = uVar7;
  func_0x00010bf49420(dVar30 + dVar29 * -2.0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2d8 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_2f8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_360,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_370);
  _objc_release(puStack_368);
  _objc_release(uStack_358);
  _objc_release(puStack_350);
  _objc_release(puStack_348);
  _objc_release(uStack_340);
  _objc_release(puStack_338);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  lVar2 = lStack_328;
  func_0x00010befbb60(*(undefined8 *)(lVar24 + lStack_328),param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_368 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar26);
  puStack_338 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_340 = uVar23;
  func_0x00010bf493a0(puVar6,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  puStack_348 = puVar6;
  puStack_320 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar26);
  puStack_350 = puVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_358 = uVar23;
  func_0x00010bf493a0(puVar15,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_360 = puVar15;
  puStack_318 = puVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 1.0;
  puVar11 = puVar10;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_310 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lStack_330;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lStack_330));
  puVar13 = puVar12;
  func_0x00010bf493c0(puVar12,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_308 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar24 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar25));
  puVar15 = puVar14;
  func_0x00010bf493c0(-dVar29,puVar14,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_300 = puVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_320,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_368,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar15);
  _objc_release(uVar9);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar23);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puStack_360);
  _objc_release(uStack_358);
  _objc_release(puStack_350);
  _objc_release(puStack_348);
  _objc_release(uStack_340);
  _objc_release(puStack_338);
  puVar16 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_378 = FUN_104ccf0d8;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR_PTR_1126aea58;
  puStack_3d0 = puVar10;
  puStack_3c8 = puVar11;
  puStack_3c0 = puVar6;
  uStack_3b8 = uVar9;
  puStack_3b0 = puVar14;
  puStack_3a8 = puVar13;
  uStack_3a0 = uVar23;
  puStack_398 = puVar12;
  puStack_390 = puVar1;
  puStack_388 = puVar15;
  ppuStack_380 = &ppuStack_260;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_1127107a8;
  uVar23 = *(undefined8 *)(puVar16 + lVar28);
  *(undefined **)(puVar16 + lVar28) = puVar17;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(puVar16 + lVar28),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar16 + lVar28),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar16 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar16 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(puVar16 + lVar28),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar16 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(puVar16 + lVar2),param_2,*(undefined8 *)(puVar16 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(puVar16 + lVar28),param_2,0);
  puStack_3f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(puVar16 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar16 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar26));
  lVar25 = lVar24;
  func_0x00010bf493c0(lVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar16 + lVar28);
  lStack_3f0 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar16 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar26));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar16 + lVar28);
  uStack_3e8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar16 + _DAT_1127107a4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 9.0;
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4022000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_3e0 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_3f0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_3f8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar25);
  _objc_release(uVar3);
  lVar2 = lVar24;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_408 = FUN_104ccf3a0;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aec40;
  uStack_460 = uVar9;
  uStack_458 = uVar7;
  uStack_450 = uVar23;
  uStack_448 = uVar5;
  uStack_440 = uVar4;
  puStack_438 = puVar1;
  lStack_430 = lVar25;
  uStack_428 = uVar3;
  lStack_420 = lVar24;
  uStack_418 = uVar8;
  ppuStack_410 = &ppuStack_380;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_1127107ac;
  uVar23 = *(undefined8 *)(lVar2 + lVar28);
  *(undefined **)(lVar2 + lVar28) = puVar6;
  _objc_release(uVar23);
  func_0x00010c20eaa0(*(undefined8 *)(lVar2 + lVar28),param_2,6);
  uVar23 = *(undefined8 *)(lVar2 + lVar28);
  func_0x00010c216380(uVar23,param_2,0x6a,0);
  uVar9 = *(undefined8 *)(lVar2 + lVar28);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar9,param_2,uVar23,0);
  _objc_release(uVar23);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar28),param_2,lVar2,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar27 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar27),param_2,*(undefined8 *)(lVar2 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(lVar2 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar26));
  lVar25 = lVar24;
  func_0x00010bf493c0(lVar24,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + lVar28);
  lStack_490 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar26));
  uVar23 = uVar7;
  func_0x00010bf493c0(-dVar29,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar28);
  uStack_488 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar2 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar18;
  func_0x00010bf493c0(0x4028000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar2 + lVar28);
  uStack_480 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar20;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar2 + lVar28);
  uStack_478 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_470 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_490,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar3);
  _objc_release(uVar20);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar23);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar25);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  uVar23 = *(undefined8 *)(lVar24 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar23,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cce204; end: 104cce4e7; -[SCOdlvVerifyingViewController _setupTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cce204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  long lStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined *puStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  long lStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar25 = (long)_DAT_112710798;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar25),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar25),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c21ad00(uVar23,param_2,3);
  func_0x000104cd1548();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar25),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  lVar28 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar28),param_2,*(undefined8 *)(param_1 + lVar25));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25),param_2,0);
  puStack_90 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar28);
  lStack_88 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar24));
  func_0x00010bf493c0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  lStack_80 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar24));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  uStack_78 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a800(*(undefined8 *)(param_1 + lVar24));
  uVar9 = uVar6;
  func_0x00010bf493c0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_90,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar25 = lStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104cce4e8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126aea58;
  uStack_f0 = uVar7;
  uStack_e8 = uVar6;
  uStack_e0 = uVar23;
  uStack_d8 = uVar5;
  uStack_d0 = uVar4;
  puStack_c8 = puVar1;
  lStack_c0 = lVar2;
  uStack_b8 = uVar3;
  lStack_b0 = lVar24;
  uStack_a8 = uVar9;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar27 = (long)_DAT_11271079c;
  uVar23 = *(undefined8 *)(lVar25 + lVar27);
  *(undefined **)(lVar25 + lVar27) = puVar8;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(lVar25 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar25 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(lVar25 + lVar27),param_2,1);
  func_0x00010c21ad00(*(undefined8 *)(lVar25 + lVar27),param_2,6);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar25 + lVar27),param_2,puVar8);
  _objc_release(puVar8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104cd1560();
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = *(undefined8 *)(lVar25 + _DAT_112710774);
  func_0x00010c14de00(puVar1,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar25 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar8);
  lVar28 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar28),param_2,*(undefined8 *)(lVar25 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar27),param_2,0);
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(lVar25 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar25 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar26));
  lVar2 = lVar24;
  func_0x00010bf493c0(lVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar25 + lVar27);
  lStack_110 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar25 + lVar28);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar26));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar25 + lVar27);
  uStack_108 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar25 + _DAT_112710798);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493c0(0x4028000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_110,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_118,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar25 = lVar24;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104cce7fc;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126aea58;
  uStack_170 = uVar23;
  uStack_168 = uVar5;
  uStack_160 = uVar4;
  puStack_158 = puVar1;
  lStack_150 = lVar2;
  uStack_148 = uVar3;
  lStack_140 = lVar24;
  uStack_138 = uVar7;
  ppuStack_130 = &puStack_a0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_1127107a0;
  uVar23 = *(undefined8 *)(lVar25 + lVar28);
  *(undefined **)(lVar25 + lVar28) = puVar8;
  _objc_release(uVar23);
  dVar29 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(lVar25 + lVar28));
  func_0x00010c213040(*(undefined8 *)(lVar25 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar25 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(lVar25 + lVar28),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar25 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar25 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar25 + lVar2),param_2,*(undefined8 *)(lVar25 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(lVar25 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(lVar25 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar25 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar25 + lVar26));
  dVar29 = dVar29 + 2.8;
  lVar2 = lVar24;
  func_0x00010bf493c0(dVar29,lVar24,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar25 + lVar28);
  lStack_188 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar25 + _DAT_11271079c);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(lVar25 + lVar26));
  uVar23 = uVar3;
  func_0x00010bf493c0(dVar29 * 0.5,uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_180 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_188,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar23);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_104ccea80;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  ppuStack_1a0 = &ppuStack_130;
  _objc_alloc_init();
  lVar28 = (long)_DAT_1127107a4;
  uVar23 = *(undefined8 *)(lVar24 + lVar28);
  *(undefined **)(lVar24 + lVar28) = puVar1;
  _objc_release(uVar23);
  func_0x00010c18b5e0(*(undefined8 *)(lVar24 + lVar28),param_2,lVar24);
  func_0x00010bf179a0(*(undefined8 *)(lVar24 + lVar28));
  func_0x00010c1b6ec0(*(undefined8 *)(lVar24 + lVar28),param_2,4);
  uVar23 = *(undefined8 *)(lVar24 + lVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar23,param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar24 + lVar28);
  func_0x00010c160fc0(uVar23,param_2,&PTR____CFConstantStringClassReference_110dae718);
  func_0x000106b78268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar24 + lVar28),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar24 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar24 + lVar28),param_2,lVar24,
                      PTR_s__textFieldDidChange__1125906f8,0x20000);
  lVar25 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar24 + lVar25),param_2,*(undefined8 *)(lVar24 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(lVar24 + lVar28),param_2,0);
  puStack_2a0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(lVar24 + lVar28);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 32.0;
  puStack_278 = (undefined *)uVar23;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar24 + lVar28);
  uStack_280 = uVar23;
  uStack_238 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar25);
  puStack_288 = (undefined *)uVar9;
  lStack_268 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112710780;
  puStack_290 = (undefined *)uVar23;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar2));
  func_0x00010bf493c0(uVar9,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar24 + lVar28);
  uStack_298 = uVar9;
  uStack_230 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar25);
  puStack_2a8 = (undefined *)uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2b0 = uVar23;
  lStack_270 = lVar2;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar2));
  func_0x00010bf493c0(-dVar29,uVar3,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar24 + lVar28);
  uStack_228 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar24 + _DAT_1127107a0);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 12.0;
  uVar23 = uVar4;
  func_0x00010bf493c0(0x4028000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar24 + lVar28);
  uStack_220 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar29 = dVar30;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar2));
  uVar9 = uVar6;
  func_0x00010bf49420(dVar30 + dVar29 * -2.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_218 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_238,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2a0,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_2b0);
  _objc_release(puStack_2a8);
  _objc_release(uStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(uStack_280);
  _objc_release(puStack_278);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  lVar2 = lStack_268;
  func_0x00010befbb60(*(undefined8 *)(lVar24 + lStack_268),param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_2a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar28);
  puStack_278 = puVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_280 = uVar23;
  func_0x00010bf493a0(puVar8,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  puStack_288 = puVar8;
  puStack_260 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar28);
  puStack_290 = puVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_298 = uVar23;
  func_0x00010bf493a0(puVar15,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_2a0 = puVar15;
  puStack_258 = puVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 1.0;
  puVar11 = puVar10;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_250 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar24 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lStack_270;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lStack_270));
  puVar13 = puVar12;
  func_0x00010bf493c0(puVar12,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_248 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar24 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar25));
  puVar15 = puVar14;
  func_0x00010bf493c0(-dVar29,puVar14,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_240 = puVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_260,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2a8,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar15);
  _objc_release(uVar9);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar23);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puStack_2a0);
  _objc_release(uStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(uStack_280);
  _objc_release(puStack_278);
  puVar16 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_104ccf0d8;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR_PTR_1126aea58;
  puStack_310 = puVar10;
  puStack_308 = puVar11;
  puStack_300 = puVar8;
  uStack_2f8 = uVar9;
  puStack_2f0 = puVar14;
  puStack_2e8 = puVar13;
  uStack_2e0 = uVar23;
  puStack_2d8 = puVar12;
  puStack_2d0 = puVar1;
  puStack_2c8 = puVar15;
  ppuStack_2c0 = &ppuStack_1a0;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar26 = (long)_DAT_1127107a8;
  uVar23 = *(undefined8 *)(puVar16 + lVar26);
  *(undefined **)(puVar16 + lVar26) = puVar17;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(puVar16 + lVar26),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar16 + lVar26),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar16 + lVar26),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar16 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(puVar16 + lVar26),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar16 + lVar26),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(puVar16 + lVar2),param_2,*(undefined8 *)(puVar16 + lVar26));
  func_0x00010c219b60(*(undefined8 *)(puVar16 + lVar26),param_2,0);
  puStack_338 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(puVar16 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar16 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar28));
  lVar25 = lVar24;
  func_0x00010bf493c0(lVar24,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar16 + lVar26);
  lStack_330 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar16 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar28));
  uVar23 = uVar4;
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar16 + lVar26);
  uStack_328 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar16 + _DAT_1127107a4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 9.0;
  uVar9 = uVar6;
  func_0x00010bf493c0(0x4022000000000000,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_320 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_330,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_338,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar25);
  _objc_release(uVar3);
  lVar2 = lVar24;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_104ccf3a0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126aec40;
  uStack_3a0 = uVar9;
  uStack_398 = uVar6;
  uStack_390 = uVar23;
  uStack_388 = uVar5;
  uStack_380 = uVar4;
  puStack_378 = puVar1;
  lStack_370 = lVar25;
  uStack_368 = uVar3;
  lStack_360 = lVar24;
  uStack_358 = uVar7;
  ppuStack_350 = &ppuStack_2c0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_1127107ac;
  uVar23 = *(undefined8 *)(lVar2 + lVar26);
  *(undefined **)(lVar2 + lVar26) = puVar8;
  _objc_release(uVar23);
  func_0x00010c20eaa0(*(undefined8 *)(lVar2 + lVar26),param_2,6);
  uVar23 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010c216380(uVar23,param_2,0x6a,0);
  uVar9 = *(undefined8 *)(lVar2 + lVar26);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar9,param_2,uVar23,0);
  _objc_release(uVar23);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar26),param_2,lVar2,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar27 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar27),param_2,*(undefined8 *)(lVar2 + lVar26));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar26),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = *(long *)(lVar2 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar28));
  lVar25 = lVar24;
  func_0x00010bf493c0(lVar24,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar26);
  lStack_3d0 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar28));
  uVar23 = uVar6;
  func_0x00010bf493c0(-dVar29,uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar26);
  uStack_3c8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar2 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar18;
  func_0x00010bf493c0(0x4028000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar2 + lVar26);
  uStack_3c0 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar20;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar2 + lVar26);
  uStack_3b8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_3b0 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_3d0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar3);
  _objc_release(uVar20);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar25);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  uVar23 = *(undefined8 *)(lVar24 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar23,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cce4e8; end: 104cce7fb; -[SCOdlvVerifyingViewController _setupDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cce4e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_11271079c;
  uVar23 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar1;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar28),param_2,1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar28),param_2,6);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar28),param_2,puVar2);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000104cd1560();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)(param_1 + _DAT_112710774);
  func_0x00010c14de00(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  lVar26 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar26),param_2,*(undefined8 *)(param_1 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar28),param_2,0);
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar27));
  lVar24 = lVar3;
  func_0x00010bf493c0(lVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar28);
  lStack_80 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar27));
  uVar23 = uVar5;
  func_0x00010bf493c0(-dVar29,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar28);
  uStack_78 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112710798);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4028000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar24);
  _objc_release(uVar4);
  lVar26 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104cce7fc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aea58;
  uStack_e0 = uVar23;
  uStack_d8 = uVar6;
  uStack_d0 = uVar5;
  puStack_c8 = puVar1;
  lStack_c0 = lVar24;
  uStack_b8 = uVar4;
  lStack_b0 = lVar3;
  uStack_a8 = uVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar27 = (long)_DAT_1127107a0;
  uVar23 = *(undefined8 *)(lVar26 + lVar27);
  *(undefined **)(lVar26 + lVar27) = puVar2;
  _objc_release(uVar23);
  dVar29 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(lVar26 + lVar27));
  func_0x00010c213040(*(undefined8 *)(lVar26 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar26 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(lVar26 + lVar27),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(lVar26 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(lVar26 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  lVar24 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar24),param_2,*(undefined8 *)(lVar26 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar27),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(lVar26 + lVar27);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar26 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar28));
  dVar29 = dVar29 + 2.8;
  lVar24 = lVar3;
  func_0x00010bf493c0(dVar29,lVar3,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar26 + lVar27);
  lStack_f8 = lVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar26 + _DAT_11271079c);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(lVar26 + lVar28));
  uVar23 = uVar4;
  func_0x00010bf493c0(dVar29 * 0.5,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_f8,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar24);
  _objc_release(uVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_104ccea80;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  ppuStack_110 = &puStack_a0;
  _objc_alloc_init();
  lVar27 = (long)_DAT_1127107a4;
  uVar23 = *(undefined8 *)(lVar3 + lVar27);
  *(undefined **)(lVar3 + lVar27) = puVar1;
  _objc_release(uVar23);
  func_0x00010c18b5e0(*(undefined8 *)(lVar3 + lVar27),param_2,lVar3);
  func_0x00010bf179a0(*(undefined8 *)(lVar3 + lVar27));
  func_0x00010c1b6ec0(*(undefined8 *)(lVar3 + lVar27),param_2,4);
  uVar23 = *(undefined8 *)(lVar3 + lVar27);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar23,param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar3 + lVar27);
  func_0x00010c160fc0(uVar23,param_2,&PTR____CFConstantStringClassReference_110dae718);
  func_0x000106b78268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar3 + lVar27),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar3 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar3 + lVar27),param_2,lVar3,
                      PTR_s__textFieldDidChange__1125906f8,0x20000);
  lVar24 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lVar24),param_2,*(undefined8 *)(lVar3 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar27),param_2,0);
  puStack_210 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(lVar3 + lVar27);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 32.0;
  puStack_1e8 = (undefined *)uVar23;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar3 + lVar27);
  uStack_1f0 = uVar23;
  uStack_1a8 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar3 + lVar24);
  puStack_1f8 = (undefined *)uVar9;
  lStack_1d8 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  puStack_200 = (undefined *)uVar23;
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar26));
  func_0x00010bf493c0(uVar9,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar3 + lVar27);
  uStack_208 = uVar9;
  uStack_1a0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar3 + lVar24);
  puStack_218 = (undefined *)uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_220 = uVar23;
  lStack_1e0 = lVar26;
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar26));
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + lVar27);
  uStack_198 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar3 + _DAT_1127107a0);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 12.0;
  uVar23 = uVar5;
  func_0x00010bf493c0(0x4028000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar3 + lVar27);
  uStack_190 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar29 = dVar30;
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar26));
  uVar9 = uVar7;
  func_0x00010bf49420(dVar30 + dVar29 * -2.0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_188 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1a8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_210,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_220);
  _objc_release(puStack_218);
  _objc_release(uStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(puStack_1e8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar26 = lStack_1d8;
  func_0x00010befbb60(*(undefined8 *)(lVar3 + lStack_1d8),param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_218 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar3 + lVar27);
  puStack_1e8 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f0 = uVar23;
  func_0x00010bf493a0(puVar2,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_1f8 = puVar2;
  puStack_1d0 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar3 + lVar27);
  puStack_200 = puVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_208 = uVar23;
  func_0x00010bf493a0(puVar14,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_210 = puVar14;
  puStack_1c8 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 1.0;
  puVar11 = puVar10;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_1c0 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar3 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lStack_1e0;
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lStack_1e0));
  puVar13 = puVar12;
  func_0x00010bf493c0(puVar12,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_1b8 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar3 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar3 + lVar24));
  puVar14 = puVar2;
  func_0x00010bf493c0(-dVar29,puVar2,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1d0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_218,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(uVar23);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puStack_210);
  _objc_release(uStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1f8);
  _objc_release(uStack_1f0);
  _objc_release(puStack_1e8);
  puVar16 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_104ccf0d8;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR_PTR_1126aea58;
  puStack_280 = puVar10;
  puStack_278 = puVar11;
  puStack_270 = puVar15;
  uStack_268 = uVar9;
  puStack_260 = puVar2;
  puStack_258 = puVar13;
  uStack_250 = uVar23;
  puStack_248 = puVar12;
  puStack_240 = puVar1;
  puStack_238 = puVar14;
  ppuStack_230 = &ppuStack_110;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_1127107a8;
  uVar23 = *(undefined8 *)(puVar16 + lVar28);
  *(undefined **)(puVar16 + lVar28) = puVar17;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(puVar16 + lVar28),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar16 + lVar28),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar16 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar16 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(puVar16 + lVar28),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar16 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  lVar26 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(puVar16 + lVar26),param_2,*(undefined8 *)(puVar16 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(puVar16 + lVar28),param_2,0);
  puStack_2a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(puVar16 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar16 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar27));
  lVar24 = lVar3;
  func_0x00010bf493c0(lVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar16 + lVar28);
  lStack_2a0 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar16 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar16 + lVar27));
  uVar23 = uVar5;
  func_0x00010bf493c0(-dVar29,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar16 + lVar28);
  uStack_298 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar16 + _DAT_1127107a4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 9.0;
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4022000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_290 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_2a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2a8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar24);
  _objc_release(uVar4);
  lVar26 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_104ccf3a0;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aec40;
  uStack_310 = uVar9;
  uStack_308 = uVar7;
  uStack_300 = uVar23;
  uStack_2f8 = uVar6;
  uStack_2f0 = uVar5;
  puStack_2e8 = puVar1;
  lStack_2e0 = lVar24;
  uStack_2d8 = uVar4;
  lStack_2d0 = lVar3;
  uStack_2c8 = uVar8;
  ppuStack_2c0 = &ppuStack_230;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_1127107ac;
  uVar23 = *(undefined8 *)(lVar26 + lVar28);
  *(undefined **)(lVar26 + lVar28) = puVar2;
  _objc_release(uVar23);
  func_0x00010c20eaa0(*(undefined8 *)(lVar26 + lVar28),param_2,6);
  uVar23 = *(undefined8 *)(lVar26 + lVar28);
  func_0x00010c216380(uVar23,param_2,0x6a,0);
  uVar9 = *(undefined8 *)(lVar26 + lVar28);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar9,param_2,uVar23,0);
  _objc_release(uVar23);
  func_0x00010befbd60(*(undefined8 *)(lVar26 + lVar28),param_2,lVar26,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar25 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar26 + lVar25),param_2,*(undefined8 *)(lVar26 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(lVar26 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(lVar26 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar27));
  lVar24 = lVar3;
  func_0x00010bf493c0(lVar3,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar26 + lVar28);
  lStack_340 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar26 + lVar27));
  uVar23 = uVar7;
  func_0x00010bf493c0(-dVar29,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar26 + lVar28);
  uStack_338 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar26 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar18;
  func_0x00010bf493c0(0x4028000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar26 + lVar28);
  uStack_330 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar26 + lVar28);
  uStack_328 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar26 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_320 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_340,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar9);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar23);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar24);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  uVar23 = *(undefined8 *)(lVar3 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar23,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cce7fc; end: 104ccea7f; -[SCOdlvVerifyingViewController _setupCodeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cce7fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar25 = (long)_DAT_1127107a0;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar23);
  dVar29 = 1.0;
  func_0x00010c1b6b20(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar25));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar25),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar25),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  func_0x000108b9a9cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar25),param_2,puVar1);
  _objc_release(puVar1);
  lVar24 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar24),param_2,*(undefined8 *)(param_1 + lVar25));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar27));
  dVar29 = dVar29 + 2.8;
  lVar24 = lVar2;
  func_0x00010bf493c0(dVar29,lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  lStack_68 = lVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271079c);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69260(*(undefined8 *)(param_1 + lVar27));
  uVar23 = uVar4;
  func_0x00010bf493c0(dVar29 * 0.5,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar23);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar24);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_104ccea80;
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  lVar27 = (long)_DAT_1127107a4;
  uVar23 = *(undefined8 *)(lVar2 + lVar27);
  *(undefined **)(lVar2 + lVar27) = puVar1;
  _objc_release(uVar23);
  func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar27),param_2,lVar2);
  func_0x00010bf179a0(*(undefined8 *)(lVar2 + lVar27));
  func_0x00010c1b6ec0(*(undefined8 *)(lVar2 + lVar27),param_2,4);
  uVar23 = *(undefined8 *)(lVar2 + lVar27);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar23,param_2,puVar1);
  _objc_release(puVar1);
  uVar23 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010c160fc0(uVar23,param_2,&PTR____CFConstantStringClassReference_110dae718);
  func_0x000106b78268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(lVar2 + lVar27),param_2,uVar23);
  _objc_release(uVar23);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(lVar2 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar27),param_2,lVar2,
                      PTR_s__textFieldDidChange__1125906f8,0x20000);
  lVar24 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar24),param_2,*(undefined8 *)(lVar2 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar27),param_2,0);
  puStack_180 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar23 = *(undefined8 *)(lVar2 + lVar27);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 32.0;
  puStack_158 = (undefined *)uVar23;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + lVar27);
  uStack_160 = uVar23;
  uStack_118 = uVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + lVar24);
  puStack_168 = (undefined *)uVar3;
  lStack_148 = lVar24;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_112710780;
  puStack_170 = (undefined *)uVar23;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar25));
  func_0x00010bf493c0(uVar3,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + lVar27);
  uStack_178 = uVar3;
  uStack_110 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + lVar24);
  puStack_188 = (undefined *)uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_190 = uVar23;
  lStack_150 = lVar25;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar25));
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar27);
  uStack_108 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + _DAT_1127107a0);
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 12.0;
  uVar23 = uVar5;
  func_0x00010bf493c0(0x4028000000000000,uVar5,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar27);
  uStack_100 = uVar23;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar29 = dVar30;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar25));
  uVar3 = uVar8;
  func_0x00010bf49420(dVar30 + dVar29 * -2.0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_180,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_190);
  _objc_release(puStack_188);
  _objc_release(uStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(uStack_160);
  _objc_release(puStack_158);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  lVar25 = lStack_148;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lStack_148),param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_188 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + lVar27);
  puStack_158 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = uVar23;
  func_0x00010bf493a0(puVar6,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  puStack_168 = puVar6;
  puStack_140 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + lVar27);
  puStack_170 = puVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_178 = uVar23;
  func_0x00010bf493a0(puVar14,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  puStack_180 = puVar14;
  puStack_138 = puVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 1.0;
  puVar10 = puVar9;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_130 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(lVar2 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lStack_150;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lStack_150));
  puVar12 = puVar11;
  func_0x00010bf493c0(puVar11,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_128 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar2 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar24));
  puVar14 = puVar13;
  func_0x00010bf493c0(-dVar29,puVar13,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_140,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_188,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar23);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puStack_180);
  _objc_release(uStack_178);
  _objc_release(puStack_170);
  _objc_release(puStack_168);
  _objc_release(uStack_160);
  _objc_release(puStack_158);
  puVar15 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_104ccf0d8;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = PTR_PTR_1126aea58;
  puStack_1f0 = puVar9;
  puStack_1e8 = puVar10;
  puStack_1e0 = puVar6;
  uStack_1d8 = uVar3;
  puStack_1d0 = puVar13;
  puStack_1c8 = puVar12;
  uStack_1c0 = uVar23;
  puStack_1b8 = puVar11;
  puStack_1b0 = puVar1;
  puStack_1a8 = puVar14;
  ppuStack_1a0 = &puStack_80;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_1127107a8;
  uVar23 = *(undefined8 *)(puVar15 + lVar28);
  *(undefined **)(puVar15 + lVar28) = puVar16;
  _objc_release(uVar23);
  func_0x00010c1a7f60(*(undefined8 *)(puVar15 + lVar28),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar15 + lVar28),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar15 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar15 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(puVar15 + lVar28),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar15 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(puVar15 + lVar2),param_2,*(undefined8 *)(puVar15 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(puVar15 + lVar28),param_2,0);
  puStack_218 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar25 = *(long *)(puVar15 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar15 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(puVar15 + lVar27));
  lVar24 = lVar25;
  func_0x00010bf493c0(lVar25,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar15 + lVar28);
  lStack_210 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar15 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar15 + lVar27));
  uVar23 = uVar5;
  func_0x00010bf493c0(-dVar29,uVar5,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar15 + lVar28);
  uStack_208 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(puVar15 + _DAT_1127107a4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 9.0;
  uVar3 = uVar8;
  func_0x00010bf493c0(0x4022000000000000,uVar8,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_200 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_210,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_218,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(uVar8);
  _objc_release(uVar23);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(lVar24);
  _objc_release(uVar4);
  lVar2 = lVar25;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_104ccf3a0;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126aec40;
  uStack_280 = uVar3;
  uStack_278 = uVar8;
  uStack_270 = uVar23;
  uStack_268 = uVar7;
  uStack_260 = uVar5;
  puStack_258 = puVar1;
  lStack_250 = lVar24;
  uStack_248 = uVar4;
  lStack_240 = lVar25;
  uStack_238 = uVar17;
  ppuStack_230 = &ppuStack_1a0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_1127107ac;
  uVar23 = *(undefined8 *)(lVar2 + lVar28);
  *(undefined **)(lVar2 + lVar28) = puVar6;
  _objc_release(uVar23);
  func_0x00010c20eaa0(*(undefined8 *)(lVar2 + lVar28),param_2,6);
  uVar23 = *(undefined8 *)(lVar2 + lVar28);
  func_0x00010c216380(uVar23,param_2,0x6a,0);
  uVar3 = *(undefined8 *)(lVar2 + lVar28);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar3,param_2,uVar23,0);
  _objc_release(uVar23);
  func_0x00010befbd60(*(undefined8 *)(lVar2 + lVar28),param_2,lVar2,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar26 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar2 + lVar26),param_2,*(undefined8 *)(lVar2 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar25 = *(long *)(lVar2 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar27));
  lVar24 = lVar25;
  func_0x00010bf493c0(lVar25,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar28);
  lStack_2b0 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar2 + lVar27));
  uVar23 = uVar8;
  func_0x00010bf493c0(-dVar29,uVar8,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar2 + lVar28);
  uStack_2a8 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar2 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010bf493c0(0x4028000000000000,uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar2 + lVar28);
  uStack_2a0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar2 + lVar28);
  uStack_298 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar21;
  func_0x00010bf493a0(uVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_290 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_2b0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar20);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar23);
  _objc_release(uVar17);
  _objc_release(uVar8);
  _objc_release(lVar24);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  uVar23 = *(undefined8 *)(lVar25 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar23,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccea80; end: 104ccf0d7; -[SCOdlvVerifyingViewController _setupCodeField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccea80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init();
  lVar27 = (long)_DAT_1127107a4;
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar1;
  _objc_release(uVar22);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar27),param_2,param_1);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar27));
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar27),param_2,4);
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar22,param_2,puVar1);
  _objc_release(puVar1);
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c160fc0(uVar22,param_2,&PTR____CFConstantStringClassReference_110dae718);
  func_0x000106b78268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar27),param_2,uVar22);
  _objc_release(uVar22);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar27),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar27),param_2,param_1,
                      PTR_s__textFieldDidChange__1125906f8,0x20000);
  lVar23 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar23),param_2,*(undefined8 *)(param_1 + lVar27));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27),param_2,0);
  puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 32.0;
  puStack_e8 = (undefined *)uVar22;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar27);
  uStack_f0 = uVar22;
  uStack_a8 = uVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  puStack_f8 = (undefined *)uVar2;
  lStack_d8 = lVar23;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112710780;
  puStack_100 = (undefined *)uVar22;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar24));
  func_0x00010bf493c0(uVar2,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar27);
  uStack_108 = uVar2;
  uStack_a0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  puStack_118 = (undefined *)uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = uVar22;
  lStack_e0 = lVar24;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar24));
  func_0x00010bf493c0(-dVar29,uVar3,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar27);
  uStack_98 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127107a0);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  dVar30 = 12.0;
  uVar22 = uVar4;
  func_0x00010bf493c0(0x4028000000000000,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar27);
  uStack_90 = uVar22;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar29 = dVar30;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar24));
  uVar2 = uVar6;
  func_0x00010bf49420(dVar30 + dVar29 * -2.0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_110,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_120);
  _objc_release(puStack_118);
  _objc_release(uStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(uStack_f0);
  _objc_release(puStack_e8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  lVar24 = lStack_d8;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lStack_d8),param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_118 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  puStack_e8 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = uVar22;
  func_0x00010bf493a0(puVar7,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  puStack_f8 = puVar7;
  puStack_d0 = puVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  puStack_100 = puVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uVar22;
  func_0x00010bf493a0(puVar13,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_110 = puVar13;
  puStack_c8 = puVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 1.0;
  puVar9 = puVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_c0 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lStack_e0;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lStack_e0));
  puVar11 = puVar10;
  func_0x00010bf493c0(puVar10,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  puStack_b8 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar23));
  puVar13 = puVar12;
  func_0x00010bf493c0(-dVar29,puVar12,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_118,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar13);
  _objc_release(uVar2);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar22);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puStack_110);
  _objc_release(uStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(uStack_f0);
  _objc_release(puStack_e8);
  puVar14 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104ccf0d8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR_PTR_1126aea58;
  puStack_180 = puVar8;
  puStack_178 = puVar9;
  puStack_170 = puVar7;
  uStack_168 = uVar2;
  puStack_160 = puVar12;
  puStack_158 = puVar11;
  uStack_150 = uVar22;
  puStack_148 = puVar10;
  puStack_140 = puVar1;
  puStack_138 = puVar13;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar29,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar28 = (long)_DAT_1127107a8;
  uVar22 = *(undefined8 *)(puVar14 + lVar28);
  *(undefined **)(puVar14 + lVar28) = puVar15;
  _objc_release(uVar22);
  func_0x00010c1a7f60(*(undefined8 *)(puVar14 + lVar28),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(puVar14 + lVar28),param_2,0);
  func_0x00010c213040(*(undefined8 *)(puVar14 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(puVar14 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(puVar14 + lVar28),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(puVar14 + lVar28),param_2,puVar1);
  _objc_release(puVar1);
  lVar24 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(puVar14 + lVar24),param_2,*(undefined8 *)(puVar14 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(puVar14 + lVar28),param_2,0);
  puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar27 = *(long *)(puVar14 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar14 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(puVar14 + lVar26));
  lVar23 = lVar27;
  func_0x00010bf493c0(lVar27,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar14 + lVar28);
  lStack_1a0 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(puVar14 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(puVar14 + lVar26));
  uVar22 = uVar4;
  func_0x00010bf493c0(-dVar29,uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar14 + lVar28);
  uStack_198 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar14 + _DAT_1127107a4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 9.0;
  uVar2 = uVar6;
  func_0x00010bf493c0(0x4022000000000000,uVar6,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_190 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_1a0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar23);
  _objc_release(uVar3);
  lVar24 = lVar27;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_104ccf3a0;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126aec40;
  uStack_210 = uVar2;
  uStack_208 = uVar6;
  uStack_200 = uVar22;
  uStack_1f8 = uVar5;
  uStack_1f0 = uVar4;
  puStack_1e8 = puVar1;
  lStack_1e0 = lVar23;
  uStack_1d8 = uVar3;
  lStack_1d0 = lVar27;
  uStack_1c8 = uVar16;
  ppuStack_1c0 = &puStack_130;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_1127107ac;
  uVar22 = *(undefined8 *)(lVar24 + lVar28);
  *(undefined **)(lVar24 + lVar28) = puVar7;
  _objc_release(uVar22);
  func_0x00010c20eaa0(*(undefined8 *)(lVar24 + lVar28),param_2,6);
  uVar22 = *(undefined8 *)(lVar24 + lVar28);
  func_0x00010c216380(uVar22,param_2,0x6a,0);
  uVar2 = *(undefined8 *)(lVar24 + lVar28);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar22,0);
  _objc_release(uVar22);
  func_0x00010befbd60(*(undefined8 *)(lVar24 + lVar28),param_2,lVar24,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar25 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar24 + lVar25),param_2,*(undefined8 *)(lVar24 + lVar28));
  func_0x00010c219b60(*(undefined8 *)(lVar24 + lVar28),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar27 = *(long *)(lVar24 + lVar28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar24 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar26));
  lVar23 = lVar27;
  func_0x00010bf493c0(lVar27,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar24 + lVar28);
  lStack_240 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar24 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar24 + lVar26));
  uVar22 = uVar6;
  func_0x00010bf493c0(-dVar29,uVar6,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(lVar24 + lVar28);
  uStack_238 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(lVar24 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar17;
  func_0x00010bf493c0(0x4028000000000000,uVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(lVar24 + lVar28);
  uStack_230 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(lVar24 + lVar28);
  uStack_228 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(lVar24 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar20;
  func_0x00010bf493a0(uVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_220 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_240,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar3);
  _objc_release(uVar19);
  _objc_release(uVar2);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar22);
  _objc_release(uVar16);
  _objc_release(uVar6);
  _objc_release(lVar23);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  uVar22 = *(undefined8 *)(lVar27 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar22,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf0d8; end: 104ccf39f; -[SCOdlvVerifyingViewController _setupErrorMessageLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf0d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  dVar21 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar21,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar20 = (long)_DAT_1127107a8;
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar15);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar20),param_2,1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar20),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar20),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  lVar18 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar18),param_2,*(undefined8 *)(param_1 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar19));
  lVar4 = lVar2;
  func_0x00010bf493c0(lVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  lStack_80 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_1 + lVar19));
  uVar15 = uVar5;
  func_0x00010bf493c0(-dVar21,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127107a4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  dVar21 = 9.0;
  uVar16 = uVar7;
  func_0x00010bf493c0(0x4022000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  lVar18 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104ccf3a0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126aec40;
  uStack_f0 = uVar16;
  uStack_e8 = uVar7;
  uStack_e0 = uVar15;
  uStack_d8 = uVar6;
  uStack_d0 = uVar5;
  puStack_c8 = puVar1;
  lStack_c0 = lVar4;
  uStack_b8 = uVar3;
  lStack_b0 = lVar2;
  uStack_a8 = uVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_1127107ac;
  uVar15 = *(undefined8 *)(lVar18 + lVar20);
  *(undefined **)(lVar18 + lVar20) = puVar9;
  _objc_release(uVar15);
  func_0x00010c20eaa0(*(undefined8 *)(lVar18 + lVar20),param_2,6);
  uVar15 = *(undefined8 *)(lVar18 + lVar20);
  func_0x00010c216380(uVar15,param_2,0x6a,0);
  uVar16 = *(undefined8 *)(lVar18 + lVar20);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar16,param_2,uVar15,0);
  _objc_release(uVar15);
  func_0x00010befbd60(*(undefined8 *)(lVar18 + lVar20),param_2,lVar18,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar17 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(lVar18 + lVar17),param_2,*(undefined8 *)(lVar18 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(lVar18 + lVar20),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(lVar18 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(lVar18 + lVar19));
  lVar4 = lVar2;
  func_0x00010bf493c0(lVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar18 + lVar20);
  lStack_120 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(lVar18 + lVar19));
  uVar15 = uVar7;
  func_0x00010bf493c0(-dVar21,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar18 + lVar20);
  uStack_118 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar18 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010bf493c0(0x4028000000000000,uVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar18 + lVar20);
  uStack_110 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar18 + lVar20);
  uStack_108 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar18 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_120,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar16);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(lVar2 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar15,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf3a0; end: 104ccf6df; -[SCOdlvVerifyingViewController _setupHavingTroubleButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf3a0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_1127107ac;
  uVar15 = *(undefined8 *)(param_2 + lVar18);
  *(undefined **)(param_2 + lVar18) = puVar1;
  _objc_release(uVar15);
  func_0x00010c20eaa0(*(undefined8 *)(param_2 + lVar18),param_3,6);
  uVar15 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c216380(uVar15,param_3,0x6a,0);
  uVar16 = *(undefined8 *)(param_2 + lVar18);
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar16,param_3,uVar15,0);
  _objc_release(uVar15);
  func_0x00010befbd60(*(undefined8 *)(param_2 + lVar18),param_3,param_2,
                      PTR_s__havingTroubleVerifyingTapped_112525ba0,0x40);
  lVar19 = (long)_DAT_112710790;
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar19),param_3,*(undefined8 *)(param_2 + lVar18));
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar18),param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_2 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112710780;
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar17));
  lVar4 = lVar2;
  func_0x00010bf493c0(lVar2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar18);
  lStack_90 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69860(*(undefined8 *)(param_2 + lVar17));
  uVar15 = uVar5;
  func_0x00010bf493c0(-param_1,uVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + lVar18);
  uStack_88 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + _DAT_1127107a8);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493c0(0x4028000000000000,uVar7,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + lVar18);
  uStack_80 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + lVar18);
  uStack_78 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_3,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar15);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(lVar2 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar15,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf6e0; end: 104ccf72b; -[SCOdlvVerifyingViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf6e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010c25ed20(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf72c; end: 104ccf7a3; -[SCOdlvVerifyingViewController _textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af1a8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710784);
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d280(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ccf7a4; end: 104ccf7ef; -[SCOdlvVerifyingViewController _havingTroubleVerifyingTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf7a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010bfcfde0(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf7f0; end: 104ccf83b; -[SCOdlvVerifyingViewController _dismissErrorAlertForRequestingOtp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf7f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010bf83880(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf83c; end: 104ccf887; -[SCOdlvVerifyingViewController _dismissErrorAlertForLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf83c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010bf83860(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf888; end: 104ccf8d3; -[SCOdlvVerifyingViewController _dismissErrorAlertForVerifyingTrouble] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf888(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710784);
  puVar1 = PTR_PTR_1126af1a8;
  func_0x00010bf838a0(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ccf8d4; end: 104ccf983; -[SCOdlvVerifyingViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf8d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710784);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ccf984; end: 104ccf9cb;  */

void FUN_104ccf984(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ccf9cc; end: 104ccfbeb; -[SCOdlvVerifyingViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccf9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127107b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c22a5e0();
  if ((int)uVar1 != 0) {
    func_0x00010be938a0(param_1);
  }
  lVar4 = (long)_DAT_11271078c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4fb00(param_3);
  func_0x00010c21e900(uVar2,param_2,uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c07c660(param_3);
  func_0x00010c162d80(uVar2,param_2,(uint)uVar1 ^ 1,0);
  _objc_release(uVar2);
  func_0x00010bed6160(param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bfbecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127107a8;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bfbecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar3,param_2,uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c22a560();
  if ((int)uVar1 != 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127107a4),param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c069c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar3,param_2,uVar1);
  _objc_release(uVar1);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010beb9740(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c135360(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar3,param_2,uVar1);
  _objc_release(uVar1);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010bebaaa0(param_1);
  }
  uVar1 = param_3;
  func_0x00010bfddac0();
  if ((int)uVar1 != 0) {
    func_0x00010beb9540(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ccfbec; end: 104ccfc5b; -[SCOdlvVerifyingViewController _resetResendTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccfbec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + _DAT_1127107b4) = *(undefined8 *)(param_1 + _DAT_112710778);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__updateResendTimeLeft_112525ba8,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710788);
  *(undefined **)(param_1 + _DAT_112710788) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ccfc5c; end: 104ccfd03; -[SCOdlvVerifyingViewController _updateResendTimeLeft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccfc5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127107b4;
  *(long *)(param_1 + lVar3) = *(long *)(param_1 + lVar3) + -1;
  func_0x00010bed6160();
  if (0 < *(long *)(param_1 + lVar3)) {
    return;
  }
  lVar3 = (long)_DAT_112710788;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710784);
  puVar2 = PTR_PTR_1126af1a8;
  func_0x00010c270660(PTR_PTR_1126af1a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104ccfd04; end: 104ccfedb; -[SCOdlvVerifyingViewController _showRequestErrorAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccfd04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108b9a8f4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127107b0);
  func_0x00010c135360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  uVar4 = uVar3;
  func_0x000108b9a8c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  puVar7 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010be02a60(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104ccfedc; end: 104ccff0f;  */

void FUN_104ccfedc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be02a60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ccff10; end: 104cd00e7; -[SCOdlvVerifyingViewController _showInvalidPreAuthAlertView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ccff10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108b9a8f4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127107b0);
  func_0x00010c069c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  uVar4 = uVar3;
  func_0x000108b9a8c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  puVar7 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010be02a40(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104cd00e8; end: 104cd011b;  */

void FUN_104cd00e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be02a40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd011c; end: 104cd02e3; -[SCOdlvVerifyingViewController _showHavingTroubleVerifyingAlertView] */

void FUN_104cd011c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000104cd1578();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104cd1590();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  puVar4 = puVar3;
  func_0x000108b9a8c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  puVar7 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x20;
  _objc_loadWeakRetained();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010be02a80(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 104cd02e4; end: 104cd0317;  */

void FUN_104cd02e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be02a80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd0318; end: 104cd03b7; -[SCOdlvVerifyingViewController _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd0318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710794);
  _objc_retain(param_3);
  func_0x00010c1a7f60(uVar2,param_2,0);
  uVar2 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_110345d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _CGRectGetHeight();
  func_0x00010beb2160(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cd03b8; end: 104cd04ab; -[SCOdlvVerifyingViewController _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd03b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112710794),param_2,1);
  lVar4 = (long)_DAT_11271078c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c14df20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 0.0;
  func_0x00010c1d0bc0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(param_1 + _DAT_112710780));
  func_0x00010c1d0bc0(-dVar5,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104cd04ac; end: 104cd05e7; -[SCOdlvVerifyingViewController _shiftViewUpWithKeyboard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd04ac(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_11271078c;
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c14df20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  dVar5 = -param_1;
  func_0x00010c1d0bc0(dVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112710794);
  func_0x00010c14df20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(dVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69140(*(undefined8 *)(param_2 + _DAT_112710780));
  func_0x00010c1d0bc0(-dVar5 - param_1,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104cd05e8; end: 104cd076b; -[SCOdlvVerifyingViewController _updateContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd05e8(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_1127107b0;
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010c07c660();
  if ((uVar2 & 1) != 0) {
    return;
  }
  puVar3 = *(undefined **)(param_1 + lVar8);
  func_0x00010bf4fb40();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010bf071a0();
  puVar4 = puVar3;
  if (iVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae738);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  lVar9 = (long)_DAT_11271078c;
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf4fa60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf4fb00(uVar6);
  func_0x00010c21e900(uVar5,param_2,uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf4fa60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260();
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf4fa60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c14df20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1cfc0(param_1);
  func_0x00010c1d0bc0(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104cd076c; end: 104cd0887; -[SCOdlvVerifyingViewController _getAppropriateButtonWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104cd076c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = (long)_DAT_11271078c;
  uVar1 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar8 = param_3;
  dVar9 = param_4;
  func_0x00010c23d5a0(uVar1);
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2712a0();
  uVar4 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bf4fa60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2712a0();
  dVar9 = param_3 + param_4 + dVar9;
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar5);
  dVar7 = 225.0;
  if (225.0 <= dVar9) {
    dVar7 = dVar9;
  }
  if (dVar8 + -40.0 <= dVar7) {
    dVar7 = dVar8 + -40.0;
  }
  return dVar7;
}



/* Entry: 104cd0888; end: 104cd0997; -[SCOdlvVerifyingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cd0888(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271077c,0);
  _objc_storeStrong(param_1 + _DAT_1127107b0,0);
  _objc_storeStrong(param_1 + _DAT_112710784,0);
  _objc_storeStrong(param_1 + _DAT_112710788,0);
  _objc_storeStrong(param_1 + _DAT_112710774,0);
  _objc_storeStrong(param_1 + _DAT_112710790,0);
  _objc_storeStrong(param_1 + _DAT_1127107a4,0);
  _objc_storeStrong(param_1 + _DAT_1127107a0,0);
  _objc_storeStrong(param_1 + _DAT_1127107ac,0);
  _objc_storeStrong(param_1 + _DAT_1127107a8,0);
  _objc_storeStrong(param_1 + _DAT_11271079c,0);
  _objc_storeStrong(param_1 + _DAT_112710798,0);
  _objc_storeStrong(param_1 + _DAT_112710794,0);
  _objc_storeStrong(param_1 + _DAT_112710780,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271078c,0);
  return;
}



/* Entry: 104cd0998; end: 104cd0adf; -[SCOdlvFeatureUIRouteActions initWithUIContainer:logInServices:transitionMomentLogger:loginOdlvLogger:currentPageTracker:] */

undefined1 *
FUN_104cd0998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e3b78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af108;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010bf0c980(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cd0ae0; end: 104cd0c2b; -[SCOdlvFeatureUIRouteActions showLoginOdlvLandingScreen:challenge:] */

void FUN_104cd0ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c08da60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126af1b8;
  _objc_alloc(PTR_PTR_1126af1b8);
  func_0x00010c00b200();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126af1c0;
  _objc_alloc(PTR_PTR_1126af1c0);
  puVar4 = puVar2;
  func_0x00010bf8d560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f2c0(puVar3,param_2,puVar4,uVar5,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar5);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cd0c2c; end: 104cd0d3f; -[SCOdlvFeatureUIRouteActions showLoginCOSOdlvLandingScreen:challenge:] */

void FUN_104cd0c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af1c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0060a0();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126af1c0;
  _objc_alloc(PTR_PTR_1126af1c0);
  puVar3 = puVar1;
  func_0x00010bf8d560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f2c0(puVar2,param_2,puVar3,uVar4,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cd0d40; end: 104cd0eef; -[SCOdlvFeatureUIRouteActions showLoginOdlvVerifyingScreen:challengge:otpTypeSelected:obfuscatedContact:] */

void FUN_104cd0d40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126af1d0;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08d700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08da60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a920(puVar1,param_2,param_3,uVar6,uVar4,param_4,param_5,param_6,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126af1d8;
  _objc_alloc(PTR_PTR_1126af1d8);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c150e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030700(puVar5,param_2,param_6,0x3c,uVar6,*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_6);
  _objc_release(uVar6);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cd0ef0; end: 104cd0f73; -[SCOdlvFeatureUIRouteActions .cxx_destruct] */

void FUN_104cd0ef0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104cd0f74; end: 104cd1037; -[SCOdlvWorkflow initWithChallenge:router:delegate:] */

undefined1 *
FUN_104cd0f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3b80;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cd1038; end: 104cd108f; -[SCOdlvWorkflow beginWorkflow] */

void FUN_104cd1038(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cd1090;
  puStack_20 = &UNK_110848798;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 104cd1090; end: 104cd1177;  */

void FUN_104cd1090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c08bda0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0befa0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cd1178; end: 104cd1197;  */

void FUN_104cd1178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2382f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_showLoginOdlvLandingScreen_chall_11266bae0,
             *(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  return;
}



/* Entry: 104cd1198; end: 104cd11c3; -[SCOdlvWorkflow odlvLandingDismissErrorAlert] */

void FUN_104cd1198(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd11c4; end: 104cd11ef; -[SCOdlvWorkflow odlvLandingExited] */

void FUN_104cd11c4(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd11f0; end: 104cd1287; -[SCOdlvWorkflow odlvLandingSelectedOtpType:obfuscatedContact:] */

void FUN_104cd11f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104cd1288;
  puStack_50 = &UNK_1108487c8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c1429e0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 104cd1288; end: 104cd129b;  */

void FUN_104cd1288(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showLoginOdlvVerifyingScreen_cha_11266bae8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 8),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104cd129c; end: 104cd12c7; -[SCOdlvWorkflow odlvVerifyingDismissLoginErrorAlert] */

void FUN_104cd129c(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd12c8; end: 104cd12f3; -[SCOdlvWorkflow odlvVerifyingDismissRequestErrorAlert] */

void FUN_104cd12c8(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd12f4; end: 104cd133b; -[SCOdlvWorkflow odlvVerifyingFinishedWithLoginSuccess:] */

void FUN_104cd12f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e15c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd133c; end: 104cd1367; -[SCOdlvWorkflow odlvLandingCOSExited] */

void FUN_104cd133c(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cd1368; end: 104cd13d7; -[SCOdlvWorkflow odlvLandingCOSDismissErrorAlert] */

void FUN_104cd1368(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104cd13d8; end: 104cd1497; -[SCOdlvWorkflow odlvLandingCOSSubmitWithOtpType:obfuscatedContact:success:failure:] */

void FUN_104cd13d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e1540();
    _objc_release(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cd1498; end: 104cd14cf; -[SCOdlvWorkflow .cxx_destruct] */

void FUN_104cd1498(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cd14d0; end: 104cd15a7;  */

void FUN_104cd14d0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae758,
                      &PTR____CFConstantStringClassReference_110dae778,0);
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



/* Entry: 104cd15a8; end: 104cd165b; -[SCLoginOdlvOptionInfo initWithLabel:value:otpType:] */

undefined1 *
FUN_104cd15a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e3b88;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cd165c; end: 104cd167f; -[SCLoginOdlvOptionInfo copyWithZone:] */

undefined8 FUN_104cd165c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cd1680; end: 104cd16f7; -[SCLoginOdlvOptionInfo hash] */

undefined8 * FUN_104cd1680(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104cd1788:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104cd1794;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_104cd1794;
        }
        goto LAB_104cd1788;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104cd1794:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104cd16f8; end: 104cd17af; -[SCLoginOdlvOptionInfo isEqual:] */

long FUN_104cd16f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104cd1788:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cd1794;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_104cd1794;
        }
        goto LAB_104cd1788;
      }
    }
    lVar3 = 0;
  }
LAB_104cd1794:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cd17b0; end: 104cd17b7; -[SCLoginOdlvOptionInfo label] */

undefined8 FUN_104cd17b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104cd17b8; end: 104cd17bf; -[SCLoginOdlvOptionInfo value] */

undefined8 FUN_104cd17b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104cd17c0; end: 104cd17c7; -[SCLoginOdlvOptionInfo otpType] */

undefined8 FUN_104cd17c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104cd17c8; end: 104cd17f7; -[SCLoginOdlvOptionInfo .cxx_destruct] */

void FUN_104cd17c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cd17f8; end: 104cd1843; +[SCLoginOdlvLandingAction dismissErrorAlert] */

void FUN_104cd17f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cd1844; end: 104cd188f; +[SCLoginOdlvLandingAction exit] */

void FUN_104cd1844(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cd1890; end: 104cd18e7; +[SCLoginOdlvLandingAction selectOtpTypeWithOtpType:] */

void FUN_104cd1890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cd18e8; end: 104cd192f; +[SCLoginOdlvLandingAction submit] */

void FUN_104cd18e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af188;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cd1930; end: 104cd1953; -[SCLoginOdlvLandingAction copyWithZone:] */

undefined8 FUN_104cd1930(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cd1954; end: 104cd19ab; -[SCLoginOdlvLandingAction hash] */

void FUN_104cd1954(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e3b90;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cd19ac; end: 104cd19ef; -[SCLoginOdlvLandingAction internalInit] */

void FUN_104cd19ac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3b90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cd19f0; end: 104cd1a87; -[SCLoginOdlvLandingAction isEqual:] */

bool FUN_104cd19f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104cd1a88; end: 104cd1b6f; -[SCLoginOdlvLandingAction matchSubmit:exit:dismissErrorAlert:selectOtpType:] */

void FUN_104cd1a88(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_104cd1b40;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_104cd1b40;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else {
    if (lVar1 != 2) {
      if ((lVar1 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_104cd1b40;
    }
    if (param_5 == 0) goto LAB_104cd1b40;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  (*pcVar2)(lVar1);
LAB_104cd1b40:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cd1b70; end: 104cd1c0f; -[SCLoginOdlvLandingViewModel initWithIsRequesting:hideMesssageRatelabel:errorAlertMessage:otpTypeSelected:] */

undefined1 *
FUN_104cd1b70(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e3b98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 104cd1c10; end: 104cd1c33; -[SCLoginOdlvLandingViewModel copyWithZone:] */

undefined8 FUN_104cd1c10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104cd1c34; end: 104cd1cab; -[SCLoginOdlvLandingViewModel hash] */

ulong * FUN_104cd1c34(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_104cd1d50;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((((char)puVar2[1] != (char)param_3[1] ||
         (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) || (puVar2[3] != param_3[3])
        ))) {
      puVar4 = (ulong *)0x0;
      goto LAB_104cd1d50;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_104cd1d50;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_104cd1d50:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 104cd1cac; end: 104cd1d6b; -[SCLoginOdlvLandingViewModel isEqual:] */

long FUN_104cd1cac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cd1d50;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_104cd1d50;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104cd1d50;
    }
  }
  lVar3 = 1;
LAB_104cd1d50:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cd1d6c; end: 104cd1d73; -[SCLoginOdlvLandingViewModel isRequesting] */

undefined1 FUN_104cd1d6c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



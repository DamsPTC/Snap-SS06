/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e296b4; end: 107e2971f; -[SCGalleryDataMutator _checkServletMediaFormat:sojuMediaType:] */

void FUN_107e296b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_3 = -0x60ed74c9;
    func_0x00010b77c6b4(0xffffffff9f128b37);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = 0;
  func_0x00010b77c6b4(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107e29720; end: 107e29747; -[SCGalleryDataMutator _sojuMediaFormatFromServletMediaFormat:] */

long FUN_107e29720(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010b77c58c();
  lVar1 = -0x60ed74c9;
  if (param_3 != 0) {
    lVar1 = param_3;
  }
  return lVar1;
}



/* Entry: 107e29748; end: 107e2974b; -[SCGalleryDataMutator _checkSnapMediaType:servletMediaFormat:isSavingVideo:userContext:] */

void FUN_107e29748(void)

{
  return;
}



/* Entry: 107e2974c; end: 107e297af;  */

void FUN_107e2974c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107e297b0;
  puStack_20 = &UNK_110a0e478;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc920(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110a0e4a8);
  return;
}



/* Entry: 107e297b0; end: 107e297fb;  */

void FUN_107e297b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bf0b760(param_2);
  func_0x00010b697c6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e297fc; end: 107e297ff;  */

void FUN_107e297fc(void)

{
  return;
}



/* Entry: 107e29800; end: 107e2987f; -[SCGalleryDataMutator _isFutureDate:] */

bool FUN_107e29800(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  bVar2 = false;
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bf64de0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(param_4,param_3,puVar1);
    _objc_release(param_4);
    bVar2 = 3600.0 < param_1;
    _objc_release(puVar1);
  }
  return bVar2;
}



/* Entry: 107e29880; end: 107e29887; -[SCGalleryDataMutator _shouldSendS2R] */

undefined8 FUN_107e29880(void)

{
  return 0;
}



/* Entry: 107e29888; end: 107e2988f; -[SCGalleryDataMutator dreamsSessionService] */

undefined8 FUN_107e29888(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107e29890; end: 107e29a57; -[SCGalleryDataMutator .cxx_destruct] */

void FUN_107e29890(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 107e29a58; end: 107e29b6b;  */

void FUN_107e29a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar1 = &puStack_80;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107e29b6c;
    puStack_68 = &UNK_110a0e4f8;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_1);
    lStack_48 = param_1;
    _objc_retainBlock(&puStack_80);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107e29b6c; end: 107e29c97;  */

void FUN_107e29b6c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c11eb60(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107e29db8;
  puStack_88 = &UNK_1108465d0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar4);
  lStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = uVar4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_107e29c98(param_1,param_3 != 0,uVar1,uVar3,uVar2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(lStack_80);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e29c98; end: 107e29db7;  */

void FUN_107e29c98(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_107e2a0c8;
  puStack_90 = &UNK_110892d28;
  uStack_60 = 1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_1;
  uStack_58 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(param_5,&puStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e29db8; end: 107e29f33;  */

void FUN_107e29db8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010bf987e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar1,uVar2,lVar1 != 0,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107e29f34; end: 107e2a05f;  */

void FUN_107e29f34(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c11eb60(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107e2a060;
  puStack_88 = &UNK_1108465d0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar4);
  lStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = uVar4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_107e29c98(param_1,param_3 != 0,uVar1,uVar3,uVar2,&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(lStack_80);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107e2a060; end: 107e2a0c7;  */

void FUN_107e2a060(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010bf987e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar1,uVar2,lVar1 != 0,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107e2a0c8; end: 107e2a1ef;  */

void FUN_107e2a0c8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar2 = PTR_PTR_1126d7f90;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107e2a1f0;
  puStack_70 = &UNK_110892d28;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_68 = puVar2;
  _objc_retain(uVar1);
  uStack_38 = *(undefined1 *)(param_1 + 0x50);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar3;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  _objc_retain(puVar2);
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(puStack_68);
  _objc_release(puVar2);
  return;
}



/* Entry: 107e2a1f0; end: 107e2a6cf;  */

void FUN_107e2a1f0(long param_1,undefined **param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **UNRECOVERED_JUMPTABLE;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  undefined *puVar17;
  double dVar18;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    UNRECOVERED_JUMPTABLE = *(undefined ***)(lVar5 + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x000107e2a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)();
      return;
    }
    goto LAB_107e2a6cc;
  }
  func_0x00010c08ab40();
  uVar2 = (undefined4)lVar5;
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0de180();
  iVar16 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0de480();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    dVar18 = *(double *)(param_1 + 0x40);
    if (1e-05 <= 1.0 - dVar18) goto LAB_107e2a394;
    iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0de480();
    puVar8 = PTR_PTR_1126afca8;
    if (iVar4 < 3) {
      uVar6 = (ulong)*(uint *)(param_1 + 0x48);
      func_0x00010b5fa33c();
      if (uVar6 == 0) {
        UNRECOVERED_JUMPTABLE = &PTR____CFConstantStringClassReference_110ebfe78;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfe78,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = &PTR____CFConstantStringClassReference_110ebfe98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfe98,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_107e2a6d0(UNRECOVERED_JUMPTABLE,ppuVar7);
        _objc_release(ppuVar7);
        _objc_release(UNRECOVERED_JUMPTABLE);
      }
      iVar16 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0de480();
      iVar16 = iVar16 + 1;
    }
    else {
      UNRECOVERED_JUMPTABLE = &PTR____CFConstantStringClassReference_110ebfeb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfeb8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar8);
      _objc_release(UNRECOVERED_JUMPTABLE);
    }
    iVar4 = 3;
  }
  else {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0de180();
    puVar8 = PTR_PTR_1126afca8;
    if (iVar3 < 1) {
      dVar18 = *(double *)(param_1 + 0x40);
LAB_107e2a394:
      if (0.8 <= dVar18) {
        puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297300();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        puStack_a0 = puVar8;
        func_0x00010c297300();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        puStack_98 = puVar17;
        func_0x00010c297300();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        puStack_90 = puVar9;
        func_0x00010c297300();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar10;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar17);
        _objc_release(puVar8);
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        lStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        plStack_150 = (long *)0x0;
        _objc_retain(puVar11);
        puVar8 = puVar11;
        func_0x00010bf52a60();
        if (puVar8 != (undefined *)0x0) {
          lVar14 = *plStack_150;
          do {
            puVar17 = (undefined *)0x0;
            do {
              if (*plStack_150 != lVar14) {
                _objc_enumerationMutation(puVar11);
              }
              lVar12 = *(long *)(lStack_158 + (long)puVar17 * 8);
              func_0x00010c11f4c0();
              if (lVar12 <= (long)(dVar18 * 100.0) &&
                  (long)(dVar18 * 100.0) < lVar12 + (long)param_2) {
                iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
                func_0x00010c08ab40();
                puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                if (lVar12 != iVar3) {
                  UNRECOVERED_JUMPTABLE = &PTR____CFConstantStringClassReference_110ebfed8;
                  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfed8,0);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c14de00(puVar9);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar7 = &PTR____CFConstantStringClassReference_110ebfef8;
                  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebfef8,0);
                  _objc_retainAutoreleasedReturnValue();
                  param_2 = ppuVar7;
                  FUN_107e2a6d0(puVar9);
                  _objc_release(ppuVar7);
                  _objc_release(puVar9);
                  _objc_release(UNRECOVERED_JUMPTABLE);
                  lVar5 = lVar12;
                }
              }
              uVar2 = (undefined4)lVar5;
              puVar17 = puVar17 + 1;
            } while (puVar8 != puVar17);
            puVar8 = puVar11;
            func_0x00010bf52a60();
          } while (puVar8 != (undefined *)0x0);
        }
        _objc_release(puVar11);
        _objc_release(puVar11);
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = &PTR____CFConstantStringClassReference_110dcabb8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcabb8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar8);
      _objc_release(UNRECOVERED_JUMPTABLE);
      iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0de180();
      iVar4 = iVar4 + -1;
    }
  }
  iVar3 = 0;
  if (0.99999 <= *(double *)(param_1 + 0x40)) {
    iVar3 = iVar16;
  }
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x107e2a818;
  puStack_188 = &UNK_1108cf1a8;
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(lVar5);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  lStack_180 = lVar5;
  uStack_170 = uVar2;
  iStack_16c = iVar4;
  iStack_168 = iVar3;
  _objc_retain(uVar15);
  UNRECOVERED_JUMPTABLE = &puStack_1a0;
  uStack_178 = uVar15;
  func_0x00010007380c(uVar1);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  _objc_release(uStack_178);
  lVar5 = lStack_180;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
LAB_107e2a6cc:
  ___stack_chk_fail();
  puVar8 = PTR_PTR_1126af178;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(UNRECOVERED_JUMPTABLE);
  _objc_retain(lVar5);
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126af180;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar8);
  _objc_release(UNRECOVERED_JUMPTABLE);
  _objc_release(lVar5);
  _objc_release(puVar9);
  _objc_release(puVar17);
  _objc_release(ppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  iVar16 = *(int *)(puVar8 + 0x30);
  iVar4 = *(int *)(puVar8 + 0x34);
  iVar3 = *(int *)(puVar8 + 0x38);
  uVar1 = *(undefined8 *)(puVar8 + 0x20);
  uVar15 = *(undefined8 *)(puVar8 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(uVar15);
  uVar13 = uVar1;
  func_0x00010c08ab40();
  if (((iVar16 != (int)uVar13) || (uVar13 = uVar1, func_0x00010c0de180(), iVar4 != (int)uVar13)) ||
     (uVar13 = uVar1, func_0x00010c0de480(), iVar3 != (int)uVar13)) {
    _objc_retain(uVar1);
    func_0x00010c0f8520(uVar15);
    _objc_release(uVar1);
  }
  _objc_release(uVar15);
  _objc_release(uVar1);
  return;
}



/* Entry: 107e2a6d0; end: 107e2a8ff;  */

void FUN_107e2a6d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar6 = PTR_PTR_1126af178;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af180;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar6);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  iVar1 = *(int *)(puVar6 + 0x30);
  iVar2 = *(int *)(puVar6 + 0x34);
  iVar5 = *(int *)(puVar6 + 0x38);
  uVar3 = *(undefined8 *)(puVar6 + 0x20);
  uVar4 = *(undefined8 *)(puVar6 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  uVar10 = uVar3;
  func_0x00010c08ab40();
  if (((iVar1 != (int)uVar10) || (uVar10 = uVar3, func_0x00010c0de180(), iVar2 != (int)uVar10)) ||
     (uVar10 = uVar3, func_0x00010c0de480(), iVar5 != (int)uVar10)) {
    _objc_retain(uVar3);
    func_0x00010c0f8520(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 107e2a900; end: 107e2aa03;  */

void FUN_107e2a900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107e2aa04; end: 107e2b35f; -[SCMemoriesDataMutatingServiceProvider _createGalleryDataMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e2aa04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lStack_188;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11276ffc4;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar54;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar54);
  _objc_initWeak(auStack_70,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d7fa8;
  _objc_alloc();
  lVar54 = param_1;
  FUN_107e2b3d4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar54;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  FUN_107e2b3d4();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c94e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar39 = 0;
  }
  else {
    lVar39 = param_1 + _DAT_11276ffe0;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar39;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar40 = 0;
  }
  else {
    lVar40 = param_1 + _DAT_11276ffcc;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar40;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = param_1 + _DAT_11276ffe4;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar41;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar42 = 0;
  }
  else {
    lVar42 = param_1 + _DAT_11276ffe8;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar42;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar43 = 0;
  }
  else {
    lVar43 = param_1 + _DAT_11276ffec;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar43;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar44 = 0;
  }
  else {
    lVar44 = param_1 + _DAT_112770008;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar44;
  func_0x00010c0c8880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_11276fff8;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar45;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar46 = 0;
  }
  else {
    lVar46 = param_1 + _DAT_11276fff0;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar46;
  func_0x00010c2400a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x000107e2b3f8();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x000107e2b41c();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bfbd5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x000107e2b41c();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010bfbd5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar47 = 0;
  }
  else {
    lVar47 = param_1 + _DAT_11276fff4;
    _objc_loadWeakRetained();
  }
  lVar24 = lVar47;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_112770004;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar48;
  func_0x00010c0c9740();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x000107e2b3f8();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_150 = 0;
    lStack_148 = 0;
    lVar49 = 0;
  }
  else {
    lStack_148 = param_1 + _DAT_11276ffd4;
    _objc_loadWeakRetained();
    lStack_150 = param_1 + _DAT_11276ffd0;
    _objc_loadWeakRetained();
    lVar49 = param_1 + _DAT_112770000;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar49;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_168 = 0;
    lStack_160 = 0;
    lVar50 = 0;
  }
  else {
    lStack_160 = param_1 + _DAT_112770018;
    _objc_loadWeakRetained();
    lStack_168 = param_1 + _DAT_11277001c;
    _objc_loadWeakRetained();
    lVar50 = param_1 + _DAT_11277000c;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar50;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar51 = 0;
  }
  else {
    lVar51 = param_1 + _DAT_112770010;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar51;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar52 = 0;
  }
  else {
    lVar52 = param_1 + _DAT_112770020;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar52;
  func_0x00010c0c8a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_188 = 0;
    lVar53 = 0;
  }
  else {
    lStack_188 = param_1 + _DAT_112770014;
    _objc_loadWeakRetained();
    lVar53 = param_1 + _DAT_112770024;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar53;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_112770028;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar58;
  func_0x00010c13b200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_11277002c;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar56;
  func_0x00010c0c7fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar57 = 0;
  }
  else {
    lVar57 = param_1 + _DAT_112770030;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar57;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_112770034;
    _objc_loadWeakRetained();
  }
  lVar36 = lVar55;
  func_0x00010c27fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = 0;
  if (param_1 != 0) {
    lVar37 = param_1 + _DAT_112770038;
    _objc_loadWeakRetained();
  }
  lVar38 = lVar37;
  func_0x00010c2572e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d640();
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar55);
  _objc_release(lVar35);
  _objc_release(lVar57);
  _objc_release(lVar34);
  _objc_release(lVar56);
  _objc_release(lVar33);
  _objc_release(lVar58);
  _objc_release(lVar32);
  _objc_release(lVar53);
  _objc_release(lStack_188);
  _objc_release(lVar31);
  _objc_release(lVar52);
  _objc_release(lVar30);
  _objc_release(lVar51);
  _objc_release(lVar29);
  _objc_release(lVar50);
  _objc_release(lStack_168);
  _objc_release(lStack_160);
  _objc_release(lVar28);
  _objc_release(lVar49);
  _objc_release(lStack_150);
  _objc_release(lStack_148);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar48);
  _objc_release(lVar24);
  _objc_release(lVar47);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar46);
  _objc_release(lVar15);
  _objc_release(lVar45);
  _objc_release(lVar14);
  _objc_release(lVar44);
  _objc_release(lVar13);
  _objc_release(lVar43);
  _objc_release(lVar12);
  _objc_release(lVar42);
  _objc_release(lVar11);
  _objc_release(lVar41);
  _objc_release(lVar10);
  _objc_release(lVar40);
  _objc_release(lVar9);
  _objc_release(lVar39);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar54);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107e2b360; end: 107e2b3d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e2b360(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11276ffd8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar1 = lVar2;
  func_0x00010bf53fa0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107e2b3d4; end: 107e2b43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e2b3d4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11276ffc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e2b440; end: 107e2b5c7; -[SCMemoriesDataMutatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e2b440(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112770038);
  _objc_destroyWeak(param_1 + _DAT_112770034);
  _objc_destroyWeak(param_1 + _DAT_112770030);
  _objc_destroyWeak(param_1 + _DAT_11277002c);
  _objc_destroyWeak(param_1 + _DAT_112770028);
  _objc_destroyWeak(param_1 + _DAT_112770024);
  _objc_destroyWeak(param_1 + _DAT_112770020);
  _objc_destroyWeak(param_1 + _DAT_11277001c);
  _objc_destroyWeak(param_1 + _DAT_112770018);
  _objc_destroyWeak(param_1 + _DAT_112770014);
  _objc_destroyWeak(param_1 + _DAT_112770010);
  _objc_destroyWeak(param_1 + _DAT_11277000c);
  _objc_destroyWeak(param_1 + _DAT_112770008);
  _objc_destroyWeak(param_1 + _DAT_112770004);
  _objc_destroyWeak(param_1 + _DAT_112770000);
  _objc_destroyWeak(param_1 + _DAT_11276fffc);
  _objc_destroyWeak(param_1 + _DAT_11276fff8);
  _objc_destroyWeak(param_1 + _DAT_11276fff4);
  _objc_destroyWeak(param_1 + _DAT_11276fff0);
  _objc_destroyWeak(param_1 + _DAT_11276ffec);
  _objc_destroyWeak(param_1 + _DAT_11276ffe8);
  _objc_destroyWeak(param_1 + _DAT_11276ffe4);
  _objc_destroyWeak(param_1 + _DAT_11276ffe0);
  _objc_destroyWeak(param_1 + _DAT_11276ffdc);
  _objc_destroyWeak(param_1 + _DAT_11276ffd8);
  _objc_destroyWeak(param_1 + _DAT_11276ffd4);
  _objc_destroyWeak(param_1 + _DAT_11276ffd0);
  _objc_destroyWeak(param_1 + _DAT_11276ffcc);
  _objc_destroyWeak(param_1 + _DAT_11276ffc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276ffc4);
  return;
}



/* Entry: 107e2b5c8; end: 107e2b7cb;  */

void FUN_107e2b5c8(ulong param_1,undefined8 param_2,uint param_3,undefined1 *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar13 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfedce0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar17 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uVar1 = param_1;
      func_0x00010bfaebe0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfedce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      param_4 = auStack_f0;
      param_5 = 0x10;
      uVar1 = uVar2;
      func_0x00010bf52a60();
      param_3 = (uint)puVar13;
      lVar16 = 0;
      if (uVar1 != 0) {
        lVar16 = *plStack_120;
        do {
          uVar17 = 0;
          do {
            if (*plStack_120 != lVar16) {
              _objc_enumerationMutation(uVar2);
            }
            lVar15 = *(long *)(lStack_128 + uVar17 * 8);
            lVar3 = lVar15;
            func_0x00010c27dde0();
            if (lVar3 == 0x1fe7ae) {
              lVar3 = lVar15;
              func_0x00010bf64de0();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar3;
              func_0x00010c26fc80();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010c08fa60();
              _objc_release(lVar4);
              _objc_release(lVar3);
              param_3 = (uint)puVar13;
              if (lVar5 != 0) {
                func_0x00010bf64de0();
                _objc_retainAutoreleasedReturnValue();
                lVar16 = lVar15;
                func_0x00010c26fc80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar15);
                goto LAB_107e2b77c;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar1 != uVar17);
          param_4 = auStack_f0;
          param_5 = 0x10;
          uVar1 = uVar2;
          puVar13 = &uStack_130;
          func_0x00010bf52a60();
          param_3 = (uint)puVar13;
        } while (uVar1 != 0);
        lVar16 = 0;
      }
LAB_107e2b77c:
      _objc_release(uVar2);
      goto LAB_107e2b784;
    }
  }
  lVar16 = 0;
LAB_107e2b784:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1b8 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1c0 = param_2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b080(param_5);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_107e2bdd4;
  uStack_1d0 = 0x107e2bde4;
  uStack_1c8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_107e2bdd4;
  uStack_200 = 0x107e2bde4;
  uStack_1f8 = 0;
  puStack_248 = &uStack_250;
  uStack_250 = 0;
  uStack_240 = 0x3032000000;
  pcStack_238 = FUN_107e2bdd4;
  uStack_230 = 0x107e2bde4;
  uStack_228 = 0;
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x2020000000;
  uStack_258 = 0;
  uVar8 = 0;
  _dispatch_semaphore_create();
  uVar9 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar8);
  func_0x00010c135a60(param_5);
  _objc_release(uVar9);
  _dispatch_semaphore_wait(uVar8,0xffffffffffffffff);
  func_0x00010c135bc0(param_5);
  if ((puStack_1e8[5] != 0) && (puStack_218[5] != 0)) {
    if (*(byte *)(puStack_268 + 3) == param_3) {
      puVar7 = PTR_PTR_1126d7f70;
      _objc_alloc(PTR_PTR_1126d7f70);
      func_0x00010c026be0();
      func_0x00010c1d0640(param_4);
    }
    else {
      puVar6 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0bc420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar9 = puStack_1e8[5];
      puVar6 = puVar7;
      puVar12 = puVar7;
      if (param_3 == 0) {
        puVar10 = puVar7;
        func_0x00010bf93ec0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010c0646e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = puStack_1e8[5];
        puStack_1e8[5] = uVar9;
        _objc_release(uVar14);
        _objc_release(puVar11);
        _objc_release(puVar10);
        uVar9 = puStack_218[5];
        func_0x00010bf93ec0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0646e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar10 = puVar7;
        func_0x00010bf93ec0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010c0646e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = puStack_1e8[5];
        puStack_1e8[5] = uVar9;
        _objc_release(uVar14);
        _objc_release(puVar11);
        _objc_release(puVar10);
        uVar9 = puStack_218[5];
        func_0x00010bf93ec0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0646e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar14 = puStack_218[5];
      puStack_218[5] = uVar9;
      _objc_release(uVar14);
      _objc_release(puVar12);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126d7f70;
      _objc_alloc(PTR_PTR_1126d7f70);
      func_0x00010c026be0();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar6);
      func_0x00010bef9540(param_5);
    }
    _objc_release(puVar7);
  }
  _objc_release(uVar8);
  _objc_release(uVar8);
  __Block_object_dispose(&uStack_270,8);
  __Block_object_dispose(&uStack_250,8);
  _objc_release(uStack_228);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uStack_1f8);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(uStack_1c8);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_270,8);
  __Block_object_dispose(&uStack_250,8);
  __Block_object_dispose(&uStack_220,8);
  lVar16 = 8;
  __Block_object_dispose(&uStack_1f0);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = 0;
  return;
}



/* Entry: 107e2b7cc; end: 107e2bdd3;  */

void FUN_107e2b7cc(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = param_2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b080(param_5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_107e2bdd4;
  uStack_a0 = 0x107e2bde4;
  uStack_98 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_107e2bdd4;
  uStack_d0 = 0x107e2bde4;
  uStack_c8 = 0;
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_107e2bdd4;
  uStack_100 = 0x107e2bde4;
  uStack_f8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  uVar5 = 0;
  _dispatch_semaphore_create();
  uVar6 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  func_0x00010c135a60(param_5);
  _objc_release(uVar6);
  _dispatch_semaphore_wait(uVar5,0xffffffffffffffff);
  func_0x00010c135bc0(param_5);
  if ((puStack_b8[5] != 0) && (puStack_e8[5] != 0)) {
    if (*(byte *)(puStack_138 + 3) == param_3) {
      puVar4 = PTR_PTR_1126d7f70;
      _objc_alloc(PTR_PTR_1126d7f70);
      func_0x00010c026be0();
      func_0x00010c1d0640(param_4);
    }
    else {
      puVar3 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0bc420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar6 = puStack_b8[5];
      puVar3 = puVar4;
      puVar9 = puVar4;
      if (param_3 == 0) {
        puVar7 = puVar4;
        func_0x00010bf93ec0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c0646e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = puStack_b8[5];
        puStack_b8[5] = uVar6;
        _objc_release(uVar11);
        _objc_release(puVar8);
        _objc_release(puVar7);
        uVar6 = puStack_e8[5];
        func_0x00010bf93ec0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0646e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156c60();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar7 = puVar4;
        func_0x00010bf93ec0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c0646e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = puStack_b8[5];
        puStack_b8[5] = uVar6;
        _objc_release(uVar11);
        _objc_release(puVar8);
        _objc_release(puVar7);
        uVar6 = puStack_e8[5];
        func_0x00010bf93ec0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0646e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar11 = puStack_e8[5];
      puStack_e8[5] = uVar6;
      _objc_release(uVar11);
      _objc_release(puVar9);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126d7f70;
      _objc_alloc(PTR_PTR_1126d7f70);
      func_0x00010c026be0();
      func_0x00010c1d0640(param_4);
      _objc_release(puVar3);
      func_0x00010bef9540(param_5);
    }
    _objc_release(puVar4);
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  __Block_object_dispose(&uStack_f0,8);
  lVar10 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
  return;
}



/* Entry: 107e2bdd4; end: 107e2bdeb;  */

void FUN_107e2bdd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107e2bdec; end: 107e2bec7;  */

void FUN_107e2bdec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_2;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_2;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(long *)(lVar3 + 0x28) = lVar1;
      _objc_release(uVar2);
      lVar1 = param_2;
      func_0x00010bdc1800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(long *)(lVar3 + 0x28) = lVar1;
      _objc_release(uVar2);
      lVar1 = param_2;
      func_0x00010c0719c0();
      *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)lVar1;
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e2bec8; end: 107e2bf13;  */

void FUN_107e2bec8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e2bf14; end: 107e2c24f;  */

void FUN_107e2bf14(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf908;
  if (param_1 == 0) {
    _objc_retain(param_2);
    puVar5 = param_2;
  }
  else {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    lVar2 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdc1800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0719c0(param_1);
    _objc_release(param_1);
    func_0x00010c020a60(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126bf910;
    func_0x00010c2aebc0(PTR_PTR_1126bf910);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195c20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107e2c250; end: 107e2c3c7;  */

bool FUN_107e2c250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8540(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126af4d0;
  func_0x00010bf52e20();
  uVar3 = param_3;
  func_0x00010c2439a0();
  iVar1 = 500000000;
  if ((int)uVar3 != 0) {
    iVar1 = (int)uVar3;
  }
  func_0x00010c1e6c40((double)puVar2 / (double)iVar1,param_2);
  if ((undefined *)(long)iVar1 < puVar2 + param_1) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0(param_2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar2 + param_1 <= (undefined *)(long)iVar1;
}



/* Entry: 107e2c3c8; end: 107e2c3df;  */

void FUN_107e2c3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e2c3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e2c3e0; end: 107e2c4bb;  */

undefined8 FUN_107e2c3e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c249da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0x3ff0000000000000;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c249dc0();
    _objc_release(lVar1);
    uVar3 = 0x3ff0000000000000;
    if (lVar2 == 0x7b2e3000) {
      uVar3 = 0x3fd0000000000000;
    }
    uVar4 = 0x3fe0000000000000;
    if (lVar2 != 0x7b2e2fc2) {
      uVar4 = uVar3;
    }
    uVar3 = 0x4000000000000000;
    if (lVar2 != -0x6e0993d9) {
      uVar3 = uVar4;
    }
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107e2c4bc; end: 107e2cbcb;  */

void FUN_107e2c4bc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,long param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  if ((param_2 != 0) && (param_3 != 0)) {
    puVar1 = PTR_PTR_1126d7fb0;
    _objc_opt_new(PTR_PTR_1126d7fb0);
    lVar2 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar1);
    _objc_release(lVar2);
    func_0x00010c226840(puVar1);
    func_0x00010c1d5a60(puVar1);
    lVar2 = param_2;
    func_0x00010c0c5180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar1);
    _objc_release(lVar2);
    func_0x00010bfbdda0(param_3);
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar1);
    lVar2 = param_2;
    func_0x00010c13f700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207160(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c13f6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206e40(puVar1);
    _objc_release(lVar2);
    func_0x00010bafa2c4(param_6);
    func_0x00010c1a1aa0(puVar1);
    func_0x00010c1c5240(puVar1);
    lVar2 = param_2;
    func_0x00010bf313a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203b60(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf59960(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203d60(puVar1);
    _objc_release(lVar2);
    lVar2 = param_8;
    func_0x00010bf8a8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 != 0) {
      func_0x00010c191e80(puVar1);
    }
    lVar3 = param_2;
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x00010bf8a7e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe120(puVar1);
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010bf8a400(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212c20(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010bf977c0();
    lVar5 = (long)(int)lVar2;
    lVar2 = param_3;
    func_0x00010b5f5864();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    lVar6 = param_3;
    func_0x00010c26afc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212c20(puVar1);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010bfa34a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ae80(puVar1);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010bfa3440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19ae20(puVar1);
    _objc_release(lVar6);
    lVar6 = param_2;
    func_0x00010bf3f9e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar1);
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010bf3d240(param_3);
    func_0x00010b5fc78c((long)(int)lVar6);
    func_0x00010c17cf60(puVar1);
    uVar7 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06fd00();
    _objc_release(uVar7);
    func_0x00010c1b4f00(puVar1);
    func_0x00010c1d9ea0(puVar1);
    func_0x00010bf9f140(param_12);
    func_0x00010c199b80(puVar1);
    if (param_12 != 0) {
      lVar6 = param_12;
      func_0x00010c091c60();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      if (lVar8 != 0) {
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_12;
        func_0x00010c091c60();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar10;
        func_0x00010bf52a60();
        lVar8 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              _objc_enumerationMutation(lVar10);
            }
            uVar14 = *(undefined8 *)(lVar13 * 8);
            puVar11 = PTR_PTR_1126c4718;
            _objc_opt_new();
            uVar7 = uVar14;
            func_0x00010c094540(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bbd60(puVar11);
            _objc_release(uVar7);
            func_0x00010c096ca0(uVar14);
            func_0x00010c1bccc0(puVar11);
            func_0x00010c094800(uVar14);
            func_0x00010c1bbec0(puVar11);
            uVar7 = uVar14;
            func_0x00010c095800(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bc400(puVar11);
            _objc_release(uVar7);
            uVar7 = uVar14;
            func_0x00010c11fae0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e74c0(puVar11);
            _objc_release(uVar7);
            uVar7 = uVar14;
            func_0x00010c11fa40(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e74e0(puVar11);
            _objc_release(uVar7);
            func_0x00010c0972c0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bcec0(puVar11);
            _objc_release(uVar14);
            func_0x00010befa120(puVar9);
            _objc_release(puVar11);
            lVar13 = lVar13 + 1;
          } while (lVar6 != lVar13);
          lVar6 = lVar10;
          func_0x00010bf52a60();
        }
        _objc_release(lVar10);
        puVar11 = puVar9;
        func_0x00010bf529e0();
        if (puVar11 != (undefined *)0x0) {
          puVar11 = puVar9;
          func_0x00010bf51e00(puVar9);
          func_0x00010c1bb320(puVar1);
          _objc_release(puVar11);
        }
        _objc_release(puVar9);
      }
    }
    uVar7 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar7);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar2);
  if ((lVar2 != 0) && (lVar12 = lVar2, func_0x00010b5f6b3c(), (int)lVar12 != 0)) {
    puVar1 = PTR_PTR_1126d7fb8;
    _objc_opt_new(PTR_PTR_1126d7fb8);
    lVar12 = lVar2;
    func_0x00010bf97200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar1);
    _objc_release(lVar12);
    func_0x00010bfbdda0(lVar2);
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar1);
    lVar12 = lVar2;
    func_0x00010bf9e140(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199560(puVar1);
    _objc_release(lVar12);
    lVar12 = lVar2;
    func_0x00010bf977c0(lVar2);
    lVar12 = (long)(int)lVar12;
    func_0x00010b5f5864(lVar12,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    _objc_release(lVar12);
    lVar12 = lVar2;
    func_0x00010bf9e140(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar1);
    _objc_release(lVar12);
    uVar7 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar7);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e2cbcc; end: 107e2cdcf;  */

void FUN_107e2cbcc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_2 != 0) && (lVar2 = param_2, func_0x00010b5f6b3c(), (int)lVar2 != 0)) {
    puVar1 = PTR_PTR_1126d7fb8;
    _objc_opt_new(PTR_PTR_1126d7fb8);
    lVar2 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar1);
    _objc_release(lVar2);
    func_0x00010bfbdda0(param_2);
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar1);
    lVar2 = param_2;
    func_0x00010bf9e140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199560(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf977c0(param_2);
    lVar2 = (long)(int)lVar2;
    func_0x00010b5f5864(lVar2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a00(puVar1);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bf9e140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1a20(puVar1);
    _objc_release(lVar2);
    uVar3 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107e2cdd0; end: 107e2cdf3;  */

bool FUN_107e2cdd0(undefined8 param_1,long param_2)

{
  func_0x00010b5fa088(param_2);
  return param_2 - 2U < 0xb;
}



/* Entry: 107e2cdf4; end: 107e2cdfb;  */

void FUN_107e2cdf4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaId_11260ee78);
  return;
}



/* Entry: 107e2cdfc; end: 107e2cebf;  */

void FUN_107e2cdfc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  undefined *puVar3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa7da0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf12220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126af4d0;
      func_0x00010bf52da0();
      puVar3 = puVar1;
      if ((undefined *)0x3e7 < puVar2) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
    }
  }
  _objc_release(puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107e2cec0; end: 107e2d22b;  */

void FUN_107e2cec0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,long param_6,
                  long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_9;
  _objc_retain(param_9);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1d0720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1a7000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c204680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  lVar6 = param_6;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    func_0x00010c1c97e0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_7 != 0) {
    lVar6 = param_7;
    func_0x00010bf63640(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f40(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  uVar7 = param_1;
  if (param_2 == 0) {
    func_0x00010bf8b0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c192ce0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (param_4 != 0) {
    func_0x00010c1b4ee0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if ((param_3 != 0) &&
     ((uVar7 = param_1, func_0x00010c247520(), (int)uVar7 == 3 ||
      (uVar7 = param_1, func_0x00010c247520(), (int)uVar7 == 1)))) {
    func_0x00010c206c40(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca80(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    func_0x0001080199ec(puVar2,param_1,0,0,1,param_8);
  }
  else {
    puVar3 = puVar2;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b25b8;
    _objc_alloc(PTR_PTR_1126b25b8);
    func_0x00010c011280();
    func_0x00010bf10660(param_9);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e2d22c; end: 107e2d3ef;  */

void FUN_107e2d22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_2);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  func_0x00010c0f8520(param_5);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  return;
}



/* Entry: 107e2d3f0; end: 107e2d483;  */

void FUN_107e2d3f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf6bf20(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf6be80(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a0e648);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc810;
  func_0x00010bfa72c0(PTR_PTR_1126bc810,param_2,uVar1,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf00(PTR_PTR_1126bc818,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107e2d484; end: 107e2d48b;  */

void FUN_107e2d484(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107e2d48c; end: 107e2d61b;  */

void FUN_107e2d48c(long param_1,undefined1 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c128b80(*(undefined8 *)(param_1 + 0x20));
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x0001080194b4(*(undefined8 *)(lStack_118 + lVar5 * 8),*(undefined8 *)(param_1 + 0x30))
        ;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_107e2d61c;
    puStack_140 = &UNK_1108523f8;
    _objc_retain(lVar3);
    lStack_130 = lVar3;
    uStack_128 = param_2;
    _objc_retain(param_3);
    lStack_138 = param_3;
    func_0x00010007380c(uVar1,&puStack_158);
    _objc_release(lStack_138);
    _objc_release(lStack_130);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107e2d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined1 *)(param_3 + 0x30),
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 107e2d61c; end: 107e2d66b;  */

void FUN_107e2d61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e2d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e2d66c; end: 107e2d6eb;  */

void FUN_107e2d66c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = uRam0000000113248f40;
  puVar1 = PTR_PTR_113248f38;
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain();
  func_0x00010bf99240(puVar3,param_2,puVar1,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0(param_1,param_2,puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e2d6ec; end: 107e2ddbb;  */

ulong FUN_107e2d6ec(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                   undefined8 param_6,ulong param_7,ulong param_8,ulong param_9)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1d8 = 0;
  uStack_1c8 = 0x2020000000;
  uStack_1c0 = 1;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_107e2ddbc;
  puStack_208 = &UNK_110a0e698;
  puStack_1d0 = &uStack_1d8;
  _objc_retain(param_3);
  uStack_200 = param_3;
  _objc_retain(puVar3);
  puStack_1f8 = puVar3;
  puStack_1e0 = &uStack_1d8;
  _objc_retain(param_2);
  lStack_1f0 = param_2;
  _objc_retain(param_7);
  uStack_1e8 = param_7;
  func_0x00010bf97ce0(param_1);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  _objc_retain(puVar3);
  puVar12 = &uStack_260;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar18 = *plStack_250;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar18) {
          _objc_enumerationMutation(puVar3);
        }
        uVar5 = *(undefined8 *)(lStack_258 + (long)puVar20 * 8);
        func_0x00010bf0b0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        func_0x00010bf08d00(param_2);
        func_0x00010c169d20(param_2);
        _objc_release(uVar5);
        puVar20 = puVar20 + 1;
      } while (puVar4 != puVar20);
      puVar12 = &uStack_260;
      puVar4 = puVar3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x00010bf51e00();
    _objc_retain(puVar4);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    _objc_retain(puVar4);
    puVar12 = &uStack_1b0;
    puVar20 = puVar4;
    func_0x00010bf52a60();
    if (puVar20 != (undefined *)0x0) {
      lVar18 = *plStack_1a0;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar18) {
            _objc_enumerationMutation(puVar4);
          }
          uVar19 = *(ulong *)(lStack_1a8 + (long)puVar21 * 8);
          uVar11 = param_7;
          func_0x00010c269d40(param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar11;
          func_0x00010c27a620();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          uVar11 = uVar19;
          func_0x00010bf0b0c0();
          _objc_retainAutoreleasedReturnValue();
          if (param_4 != 0 && param_5 != 0) {
            uVar7 = param_9;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c232f00();
            _objc_release(uVar7);
            if ((uVar8 & 1) == 0) {
              uVar7 = param_8;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar19;
              func_0x00010bf0b0c0(uVar19);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar7;
              func_0x00010c156cc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar11);
              _objc_release(uVar8);
              _objc_release(uVar7);
              uVar11 = uVar9;
            }
          }
          uVar7 = uVar6;
          func_0x00010bfad160(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_1b8 = (undefined8 *)0x0;
          uVar8 = uVar11;
          func_0x00010c14e080();
          puVar2 = puStack_1b8;
          _objc_retain(puStack_1b8);
          _objc_release(uVar7);
          if ((uVar8 & 1) == 0) {
            puVar12 = puVar2;
            func_0x00010c196ee0(param_2);
LAB_107e2dc0c:
            _objc_release(uVar11);
            _objc_release(puVar2);
            _objc_release(uVar6);
            bVar13 = false;
            goto LAB_107e2dc28;
          }
          func_0x00010c182c60(uVar6);
          uVar7 = param_7;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0b760(uVar19);
          uVar19 = uVar7;
          func_0x00010befb580();
          _objc_release(uVar7);
          func_0x00010c11bda0(uVar6);
          if ((uVar19 & 1) == 0) {
            puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar10;
            func_0x00010c196ee0(param_2);
            _objc_release(puVar10);
            goto LAB_107e2dc0c;
          }
          _objc_release(uVar11);
          _objc_release(puVar2);
          _objc_release(uVar6);
          puVar21 = puVar21 + 1;
        } while (puVar20 != puVar21);
        puVar12 = &uStack_1b0;
        puVar20 = puVar4;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined *)0x0);
    }
    bVar13 = true;
LAB_107e2dc28:
    _objc_release(puVar4);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(puVar4);
    _objc_release(puVar4);
    if (!bVar13) {
      *(undefined1 *)(puStack_1d0 + 3) = 0;
    }
  }
  if ((param_2 != 0) && ((*(byte *)(puStack_1d0 + 3) & 1) == 0)) {
    lVar18 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar18 == 0) {
      FUN_107e2d66c(param_2);
    }
  }
  bVar1 = *(byte *)(puStack_1d0 + 3);
  _objc_release(uStack_1e8);
  _objc_release(lStack_1f0);
  _objc_release(puStack_1f8);
  _objc_release(uStack_200);
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (ulong)(bVar1 & 1);
  }
  ___stack_chk_fail();
  uVar11 = 8;
  __Block_object_dispose(&uStack_1d8);
  __Unwind_Resume();
  _objc_retain(uVar11);
  _objc_retain(uVar11);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar17);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  _objc_retain(uVar11);
  func_0x00010c0bc920(puVar12);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return uVar11;
}



/* Entry: 107e2ddbc; end: 107e2df0b;  */

void FUN_107e2ddbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0bc920(param_3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e2df0c; end: 107e2df1f;  */

void FUN_107e2df0c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__11259c1f0,param_2);
    return;
  }
  return;
}



/* Entry: 107e2df20; end: 107e2e01f;  */

void FUN_107e2df20(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067ec0(uVar1);
  uVar2 = param_2;
  func_0x00010c06cde0();
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 0;
    FUN_107e2d66c(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    lVar5 = (long)(int)uVar1;
    uVar3 = *(ulong *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108018d28(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bfaca60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010befb580();
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e2e020; end: 107e2e2c7;  */

void FUN_107e2e020(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  func_0x00010b7786fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d7f88;
  _objc_alloc(PTR_PTR_1126d7f88);
  func_0x00010bff4de0();
  lVar2 = param_2;
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar2 == 0) {
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_2;
    func_0x00010c0c41a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar5;
    func_0x00010bf4b900();
    if (((ulong)puVar4 & 1) != 0) goto LAB_107e2e10c;
  }
  func_0x00010befa120(puVar5);
LAB_107e2e10c:
  puVar4 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0(PTR_PTR_1126bf910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107e2e2c8; end: 107e2e457;  */

undefined ** FUN_107e2e2c8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_1);
  puVar8 = auStack_e8;
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_1);
      }
      lVar9 = *(long *)(lVar10 * 8);
      func_0x00010c0d21e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf4b900();
      if ((((ulong)puVar3 & 1) == 0) && (func_0x00010befa120(ppuVar7), lVar9 != 0)) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar9);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    puVar8 = auStack_e8;
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  ppuVar4 = ppuVar7;
  func_0x00010bf529e0();
  _objc_release(ppuVar7);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar8);
  if (param_1 == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf9d2c0();
    _objc_retainAutoreleasedReturnValue();
    if (((param_2 == 0) || (lVar5 = param_2, func_0x00010bf529e0(), lVar5 == 0)) &&
       (lVar5 = lVar2, func_0x00010c08fa60(), lVar5 == 0)) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      lVar5 = param_2;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_1a0 = lVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar5 = param_2;
        func_0x00010c0b8600(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126c4ac8;
        _objc_alloc(PTR_PTR_1126c4ac8);
        func_0x00010c0525e0();
        puVar3 = PTR_PTR_1126c4ad0;
        _objc_alloc(PTR_PTR_1126c4ad0);
        lVar10 = param_1;
        func_0x00010c0d9500(param_1);
        func_0x00010c060b80(puVar3);
        _objc_release(lVar10);
        uVar6 = 0;
        _dispatch_semaphore_create();
        puStack_1c8 = &uStack_1d0;
        uStack_1d0 = 0;
        uStack_1c0 = 0x3032000000;
        pcStack_1b8 = FUN_107e2bdd4;
        uStack_1b0 = 0x107e2bde4;
        uStack_1a8 = 0;
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_retain(uVar6);
        func_0x00010bf16e60(puVar3);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
        ppuVar7 = (undefined **)puStack_1c8[5];
        func_0x00010c0b8600(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        __Block_object_dispose(&uStack_1d0,8);
        _objc_release(uStack_1a8);
        _objc_release(uVar6);
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release(lVar5);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(puVar8);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_1d0,8);
    __Unwind_Resume(param_1);
    ppuVar7 = &PTR____CFConstantStringClassReference_110f314b8;
    puVar1 = PTR_PTR_1126b1350;
    _objc_alloc(PTR_PTR_1126b1350);
    func_0x00010bfeee60();
    func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                        &PTR____CFConstantStringClassReference_110dbab38,1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return ppuVar7;
}



/* Entry: 107e2e458; end: 107e2e71f;  */

void FUN_107e2e458(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 == 0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf9d2c0();
    _objc_retainAutoreleasedReturnValue();
    if (((param_2 == 0) || (lVar2 = param_2, func_0x00010bf529e0(), lVar2 == 0)) &&
       (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 == 0)) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      lVar2 = param_2;
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_70 = lVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = param_2;
        func_0x00010c0b8600(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c4ac8;
        _objc_alloc(PTR_PTR_1126c4ac8);
        func_0x00010c0525e0();
        puVar4 = PTR_PTR_1126c4ad0;
        _objc_alloc(PTR_PTR_1126c4ad0);
        lVar5 = param_1;
        func_0x00010c0d9500(param_1);
        func_0x00010c060b80(puVar4);
        _objc_release(lVar5);
        uVar6 = 0;
        _dispatch_semaphore_create();
        puStack_98 = &uStack_a0;
        uStack_a0 = 0;
        uStack_90 = 0x3032000000;
        pcStack_88 = FUN_107e2bdd4;
        uStack_80 = 0x107e2bde4;
        uStack_78 = 0;
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_retain(uVar6);
        func_0x00010bf16e60(puVar4);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
        ppuVar7 = (undefined **)puStack_98[5];
        func_0x00010c0b8600(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        __Block_object_dispose(&uStack_a0,8);
        _objc_release(uStack_78);
        _objc_release(uVar6);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(lVar2);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_a0,8);
    __Unwind_Resume(param_1);
    ppuVar7 = &PTR____CFConstantStringClassReference_110f314b8;
    puVar3 = PTR_PTR_1126b1350;
    _objc_alloc(PTR_PTR_1126b1350);
    func_0x00010bfeee60();
    func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                        &PTR____CFConstantStringClassReference_110dbab38,1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 107e2e720; end: 107e2e787;  */

void FUN_107e2e720(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110f314b8;
  puVar1 = PTR_PTR_1126b1350;
  _objc_alloc(PTR_PTR_1126b1350);
  func_0x00010bfeee60();
  func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                      &PTR____CFConstantStringClassReference_110dbab38,1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107e2e788; end: 107e2e7ef;  */

void FUN_107e2e788(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_3 != 0) && (param_4 == 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e2e7f0; end: 107e2e897;  */

void FUN_107e2e7f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_2,0,&uStack_28);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107e2e898; end: 107e2e8af;  */

void FUN_107e2e898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e2e8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e2e8b0; end: 107e2e9af;  */

void FUN_107e2e8b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d7f90;
  func_0x00010bfa7100(PTR_PTR_1126d7f90,param_2,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d7fc0;
  func_0x00010c2aeb40(PTR_PTR_1126d7fc0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d7f98;
  func_0x00010bf5a9a0(PTR_PTR_1126d7f98,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0fd8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6c20(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e2e9b0; end: 107e2ea9b;  */

void FUN_107e2e9b0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0742e0();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar1);
    func_0x00010c13f660(param_3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e2ea9c; end: 107e2eb07;  */

bool FUN_107e2ea9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (((int)param_2 != 0) && (puVar2 == (undefined *)0x0)) {
    func_0x00010b5fa33c(param_3);
    bVar1 = param_3 == 3;
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 107e2eb08; end: 107e2ed23;  */

void FUN_107e2eb08(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0(param_1);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110ebff98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebff98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebffb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebffb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af180;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107e2ed24;
  puStack_78 = &UNK_1108e3df0;
  uStack_70 = param_1;
  lStack_68 = param_2;
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(uStack_70);
  _objc_release(lStack_68);
  _objc_release(param_1);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_107e2ed24;
  lStack_b8 = *(long *)(lVar7 + 0x28);
  if (lStack_b8 != 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_107e2edb8;
    puStack_c8 = &UNK_11084aaa8;
    uStack_b0 = param_1;
    lStack_a8 = param_2;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(lStack_b8);
    uVar8 = *(undefined8 *)(lVar7 + 0x20);
    _objc_retain(uVar8);
    uStack_c0 = uVar8;
    func_0x000100162d98("APPSTORE",&puStack_e0);
    _objc_release(uStack_c0);
    _objc_release(lStack_b8);
  }
  return;
}



/* Entry: 107e2ed24; end: 107e2edb7;  */

void FUN_107e2ed24(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_107e2edb8;
    puStack_38 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lStack_28 = lVar2;
    _objc_retain(uVar1);
    uStack_30 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_release(lStack_28);
  }
  return;
}



/* Entry: 107e2edb8; end: 107e2edcf;  */

void FUN_107e2edb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e2edcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107e2edd0; end: 107e2ee03;  */

void FUN_107e2edd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107e2ee04; end: 107e2eeab; -[SCMemoriesSnapCreationResult initWithGallerySnap:snapDoc:] */

undefined1 *
FUN_107e2ee04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb480;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 107e2eeac; end: 107e2eeb3; -[SCMemoriesSnapCreationResult gallerySnap] */

undefined8 FUN_107e2eeac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e2eeb4; end: 107e2eebb; -[SCMemoriesSnapCreationResult snapDoc] */

undefined8 FUN_107e2eeb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e2eebc; end: 107e2eeeb; -[SCMemoriesSnapCreationResult .cxx_destruct] */

void FUN_107e2eebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e2eeec; end: 107e2ef5f; -[SCGrapheneMemoriesSaveMetric2 init] */

undefined1 * FUN_107e2eeec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb488;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e2ef60; end: 107e2f0d3;  */

void FUN_107e2ef60(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e798;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e798,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a0e7e8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e7e8,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a0e838;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e838,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a0e888;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e888,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110a0e8d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e8d8,&uStack_280,puVar6);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_300;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar3 = &UNK_110a0e928;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e928,&uStack_300,puVar4);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_360,puVar1);
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
    puVar1 = &UNK_110a0e978;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e978,&uStack_380,puVar6);
    puStack_368 = (undefined1 *)&uStack_380;
    func_0x00010007e5dc(&puStack_368);
    if (cStack_349 < '\0') {
      __ZdlPv(auStack_360[0]);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107e2f818(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e2f0d4; end: 107e2f247;  */

void FUN_107e2f0d4(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e7e8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e7e8,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a0e838;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e838,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a0e888;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e888,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a0e8d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e8d8,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar5 = &uStack_280;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110a0e928;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e928,&uStack_280,puVar6);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar3 = &UNK_110a0e978;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e978,&uStack_300,puVar4);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_107e2f818(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e2f248; end: 107e2f3bb;  */

void FUN_107e2f248(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e838;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e838,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a0e888;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e888,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a0e8d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e8d8,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puVar5 = &uStack_200;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a0e928;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e928,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110a0e978;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e978,&uStack_280,puVar6);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107e2f818(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e2f3bc; end: 107e2f52f;  */

void FUN_107e2f3bc(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e888;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e888,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a0e8d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e8d8,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar4 = puVar6;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a0e928;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e928,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar3 = &UNK_110a0e978;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e978,&uStack_200,puVar4);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_107e2f818(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e2f530; end: 107e2f6a3;  */

void FUN_107e2f530(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e8d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e8d8,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a0e928;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e928,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
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
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110a0e978;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e978,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_107e2f818(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e2f6a4; end: 107e2f817;  */

void FUN_107e2f6a4(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e928;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a0e928,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
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
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a0e978;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110a0e978,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
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
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_107e2f818(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107e2f818; end: 107e2f98b;  */

void FUN_107e2f818(double param_1,long param_2,undefined *param_3,undefined8 param_4)

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
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e978;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a0e978,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
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
    FUN_107e2f818(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107e2f98c; end: 107e2f9f7;  */

void FUN_107e2f98c(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_107e2f818(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e2f9f8; end: 107e2fb6b;  */

undefined * FUN_107e2f9f8(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
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
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0e9c8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0e9c8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110a0ea18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0ea18,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a0ea68,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  return *(undefined **)(puVar1 + 0x10);
}



/* Entry: 107e2fb6c; end: 107e2fcdf;  */

undefined * FUN_107e2fb6c(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
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
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110a0ea18;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110a0ea18,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f45eaf0;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110a0ea68,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  return *(undefined **)(puVar2 + 0x10);
}



/* Entry: 107e2fce0; end: 107e2fe53;  */

undefined * FUN_107e2fce0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f45eaf0;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a0ea68,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  return *(undefined **)(puVar1 + 0x10);
}



/* Entry: 107e2fe54; end: 107e2fe5b; -[SCMemoriesLegacyLoggerServices saveLogger] */

undefined8 FUN_107e2fe54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e2fe5c; end: 107e2fe8b; -[SCMemoriesLegacyLoggerServices .cxx_destruct] */

void FUN_107e2fe5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e2fe8c; end: 107e2ff57; -[SCMultipleTasksCompletionCallback initWithNumOfTasks:callback:callbackQueue:] */

undefined1 *
FUN_107e2fe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fb498;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e2ff58; end: 107e30003; -[SCMultipleTasksCompletionCallback onTaskComplete] */

void FUN_107e2ff58(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfec280();
  if ((*(long *)(param_1 + 8) == (long)iVar1) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x18) == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    else {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_107e30004;
      puStack_30 = &UNK_110849530;
      lStack_28 = lVar2;
      func_0x00010c0f7fc0(*(long *)(param_1 + 0x18),param_2,&puStack_48);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 107e30004; end: 107e3000f;  */

void FUN_107e30004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107e3000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107e30010; end: 107e3004b; -[SCMultipleTasksCompletionCallback .cxx_destruct] */

void FUN_107e30010(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e3004c; end: 107e30053; -[SCSpectaclesServices analyticsService] */

undefined8 FUN_107e3004c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e30054; end: 107e3005b; -[SCSpectaclesServices onboardingService] */

undefined8 FUN_107e30054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e3005c; end: 107e30063; -[SCSpectaclesServices homeWifiService] */

undefined8 FUN_107e3005c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e30064; end: 107e300c3; -[SCSpectaclesServices .cxx_destruct] */

void FUN_107e30064(long param_1)

{
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



/* Entry: 107e300c4; end: 107e300cf; -[SCSpectaclesAuthorizationServices .cxx_destruct] */

void FUN_107e300c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e300d0; end: 107e3020f; -[SCSpectaclesPostPairingOnboardingInfo initWithHardwareVersion:firmwareVersion:deviceColor:pairingSessionId:deviceId:pairingStartTime:] */

undefined1 *
FUN_107e300d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fb4b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e30210; end: 107e30217; -[SCSpectaclesPostPairingOnboardingInfo hardwareVersion] */

undefined8 FUN_107e30210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e30218; end: 107e3021f; -[SCSpectaclesPostPairingOnboardingInfo firmwareVersion] */

undefined8 FUN_107e30218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e30220; end: 107e30227; -[SCSpectaclesPostPairingOnboardingInfo deviceColor] */

undefined8 FUN_107e30220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e30228; end: 107e3022f; -[SCSpectaclesPostPairingOnboardingInfo pairingSessionId] */

undefined8 FUN_107e30228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e30230; end: 107e30237; -[SCSpectaclesPostPairingOnboardingInfo deviceId] */

undefined8 FUN_107e30230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e30238; end: 107e3023f; -[SCSpectaclesPostPairingOnboardingInfo pairingStartTime] */

undefined8 FUN_107e30238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e30240; end: 107e30293; -[SCSpectaclesPostPairingOnboardingInfo .cxx_destruct] */

void FUN_107e30240(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e30294; end: 107e303eb; -[SCSpectaclesOnboardingPageViewModel initWithPageType:primaryText:secondaryText:secondaryAttributedText:accessibilityIdentifier:minTime:startTime:endTime:videoObjectFuture:] */

undefined1 *
FUN_107e30294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126fb4b8;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107e303ec; end: 107e3040f; -[SCSpectaclesOnboardingPageViewModel copyWithZone:] */

undefined8 FUN_107e303ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



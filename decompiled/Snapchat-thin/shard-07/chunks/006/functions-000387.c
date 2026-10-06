/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10570685c; end: 1057069db; -[SCDownloadableContent setContentDownloaded:] */

long FUN_10570685c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bfacf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar9 = param_1;
      func_0x00010c291b60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0();
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == 0) {
        func_0x00010c12d3e0();
      }
      else {
        func_0x00010c172fe0();
      }
      _objc_release(puVar3);
      _objc_release(lVar9);
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return lVar2;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = lVar2;
  func_0x00010bfacf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      lVar7 = 1;
LAB_105706af0:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return lVar7;
      }
      ___stack_chk_fail();
      lVar7 = lVar6;
      func_0x00010c06f400();
      if ((int)lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(lVar6,PTR_s_isContentFileExists_1125f9720);
        return lVar6;
      }
      return lVar7;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      lVar4 = lVar2;
      func_0x00010c291b60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf1f320();
      _objc_release(puVar3);
      _objc_release(lVar4);
      if ((int)puVar5 == 0) {
        lVar7 = 0;
        goto LAB_105706af0;
      }
      lVar9 = lVar9 + 1;
    } while (lVar7 != lVar9);
    lVar7 = lVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1057069dc; end: 105706b37; -[SCDownloadableContent isContentDownloaded] */

long FUN_1057069dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bfacf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar7 == 0) {
      lVar7 = 1;
LAB_105706af0:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
        return lVar7;
      }
      ___stack_chk_fail();
      lVar7 = lVar2;
      func_0x00010c06f400();
      if ((int)lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_isContentFileExists_1125f9720);
        return lVar2;
      }
      return lVar7;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar3 = param_1;
      func_0x00010c291b60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
      func_0x00010c24d8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f320();
      _objc_release(puVar4);
      _objc_release(lVar3);
      if ((int)puVar5 == 0) {
        lVar7 = 0;
        goto LAB_105706af0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105706b38; end: 105706b6b; -[SCDownloadableContent isContentAvailable] */

void FUN_105706b38(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06f400();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isContentFileExists_1125f9720);
    return;
  }
  return;
}



/* Entry: 105706b6c; end: 105706ccf; -[SCDownloadableContent isContentFileExists] */

undefined * FUN_105706b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x00010bfacf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c0f5940(param_1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010bfacbe0(puVar6,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(puVar6);
        if ((int)puVar4 == 0) {
          puVar6 = (undefined *)0x0;
          goto LAB_105706c88;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  puVar6 = (undefined *)0x1;
LAB_105706c88:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126b7f60;
  lVar2 = lVar1;
  func_0x00010bf7f960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f960(lVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110df9298;
  func_0x00010c25ce00(&PTR____CFConstantStringClassReference_110df9298,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfccf60(puVar6,param_2,lVar2,ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 105706cd0; end: 105706d77; -[SCDownloadableContent contentDirectoryPath] */

void FUN_105706cd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b7f60;
  uVar1 = param_1;
  func_0x00010bf7f960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7f960(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110df9298;
  func_0x00010c25ce00(&PTR____CFConstantStringClassReference_110df9298,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfccf60(puVar3,param_2,uVar1,ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105706d78; end: 105706f63; -[SCDownloadableContent cleanUpContentDirectory] */

void FUN_105706d78(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf4c360(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4dfc0(puVar2,param_2,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar10 = *(undefined8 *)((long)puVar11 * 8);
      uVar6 = param_1;
      func_0x00010bfacf00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf4b900();
      _objc_release(uVar6);
      if ((uVar7 & 1) == 0) {
        uVar6 = uVar3;
        func_0x00010c25ce00(uVar3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc40(puVar2,param_2,uVar6,0);
        _objc_release(uVar6);
        uVar6 = param_1;
        func_0x00010c291b60(param_1,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
        func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0();
        _objc_release(puVar8);
        _objc_release(uVar6);
      }
      puVar11 = puVar11 + 1;
    } while (puVar5 != puVar11);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  return;
}



/* Entry: 105706f64; end: 105706f9b; -[SCDownloadableContent userDefaultsLeyForFileName:] */

void FUN_105706f64(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  return;
}



/* Entry: 105706f9c; end: 105706fa3; -[SCDownloadableContent boltPath] */

undefined8 FUN_105706f9c(void)

{
  return 0;
}



/* Entry: 105706fa4; end: 105706fab; -[SCDownloadableContent mediaType] */

undefined8 FUN_105706fa4(void)

{
  return 0;
}



/* Entry: 105706fac; end: 105706fb7; -[SCDownloadableContent requestContexts] */

undefined * FUN_105706fac(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 105706fb8; end: 10570703b; -[SCDownloadableContentManager initWithRequestManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105706fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9e38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112728430;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10570703c; end: 1057070c3; +[SCDownloadableContentManager shared] */

void FUN_10570703c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1057070c4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136bfb08 != -1) {
    func_0x00010002a2fc(0x1136bfb08,&puStack_48);
  }
  uVar1 = uRam00000001136bfb00;
  _objc_retain(uRam00000001136bfb00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057070c4; end: 1057070eb;  */

void FUN_1057070c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001136bfb00;
  uRam00000001136bfb00 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057070ec; end: 1057070f7; -[SCDownloadableContentManager errorDomain] */

undefined ** FUN_1057070ec(void)

{
  return &PTR____CFConstantStringClassReference_110df92b8;
}



/* Entry: 1057070f8; end: 105707127; -[SCDownloadableContentManager requestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057070f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112728430);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105707128; end: 10570713b; -[SCDownloadableContentManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105707128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112728430,0);
  return;
}



/* Entry: 10570713c; end: 10570718f; -[SCDownloadableContentManagerBase errorDomain] */

undefined8 FUN_10570713c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  return 1;
}



/* Entry: 105707190; end: 1057071e3; -[SCDownloadableContentManagerBase requestManager] */

undefined8 FUN_105707190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 1;
}



/* Entry: 1057071e4; end: 1057071eb; -[SCDownloadableContentManagerBase shouldLog] */

undefined8 FUN_1057071e4(void)

{
  return 1;
}



/* Entry: 1057071ec; end: 105707277; -[SCDownloadableContentManagerBase init] */

undefined1 * FUN_1057071ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9e40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = &UNK_10f2ecc94;
    _dispatch_queue_create(&UNK_10f2ecc94,0);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105707278; end: 105707283; -[SCDownloadableContentManagerBase requestNonAuthorizedContent:completion:] */

void FUN_105707278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestContent_authorized_comple_11262ae30,param_3,0,param_4);
  return;
}



/* Entry: 105707284; end: 10570728f; -[SCDownloadableContentManagerBase requestContent:completion:] */

void FUN_105707284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestContent_authorized_comple_11262ae30,param_3,1,param_4);
  return;
}



/* Entry: 105707290; end: 1057073d7; -[SCDownloadableContentManagerBase requestContent:authorized:completion:] */

void FUN_105707290(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_1108ac128;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  uVar2 = param_1;
  func_0x00010bef7420(param_1,param_2,ppuVar1,param_3);
  if (uVar2 < 2) {
    uVar2 = param_1;
    func_0x00010bec8c20(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be0e3a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x1057073dc;
    puStack_70 = &UNK_1108ac148;
    uStack_68 = param_1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_58 = uVar2;
    uStack_50 = uVar3;
    uStack_48 = param_4;
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010c135b80(param_1,param_2,param_3,uVar2,&puStack_88);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1057073d8; end: 1057073ef;  */

void FUN_1057073d8(void)

{
  return;
}



/* Entry: 1057073f0; end: 10570752f; -[SCDownloadableContentManagerBase requestBoltDownloadableContent:completion:] */

void FUN_1057073f0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &PTR___NSConcreteGlobalBlock_1108ac178;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  uVar2 = param_1;
  func_0x00010bef7420(param_1,param_2,ppuVar1,param_3);
  if (uVar2 < 2) {
    uVar2 = param_1;
    func_0x00010bec8c20(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be0e3a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x105707534;
    puStack_68 = &UNK_1108ac198;
    uStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    uStack_50 = uVar2;
    uStack_48 = uVar3;
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010c135b80(param_1,param_2,param_3,uVar2,&puStack_80);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105707530; end: 105707543;  */

void FUN_105707530(void)

{
  return;
}



/* Entry: 105707544; end: 10570766b; -[SCDownloadableContentManagerBase addCallback:forContent:] */

undefined8 FUN_105707544(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c0e00e0(lVar5,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar5 == 0) {
    puVar1 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010bf0a100(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010befa120(puVar1,param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010bf529e0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10570766c; end: 105707673; -[SCDownloadableContentManagerBase removeAllCallbacksForContent:] */

void FUN_10570766c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 105707674; end: 1057077cb; -[SCDownloadableContentManagerBase runCallbacksForContent:error:] */

void FUN_105707674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  iVar1 = (int)&uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c06f440(param_3);
  func_0x00010c181de0(param_3);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_d8;
  lVar7 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        lVar8 = *(long *)(lStack_118 + lVar7 * 8);
        uVar4 = param_3;
        func_0x00010c06f380(param_3);
        (**(code **)(lVar8 + 0x10))(lVar8,uVar4,param_4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      puVar6 = auStack_d8;
      lVar7 = 0x10;
      lVar3 = lVar2;
      iVar1 = (int)&uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(lVar7);
  func_0x00010c06f380();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (iVar1 == 0) {
    func_0x00010bf98a40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,puVar5);
    _objc_release(puVar5);
    _objc_release(param_3);
  }
  else {
    (**(code **)(puVar6 + 0x10))(puVar6);
  }
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1057077cc; end: 10570788f; -[SCDownloadableContentManagerBase requestLocalResourceWithContent:success:failure:] */

void FUN_1057077cc(undefined8 param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c06f380();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    func_0x00010bf98a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar1);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105707890; end: 105707bbf; -[SCDownloadableContentManagerBase _requestResourceFromBoltWithContent:success:failure:] */

void FUN_105707890(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_120;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010bf4dac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uStack_120 = (undefined *)0x0;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf4dac0();
      _objc_retainAutoreleasedReturnValue();
      uStack_120 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    lVar3 = param_1;
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b4960;
    lVar4 = param_3;
    func_0x00010bf1f160(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c13b3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b19f8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58760(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar11 = *(ulong *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(lVar3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_5);
    _objc_retain(lVar3);
    func_0x00010c25f660(lVar2);
    _objc_release(param_5);
    _objc_release(lVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_release(lVar3);
    _objc_release(puVar8);
    _objc_release(uStack_120);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar11);
  puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar9 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar8);
  uVar1 = uVar11;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_opt_class(*(undefined8 *)(param_3 + 0x20));
  func_0x00010be80b40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 105707bc0; end: 105707c87;  */

void FUN_105707bc0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be80b40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105707c88; end: 105707f8f; -[SCDownloadableContentManagerBase requestResourceFromCDNWithContent:authorized:success:failure:] */

void FUN_105707c88(long param_1,undefined8 param_2,undefined **param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf98a40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110df92d8;
    if (param_4 == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110df92f8;
    }
    ppuStack_90 = &PTR____CFConstantStringClassReference_110df9318;
    ppuVar2 = param_3;
    func_0x00010c13b3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_88 = ppuVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_88,&ppuStack_90,1
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010c13b3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b19f8;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_1);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_6);
    _objc_retain(param_1);
    func_0x00010c25f6e0(lVar1,param_2,ppuVar7,puVar8,0,ppuVar3,puVar5,puVar6,0,3,1,1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar8);
    _objc_release(ppuVar2);
    _objc_release(param_6);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = param_3[4];
  _objc_retain(ppuVar7);
  _objc_opt_class(puVar8);
  func_0x00010be80b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 105707f90; end: 10570802b;  */

void FUN_105707f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_opt_class(uVar1);
  func_0x00010be80b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10570802c; end: 1057080cb; -[SCDownloadableContentManagerBase _successCallbackForContent:] */

void FUN_10570802c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057080cc;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057080cc; end: 1057080fb;  */

void FUN_1057080cc(long param_1,undefined8 param_2)

{
  func_0x00010c142700(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),0);
                    /* WARNING: Could not recover jumptable at 0x00010c12abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllCallbacksForContent__112628508,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057080fc; end: 10570819b; -[SCDownloadableContentManagerBase _failureCallbackForContent:] */

void FUN_1057080fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10570819c;
  puStack_48 = &UNK_1108420a0;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10570819c; end: 1057081cb;  */

void FUN_10570819c(long param_1,undefined8 param_2)

{
  func_0x00010c142700(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c12abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllCallbacksForContent__112628508,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057081cc; end: 10570835f; +[SCDownloadableContentManagerBase _processData:downloadableContent:errorDomain:success:failure:] */

void FUN_1057081cc(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_opt_class();
  uVar2 = param_4;
  func_0x00010bf4c360(param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = 0;
  func_0x00010bdc3c80();
  _objc_release(param_3);
  uVar1 = uStack_58;
  _objc_retain(uStack_58);
  _objc_release(uVar2);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105708360;
  puStack_90 = &UNK_1108ac288;
  uStack_88 = uVar1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x000100162d98("APPSTORE",&puStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105708360; end: 105708423;  */

void FUN_105708360(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c06f440();
      if (iVar1 != 0) {
        if (*(long *)(param_1 + 0x38) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0001057083c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
        return;
      }
      if (*(long *)(param_1 + 0x20) != 0) goto LAB_105708378;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  }
  else {
LAB_105708378:
    lVar3 = *(long *)(param_1 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  }
  if (lVar3 == 0) {
    PTR__OBJC_CLASS___NSError_1126ae858 = puVar2;
    return;
  }
  PTR__OBJC_CLASS___NSError_1126ae858 = puVar2;
  func_0x00010bf99240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105708424; end: 10570855b; +[SCDownloadableContentManagerBase _processFailureResponse:errorDomain:failure:] */

undefined *
FUN_105708424(undefined *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_4;
  if (param_5 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c252ee0(param_3);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 2;
    param_3 = param_4;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    (**(code **)(param_5 + 0x10))(param_5,puVar2);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    param_1 = puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if ((lVar4 == 0) || (lVar4 = param_3, func_0x00010c08fa60(), lVar4 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    func_0x00010c008480();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c27f220();
      _objc_release(puVar1);
      if ((int)puVar5 != 0) {
        puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010c1ecdc0();
        _objc_release(puVar1);
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10570855c; end: 105708683; +[SCDownloadableContentManagerBase _absoluteDataPathForUnzippedData:directoryPath:error:] */

undefined *
FUN_10570855c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    func_0x00010c008480();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c27f220(puVar2,param_2,puVar3,param_5);
      _objc_release(puVar3);
      if ((int)puVar4 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c1ecdc0();
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105708684; end: 1057086b3; -[SCDownloadableContentManagerBase .cxx_destruct] */

void FUN_105708684(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057086b4; end: 105708733; -[SCNCryptoWrapperCryptoWrapperBitmoji initWithCpp:] */

undefined1 * FUN_1057086b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x0001057089bc(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 105708734; end: 10570884b; +[SCNCryptoWrapperCryptoWrapperBitmoji selfieEncrypt:publicKeyData:publicKeyID:] */

void FUN_105708734(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x0001057089fc();
  _objc_retain(in_x3);
  func_0x00010029a6ec(auStack_68);
  func_0x00010029a6ec(auStack_80,in_x3);
  FUN_105708fb4(auStack_50,auStack_68,auStack_80,in_x4);
  func_0x000100100fec(auStack_80);
  func_0x000100100fec(auStack_68);
  func_0x0001006d1308(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057089f0();
  _objc_release(in_x3);
  func_0x0001057089e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x4);
  return;
}



/* Entry: 10570884c; end: 105708913; +[SCNCryptoWrapperCryptoWrapperBitmoji mirrorDecrypt:] */

void FUN_10570884c(void)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x0001057089fc();
  func_0x00010029a6ec(auStack_68);
  FUN_105708fa8(auStack_50,auStack_68);
  func_0x000100100fec(auStack_68);
  func_0x0001006d1308(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105708a08();
  func_0x0001057089e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105708914; end: 10570896f; -[SCNCryptoWrapperCryptoWrapperBitmoji .cxx_destruct] */

void FUN_105708914(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108ac2b8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001057089bc((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105708970; end: 1057089e7; -[SCNCryptoWrapperCryptoWrapperBitmoji .cxx_construct] */

undefined8 * FUN_105708970(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1057089e8; end: 105708a13;  */

void FUN_1057089e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105708a14; end: 105708a93; -[SCNCryptoWrapperCryptoWrapperSnapchatAndroid initWithCpp:] */

undefined1 * FUN_105708a14(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9e50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000105708c14(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 105708a94; end: 105708b6b; +[SCNCryptoWrapperCryptoWrapperSnapchatAndroid mirrorDecrypt:] */

void FUN_105708a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  _objc_retain(param_3);
  func_0x00010029a6ec(auStack_68,param_3);
  FUN_105709864(auStack_50,auStack_68);
  func_0x000100100fec(auStack_68);
  func_0x0001006d1308(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  FUN_105708c40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105708b6c; end: 105708bc7; -[SCNCryptoWrapperCryptoWrapperSnapchatAndroid .cxx_destruct] */

void FUN_105708b6c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108ac2c8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105708c14((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105708bc8; end: 105708c3f; -[SCNCryptoWrapperCryptoWrapperSnapchatAndroid .cxx_construct] */

undefined8 * FUN_105708bc8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105708c40; end: 105708c4b;  */

void FUN_105708c40(void)

{
  char in_stack_00000038;
  
  if (in_stack_00000038 == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105708c4c; end: 105708ccb; -[SCNCryptoWrapperCryptoWrapperSnapchatIos initWithCpp:] */

undefined1 * FUN_105708c4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9e58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000105708e4c(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 105708ccc; end: 105708da3; +[SCNCryptoWrapperCryptoWrapperSnapchatIos mirrorDecrypt:] */

void FUN_105708ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  _objc_retain(param_3);
  func_0x00010029a6ec(auStack_68,param_3);
  func_0x000105709874(auStack_50,auStack_68);
  func_0x000100100fec(auStack_68);
  func_0x0001006d1308(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  FUN_105708e78();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105708da4; end: 105708dff; -[SCNCryptoWrapperCryptoWrapperSnapchatIos .cxx_destruct] */

void FUN_105708da4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108ac2d8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105708e4c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105708e00; end: 105708e77; -[SCNCryptoWrapperCryptoWrapperSnapchatIos .cxx_construct] */

undefined8 * FUN_105708e00(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105708e78; end: 105708e83;  */

void FUN_105708e78(void)

{
  char in_stack_00000038;
  
  if (in_stack_00000038 == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105708e84; end: 105708eb7; -[SCNCryptoWrapperCryptoWrapperConstants init] */

void FUN_105708e84(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e9e60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105708eb8; end: 105708fa7;  */

void FUN_105708eb8(undefined8 *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((ulong)(param_2[1] - *param_2) < 0x20) {
    func_0x0001057099a8();
    func_0x00010002b838(&uStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    func_0x000100291d50(&uStack_50,(param_2[1] - *param_2) - 0x20);
    FUN_105709a00(param_3,uStack_50,0,0,*param_2,param_2[1] - *param_2);
    bVar1 = (param_3 & 1) == 0;
    if (bVar1) {
      func_0x0001057099a8();
      func_0x00010002b838(auStack_68);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
      *(undefined1 *)param_1 = 0;
    }
    else {
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      param_1[2] = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
    }
    *(bool *)(param_1 + 3) = !bVar1;
    func_0x000100100fec(&uStack_50);
  }
  return;
}



/* Entry: 105708fa8; end: 105708fb3;  */

void FUN_105708fa8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = 0;
  if ((ulong)(param_2[1] - *param_2) < 0x20) {
    func_0x0001057099a8();
    func_0x00010002b838(&uStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    func_0x000100291d50(&uStack_50,(param_2[1] - *param_2) - 0x20);
    FUN_105709a00(0x1130f6d18,uStack_50,0,0,*param_2,param_2[1] - *param_2);
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      func_0x0001057099a8();
      func_0x00010002b838(auStack_68);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
      *(undefined1 *)param_1 = 0;
    }
    else {
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      param_1[2] = uStack_40;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
    }
    *(bool *)(param_1 + 3) = !bVar1;
    func_0x000100100fec(&uStack_50);
  }
  return;
}



/* Entry: 105708fb4; end: 105709863;  */

void FUN_105708fb4(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  int iStack_128;
  undefined4 uStack_124;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  int aiStack_68 [6];
  
  if ((param_3[1] - *param_3 != 0x58) || (0x7fffff9d < (ulong)(param_2[1] - *param_2))) {
    func_0x000105709998();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  func_0x000100291d50(&puStack_a0,(param_2[1] - *param_2) + 0x62);
  plVar2 = (long *)0x19f;
  func_0x000100410404();
  if (plVar2 == (long *)0x0) {
    func_0x00010570996c();
    FUN_105709880();
    func_0x000105709914();
    goto LAB_105709804;
  }
  lVar8 = *plVar2;
  lVar7 = lVar8;
  func_0x000100411cb8();
  if (lVar7 == 0) {
    func_0x00010570996c();
    FUN_105709880();
  }
  else {
    lVar3 = lVar8;
    func_0x000100412000(lVar8,lVar7,*param_3 + 0x17,0x41,0);
    if ((int)lVar3 == 1) {
      plVar4 = plVar2;
      func_0x00010ae36488();
      if ((int)plVar4 != 0) {
        func_0x000100291d50(&lStack_b8,0x20);
        lVar3 = lStack_b8;
        func_0x00010ae29434(lStack_b8,lStack_b0 - lStack_b8,lVar7,plVar2,0);
        if ((int)lVar3 != 0x20) {
          func_0x00010570996c();
          FUN_105709880();
          func_0x000105709914();
          goto LAB_105709804;
        }
        func_0x000100291d50(&lStack_d0,0x41);
        func_0x000100414320(lVar8,plVar2[1],4,lStack_d0,lStack_c8 - lStack_d0,0);
        if (lVar8 != 0x41) {
          func_0x00010570996c();
          FUN_105709880();
          func_0x000105709914();
          goto LAB_105709804;
        }
        FUN_105340004(&lStack_e8,lStack_d0,lStack_c8);
        FUN_10533bee8(&lStack_e8,lStack_e0,lStack_b8,lStack_b0);
        plVar4 = &lStack_100;
        func_0x000100291d50(plVar4,0x10);
        lVar8 = lStack_f8;
        lVar7 = lStack_100;
        func_0x0001001fbfa8();
        func_0x00010ae41fc0(lVar7,lVar8 - lVar7,plVar4,lStack_e8,lStack_e0 - lStack_e8,
                            &UNK_10ddbc60a,0x10,&UNK_10ddbc61a,3);
        if ((int)lVar7 == 0) {
          func_0x00010570996c();
          FUN_105709880();
          func_0x000105709914();
          goto LAB_105709804;
        }
        func_0x00010ae45444(lStack_b8,lStack_b0 - lStack_b8);
        func_0x000100291d50(&lStack_118,0xc);
        func_0x0001004a5eec(lStack_118,lStack_110 - lStack_118);
        if (lStack_110 - lStack_118 != 0) {
          _memmove(puStack_a0 + 0x46,lStack_118,lStack_110 - lStack_118);
        }
        plVar4 = &lStack_130;
        func_0x000100291d50(plVar4,0x10);
        lStack_160 = 0;
        lStack_158 = 0;
        uStack_150 = 0;
        if (CONCAT44(uStack_124,iStack_128) - lStack_130 != 0x10) {
          func_0x0001057099b4();
          func_0x0001057099e0();
          func_0x00010570998c(&UNK_10f2ecfaf);
          func_0x000105709980();
          func_0x000105709940();
          goto LAB_105709804;
        }
        if (lStack_f8 - lStack_100 != 0x10) {
          func_0x0001057099b4();
          func_0x0001057099e0();
          func_0x00010570998c(&UNK_10f2ecfd5);
          func_0x000105709980();
          func_0x000105709940();
          goto LAB_105709804;
        }
        if (lStack_110 - lStack_118 != 0xc) {
          func_0x0001057099b4();
          __ZNSt3__19to_stringEi(auStack_80,0xc);
          func_0x00010570998c(&UNK_10f2ecffb);
          func_0x000105709980();
          func_0x000105709940();
          goto LAB_105709804;
        }
        if (0x7ffffffe < (ulong)(param_2[1] - *param_2)) {
          func_0x0001057099b4();
          __ZNSt3__19to_stringEi(auStack_80,0x7fffffff);
          func_0x00010570998c(&UNK_10f2ed023);
          func_0x000105709980();
          func_0x000105709940();
          goto LAB_105709804;
        }
        func_0x00010ae33fac();
        if (plVar4 == (long *)0x0) {
          func_0x00010570996c();
          FUN_105709880();
          func_0x000105709914();
          goto LAB_105709804;
        }
        plVar5 = &lStack_148;
        func_0x000100291d50(plVar5,param_2[1] - *param_2);
        func_0x00010ae349c4();
        plVar6 = plVar4;
        func_0x00010ae3432c(plVar4,plVar5,0,lStack_100,lStack_118);
        if ((int)plVar6 == 0) {
          func_0x00010570996c();
          FUN_105709880();
          func_0x00010570992c();
          func_0x0001057099d8();
          goto LAB_105709804;
        }
        aiStack_68[0] = 0;
        if ((lStack_160 != lStack_158) &&
           (plVar5 = plVar4,
           func_0x00010ae3433c(plVar4,0,aiStack_68,lStack_160,(int)lStack_158 - (int)lStack_160),
           (int)plVar5 != 1)) {
          func_0x00010570996c();
          func_0x0001057099cc();
          func_0x00010570992c();
          func_0x0001057099d8();
          goto LAB_105709804;
        }
        lVar7 = *param_2;
        if (lVar7 == param_2[1]) {
          lVar7 = 0;
LAB_105709270:
          plVar5 = plVar4;
          func_0x00010ae34534(plVar4,lStack_148 + lVar7,aiStack_68);
          if ((int)plVar5 == 1) {
            plVar5 = plVar4;
            func_0x00010ae342a8(plVar4,0x10,iStack_128 - (int)lStack_130);
            if ((int)plVar5 == 1) {
              func_0x00010ae34050(plVar4);
              func_0x000100100fec(&lStack_160);
              if (lStack_148 != lStack_140) {
                _memmove(puStack_a0 + (lStack_110 - lStack_118) + 0x46,lStack_148,
                         lStack_140 - lStack_148);
                lVar7 = CONCAT44(uStack_124,iStack_128) - lStack_130;
                if (lVar7 != 0) {
                  _memmove(puStack_a0 + ((param_2[1] + lStack_110) - (lStack_118 + *param_2)) + 0x46
                           ,lStack_130,lVar7);
                }
                func_0x00010ae45444(lStack_100,lStack_f8 - lStack_100);
                *puStack_a0 = 1;
                puStack_a0[1] = (char)((ulong)param_4 >> 0x18);
                puStack_a0[2] = (char)((ulong)param_4 >> 0x10);
                puStack_a0[3] = (char)((ulong)param_4 >> 8);
                puStack_a0[4] = (char)param_4;
                if (lStack_c8 - lStack_d0 != 0) {
                  _memmove(puStack_a0 + 5,lStack_d0,lStack_c8 - lStack_d0);
                }
                func_0x000100100fec(&lStack_148);
                func_0x000100100fec(&lStack_130);
                func_0x000100100fec(&lStack_118);
                func_0x000100100fec(&lStack_100);
                func_0x000100100fec(&lStack_e8);
                func_0x000100100fec(&lStack_d0);
                func_0x000100100fec(&lStack_b8);
                func_0x000100414b38(plVar2);
                param_1[1] = uStack_98;
                *param_1 = puStack_a0;
                param_1[2] = uStack_90;
                uStack_98 = 0;
                uStack_90 = 0;
                puStack_a0 = (undefined1 *)0x0;
                *(undefined1 *)(param_1 + 3) = 1;
                func_0x000100100fec(&puStack_a0);
                return;
              }
              func_0x00010570996c();
              FUN_105709880();
              func_0x000105709914();
              goto LAB_105709804;
            }
            func_0x00010570996c();
            FUN_105709880();
          }
          else {
            func_0x00010570996c();
            FUN_105709880();
          }
        }
        else {
          plVar5 = plVar4;
          func_0x00010ae3433c(plVar4,lStack_148,aiStack_68,lVar7,(int)param_2[1] - (int)lVar7);
          if ((int)plVar5 == 1) {
            lVar7 = (long)aiStack_68[0];
            goto LAB_105709270;
          }
          func_0x00010570996c();
          func_0x0001057099cc();
        }
        func_0x00010570992c();
        func_0x0001057099d8();
        goto LAB_105709804;
      }
      func_0x00010570996c();
      FUN_105709880();
    }
    else {
      func_0x00010570996c();
      FUN_105709880();
    }
  }
  func_0x000105709914();
LAB_105709804:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105709808);
  (*pcVar1)();
}



/* Entry: 105709864; end: 10570987f;  */

void FUN_105709864(undefined8 param_1)

{
  func_0x0001057099bc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 105709880; end: 1057098bb;  */

undefined8 FUN_105709880(undefined8 param_1)

{
  func_0x0001057099bc();
  func_0x00010002b838();
  return param_1;
}



/* Entry: 1057098bc; end: 1057098cf;  */

void FUN_1057098bc(void)

{
  FUN_1057098ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1057098d0; end: 1057098eb;  */

undefined8 * FUN_1057098d0(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}



/* Entry: 1057098ec; end: 105709913;  */

void FUN_1057098ec(undefined8 param_1)

{
  func_0x0001057099bc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 105709914; end: 1057099ff;  */

void FUN_105709914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 105709a00; end: 105709d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105709a00(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,
                  undefined8 *param_5,ulong param_6)

{
  undefined4 uVar1;
  uint3 uVar2;
  uint3 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_71;
  long lStack_70;
  undefined1 auVar38 [16];
  
  uVar10 = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_2;
  if ((param_5 != (undefined8 *)0x0) && (0x1f < param_6)) {
    puVar12 = param_2;
    if (((param_2 != (undefined8 *)0x0) || (param_6 == 0x20)) && ((param_3 != 0 || (param_4 == 0))))
    {
      uVar7 = param_5[1];
      uVar5 = *param_5;
      uStack_e8 = *(undefined8 *)((long)param_5 + (param_6 - 8));
      uStack_f0 = *(undefined8 *)((long)param_5 + (param_6 - 0x10));
      uStack_d8 = param_1[1];
      uStack_e0 = *param_1;
      uStack_c8 = param_1[3];
      uStack_d0 = param_1[2];
      uStack_b8 = param_1[5];
      uStack_c0 = param_1[4];
      uStack_a8 = param_1[7];
      uStack_b0 = param_1[6];
      FUN_105709db8(&uStack_e0);
      FUN_105709db8(&uStack_e0);
      uStack_a8 = uStack_a8 ^ 0x8000000001;
      uStack_b0 = uStack_b0 ^ 0x400000020;
      uVar8 = param_1[9];
      uVar6 = param_1[8];
      uStack_e0 = uVar5;
      uStack_d8 = uVar7;
      uStack_d0 = uVar6;
      uStack_c8 = uVar8;
      FUN_105709da0();
      uStack_a8 = CONCAT17((byte)(uStack_a8 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38),
                           CONCAT16((byte)(uStack_a8 >> 0x30) ^ (byte)((ulong)uVar8 >> 0x30),
                                    CONCAT15((byte)(uStack_a8 >> 0x28) ^
                                             (byte)((ulong)uVar8 >> 0x28),
                                             CONCAT14((byte)(uStack_a8 >> 0x20) ^
                                                      (byte)((ulong)uVar8 >> 0x20),
                                                      CONCAT13((byte)(uStack_a8 >> 0x18) ^
                                                               (byte)((ulong)uVar8 >> 0x18),
                                                               CONCAT12((byte)(uStack_a8 >> 0x10) ^
                                                                        (byte)((ulong)uVar8 >> 0x10)
                                                                        ,CONCAT11((byte)(uStack_a8
                                                                                        >> 8) ^
                                                                                  (byte)((ulong)
                                                  uVar8 >> 8),(byte)uStack_a8 ^ (byte)uVar8)))))));
      uStack_b0 = CONCAT17((byte)(uStack_b0 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                           CONCAT16((byte)(uStack_b0 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                    CONCAT15((byte)(uStack_b0 >> 0x28) ^
                                             (byte)((ulong)uVar6 >> 0x28),
                                             CONCAT14((byte)(uStack_b0 >> 0x20) ^
                                                      (byte)((ulong)uVar6 >> 0x20),
                                                      CONCAT13((byte)(uStack_b0 >> 0x18) ^
                                                               (byte)((ulong)uVar6 >> 0x18),
                                                               CONCAT12((byte)(uStack_b0 >> 0x10) ^
                                                                        (byte)((ulong)uVar6 >> 0x10)
                                                                        ,CONCAT11((byte)(uStack_b0
                                                                                        >> 8) ^
                                                                                  (byte)((ulong)
                                                  uVar6 >> 8),(byte)uStack_b0 ^ (byte)uVar6)))))));
      if (param_4 != 0) {
        while (0x2f < param_4) {
          FUN_105709d48(*(undefined4 *)(param_1 + 10),&uStack_e0,param_3);
          param_3 = param_3 + 0x30;
          param_4 = param_4 - 0x30;
        }
        func_0x00010570a05c(&uStack_a0,param_3,param_4);
        FUN_105709d48(*(undefined4 *)(param_1 + 10),&uStack_e0,&uStack_a0);
      }
      puVar12 = (undefined8 *)(param_6 - 0x20);
      if (puVar12 != (undefined8 *)0x0) {
        lVar17 = 0;
        lVar14 = (long)param_2 + 3;
        puVar16 = puVar12;
        puVar11 = param_5 + 2;
        while ((undefined8 *)0x2f < puVar16) {
          func_0x000105709da8(*(undefined4 *)((long)param_1 + 0x54));
          FUN_105709da0();
          lVar15 = lVar14;
          for (lVar13 = 0; lVar13 != 0xc; lVar13 = lVar13 + 1) {
            uVar10 = *(uint *)((long)puVar11 + lVar13 * 4);
            *(uint *)(lVar15 + -3) = *(uint *)((long)&uStack_e0 + lVar13 * 4) ^ uVar10;
            *(uint *)((long)&uStack_e0 + lVar13 * 4) = uVar10;
            lVar15 = lVar15 + 4;
          }
          lVar17 = lVar17 + 0x30;
          puVar11 = puVar11 + 6;
          lVar14 = lVar14 + 0x30;
          puVar16 = puVar16 + -6;
        }
        func_0x000105709da8(*(undefined4 *)((long)param_1 + 0x54));
        FUN_105709da0();
        for (lVar14 = 0; lVar14 != 0x30; lVar14 = lVar14 + 4) {
          *(undefined4 *)((long)&uStack_a0 + lVar14) = *(undefined4 *)((long)&uStack_e0 + lVar14);
        }
        ___memcpy_chk(&uStack_a0,(long)(param_5 + 2) + lVar17,puVar16,0x30);
        *(byte *)((long)&uStack_a0 + (long)puVar16) =
             *(byte *)((long)&uStack_a0 + (long)puVar16) ^ 1;
        bStack_71 = bStack_71 ^ 0x80;
        for (lVar14 = 0; lVar14 != 0x30; lVar14 = lVar14 + 4) {
          uVar10 = *(uint *)((long)&uStack_a0 + lVar14);
          *(uint *)((long)&uStack_a0 + lVar14) = *(uint *)((long)&uStack_e0 + lVar14) ^ uVar10;
          *(uint *)((long)&uStack_e0 + lVar14) = uVar10;
        }
        _memcpy((long)param_2 + lVar17,&uStack_a0,puVar16);
      }
      func_0x000105709da8(*(undefined4 *)(param_1 + 0xb));
      FUN_105709da0();
      uVar6 = param_1[9];
      uVar5 = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 8);
      auVar35 = *(undefined1 (*) [16])(param_1 + 8);
      bVar19 = (byte)((ulong)uVar5 >> 8);
      bVar20 = (byte)((ulong)uVar5 >> 0x10);
      bVar21 = (byte)((ulong)uVar5 >> 0x18);
      bVar22 = (byte)((ulong)uVar5 >> 0x20);
      bVar23 = (byte)((ulong)uVar5 >> 0x28);
      bVar24 = (byte)((ulong)uVar5 >> 0x30);
      bVar25 = (byte)((ulong)uVar5 >> 0x38);
      uStack_a8 = CONCAT17((byte)(uStack_a8 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                           CONCAT16((byte)(uStack_a8 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                    CONCAT15((byte)(uStack_a8 >> 0x28) ^
                                             (byte)((ulong)uVar6 >> 0x28),
                                             CONCAT14((byte)(uStack_a8 >> 0x20) ^
                                                      (byte)((ulong)uVar6 >> 0x20),
                                                      CONCAT13((byte)(uStack_a8 >> 0x18) ^
                                                               (byte)((ulong)uVar6 >> 0x18),
                                                               CONCAT12((byte)(uStack_a8 >> 0x10) ^
                                                                        (byte)((ulong)uVar6 >> 0x10)
                                                                        ,CONCAT11((byte)(uStack_a8
                                                                                        >> 8) ^
                                                                                  (byte)((ulong)
                                                  uVar6 >> 8),(byte)uStack_a8 ^ (byte)uVar6)))))));
      uStack_b0 = CONCAT17((byte)(uStack_b0 >> 0x38) ^ bVar25,
                           CONCAT16((byte)(uStack_b0 >> 0x30) ^ bVar24,
                                    CONCAT15((byte)(uStack_b0 >> 0x28) ^ bVar23,
                                             CONCAT14((byte)(uStack_b0 >> 0x20) ^ bVar22,
                                                      CONCAT13((byte)(uStack_b0 >> 0x18) ^ bVar21,
                                                               CONCAT12((byte)(uStack_b0 >> 0x10) ^
                                                                        bVar20,CONCAT11((byte)(
                                                  uStack_b0 >> 8) ^ bVar19,
                                                  (byte)uStack_b0 ^ (byte)uVar5)))))));
      FUN_105709da0();
      bVar18 = (byte)uStack_b0 ^ (byte)uVar5;
      bVar19 = (byte)(uStack_b0 >> 8) ^ bVar19;
      bVar20 = (byte)(uStack_b0 >> 0x10) ^ bVar20;
      bVar21 = (byte)(uStack_b0 >> 0x18) ^ bVar21;
      bVar22 = (byte)(uStack_b0 >> 0x20) ^ bVar22;
      bVar23 = (byte)(uStack_b0 >> 0x28) ^ bVar23;
      bVar24 = (byte)(uStack_b0 >> 0x30) ^ bVar24;
      bVar25 = (byte)(uStack_b0 >> 0x38) ^ bVar25;
      uVar1 = CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar18)));
      auVar36[1] = bVar19;
      auVar36[0] = bVar18;
      auVar36[2] = bVar20;
      auVar36[3] = bVar21;
      auVar36._4_4_ = uVar1;
      auVar36[9] = bVar19;
      auVar36[8] = bVar18;
      auVar36[10] = bVar20;
      auVar36[0xb] = bVar21;
      auVar36._12_4_ =
           (int)(CONCAT17(bVar25,CONCAT16(bVar24,CONCAT15(bVar23,CONCAT14(bVar22,uVar1)))) >> 0x20);
      auVar35 = NEON_ext(auVar35,auVar35,8,1);
      bVar26 = (byte)uStack_a8 ^ auVar35[0];
      bVar27 = (byte)(uStack_a8 >> 8) ^ auVar35[1];
      bVar28 = (byte)(uStack_a8 >> 0x10) ^ auVar35[2];
      bVar29 = (byte)(uStack_a8 >> 0x18) ^ auVar35[3];
      bVar30 = (byte)(uStack_a8 >> 0x20) ^ auVar35[4];
      bVar31 = (byte)(uStack_a8 >> 0x28) ^ auVar35[5];
      bVar32 = (byte)(uStack_a8 >> 0x30) ^ auVar35[6];
      bVar33 = (byte)(uStack_a8 >> 0x38) ^ auVar35[7];
      uVar1 = CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
      auVar40._12_4_ = uVar1;
      auVar40._8_4_ = uVar1;
      uVar1 = CONCAT13(bVar25,CONCAT12(bVar24,CONCAT11(bVar23,bVar22)));
      auVar40._4_4_ = uVar1;
      auVar40._0_4_ = uVar1;
      uVar4 = CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
      auVar39._4_4_ = uVar4;
      auVar39._0_4_ = uVar4;
      auVar39._8_4_ = uVar4;
      auVar39._12_4_ = uVar4;
      uVar1 = CONCAT13(bVar29,CONCAT12(bVar28,CONCAT11(bVar27,bVar26)));
      auVar41._4_12_ = auVar39._4_12_;
      auVar41._0_4_ = uVar1;
      auVar37._0_8_ = auVar41._0_8_;
      auVar37._8_4_ =
           (int)(CONCAT17(bVar33,CONCAT16(bVar32,CONCAT15(bVar31,CONCAT14(bVar30,uVar1)))) >> 0x20);
      auVar37._12_4_ = uVar4;
      auVar42._8_8_ = auVar37._8_8_;
      auVar42._4_4_ = uVar4;
      auVar42._0_4_ = uVar1;
      auVar38._0_12_ = auVar42._0_12_;
      auVar38._12_4_ = uVar4;
      auVar39 = NEON_ushl(auVar38,_UNK_10ddbc640,4);
      auVar41 = NEON_ushl(auVar40,_UNK_10ddbc650,4);
      auVar34[1] = bVar27;
      auVar34[0] = bVar26;
      auVar34[2] = bVar28;
      auVar34[3] = bVar29;
      auVar34[4] = bVar30;
      auVar34[5] = bVar31;
      auVar34[6] = bVar32;
      auVar34[7] = bVar33;
      auVar34._8_8_ = 0;
      auVar42 = NEON_ext(auVar41,auVar34,4,1);
      auVar34 = NEON_ushl(auVar36,_UNK_10ddbc630,4);
      auVar35[1] = bVar19;
      auVar35[0] = bVar18;
      auVar35[2] = bVar20;
      auVar35[3] = bVar21;
      auVar35[4] = bVar22;
      auVar35[5] = bVar23;
      auVar35[6] = bVar24;
      auVar35[7] = bVar25;
      auVar35._8_8_ = 0;
      auVar35 = NEON_ext(auVar34,auVar35,4,1);
      auVar36 = NEON_ext(auVar35,auVar34,0xc,1);
      auVar35 = NEON_ext(auVar34,auVar41,8,1);
      uVar3 = CONCAT12(auVar42[4],CONCAT11(bVar27,bVar26)) & 0xff00ff;
      uVar2 = CONCAT12(auVar36[4],auVar36._0_2_) & 0xff00ff;
      uStack_98 = CONCAT17(auVar39[0xc],
                           CONCAT16(auVar39[8],
                                    CONCAT15(auVar39[4],
                                             CONCAT14(bVar30,CONCAT13(auVar39[0],
                                                                      CONCAT12(auVar42[8],
                                                                               CONCAT11((char)(uVar3
                                                                                              >> 
                                                  0x10),(char)uVar3)))))));
      uStack_a0 = CONCAT17(auVar35[0xc],
                           CONCAT16(auVar35[8],
                                    CONCAT15(auVar35[4],
                                             CONCAT14(bVar22,CONCAT13(auVar36[0xc],
                                                                      CONCAT12(auVar36[8],
                                                                               CONCAT11((char)(uVar2
                                                                                              >> 
                                                  0x10),(char)uVar2)))))));
      iVar9 = (int)&uStack_a0;
      puVar11 = &uStack_f0;
      param_3 = 0x10;
      _memcmp();
      uVar10 = (uint)(iVar9 == 0);
      if ((param_2 == (undefined8 *)0x0) || (iVar9 == 0)) goto LAB_105709d0c;
      _bzero(param_2);
    }
    uVar10 = 0;
    puVar11 = puVar12;
  }
LAB_105709d0c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  *(uint *)((long)puVar11 + 0x3c) = *(uint *)((long)puVar11 + 0x3c) ^ uVar10;
  func_0x00010570a028(puVar11);
  for (lVar14 = 0; lVar14 != 0x30; lVar14 = lVar14 + 4) {
    *(uint *)((long)puVar11 + lVar14) =
         *(uint *)((long)puVar11 + lVar14) ^ *(uint *)(param_3 + lVar14);
  }
  return;
}



/* Entry: 105709d48; end: 105709d9f;  */

void FUN_105709d48(uint param_1,long param_2,long param_3)

{
  long lVar1;
  
  *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) ^ param_1;
  FUN_10570a028(param_2);
  for (lVar1 = 0; lVar1 != 0x30; lVar1 = lVar1 + 4) {
    *(uint *)(param_2 + lVar1) = *(uint *)(param_2 + lVar1) ^ *(uint *)(param_3 + lVar1);
  }
  return;
}



/* Entry: 105709da0; end: 105709db7;  */

void FUN_105709da0(void)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    FUN_105709db8(&stack0x00000030);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* Entry: 105709db8; end: 10570a027;  */

void FUN_105709db8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar14 = param_1[4];
  uVar16 = param_1[5];
  uVar1 = *param_1 ^ (uVar14 & *param_1) << 1 ^ uVar14;
  uVar2 = uVar1 ^ param_1[0xc];
  uVar3 = param_1[8] ^ (param_1[8] & (uVar2 >> 8 | uVar2 << 0x18)) << 1 ^
          (uVar2 >> 8 | uVar2 << 0x18);
  uVar14 = uVar3 ^ uVar14;
  uVar1 = uVar1 ^ (uVar1 & (uVar14 >> 0xb | uVar14 << 0x15)) << 1 ^ (uVar14 >> 0xb | uVar14 << 0x15)
  ;
  uVar2 = uVar1 ^ (uVar2 >> 8 | uVar2 << 0x18);
  uVar3 = uVar3 ^ (uVar3 & (uVar2 >> 0x10 | uVar2 << 0x10)) << 1 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
  uVar14 = uVar3 ^ (uVar14 >> 0xb | uVar14 << 0x15);
  uVar4 = param_1[1] ^ (uVar16 & param_1[1]) << 1 ^ uVar16;
  uVar5 = uVar4 ^ param_1[0xd];
  uVar6 = param_1[9] ^ (param_1[9] & (uVar5 >> 8 | uVar5 << 0x18)) << 1 ^
          (uVar5 >> 8 | uVar5 << 0x18);
  uVar16 = uVar6 ^ uVar16;
  uVar4 = uVar4 ^ (uVar4 & (uVar16 >> 0xb | uVar16 << 0x15)) << 1 ^ (uVar16 >> 0xb | uVar16 << 0x15)
  ;
  uVar5 = uVar4 ^ (uVar5 >> 8 | uVar5 << 0x18);
  uVar6 = uVar6 ^ (uVar6 & (uVar5 >> 0x10 | uVar5 << 0x10)) << 1 ^ (uVar5 >> 0x10 | uVar5 << 0x10);
  uVar16 = uVar6 ^ (uVar16 >> 0xb | uVar16 << 0x15);
  uVar15 = param_1[6];
  uVar17 = param_1[7];
  uVar7 = param_1[2] ^ (uVar15 & param_1[2]) << 1 ^ uVar15;
  uVar8 = uVar7 ^ param_1[0xe];
  uVar9 = param_1[10] ^ (param_1[10] & (uVar8 >> 8 | uVar8 << 0x18)) << 1 ^
          (uVar8 >> 8 | uVar8 << 0x18);
  uVar15 = uVar9 ^ uVar15;
  uVar7 = uVar7 ^ (uVar7 & (uVar15 >> 0xb | uVar15 << 0x15)) << 1 ^ (uVar15 >> 0xb | uVar15 << 0x15)
  ;
  uVar8 = uVar7 ^ (uVar8 >> 8 | uVar8 << 0x18);
  uVar9 = uVar9 ^ (uVar9 & (uVar8 >> 0x10 | uVar8 << 0x10)) << 1 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar15 = uVar9 ^ (uVar15 >> 0xb | uVar15 << 0x15);
  uVar10 = param_1[3] ^ (uVar17 & param_1[3]) << 1 ^ uVar17;
  uVar11 = uVar10 ^ param_1[0xf];
  uVar12 = param_1[0xb] ^ (param_1[0xb] & (uVar11 >> 8 | uVar11 << 0x18)) << 1 ^
           (uVar11 >> 8 | uVar11 << 0x18);
  uVar17 = uVar12 ^ uVar17;
  uVar13 = uVar10 ^ (uVar10 & (uVar17 >> 0xb | uVar17 << 0x15)) << 1 ^
           (uVar17 >> 0xb | uVar17 << 0x15);
  uVar10 = uVar13 ^ (uVar11 >> 8 | uVar11 << 0x18);
  uVar11 = uVar12 ^ (uVar12 & (uVar10 >> 0x10 | uVar10 << 0x10)) << 1 ^
           (uVar10 >> 0x10 | uVar10 << 0x10);
  uVar12 = uVar11 ^ (uVar17 >> 0xb | uVar17 << 0x15);
  uVar1 = uVar1 ^ (uVar1 & (uVar16 >> 0x1f | uVar16 << 1)) << 1 ^ (uVar16 >> 0x1f | uVar16 << 1);
  uVar10 = uVar1 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
  uVar9 = uVar9 ^ (uVar9 & (uVar10 >> 8 | uVar10 << 0x18)) << 1 ^ (uVar10 >> 8 | uVar10 << 0x18);
  uVar16 = uVar9 ^ (uVar16 >> 0x1f | uVar16 << 1);
  uVar1 = uVar1 ^ (uVar1 & (uVar16 >> 0xb | uVar16 << 0x15)) << 1 ^ (uVar16 >> 0xb | uVar16 << 0x15)
  ;
  uVar10 = uVar1 ^ (uVar10 >> 8 | uVar10 << 0x18);
  uVar9 = uVar9 ^ (uVar9 & (uVar10 >> 0x10 | uVar10 << 0x10)) << 1 ^
          (uVar10 >> 0x10 | uVar10 << 0x10);
  uVar16 = uVar9 ^ (uVar16 >> 0xb | uVar16 << 0x15);
  uVar4 = uVar4 ^ (uVar4 & (uVar15 >> 0x1f | uVar15 << 1)) << 1 ^ (uVar15 >> 0x1f | uVar15 << 1);
  uVar2 = uVar4 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
  uVar11 = uVar11 ^ (uVar11 & (uVar2 >> 8 | uVar2 << 0x18)) << 1 ^ (uVar2 >> 8 | uVar2 << 0x18);
  uVar15 = uVar11 ^ (uVar15 >> 0x1f | uVar15 << 1);
  uVar4 = uVar4 ^ (uVar4 & (uVar15 >> 0xb | uVar15 << 0x15)) << 1 ^ (uVar15 >> 0xb | uVar15 << 0x15)
  ;
  *param_1 = uVar1;
  param_1[1] = uVar4;
  uVar4 = uVar4 ^ (uVar2 >> 8 | uVar2 << 0x18);
  uVar1 = uVar11 ^ (uVar11 & (uVar4 >> 0x10 | uVar4 << 0x10)) << 1 ^ (uVar4 >> 0x10 | uVar4 << 0x10)
  ;
  param_1[10] = uVar9;
  param_1[0xb] = uVar1;
  uVar1 = uVar1 ^ (uVar15 >> 0xb | uVar15 << 0x15);
  uVar2 = uVar7 ^ (uVar7 & (uVar12 >> 0x1f | uVar12 << 1)) << 1 ^ (uVar12 >> 0x1f | uVar12 << 1);
  uVar5 = uVar2 ^ (uVar5 >> 0x10 | uVar5 << 0x10);
  uVar3 = uVar3 ^ (uVar3 & (uVar5 >> 8 | uVar5 << 0x18)) << 1 ^ (uVar5 >> 8 | uVar5 << 0x18);
  uVar7 = uVar3 ^ (uVar12 >> 0x1f | uVar12 << 1);
  uVar2 = uVar2 ^ (uVar2 & (uVar7 >> 0xb | uVar7 << 0x15)) << 1 ^ (uVar7 >> 0xb | uVar7 << 0x15);
  uVar5 = uVar2 ^ (uVar5 >> 8 | uVar5 << 0x18);
  param_1[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_1[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar3 = uVar3 ^ (uVar3 & (uVar5 >> 0x10 | uVar5 << 0x10)) << 1 ^ (uVar5 >> 0x10 | uVar5 << 0x10);
  uVar4 = uVar3 ^ (uVar7 >> 0xb | uVar7 << 0x15);
  param_1[6] = uVar1 >> 0x1f | uVar1 << 1;
  param_1[7] = uVar4 >> 0x1f | uVar4 << 1;
  uVar13 = (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar13 & (uVar14 >> 0x1f | uVar14 << 1)) << 1 ^ uVar13;
  uVar1 = uVar13 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar4 = uVar6 ^ (uVar6 & (uVar1 >> 8 | uVar1 << 0x18)) << 1 ^ (uVar1 >> 8 | uVar1 << 0x18);
  uVar14 = uVar4 ^ (uVar14 >> 0x1f | uVar14 << 1);
  uVar5 = uVar13 ^ (uVar13 & (uVar14 >> 0xb | uVar14 << 0x15)) << 1 ^
          (uVar14 >> 0xb | uVar14 << 0x15);
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  uVar5 = uVar5 ^ (uVar1 >> 8 | uVar1 << 0x18);
  param_1[0xe] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_1[0xf] = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar1 = uVar4 ^ (uVar4 & (uVar5 >> 0x10 | uVar5 << 0x10)) << 1 ^ (uVar5 >> 0x10 | uVar5 << 0x10);
  param_1[8] = uVar3;
  param_1[9] = uVar1;
  uVar1 = uVar1 ^ (uVar14 >> 0xb | uVar14 << 0x15);
  param_1[4] = uVar1 >> 0x1f | uVar1 << 1;
  param_1[5] = uVar16 >> 0x1f | uVar16 << 1;
  return;
}



/* Entry: 10570a028; end: 10570a09f;  */

void FUN_10570a028(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    FUN_105709db8(param_1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* Entry: 10570a0a0; end: 10570a10b; +[SCBitmojiManager defaultManagerWithBitmoji3DFetcher:circumstanceEngine:] */

void FUN_10570a0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8328;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff7a20();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10570a10c; end: 10570a10f; -[SCBitmojiManager fetchBitmojiImage:contexts:feature:completionQueue:completionBlock:] */

void FUN_10570a10c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetch3DImage_contexts_feature_c_112561598);
  return;
}



/* Entry: 10570a110; end: 10570a113; -[SCBitmojiManager fetchCurrentOrPrior:contexts:feature:transform:completionQueue:completionBlock:] */

void FUN_10570a110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetch3DImageData_contexts_featu_1125615a0);
  return;
}



/* Entry: 10570a114; end: 10570a117; -[SCBitmojiManager fetchBitmojiImageData:contexts:feature:transform:completionQueue:completionBlock:] */

void FUN_10570a114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetch3DImageData_contexts_featu_1125615a0);
  return;
}



/* Entry: 10570a118; end: 10570a11b; -[SCBitmojiManager prefetchBitmojiImage:contexts:feature:completionQueue:completionBlock:] */

void FUN_10570a118(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prefetch3DImageData_contexts_fe_11257b550);
  return;
}



/* Entry: 10570a11c; end: 10570a3a7; -[SCBitmojiManager fetchURLForBitmojiImage_DEPRECATED:feature:] */

void FUN_10570a11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126af5d8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar7 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8ee0(param_3);
  func_0x00010c14e120(param_3);
  uVar9 = *(undefined8 *)PTR__CGSizeZero_110347620;
  func_0x00010bff6020(uVar9,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar4 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_10570a3a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010bf5e2e0(uVar5);
  uVar6 = uVar5;
  func_0x00010c0d98e0(uVar5);
  func_0x00010c0d9900(uVar5);
  uVar7 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0001064c9b24(uVar9,uVar4 & 0xffffffff,uVar6 & 0xffffffff,uVar7,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f00();
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126b9600;
  func_0x00010bf49820(PTR_PTR_1126b9600);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10570a3a8; end: 10570a503;  */

void FUN_10570a3a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126afd68;
  _objc_retain();
  _objc_alloc_init(puVar2);
  func_0x00010c187040();
  func_0x00010c1cd300(puVar2,param_2,2);
  func_0x00010c1cd320(0,puVar2);
  puVar3 = PTR_PTR_1126af7d0;
  _objc_alloc_init(PTR_PTR_1126af7d0);
  puVar4 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  lVar5 = param_1;
  func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db0ef8,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar5 == 0) {
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  else {
    puVar6 = PTR_PTR_1126afd68;
    _objc_alloc(PTR_PTR_1126afd68);
    lVar7 = lVar5;
    func_0x00010c296d80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar6,param_2,lVar7,&lStack_48);
    lVar1 = lStack_48;
    _objc_release(lVar7);
    puVar4 = puVar6;
    if (lVar1 != 0) {
      puVar4 = puVar2;
    }
    _objc_retain(puVar4);
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10570a504; end: 10570a50b; -[SCBitmojiManager stringFromAttribution:] */

undefined ** FUN_10570a504(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 0x31) {
    return (undefined **)(&PTR_PTR_110ad30c0)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 10570a50c; end: 10570a513; -[SCBitmojiManager attributionFromString:] */

undefined4 FUN_10570a50c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8718;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df8718,param_2,param_3);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x14;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e38,param_2,param_3);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x2d;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f16d98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16d98,param_2,param_3);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x29;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_3);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x20;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea458,param_2,param_3);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x11;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f16db8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16db8,param_2,param_3);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x12;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f120d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f120d8,param_2,param_3);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x16;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110db4518;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db4518,param_2,param_3
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x1a;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e20e18;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e20e18,param_2,
                                      param_3);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x2b;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110dbee78;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbee78,param_2,
                                        param_3);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x1d;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110dd7038;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd7038,param_2,
                                          param_3);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x17;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f16dd8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16dd8,param_2
                                            ,param_3);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x19;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f16df8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16df8,
                                              param_2,param_3);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x18;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e1cc58;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e1cc58,
                                                param_2,param_3);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 7;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f16e18;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16e18,
                                                  param_2,param_3);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x25;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6f8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbb6f8
                                                    ,param_2,param_3);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x24;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110e57d18;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e57d18,
                                                  param_2,param_3);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 8;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110e2ac58;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e2ac58,
                                                  param_2,param_3);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x1e;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e3ddf8,
                                                  param_2,param_3);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x27;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f16e38;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e38,
                                                  param_2,param_3);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 4;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbaad8,
                                                  param_2,param_3);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 9;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e33d18;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e33d18,
                                                  param_2,param_3);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x2c;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e60f18;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e60f18,
                                                  param_2,param_3);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 10;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ead758;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ead758,
                                                  param_2,param_3);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x13;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16e58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e58,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e7d318;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e7d318,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 5;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16e78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e78,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e38,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dbf098;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbf098,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16e98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16e98,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 1;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e57fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e57fd8,
                                                  param_2,param_3);
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16fd8,
                                                  param_2,param_3);
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dd50f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dd50f8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16eb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16eb8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 6;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e78,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16ed8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16ed8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xb;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dba418;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dba418,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16ef8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16ef8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x15;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f18,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f38,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dec738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dec738,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xc;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f58,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x10;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f78,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xe;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16f98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16f98,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xd;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16fb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16fb8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xf;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e135d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e135d8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e41bb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e41bb8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110df8ff8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110df8ff8,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 3;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e71958;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e71958,
                                                  param_2,param_3);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110efcd98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110efcd98,
                                                  param_2,param_3);
                                                  uVar2 = 0x30;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0xffffffff;
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
                                                  }
                                                  goto code_r0x00010900657c;
                                                  }
                                                  }
                                                  uVar2 = 2;
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
code_r0x00010900657c:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10570a514; end: 10570a9ab; -[SCBitmojiManager _fetch3DImage:contexts:feature:completionQueue:completionBlock:] */

void FUN_10570a514(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c130220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af5d8;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8ee0(param_3);
  func_0x00010c14e120(param_3);
  uVar13 = *(undefined8 *)PTR__CGSizeZero_110347620;
  func_0x00010bff6020(uVar13,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_10570a3a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010bf5e2e0(uVar6);
  uVar7 = uVar6;
  func_0x00010c0d98e0(uVar6);
  func_0x00010c0d9900(uVar6);
  lVar1 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001064c9b24(uVar13,uVar5 & 0xffffffff,uVar7 & 0xffffffff,lVar1,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f00();
  _objc_release(uVar13);
  puVar8 = puVar3;
  func_0x00010bf268e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10570a9ac;
  uStack_88 = 0x10570a9bc;
  uStack_80 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bfa9f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(puVar8);
  uVar10 = uVar13;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = puStack_a0[5];
  puStack_a0[5] = uVar10;
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar9);
  puVar11 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10570a9ac; end: 10570a9c3;  */

void FUN_10570a9ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10570a9c4; end: 10570ab1f;  */

void FUN_10570a9c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10570ab20; end: 10570aca3;  */

void FUN_10570ab20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10570ad7c;
    puStack_a8 = &UNK_1108ac328;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    uStack_88 = uVar2;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = param_2;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = uVar2;
    _objc_retain(uVar3);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = uVar3;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    uVar2 = uStack_88;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10570aca4;
    puStack_60 = &UNK_1108ac328;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = param_2;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = uVar2;
    _objc_retain(uVar3);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = uVar3;
    func_0x00010007380c(lVar1,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    uVar2 = uStack_40;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10570aca4; end: 10570ad27;  */

void FUN_10570aca4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126bd670;
    _objc_alloc(PTR_PTR_1126bd670);
    func_0x00010c054fc0();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570ad28; end: 10570ad7b;  */

void FUN_10570ad28(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 10570ad7c; end: 10570adff;  */

void FUN_10570ad7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126bd670;
    _objc_alloc(PTR_PTR_1126bd670);
    func_0x00010c054fc0();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570ae00; end: 10570af83;  */

void FUN_10570ae00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10570b064;
    puStack_a8 = &UNK_1108ac328;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_88 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = uVar3;
    _objc_retain(uVar2);
    uStack_98 = uVar2;
    _objc_retain(param_2);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    uVar2 = uStack_88;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10570af84;
    puStack_60 = &UNK_1108ac328;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = uVar3;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    _objc_retain(param_2);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = param_2;
    func_0x00010007380c(lVar1,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    uVar2 = uStack_40;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10570af84; end: 10570b143;  */

void FUN_10570af84(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126bd670;
    _objc_alloc(PTR_PTR_1126bd670);
    func_0x00010bf3ec40(*(undefined8 *)(param_1 + 0x30));
    ppuVar2 = *(undefined ***)(param_1 + 0x30);
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == &PTR____CFConstantStringClassReference_110de0f78) {
      func_0x00010bf3ec40(*(undefined8 *)(param_1 + 0x30));
    }
    func_0x00010c054fc0(puVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,0,uVar4,puVar1);
    _objc_release(puVar1);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570b144; end: 10570b153;  */

void FUN_10570b144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570b154; end: 10570b617; -[SCBitmojiManager _fetch3DImageData:contexts:feature:transform:completionQueue:completionBlock:] */

void FUN_10570b154(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c130220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af5d8;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8ee0(param_3);
  func_0x00010c14e120(param_3);
  uVar13 = *(undefined8 *)PTR__CGSizeZero_110347620;
  func_0x00010bff6020(uVar13,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_10570a3a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010bf5e2e0(uVar6);
  uVar7 = uVar6;
  func_0x00010c0d98e0(uVar6);
  func_0x00010c0d9900(uVar6);
  lVar1 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001064c9b24(uVar13,uVar5 & 0xffffffff,uVar7 & 0xffffffff,lVar1,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f00();
  _objc_release(uVar13);
  puVar8 = puVar3;
  func_0x00010bf268e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10570a9ac;
  uStack_88 = 0x10570a9bc;
  uStack_80 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar9;
  func_0x00010bfa9f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(puVar8);
  uVar10 = uVar13;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = puStack_a0[5];
  puStack_a0[5] = uVar10;
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar9);
  puVar11 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(puVar8);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10570b618; end: 10570b78b;  */

void FUN_10570b618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar9);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10570b78c; end: 10570b93f;  */

void FUN_10570b78c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10570ba88;
    puStack_b8 = &UNK_1108ac3e8;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uStack_b0 = param_2;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = uVar3;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = uVar2;
    _objc_retain(uVar3);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = uVar3;
    func_0x000100162d98("APPSTORE",&puStack_d0);
    _objc_release(uStack_a0);
    _objc_release(uStack_90);
    _objc_release(uStack_a8);
    _objc_release(uStack_98);
    uVar2 = uStack_b0;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10570b940;
    puStack_68 = &UNK_1108ac3e8;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = param_2;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = uVar3;
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar2;
    _objc_retain(uVar3);
    uStack_38 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = uVar3;
    func_0x00010007380c(lVar1,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(uStack_40);
    _objc_release(uStack_58);
    _objc_release(uStack_48);
    uVar2 = uStack_60;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10570b940; end: 10570ba23;  */

void FUN_10570b940(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe8ee0(uVar5);
    (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe8ee0(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126bd670;
    _objc_alloc(PTR_PTR_1126bd670);
    func_0x00010c054fc0();
    (**(code **)(lVar4 + 0x10))(lVar4,lVar3,uVar1,uVar5,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10570ba24; end: 10570ba87;  */

void FUN_10570ba24(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 10570ba88; end: 10570bb6b;  */

void FUN_10570ba88(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe8ee0(uVar5);
    (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe8ee0(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126bd670;
    _objc_alloc(PTR_PTR_1126bd670);
    func_0x00010c054fc0();
    (**(code **)(lVar4 + 0x10))(lVar4,lVar3,uVar1,uVar5,puVar2);
    _objc_release(puVar2);
  }
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10570bb6c; end: 10570bcef;  */

void FUN_10570bb6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10570bde0;
    puStack_a8 = &UNK_1108ac328;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_88 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = uVar3;
    _objc_retain(uVar2);
    uStack_98 = uVar2;
    _objc_retain(param_2);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    uVar2 = uStack_88;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10570bcf0;
    puStack_60 = &UNK_1108ac328;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = uVar3;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    _objc_retain(param_2);
    uStack_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = param_2;
    func_0x00010007380c(lVar1,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    uVar2 = uStack_40;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



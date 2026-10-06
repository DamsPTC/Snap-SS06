/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b25fca4; end: 10b25fcab; +[SCCrNetFrameworkController startNetLogger] */

undefined8 FUN_10b25fca4(void)

{
  return 0;
}



/* Entry: 10b25fcac; end: 10b25fcaf; +[SCCrNetFrameworkController stopNetLogger] */

void FUN_10b25fcac(void)

{
  return;
}



/* Entry: 10b25fcb0; end: 10b25fcf3; +[SCCrNetFrameworkController absolutePathList] */

void FUN_10b25fcb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be62940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc7f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b25fcf4; end: 10b25fd63; +[SCCrNetFrameworkController writeNetLogZipAtBaseUrl:] */

undefined * FUN_10b25fcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfe58;
  _objc_retain(param_3);
  func_0x00010bdf0680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dfe58;
  func_0x00010beeb8a0(PTR_PTR_1126dfe58,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10b25fd64; end: 10b25fdcf; +[SCCrNetFrameworkController _networkApi] */

void FUN_10b25fd64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d7c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0da560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b25fdd0; end: 10b25fe47; +[SCCrNetFrameworkController _dismissModalViewController:] */

void FUN_10b25fdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dfe58;
  _objc_retain(param_3);
  func_0x00010be46800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b25fe48; end: 10b25fe4b; +[SCCrNetFrameworkController _registerShareNetlogTweak] */

void FUN_10b25fe48(void)

{
  return;
}



/* Entry: 10b25fe4c; end: 10b25ff5b; +[SCCrNetFrameworkController _shareNetLogInternally] */

void FUN_10b25fe4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000107c3129c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126dfe58;
  func_0x00010c2be120(PTR_PTR_1126dfe58,param_2,puVar1);
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
    func_0x00010beff3e0(PTR__OBJC_CLASS___UIAlertController_1126aeb78,param_2,
                        &PTR____CFConstantStringClassReference_110f5fd78,
                        &PTR____CFConstantStringClassReference_110f5fd98,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126dfe58;
    func_0x00010be46800(PTR_PTR_1126dfe58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126dfe58;
    func_0x00010be62920(PTR_PTR_1126dfe58,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebae60(PTR_PTR_1126dfe58,param_2,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b25ff5c; end: 10b260067; +[SCCrNetFrameworkController _showShareDialog:] */

void FUN_10b25ff5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aeb08;
    _objc_alloc();
    func_0x00010bff0f80();
    puVar8 = PTR_PTR_1126dfe58;
    func_0x00010be46800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = puVar8;
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar6 = *plStack_140;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        uVar7 = *(undefined8 *)(lStack_148 + (long)puVar8 * 8);
        uVar4 = uVar7;
        func_0x00010c075e80();
        if ((int)uVar4 != 0) {
          _objc_retain(uVar7);
          goto LAB_10b260158;
        }
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar1 = puVar2;
      puVar5 = &uStack_150;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  uVar7 = 0;
LAB_10b260158:
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar5,PTR_s_URLByAppendingPathComponent__11254e4b8,
             &PTR____CFConstantStringClassReference_110f5fdb8);
  return;
}



/* Entry: 10b260068; end: 10b260197; +[SCCrNetFrameworkController _keyWindow] */

void FUN_10b260068(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar6 = *plStack_100;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        uVar5 = *(undefined8 *)(lStack_108 + (long)puVar7 * 8);
        uVar3 = uVar5;
        func_0x00010c075e80();
        if ((int)uVar3 != 0) {
          _objc_retain(uVar5);
          goto LAB_10b260158;
        }
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar1 = puVar2;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  uVar5 = 0;
LAB_10b260158:
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar4,PTR_s_URLByAppendingPathComponent__11254e4b8,
             &PTR____CFConstantStringClassReference_110f5fdb8);
  return;
}



/* Entry: 10b260198; end: 10b2601a7; +[SCCrNetFrameworkController _netLogZipFileUrlForBaseUrl:] */

void FUN_10b260198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_URLByAppendingPathComponent__11254e4b8,
             &PTR____CFConstantStringClassReference_110f5fdb8);
  return;
}



/* Entry: 10b2601a8; end: 10b2604ff; +[SCCrNetFrameworkController _createNetLogData] */

void FUN_10b2601a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c256360(PTR_PTR_1126dfe58);
  puVar1 = PTR_PTR_1126dfe58;
  func_0x00010beec780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(puVar1);
  puVar6 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_150,auStack_100,0x10);
  if (puVar6 != (undefined *)0x0) {
    lVar9 = *plStack_140;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        uVar8 = *(undefined8 *)(lStack_148 + (long)puVar7 * 8);
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b9fa8;
        if (puVar3 != (undefined *)0x0) {
          func_0x00010bf44740(uVar8,param_2,&PTR____CFConstantStringClassReference_110dacf38);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_10b260500;
          puStack_160 = &UNK_110891a60;
          _objc_retain(puVar3);
          puStack_158 = puVar3;
          func_0x00010bf09600(puVar5,param_2,uVar4,1,&puStack_178);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,puVar5);
          _objc_release(puVar5);
          _objc_release(uVar4);
          _objc_release(uVar8);
          _objc_release(puStack_158);
        }
        _objc_release(puVar3);
        puVar7 = puVar7 + 1;
      } while (puVar6 != puVar7);
      puVar6 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_150,auStack_100,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  func_0x00010c24f5e0(PTR_PTR_1126dfe58);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f769d8;
    puStack_108 = PTR____kCFBooleanTrue_11034ab68;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_108,&ppuStack_110,
                        1);
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = 0;
    func_0x00010c008480(puVar5,param_2,puVar7,puVar6,&uStack_180);
    uVar8 = uStack_180;
    _objc_retain(uStack_180);
    _objc_release(puVar6);
    if (puVar5 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      uStack_188 = 0;
      puVar6 = puVar5;
      func_0x00010c2858e0(puVar5,param_2,puVar2,&uStack_188);
      uVar4 = uStack_188;
      _objc_retain(uStack_188);
      _objc_release(uVar8);
      uVar8 = uVar4;
      if ((int)puVar6 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar7);
        puVar6 = puVar7;
      }
    }
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(puVar1 + 0x20);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b260500; end: 10b260527;  */

void FUN_10b260500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b260528; end: 10b2605ab; +[SCCrNetFrameworkController _writeData:baseUrl:] */

long FUN_10b260528(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfe58;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010be62920(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c14e060(param_3,param_2,puVar1,0);
    _objc_release(param_3);
    _objc_release(puVar1);
    return lVar2;
  }
  return 1;
}



/* Entry: 10b2605ac; end: 10b2605f7; +[SCAPIURLSessionWeakContainer newWithObject:] */

undefined * FUN_10b2605ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dfe60;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c224b00();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b2605f8; end: 10b26060f; -[SCAPIURLSessionWeakContainer weakObject] */

void FUN_10b2605f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b260610; end: 10b26061b; -[SCAPIURLSessionWeakContainer setWeakObject:] */

void FUN_10b260610(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10b26061c; end: 10b260623; -[SCAPIURLSessionWeakContainer .cxx_destruct] */

void FUN_10b26061c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b260624; end: 10b2606f7;  */

void FUN_10b260624(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdc2060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1920();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resume_11262ce90);
  return;
}



/* Entry: 10b2606f8; end: 10b260713;  */

void FUN_10b2606f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,PTR_LOOP_11336ea50);
  return;
}



/* Entry: 10b260714; end: 10b260767; +[SCAPI generalDownloadSession] */

void FUN_10b260714(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4460 != -1) {
    func_0x000107c27d9c(0x1137f4460,&PTR___NSConcreteGlobalBlock_110ccbdb8);
  }
  uVar1 = uRam00000001137f4468;
  _objc_retain(uRam00000001137f4468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b260768; end: 10b26079f;  */

void FUN_10b260768(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe68;
  _objc_alloc();
  func_0x00010c01b440();
  uVar1 = puRam00000001137f4468;
  puRam00000001137f4468 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2607a0; end: 10b2607f3; +[SCAPI streamingSession] */

void FUN_10b2607a0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4470 != -1) {
    func_0x000107c27d9c(0x1137f4470,&PTR___NSConcreteGlobalBlock_110ccbdd8);
  }
  uVar1 = uRam00000001137f4478;
  _objc_retain(uRam00000001137f4478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2607f4; end: 10b26082b;  */

void FUN_10b2607f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe68;
  _objc_alloc();
  func_0x00010c01b440();
  uVar1 = puRam00000001137f4478;
  puRam00000001137f4478 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26082c; end: 10b26087f; +[SCAPI metadataSession] */

void FUN_10b26082c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4480 != -1) {
    func_0x000107c27d9c(0x1137f4480,&PTR___NSConcreteGlobalBlock_110ccbdf8);
  }
  uVar1 = uRam00000001137f4488;
  _objc_retain(uRam00000001137f4488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b260880; end: 10b2608b7;  */

void FUN_10b260880(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe68;
  _objc_alloc();
  func_0x00010c01b440();
  uVar1 = puRam00000001137f4488;
  puRam00000001137f4488 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2608b8; end: 10b26090b; +[SCAPI uploadSession] */

void FUN_10b2608b8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4490 != -1) {
    func_0x000107c27d9c(0x1137f4490,&PTR___NSConcreteGlobalBlock_110ccbe18);
  }
  uVar1 = uRam00000001137f4498;
  _objc_retain(uRam00000001137f4498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b26090c; end: 10b260943;  */

void FUN_10b26090c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe68;
  _objc_alloc();
  func_0x00010c01b440();
  uVar1 = puRam00000001137f4498;
  puRam00000001137f4498 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b260944; end: 10b260997; +[SCAPI backgroundUploadSession] */

void FUN_10b260944(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f44a0 != -1) {
    func_0x000107c27d9c(0x1137f44a0,&PTR___NSConcreteGlobalBlock_110ccbe38);
  }
  uVar1 = uRam00000001137f44a8;
  _objc_retain(uRam00000001137f44a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b260998; end: 10b2609cf;  */

void FUN_10b260998(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe68;
  _objc_alloc();
  func_0x00010c01b440();
  uVar1 = puRam00000001137f44a8;
  puRam00000001137f44a8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2609d0; end: 10b260a23; +[SCAPI analyticsSession] */

void FUN_10b2609d0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f44b0 != -1) {
    func_0x000107c27d9c(0x1137f44b0,&PTR___NSConcreteGlobalBlock_110ccbe58);
  }
  uVar1 = uRam00000001137f44b8;
  _objc_retain(uRam00000001137f44b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b260a24; end: 10b260a5b;  */

void FUN_10b260a24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dfe68;
  _objc_alloc();
  func_0x00010c01b440();
  uVar1 = puRam00000001137f44b8;
  puRam00000001137f44b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b260a5c; end: 10b260b27; +[SCAPI sessionForRequestType:] */

void FUN_10b260a5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (3 < param_3) {
    if (param_3 < 6) {
      if (param_3 == 4) {
        func_0x00010bf14780();
        _objc_retainAutoreleasedReturnValue();
        param_2 = param_1;
      }
      else if (param_3 == 5) {
        func_0x00010bf027c0();
        _objc_retainAutoreleasedReturnValue();
        param_2 = param_1;
      }
    }
    else if ((param_3 == 6) || (param_3 == 7)) {
      func_0x00010c25c940();
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_1;
    }
    goto LAB_10b260b1c;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x00010bfbeca0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_1;
      goto LAB_10b260b1c;
    }
    if (param_3 != 1) goto LAB_10b260b1c;
  }
  else if (param_3 != 2) {
    if (param_3 == 3) {
      func_0x00010c0cc760();
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_1;
    }
    goto LAB_10b260b1c;
  }
  func_0x00010c28e660();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_1;
LAB_10b260b1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b260b28; end: 10b260b83; +[SCAPI requestInfoForURLRequest:path:requestKey:requestTypeStr:requestBatchId:requestSize:requestParser:trackingInfo:taskId:queuingLatency:isLargeDownloadRequest:isUserInitiated:isStreaming:appState:userContext:taskContext:userInitiatedQueuingLatency:completionQueue:completionBlock:] */

void FUN_10b260b28(void)

{
  func_0x00010c1358e0();
  return;
}



/* Entry: 10b260b84; end: 10b2610c3; +[SCAPI requestInfoForURLRequest:path:requestKey:requestTypeStr:requestBatchId:requestSize:resumedData:requestParser:trackingInfo:taskId:queuingLatency:isLargeDownloadRequest:isUserInitiated:isStreaming:appState:userContext:taskContext:userInitiatedQueuingLatency:completionQueue:completionBlock:] */

void FUN_10b260b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000058);
  puVar1 = PTR_PTR_1126dfe70;
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000038);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_alloc();
  _CACurrentMediaTime();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dfd80;
  func_0x00010bf48f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48f60();
  func_0x00010c0346a0(param_1);
  _objc_release(in_stack_00000050);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_retain(param_4);
  _objc_retain(in_stack_00000058);
  _objc_initWeak(auStack_80,puVar1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10b2612cc;
  puStack_a0 = &UNK_110ccbe78;
  _objc_copyWeak(auStack_88,auStack_80);
  uStack_90 = in_stack_00000058;
  uStack_98 = param_4;
  _objc_retain(param_4);
  _objc_retain(in_stack_00000058);
  ppuVar4 = &puStack_b8;
  _objc_retainBlock(ppuVar4);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_4);
  _objc_release(in_stack_00000058);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  func_0x00010c17fb40(puVar1);
  _objc_release(ppuVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_6;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c1d0640(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar6 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27000();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c1d0640(puVar2);
  puVar6 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf5e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c1d0640(puVar2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d9a0();
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar7);
  func_0x00010c1d0640(puVar2);
  _objc_release(in_stack_00000038);
  func_0x00010c1d0640(puVar2);
  _objc_release(in_stack_00000040);
  puVar6 = PTR_PTR_1126dfd80;
  func_0x00010bf48f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfc4780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar2);
  }
  func_0x00010befc7a0(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(in_stack_00000058);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2610c4; end: 10b261127; +[SCAPI makeURLRequest:requestKey:method:session:URLSessionTaskPriority:requestInfoContainer:] */

void FUN_10b2610c4(undefined8 param_1)

{
  ulong uVar1;
  ulong in_x5;
  
  func_0x00010bf64800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x5;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
    func_0x00010c1e3380(param_1,in_x5);
  }
  func_0x00010c14d980(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x5);
  return;
}



/* Entry: 10b261128; end: 10b2611d3; +[SCAPI makeURLRequest:requestKey:uploadFileURL:method:session:URLSessionTaskPriority:requestInfoContainer:] */

void FUN_10b261128(undefined8 param_1)

{
  ulong uVar1;
  undefined8 in_x3;
  ulong in_x6;
  
  _objc_retain(in_x3);
  func_0x00010c28e860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2127e0();
  _objc_release(in_x3);
  uVar1 = in_x6;
  _objc_opt_respondsToSelector(in_x6,PTR_s_priority_112622940);
  if ((uVar1 & 1) != 0) {
    func_0x00010c1e3380(param_1,in_x6);
  }
  func_0x00010c14d980(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x6);
  return;
}



/* Entry: 10b2611d4; end: 10b2612cb; +[SCAPI makeResumableURLRequest:resumeData:requestKey:method:session:URLSessionTaskPriority:requestInfoContainer:] */

void FUN_10b2611d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_8;
  if (param_5 == 0) {
    func_0x00010bf890e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf89120();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010c1e3380(param_1,uVar1);
  }
  func_0x00010c14d980(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2612cc; end: 10b26185f;  */

void FUN_10b2612cc(long param_1,long param_2,ulong param_3,undefined *param_4,undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (uVar4 == 0) goto LAB_10b2617f8;
  _CACurrentMediaTime();
  func_0x00010c19cce0(uVar4);
  uVar5 = uVar4;
  func_0x00010c082720();
  if ((int)uVar5 != 0) {
    func_0x00010bfafca0(uVar4);
    func_0x00010c08a9c0(uVar4);
    func_0x00010beed880(uVar4);
    func_0x00010c1614a0(uVar4);
  }
  _objc_retain(param_4);
  uVar5 = uVar4;
  func_0x00010c15e680();
  if (uVar5 == 0) {
    if (param_5 == (undefined *)0x0) {
      puVar6 = param_4;
      func_0x00010c252ee0();
      if (((long)puVar6 < 200) || (puVar6 = param_4, func_0x00010c252ee0(), 299 < (long)puVar6)) {
        param_5 = PTR_PTR_1126dfe78;
        func_0x00010c252f20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_5 = (undefined *)0x0;
      }
    }
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x000107c2bf58(param_2);
    _objc_release(puVar6);
    puVar6 = param_4;
    func_0x00010bdc1c20(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = param_5;
    _objc_retain(uVar4);
    _objc_retain(param_3);
    _objc_retain(puVar6);
    if (param_5 == (undefined *)0x0) {
      uVar5 = param_3;
      func_0x00010c08fa60();
      if (uVar5 == 0) {
        uVar5 = uVar4;
        func_0x00010c1360a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126bfb08;
        _objc_opt_class(PTR_PTR_1126bfb08);
        uVar18 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar7);
        _objc_release(uVar5);
        if ((uVar18 & 1) != 0) {
          uVar18 = 0;
          goto LAB_10b2614f0;
        }
      }
      uVar5 = uVar4;
      func_0x00010c1360a0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar5;
      func_0x00010c0f3f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    else {
      _objc_retain();
      uVar18 = param_3;
    }
LAB_10b2614f0:
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(uVar4);
    puVar7 = puStack_c8;
    _objc_retain(puStack_c8);
    _objc_release(param_5);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c215ec0(param_2);
    _objc_release(puVar6);
    param_5 = puVar7;
    if ((uVar18 == 0) &&
       ((puVar6 = param_4, func_0x00010bf9c200(), 0 < (long)puVar6 ||
        (uVar5 = param_3, func_0x00010c08fa60(), uVar5 != 0)))) {
      uVar19 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = uVar4;
      func_0x00010c1360a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010bdc2560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(param_3);
      _objc_retain(uVar19);
      _objc_retain(param_4);
      uStack_c0 = *(undefined8 *)PTR__NSURLErrorFailingURLErrorKey_110345628;
      puVar6 = param_4;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110f60998;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110f609b8;
      puVar10 = param_4;
      puStack_a0 = puVar9;
      uStack_98 = uVar19;
      func_0x00010bf51e00();
      puVar11 = puVar10;
      if (puVar10 == (undefined *)0x0) {
        puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110f5fe98;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar11;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 == (undefined *)0x0) {
        _objc_release(puVar11);
      }
      _objc_release(puVar10);
      if (puVar6 == (undefined *)0x0) {
        _objc_release(puVar9);
      }
      _objc_release(puVar6);
      param_5 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc();
      func_0x00010c00e2e0();
      _objc_release(puVar12);
      _objc_release(param_4);
      _objc_release(uVar19);
      _objc_release(puVar7);
      _objc_release(uVar8);
      _objc_release(uVar5);
    }
    uVar5 = uVar4;
    func_0x00010bf44140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_10b261860;
    puStack_100 = &UNK_110866740;
    uVar19 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar19);
    uStack_f8 = uVar18;
    uStack_d0 = uVar19;
    _objc_retain(param_4);
    puStack_f0 = param_4;
    _objc_retain(param_5);
    puStack_e8 = param_5;
    _objc_retain(uVar4);
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    uStack_e0 = uVar4;
    _objc_retain(uVar19);
    uStack_d8 = uVar19;
    _objc_retain(uVar18);
    func_0x000107c27d8c(uVar5,&puStack_118);
    _objc_release(uVar5);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(puStack_e8);
    _objc_release(puStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_d0);
    _objc_release(uVar18);
  }
  _objc_release(param_4);
LAB_10b2617f8:
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)(*(long *)(param_2 + 0x48) + 0x10))
            (*(long *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x20),
             *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  uVar19 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  lVar3 = *(long *)(param_2 + 0x30);
  _objc_retain(uVar19);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(lVar3);
  uVar13 = uVar19;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0d3c80();
  _objc_release(uVar13);
  uVar13 = uVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126dfd88;
  uVar15 = uVar19;
  func_0x00010c278f20(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  func_0x000107c2bf38();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar19;
  func_0x00010c136da0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010c0e00e0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  puVar7 = PTR_PTR_1126dfd88;
  uVar15 = uVar19;
  func_0x00010c278f20(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  puVar9 = PTR_PTR_1126dfd88;
  uVar15 = uVar19;
  func_0x00010c136da0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076020(uVar19);
  uVar16 = uVar19;
  func_0x00010c278f20(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d77a0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(uVar15);
  puVar10 = PTR_PTR_1126dfd78;
  func_0x00010c22b6a0(PTR_PTR_1126dfd78);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf17600();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar19;
  func_0x00010c1604c0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c0a0(puVar11);
  _objc_release(uVar15);
  _objc_release(puVar11);
  _objc_release(puVar10);
  uVar15 = uVar2;
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar1;
  FUN_10b27be90(uVar1,uVar16);
  _objc_release(uVar16);
  _objc_release(uVar15);
  uVar15 = uVar1;
  func_0x00010c252ee0(uVar1);
  func_0x00010b27c39c(uVar2,uVar1,uVar19,lVar3 == 0,uVar17,uVar15,uVar14,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 10b261860; end: 10b261baf;  */

void FUN_10b261860(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
            (*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(lVar4);
  uVar5 = uVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d3c80();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126dfd88;
  uVar7 = uVar1;
  func_0x00010c278f20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x000107c2bf38();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010c136da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0e00e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  puVar11 = PTR_PTR_1126dfd88;
  uVar7 = uVar1;
  func_0x00010c278f20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d7800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar12 = PTR_PTR_1126dfd88;
  uVar7 = uVar1;
  func_0x00010c136da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076020(uVar1);
  uVar9 = uVar1;
  func_0x00010c278f20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d77a0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar7);
  puVar13 = PTR_PTR_1126dfd78;
  func_0x00010c22b6a0(PTR_PTR_1126dfd78);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf17600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c1604c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c0a0(puVar14);
  _objc_release(uVar7);
  _objc_release(puVar14);
  _objc_release(puVar13);
  uVar7 = uVar3;
  func_0x00010bdc2b80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  FUN_10b27be90(uVar2,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar7);
  uVar7 = uVar2;
  func_0x00010c252ee0(uVar2);
  func_0x00010b27c39c(uVar3,uVar2,uVar1,lVar4 == 0,uVar10,uVar7,uVar6,lVar4);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10b261bb0; end: 10b261c23; -[SCAPISessionCounter initWithSession:] */

undefined1 * FUN_10b261bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b261c24; end: 10b261c3f; -[SCAPISessionCounter shouldInvalidateSession] */

byte FUN_10b261c24(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10b261c40; end: 10b261c4f; -[SCAPISessionCounter increaseCounter] */

void FUN_10b261c40(long param_1)

{
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return;
}



/* Entry: 10b261c50; end: 10b261c5f; -[SCAPISessionCounter decreaseCounter] */

void FUN_10b261c50(long param_1)

{
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  return;
}



/* Entry: 10b261c60; end: 10b261c6b; -[SCAPISessionCounter markNeedsInvalidation] */

void FUN_10b261c60(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10b261c6c; end: 10b261c73; -[SCAPISessionCounter session] */

undefined8 FUN_10b261c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b261c74; end: 10b261c7f; -[SCAPISessionCounter .cxx_destruct] */

void FUN_10b261c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b261c80; end: 10b261cb7;  */

void FUN_10b261c80(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf2e500(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b261cb8; end: 10b261d9f; -[SCAPISessionTaskBookkeeper addTask:forSession:] */

void FUN_10b261cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0ed8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b261da0;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bdc8920(param_1,param_2,uVar2,param_3,param_4,&puStack_68);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10b261da0; end: 10b261da7;  */

void FUN_10b261da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 10b261da8; end: 10b261dab; -[SCAPISessionTaskBookkeeper removeTask:forSession:] */

void FUN_10b261da8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTask_forSession__112580ff0);
  return;
}



/* Entry: 10b261dac; end: 10b261ee3; -[SCAPISessionTaskBookkeeper markNeedsInvalidationForSession:] */

void FUN_10b261dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b261e3c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10b261ee4; end: 10b261faf; -[SCAPISessionTaskBookkeeper _invalidateAndRemoveSessionCounterIfNeeded:] */

void FUN_10b261ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = uVar2;
  func_0x00010c2314a0();
  if ((int)uVar3 != 0) {
    uVar3 = uVar2;
    func_0x00010c15fac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfafc60();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b261fb0; end: 10b261fc7; -[SCAPISessionTaskBookkeeper backgroundTaskWrapper] */

void FUN_10b261fb0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b261fc8; end: 10b261fdf; -[SCAPISessionTaskBookkeeper batteryLogger] */

void FUN_10b261fc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b261fe0; end: 10b26202b; -[SCAPISessionTaskBookkeeper .cxx_destruct] */

void FUN_10b261fe0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b26202c; end: 10b2621bb; -[SCAPIURLSession initWithIdentifier:] */

undefined1 * FUN_10b26202c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705f90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar5;
    _objc_release(uVar4);
    uVar5 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar5 != 0) {
      *(undefined1 *)((long)puVar1 + 0x18) = 1;
    }
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126dfd78;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010bf17600(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),uVar5);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b7f08;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar5);
    func_0x00010bdf07a0(puVar1);
    func_0x00010bdfbc60(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf58d60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2621bc; end: 10b2624cf; -[SCAPIURLSession _createNewSessionConfiguration:] */

/* WARNING: Possible PIC construction at 0x00010b2622f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2622fc) */
/* WARNING: Removing unreachable block (ram,0x00010b262370) */
/* WARNING: Removing unreachable block (ram,0x00010b262300) */
/* WARNING: Removing unreachable block (ram,0x00010b26248c) */
/* WARNING: Removing unreachable block (ram,0x00010b2624b4) */

undefined8 FUN_10b2621bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    func_0x00010c0720c0(param_4);
    _objc_release(param_4);
    puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
    func_0x00010bf6a380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined **)(param_2 + 8) = puVar4;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_2 + 8);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
    func_0x00010bf14420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined **)(param_2 + 8) = puVar4;
    _objc_release(uVar2);
    func_0x00010c1674e0(*(undefined8 *)(param_2 + 8));
    param_1 = 0x40f5180000000000;
    func_0x00010c215ba0(0x40f5180000000000,*(undefined8 *)(param_2 + 8));
    func_0x00010c1fdca0(*(undefined8 *)(param_2 + 8));
    func_0x00010c1cc660(*(undefined8 *)(param_2 + 8));
    func_0x00010c18f280(*(undefined8 *)(param_2 + 8));
    lVar3 = *(long *)(param_2 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      iVar1 = (int)*(undefined8 *)(lVar3 + 0x58);
      func_0x00010c0720c0();
      uVar2 = 0x4082c00000000000;
      if (iVar1 == 0) {
        uVar2 = 0x404e000000000000;
      }
      return uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1ebb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setRequestCachePolicy__1126588e8,1);
  return param_1;
}



/* Entry: 10b2624d0; end: 10b262507; -[SCAPIURLSession _determineTimeoutInterval] */

undefined8 FUN_10b2624d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f5fe58);
  uVar2 = 0x4082c00000000000;
  if ((int)uVar1 == 0) {
    uVar2 = 0x404e000000000000;
  }
  return uVar2;
}



/* Entry: 10b262508; end: 10b26255b; -[SCAPIURLSession useNewSessionWithReason:] */

void FUN_10b262508(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c0bb8e0(*(undefined8 *)(param_2 + 0x28),param_3,*(undefined8 *)(param_2 + 0x10));
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  func_0x00010bdfbc60(param_2);
  lVar1 = param_2;
  func_0x00010bf58d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b26255c; end: 10b2625d7; -[SCAPIURLSession createSessionWithTimeoutValue:] */

void FUN_10b26255c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_alloc_init(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x00010c1c3080();
  func_0x00010c215b80(param_1,*(undefined8 *)(param_2 + 8));
  puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  func_0x00010c1606c0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8,param_3,*(undefined8 *)(param_2 + 8),
                      param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2625d8; end: 10b26261f; -[SCAPIURLSession timeoutInterval] */

undefined8 FUN_10b2625d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf46560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c270540();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b262620; end: 10b262623; -[SCAPIURLSession networkConnectivityStatusDidChange:] */

void FUN_10b262620(void)

{
  return;
}



/* Entry: 10b262624; end: 10b2626ab; -[SCAPIURLSession dataTaskWithRequest:requestInfoContainer:] */

void FUN_10b262624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf647c0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbdc0(*(undefined8 *)(param_1 + 0x28),param_2,uVar1,*(undefined8 *)(param_1 + 0x10))
  ;
  func_0x00010c1ef120(uVar1,param_2,param_1);
  func_0x00010c1ebda0(param_1,param_2,param_4,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2626ac; end: 10b262733; -[SCAPIURLSession downloadTaskWithRequest:requestInfoContainer:] */

void FUN_10b2626ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf890c0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbdc0(*(undefined8 *)(param_1 + 0x28),param_2,uVar1,*(undefined8 *)(param_1 + 0x10))
  ;
  func_0x00010c1ef120(uVar1,param_2,param_1);
  func_0x00010c1ebda0(param_1,param_2,param_4,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b262734; end: 10b2627bb; -[SCAPIURLSession downloadTaskWithResumeData:requestInfoContainer:] */

void FUN_10b262734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf89100(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbdc0(*(undefined8 *)(param_1 + 0x28),param_2,uVar1,*(undefined8 *)(param_1 + 0x10))
  ;
  func_0x00010c1ef120(uVar1,param_2,param_1);
  func_0x00010c1ebda0(param_1,param_2,param_4,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2627bc; end: 10b26283f; -[SCAPIURLSession uploadTaskWithRequest:fileURL:requestInfoContainer:] */

void FUN_10b2627bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  func_0x00010c28e8c0(uVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ef120();
  func_0x00010c1ebda0(param_1,param_2,param_5,uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b262840; end: 10b2628f7; -[SCAPIURLSession setRequestInfoContainer:forTask:] */

void FUN_10b262840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b2628f8;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2628f8; end: 10b26290b;  */

void FUN_10b2628f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_setObject_forKey__112651b80,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b26290c; end: 10b262a0f; -[SCAPIURLSession _containerForTask:] */

void FUN_10b26290c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10b262a10;
  uStack_40 = 0x10b262a20;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b262a10; end: 10b262a27;  */

void FUN_10b262a10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b262a28; end: 10b262a6b;  */

void FUN_10b262a28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c0dff20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b262a6c; end: 10b262afb; -[SCAPIURLSession _removeContainerForTask:] */

void FUN_10b262a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b262afc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b262afc; end: 10b262b07;  */

void FUN_10b262afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b262b08; end: 10b262b4b; -[SCAPIURLSession infoForTask:] */

void FUN_10b262b08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde7600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c135860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b262b4c; end: 10b262c5f; -[SCAPIURLSession _requestIdForTask:requestInfo:] */

void FUN_10b262b4c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  func_0x00010c0ed8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c296ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
  if (((ulong)puVar2 & 1) == 0) {
    ppuVar4 = ppuVar1;
    func_0x00010bf93720(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar4 = param_4;
    func_0x00010c278f20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar4);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar3 = param_4;
      func_0x00010c278f20(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
    }
  }
  _objc_release(ppuVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10b262c60; end: 10b262d27; -[SCAPIURLSession URLSession:didReceiveChallenge:completionHandler:] */

void FUN_10b262c60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_x3;
  long in_x4;
  
  _objc_retain(in_x3);
  puVar3 = PTR_PTR_1126bd000;
  _objc_retain(in_x4);
  uVar1 = in_x3;
  func_0x00010c118f00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a100();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)puVar3 == 0) {
    (**(code **)(in_x4 + 0x10))(in_x4,1,0);
  }
  else {
    func_0x00010bf79000(PTR_PTR_1126dfe98);
  }
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 10b262d28; end: 10b263567; -[SCAPIURLSession URLSession:task:didFinishCollectingMetrics:] */

void FUN_10b262d28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_6;
  func_0x00010c279840();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf529e0();
  lVar6 = lVar6 + -1;
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9c998);
  _objc_release(puVar2);
  if (lVar6 < 1) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    dVar8 = 0.0;
    do {
      lVar3 = param_6;
      func_0x00010c279840(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c13b860(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfaa700(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(lVar3,param_3,lVar5);
      dVar8 = dVar8 + param_1;
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    param_1 = dVar8 * 1000.0;
    lVar7 = (long)param_1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9c9b8);
  _objc_release(puVar2);
  lVar7 = param_6;
  func_0x00010c279840();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar6;
  func_0x00010c0d7d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9c9d8);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1,param_3,lVar7,&PTR____CFConstantStringClassReference_110f9c9d8);
  }
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c07ca00(lVar6);
  func_0x00010c0df6e0(puVar2,param_3,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9c9f8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c13b300(lVar6);
  func_0x00010c0df780(puVar2,param_3,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110efe498);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010bf87f00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bfaa700(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9ca18);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010bf87ec0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf87f00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9ca38);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010bf482c0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf48360(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9ca58);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c156c00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c156c40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9ca78);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c135320(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c136760(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9ca98);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c13bc80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c135320(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9cab8);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c13b860(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c13bc80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9cad8);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c13bc80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bfaa700(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  param_1 = param_1 * 1000.0;
  func_0x00010c0df840(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9caf8);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c13b860(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bfaa700(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar7,param_3,lVar3);
  func_0x00010c0df840(puVar2,param_3,(long)(param_1 * 1000.0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110f9cb18);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar7);
  func_0x00010bfedd20(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010befc7a0(param_2,param_3,puVar1);
  func_0x00010befc7a0(param_2,param_3,puVar2);
  lVar7 = lVar6;
  func_0x00010c13b860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fdd60(param_2,param_3,lVar7);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(lVar6);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b263568; end: 10b263be7; -[SCAPIURLSession URLSession:task:didCompleteWithError:] */

void FUN_10b263568(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010bfedd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0();
  uVar5 = param_5;
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  func_0x00010c1ecf20(puVar4);
  puVar6 = puVar4;
  func_0x00010c13b7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  puVar6 = puVar4;
  if (puVar8 == (undefined *)0x1) {
    func_0x00010c13b7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = puVar4;
    func_0x00010c13b7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010c08fa60(*(undefined8 *)((long)puVar18 * 8));
        puVar18 = puVar18 + 1;
      } while (puVar8 != puVar18);
      puVar8 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00010bf06ae0(puVar9);
        puVar18 = puVar18 + 1;
      } while (puVar8 != puVar18);
      puVar8 = puVar6;
      func_0x00010bf52a60();
    }
  }
  _objc_release(puVar6);
  func_0x00010bf52ca0(param_5);
  func_0x00010c184740(puVar4);
  func_0x00010bf52c80(param_5);
  func_0x00010c184720(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc7a0(puVar4);
  puVar8 = param_2;
  func_0x00010bde7600();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010bf44000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar18 != (undefined *)0x0) {
    puVar18 = puVar4;
    func_0x00010bf44000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c13b720(param_5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar18 + 0x10))(puVar18,puVar8,puVar9,uVar5,param_6);
    _objc_release(uVar5);
    _objc_release(puVar18);
  }
  func_0x00010c17fb40(puVar4);
  if (puVar8 != (undefined *)0x0) {
    func_0x00010bdc3280(puVar8);
    puVar18 = puVar4;
    func_0x00010c292820(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    puVar18 = puVar4;
    func_0x00010c136da0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf45bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfafb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x00010befc7a0(puVar4);
    func_0x00010be8bb60(param_2);
    func_0x000107c2bf54(param_1,puVar8);
    _objc_release(puVar12);
    _objc_release(puVar18);
    _objc_release(puVar10);
  }
  if (param_6 != 0) {
    func_0x00010bf3ec40();
    func_0x00010bf3ec40();
  }
  if (param_2[0x18] == '\x01') {
    func_0x00010c252ee0();
    puVar18 = PTR_PTR_1126bc5e0;
    func_0x00010c22b6a0(PTR_PTR_1126bc5e0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c26a5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2128c0(puVar18);
    _objc_release(uVar5);
    _objc_release(puVar18);
  }
  puVar18 = puVar4;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar18;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  puVar18 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaf820();
  _objc_release(puVar18);
  func_0x00010bf52c60(param_5);
  puVar18 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafdc0();
  _objc_release(puVar18);
  iVar3 = (int)*(undefined8 *)(param_2 + 0x58);
  func_0x00010c0720c0();
  if (iVar3 != 0) {
    puVar18 = PTR_PTR_1126d3ea0;
    func_0x00010c22bc20(PTR_PTR_1126d3ea0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf67760();
    _objc_release(puVar18);
  }
  uVar5 = param_5;
  uVar16 = param_4;
  func_0x00010c12e980(*(undefined8 *)(param_2 + 0x28));
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_retain(uVar16);
    _objc_retain(uVar5);
    uVar13 = param_4;
    func_0x00010bfedd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    puVar4 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2516a0();
    _objc_release(puVar4);
    func_0x00010bde7600(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc32e0();
    _objc_release(uVar16);
    _objc_release(uVar5);
    uVar16 = param_4;
    func_0x00010bf45bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c136da0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2507e0(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar16);
    _objc_release(param_4);
    _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar13);
    return;
  }
  return;
}



/* Entry: 10b263be8; end: 10b263d5f; -[SCAPIURLSession URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:] */

void FUN_10b263be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfedd20(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2516a0();
  _objc_release(puVar4);
  func_0x00010bde7600(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc32e0();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010bf45bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c136da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2507e0(uVar2,param_2,uVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b263d60; end: 10b263e83; -[SCAPIURLSession URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:] */

void FUN_10b263d60(int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_x4;
  long in_x5;
  long in_x6;
  code *pcVar6;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  lVar1 = in_x4;
  func_0x00010c252ee0();
  lVar5 = in_x5;
  if (lVar1 == 0x133) {
    lVar1 = in_x5;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar3 = in_x4;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        func_0x00010c07c000();
        pcVar6 = *(code **)(in_x6 + 0x10);
        if (param_1 == 0) {
          lVar5 = 0;
        }
        goto LAB_10b263e54;
      }
    }
  }
  pcVar6 = *(code **)(in_x6 + 0x10);
LAB_10b263e54:
  (*pcVar6)(in_x6,lVar5);
  _objc_release(in_x6);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 10b263e84; end: 10b263f5f; -[SCAPIURLSession isRedirectAllowed:from:] */

undefined **
FUN_10b263e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 0x10df7718;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110df7718,param_2,uVar2);
  if (iVar1 == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    uVar3 = param_4;
    func_0x00010bdc2b80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110df7718;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110df7718,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  return ppuVar5;
}



/* Entry: 10b263f60; end: 10b264113; -[SCAPIURLSession URLSession:dataTask:didReceiveData:] */

void FUN_10b263f60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bfedd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (param_5 == 0) {
    if (lRam00000001137f44e8 != -1) {
      func_0x000107c27d9c(0x1137f44e8,&PTR___NSConcreteGlobalBlock_110ccbec8);
    }
    if ((bRam00000001137f44e0 & 1) == 0) {
      FUN_10b2811e4(*(undefined8 *)(param_1 + 0x40),&PTR____CFConstantStringClassReference_110f5ff58
                    ,1);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x00010c13b7e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(lVar2);
    func_0x00010bde7600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc31c0();
    lVar2 = param_1;
    func_0x00010bf45bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c136da0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250180(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b264114; end: 10b264123; -[SCAPIURLSession URLSession:dataTask:didReceiveResponse:completionHandler:] */

void FUN_10b264114(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x00010b264120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))(in_x5,1);
  return;
}



/* Entry: 10b264124; end: 10b26426b; -[SCAPIURLSession URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:] */

void FUN_10b264124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfedd20(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bde7600(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3260();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010bf45bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c136da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250180(uVar2,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b26426c; end: 10b2642f7; -[SCAPIURLSession URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:] */

void FUN_10b26426c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bde7600(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3240();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b2642f8; end: 10b26445f; -[SCAPIURLSession URLSession:downloadTask:didFinishDownloadingToURL:] */

/* WARNING: Removing unreachable block (ram,0x00010b2643d4) */

void FUN_10b2642f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  
  _objc_retain(in_x3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(in_x4);
  func_0x00010bf69bc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137f44f0 != -1) {
    func_0x000107c27d9c(0x1137f44f0,&PTR___NSConcreteGlobalBlock_110ccbee8);
  }
  uVar1 = uRam00000001137f44f8;
  uVar3 = uRam00000001137f44f8;
  _objc_retain(uRam00000001137f44f8);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bdc2c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c0d1580(puVar2);
  _objc_release(in_x4);
  _objc_retain(0);
  func_0x00010c1f1ec0(in_x3);
  _objc_release(0);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(in_x3);
  return;
}



/* Entry: 10b264460; end: 10b26488b; -[SCAPIURLSession logTaskStarted:] */

void FUN_10b264460(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfedd20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 != 3) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc7a0(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0720c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110f5fdd8);
    if ((int)uVar4 != 0) {
      puVar5 = PTR_PTR_1126d3ea0;
      func_0x00010c22bc20(PTR_PTR_1126d3ea0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec340();
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126dfd80;
    lVar2 = param_3;
    func_0x00010c0ed8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2100(puVar5,param_2,lVar2,0,lVar1);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bde7600(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf45bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c136da0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2503c0(lVar7,param_2,lVar6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fdd80(lVar1,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c1b2be0(lVar1,param_2,1);
    puVar5 = PTR_PTR_1126dfd88;
    lVar7 = param_3;
    func_0x00010c0ed8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c278f20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d7860(puVar5,param_2,lVar7,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    func_0x000107c2bf38();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c136da0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c0e00e0(lVar7,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c067fc0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    puVar11 = PTR_PTR_1126dfd88;
    lVar7 = param_3;
    func_0x00010c0ed8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c278f20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d7800(puVar11,param_2,lVar7,lVar10,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    puVar12 = PTR_PTR_1126dfd88;
    lVar7 = param_3;
    func_0x00010c0ed8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c136da0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c076020(lVar1);
    lVar10 = lVar1;
    func_0x00010c278f20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d77a0(puVar12,param_2,lVar7,lVar8,(uint)lVar9 ^ 1,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    lVar7 = lVar1;
    func_0x00010c1604e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7bcc0(param_1,param_2,puVar5,lVar7,puVar11,puVar12);
    _objc_release(lVar7);
    _objc_release(param_1);
    puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x000107c2bf50(lVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b26488c; end: 10b264893; -[SCAPIURLSession identifier] */

undefined8 FUN_10b26488c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b264894; end: 10b26489f; -[SCAPIURLSession isUsingCrNet] */

byte FUN_10b264894(long param_1)

{
  return *(byte *)(param_1 + 0x50) & 1;
}



/* Entry: 10b2648a0; end: 10b2648a7; -[SCAPIURLSession setIsUsingCrNet:] */

void FUN_10b2648a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b2648a8; end: 10b26497b; -[SCAPIURLSession .cxx_destruct] */

void FUN_10b2648a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b26497c; end: 10b264a3f;  */

void FUN_10b26497c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000107c31298();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee840(puVar2,param_2,puVar4,1);
  uVar1 = puRam00000001137f44f8;
  puRam00000001137f44f8 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b24e8;
  puVar3 = puRam00000001137f44f8;
  func_0x00010c0f5800(puRam00000001137f44f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55dc0(puVar2,param_2,puVar3,1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b264a40; end: 10b264aab; -[SCRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:useGzipRequestCompression:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b264a40(void)

{
  func_0x00010bec6580();
  return;
}



/* Entry: 10b264aac; end: 10b264b13; -[SCRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b264aac(void)

{
  func_0x00010bec6580();
  return;
}



/* Entry: 10b264b14; end: 10b264ceb; -[SCRequestManager _submitRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:useGzipRequestCompression:maxNumRequestAttempts:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b264b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17,long param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  uVar1 = param_1;
  func_0x00010be91b20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_18;
  func_0x00010c067fc0();
  if ((param_18 != 0) && (lVar2 - 1U < 4)) {
    lVar2 = param_18;
    func_0x00010c067fc0(param_18);
    func_0x00010c1c3460(uVar1,param_2,lVar2);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b264cec;
  puStack_78 = &UNK_1108ab730;
  uStack_70 = param_21;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10b264d08;
  puStack_a0 = &UNK_1108a0d30;
  uStack_98 = param_22;
  _objc_retain(param_22);
  _objc_retain(param_21);
  func_0x00010c25f5a0(param_1,param_2,uVar1,param_15,param_19,param_20,&puStack_90,&puStack_b8);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b264cec; end: 10b264d23;  */

void FUN_10b264cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b264d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 10b264d24; end: 10b264d77; -[SCRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:method:authenticated:authenticator:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b264d24(void)

{
  func_0x00010c25f1a0();
  return;
}



/* Entry: 10b264d78; end: 10b264dcf; -[SCRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:method:authenticated:authenticator:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b264d78(void)

{
  func_0x00010bec6580();
  return;
}



/* Entry: 10b264dd0; end: 10b264e33; -[SCRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:method:authenticated:authenticator:maxNumRequestAttempts:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_10b264dd0(void)

{
  func_0x00010bec6580();
  return;
}



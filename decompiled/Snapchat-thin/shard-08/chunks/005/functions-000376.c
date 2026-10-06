/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062906e8; end: 106290767; -[SCContextSpotlightSuggestedSearchViewController _hasLiveEventEnded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1062906e8(double param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744918;
  if (*(long *)(param_2 + lVar3) < 1) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    bVar1 = *(long *)(param_2 + lVar3) <= (long)(param_1 * 1000.0);
  }
  return bVar1;
}



/* Entry: 106290768; end: 106290917; -[SCContextSpotlightSuggestedSearchViewController _attributedTextWithPrefix:prefixColor:searchString:baseColor:font:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106290768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar4 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uVar5 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_88 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = param_4;
  uStack_70 = param_7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_a8 = uVar4;
  uStack_a0 = uVar5;
  uStack_98 = param_6;
  uStack_90 = param_7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_98,&uStack_a8,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_6);
  func_0x00010c04e840(puVar2,param_2,param_5,puVar3);
  _objc_release(param_5);
  _objc_release(puVar3);
  func_0x00010bf069e0(puVar1,param_2,puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf6b020(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2621e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  func_0x00010bff0a60();
  uVar4 = *(undefined8 *)(puVar2 + _DAT_11274491c);
  puVar2 = PTR_PTR_1126b5c68;
  func_0x00010c2620e0(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(uVar4,param_2,puVar2,0,0,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106290918; end: 106290a03; -[SCContextSpotlightSuggestedSearchViewController _tappedSuggestedSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106290918(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2621e0();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  func_0x00010bff0a60();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274491c);
  puVar3 = PTR_PTR_1126b5c68;
  func_0x00010c2620e0(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(uVar4,param_2,puVar3,0,0,puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106290a04; end: 106290a23; -[SCContextSpotlightSuggestedSearchViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106290a04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274492c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106290a24; end: 106290a37; -[SCContextSpotlightSuggestedSearchViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106290a24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274492c,param_3);
  return;
}



/* Entry: 106290a38; end: 106290ab3; -[SCContextSpotlightSuggestedSearchViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106290a38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274492c);
  _objc_storeStrong(param_1 + _DAT_11274491c,0);
  _objc_storeStrong(param_1 + _DAT_112744910,0);
  _objc_storeStrong(param_1 + _DAT_112744928,0);
  _objc_storeStrong(param_1 + _DAT_112744924,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744920,0);
  return;
}



/* Entry: 106290ab4; end: 106290c57; -[SCContextSpotlightSurveyViewController initWithParams:spotlightLogger:operaEventAnnouncer:userPreferences:storiesConfigProvider:visibilityModelObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106290ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f0af8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112744930;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112744934;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112744938;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274493c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112744940;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112744944;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744948);
    *(undefined **)((long)puVar1 + (long)_DAT_112744948) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274494c) = 0;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106290c58; end: 106291997; -[SCContextSpotlightSurveyViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106290c58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126f0af8;
  lStack_108 = param_1;
  _objc_msgSendSuper2(&lStack_108,PTR_s_viewDidLoad_112684cd8);
  lVar46 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar46);
  lVar46 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar46);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar43 = (long)_DAT_112744950;
  uVar42 = *(undefined8 *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar1;
  _objc_release(uVar42);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar43));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar43));
  _objc_release(puVar1);
  lVar46 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar46);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar44 = (long)_DAT_112744954;
  uVar42 = *(undefined8 *)(param_1 + lVar44);
  *(undefined **)(param_1 + lVar44) = puVar1;
  _objc_release(uVar42);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar44));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar44));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar44));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar44));
  func_0x00010c207380(0x4020000000000000,*(undefined8 *)(param_1 + lVar44));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar43));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar46 = (long)_DAT_112744958;
  uVar42 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar1;
  _objc_release(uVar42);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar46));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar46));
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010bfe0660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar3;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar42);
  _objc_release(uVar3);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar44));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar46 = (long)_DAT_11274495c;
  uVar42 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar1;
  _objc_release(uVar42);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar46));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar46));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar46));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar46));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar46));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar44));
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar46 = (long)_DAT_112744960;
  uVar42 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar1;
  _objc_release(uVar42);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar46));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar46));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar46));
  func_0x00010c207380(0x4020000000000000,*(undefined8 *)(param_1 + lVar46));
  uVar3 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010bfe0660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar3;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar42);
  _objc_release(uVar3);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar44));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar45 = (long)_DAT_112744964;
  uVar42 = *(undefined8 *)(param_1 + lVar45);
  *(undefined **)(param_1 + lVar45) = puVar1;
  _objc_release(uVar42);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar45));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar45));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar45));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar43));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar46 = (long)_DAT_112744968;
  uVar42 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar1;
  _objc_release(uVar42);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar46));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar46));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar46));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar46));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar45));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar46);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar46);
  uStack_98 = uVar42;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010bf348e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar46);
  uStack_90 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar45);
  func_0x00010c2793a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar8;
  func_0x00010bf49500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar32;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar32);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar42);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar43);
  uStack_f8 = uVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar43);
  uStack_f0 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar43);
  uStack_e8 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar46;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar44);
  uStack_e0 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar44);
  uStack_d8 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar44);
  uStack_d0 = uVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar44);
  uStack_c8 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar30;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar45);
  uStack_c0 = uVar32;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar33;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar45);
  uStack_b8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar34;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(undefined8 *)(param_1 + lVar45);
  uStack_b0 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar36;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_1 + lVar45);
  uStack_a8 = uVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_1 + lVar43);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar38;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a0 = uVar42;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar42);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar6);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar5);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar4);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar3);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar9);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar8);
  _objc_release(lVar22);
  _objc_release(lVar46);
  _objc_release(uVar21);
  _objc_release(uVar7);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_initWeak(auStack_110,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744930);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106291998;
  puStack_120 = &UNK_110919310;
  _objc_copyWeak(auStack_118,auStack_110);
  uVar42 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar42);
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744934);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar41 = auStack_110;
  _objc_copyWeak(auStack_140,puVar41);
  uVar42 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar42);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  puVar40 = auStack_110;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_110);
  __Unwind_Resume(puVar40);
  _objc_retain(puVar41);
  puVar40 = puVar40 + 0x20;
  _objc_loadWeakRetained(puVar40);
  func_0x00010be86d40();
  _objc_release(puVar41);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar40);
  return;
}



/* Entry: 106291998; end: 106291a27;  */

void FUN_106291998(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106291a28; end: 106291aff; -[SCContextSpotlightSurveyViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106291a28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0af8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  *(undefined1 *)(param_1 + _DAT_11274496c) = 1;
  lVar5 = (long)_DAT_112744970;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar4 = (long)_DAT_112744974;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
    }
  }
  func_0x00010be59760(param_1);
  return;
}



/* Entry: 106291b00; end: 106291b57; -[SCContextSpotlightSurveyViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106291b00(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0af8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  *(undefined1 *)(param_1 + _DAT_112744978) = 0;
  *(undefined1 *)(param_1 + _DAT_11274496c) = 0;
  return;
}



/* Entry: 106291b58; end: 106291baf; -[SCContextSpotlightSurveyViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106291b58(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0af8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c12c9c0(*(undefined8 *)(param_1 + _DAT_112744970));
  return;
}



/* Entry: 106291bb0; end: 106291c5b; -[SCContextSpotlightSurveyViewController setContanierView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106291bb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = (long)_DAT_112744970;
    lVar2 = (long)_DAT_112744974;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c9c0(*(undefined8 *)(param_1 + lVar1));
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    *(long *)(param_1 + lVar1) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined **)(param_1 + lVar2) = puVar4;
    _objc_release(uVar3);
    func_0x00010bef9040(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106291c5c; end: 106291e3b; -[SCContextSpotlightSurveyViewController _handleButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106291c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  lVar6 = (long)_DAT_11274497c;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c104fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c268120(param_3);
  lVar1 = lVar2;
  func_0x00010c0dfd40(lVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c104fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c268120(param_3);
    uVar5 = uVar3;
    func_0x00010c0dfd40(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112744968),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744964),param_2,0);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106291e3c;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010bf03440(0x3fd3333333333333,0x3fc70a3d70a3d70a,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,0,&puStack_68,&PTR___NSConcreteGlobalBlock_110919918);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744940);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bf67b20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,PTR____kCFBooleanTrue_11034ab68,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010be57d00(param_1,param_2,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 106291e3c; end: 106291ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106291e3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744960));
  lVar2 = (long)_DAT_11274495c;
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,1);
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744964));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106291ed0; end: 106291ed3;  */

void FUN_106291ed0(void)

{
  return;
}



/* Entry: 106291ed4; end: 1062923cf; -[SCContextSpotlightSurveyViewController _surveyInfoWithParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106291ed4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_1062923d0;
  uStack_100 = 0x1062923e0;
  uStack_f8 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x3032000000;
  pcStack_138 = FUN_1062923d0;
  uStack_130 = 0x1062923e0;
  uStack_128 = 0;
  lVar11 = param_3;
  func_0x00010bfa29a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(lVar11);
  uVar10 = puStack_148[5];
  lVar11 = (long)_DAT_112744980;
  _objc_retain(uVar10);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = uVar10;
  _objc_release(uVar1);
  uVar2 = puStack_118[5];
  if (uVar2 != 0) {
    func_0x00010c13ba60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (1 < uVar3) {
      uVar4 = puStack_118[5];
      func_0x00010c104fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf529e0();
      if (1 < uVar3) {
        lVar5 = puStack_118[5];
        func_0x00010c13ba60();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar5;
        func_0x00010bf529e0();
        lVar6 = puStack_118[5];
        func_0x00010c104fa0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf529e0();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if (lVar11 == lVar7) {
          uVar4 = *(ulong *)(param_1 + _DAT_112744940);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = puStack_118[5];
          func_0x00010bf67b20(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf1f3c0();
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar4);
          if ((uVar3 & 1) == 0) {
            uVar10 = puStack_118[5];
            lVar6 = (long)_DAT_11274497c;
            _objc_retain(uVar10);
            uVar1 = *(undefined8 *)(param_1 + lVar6);
            *(undefined8 *)(param_1 + lVar6) = uVar10;
            _objc_release(uVar1);
            lVar13 = (long)_DAT_112744960;
            lVar5 = *(long *)(param_1 + lVar13);
            func_0x00010bf09ee0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar5;
            func_0x00010bf52a60();
            lVar7 = lRam0000000000000000;
            while (lVar11 != 0) {
              lVar12 = 0;
              do {
                if (lRam0000000000000000 != lVar7) {
                  _objc_enumerationMutation(lVar5);
                }
                func_0x00010c12c960(*(undefined8 *)(lVar12 * 8));
                lVar12 = lVar12 + 1;
              } while (lVar11 != lVar12);
              lVar11 = lVar5;
              func_0x00010bf52a60();
            }
            _objc_release(lVar5);
            uVar2 = 0;
            while( true ) {
              uVar4 = *(ulong *)(param_1 + lVar6);
              func_0x00010c13ba60();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar4;
              func_0x00010bf529e0();
              _objc_release(uVar4);
              if (uVar3 <= uVar2) break;
              puVar8 = PTR_PTR_1126c9450;
              _objc_alloc_init(PTR_PTR_1126c9450);
              func_0x00010c211780();
              uVar10 = *(undefined8 *)(param_1 + lVar6);
              func_0x00010c13ba60(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar10;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar10);
              func_0x00010c216260(puVar8);
              func_0x00010befbd60(puVar8);
              func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar13));
              _objc_release(uVar1);
              _objc_release(puVar8);
              uVar2 = uVar2 + 1;
            }
            lVar11 = puStack_118[5];
            func_0x00010c11dc00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar11 != 0) {
              uVar1 = puStack_118[5];
              func_0x00010c11dc00(uVar1);
              _objc_retainAutoreleasedReturnValue();
              lVar11 = (long)_DAT_11274495c;
              func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11));
              _objc_release(uVar1);
              func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar11));
            }
            uVar9 = 1;
            goto LAB_1062922a0;
          }
        }
        goto LAB_10629229c;
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
LAB_10629229c:
  uVar9 = 0;
LAB_1062922a0:
  *(undefined1 *)(param_1 + _DAT_112744984) = uVar9;
  func_0x00010bee4080(param_1);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(uStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_150,8);
  lVar11 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 1062923d0; end: 1062923e7;  */

void FUN_1062923d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1062923e8; end: 10629245b;  */

void FUN_1062923e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  
  _objc_retain(param_4);
  _objc_retain(in_stack_00000000);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = in_stack_00000000;
  _objc_retain(in_stack_00000000);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_stack_00000000);
  return;
}



/* Entry: 10629245c; end: 1062924bf; -[SCContextSpotlightSurveyViewController _didReceiveVisibilityModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629245c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29e660();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010c2331a0();
    *(char *)(param_1 + _DAT_11274494c) = (char)lVar1;
    lVar1 = param_3;
    func_0x00010bf034a0(param_3);
    func_0x00010bee4080(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062924c0; end: 106292697; -[SCContextSpotlightSurveyViewController _updateVisibilityAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062924c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (*(char *)(param_1 + _DAT_112744984) == '\x01') {
    bVar3 = *(byte *)(param_1 + _DAT_11274494c);
    if ((param_3 & 1) == 0) {
LAB_1062925e0:
      lVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      uVar4 = 0x3ff0000000000000;
      if ((bVar3 & 1) == 0) {
        uVar4 = 0;
      }
      lVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(uVar4);
      _objc_release(lVar2);
      if ((~bVar3 & 1) != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010be59770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__logSurveyImpressionTimestampIfN_112573f78);
      return;
    }
    uStack_80 = 0;
    if (bVar3 != 0) {
      lVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      uStack_80 = 1;
    }
  }
  else {
    bVar3 = 0;
    if ((param_3 & 1) == 0) goto LAB_1062925e0;
    uStack_80 = 0;
  }
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106292698;
  puStack_60 = &UNK_110845ce0;
  lStack_58 = param_1;
  uStack_50 = uStack_80;
  _objc_copyWeak(auStack_88,auStack_48);
  func_0x00010bf03420(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106292698; end: 106292743;  */

void FUN_106292698(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106292744; end: 106292783;  */

void FUN_106292744(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be59760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106292784; end: 106292993; -[SCContextSpotlightSurveyViewController _logSurveyImpressionTimestampIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106292784(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 auStack_98 [32];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  if ((((*(char *)(param_1 + _DAT_112744984) == '\x01') &&
       (*(char *)(param_1 + _DAT_11274494c) == '\x01')) &&
      (*(char *)(param_1 + _DAT_11274496c) == '\x01')) &&
     ((lVar9 = (long)_DAT_112744978, (*(byte *)(param_1 + lVar9) & 1) == 0 &&
      (lVar7 = (long)_DAT_11274497c, *(long *)(param_1 + lVar7) != 0)))) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112744938);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f43978;
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f43918;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    puStack_68 = puVar2;
    func_0x00010bf67b20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_60 = uVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8a40(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126c9458;
    lVar5 = *(long *)(param_1 + _DAT_112744940);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c9458;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112744944);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2fb60(auStack_98,puVar4);
    param_3 = lVar5;
    func_0x00010c123a80(puVar2);
    _objc_release(uVar1);
    _objc_release(puVar6);
    _objc_release();
    *(undefined1 *)(param_1 + lVar9) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_1062923d0;
  uStack_118 = 0x1062923e0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar8 = (long)_DAT_11274497c;
  uVar1 = *(undefined8 *)(lVar5 + lVar8);
  puStack_110 = puVar2;
  func_0x00010bf87100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bde20();
  _objc_release(uVar1);
  lVar7 = *(long *)(lVar5 + lVar8);
  func_0x00010c13ba60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268120(param_3);
  lVar9 = lVar7;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar9;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    func_0x00010c1d0640(puStack_130[5]);
  }
  lVar7 = *(long *)(lVar5 + lVar8);
  func_0x00010c263f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar1 = *(undefined8 *)(lVar5 + lVar8);
    func_0x00010c263f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_130[5]);
    _objc_release(uVar1);
  }
  lVar7 = *(long *)(lVar5 + lVar8);
  func_0x00010bf9c4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    uVar1 = *(undefined8 *)(lVar5 + lVar8);
    func_0x00010bf9c4e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_130[5]);
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c1d0640(puStack_130[5]);
  _objc_release(puVar2);
  func_0x00010c268120(param_3);
  lVar7 = lVar5;
  func_0x00010bec90c0();
  if ((lVar7 == 0xd) || (lVar7 == 0xe)) {
    func_0x00010c1d0640(puStack_130[5]);
  }
  uVar1 = *(undefined8 *)(lVar5 + _DAT_112744938);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puStack_130[5];
  func_0x00010bf51e00();
  func_0x00010c0a82c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (lVar7 == 0xe) {
    puVar2 = PTR_PTR_1126b2cf0;
    func_0x00010c23e220();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR____kCFBooleanTrue_11034ab68;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_108 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(lVar5 + _DAT_11274493c);
    puVar2 = PTR_PTR_1126b2ce8;
    func_0x00010bfeb520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar1);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(lVar9);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(puStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    uVar1 = 8;
    __Block_object_dispose(&uStack_138,8);
    __Unwind_Resume();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
    _objc_retain(uVar1);
    func_0x00010c1d0640(uVar3);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106292994; end: 106292db3; -[SCContextSpotlightSurveyViewController _logResponseActionForButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106292994(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1062923d0;
  uStack_78 = 0x1062923e0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar7 = (long)_DAT_11274497c;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  puStack_70 = puVar1;
  func_0x00010bf87100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bde20();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010c13ba60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268120(param_3);
  lVar4 = lVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puStack_90[5]);
  }
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010c263f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c263f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_90[5]);
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + lVar7);
  func_0x00010bf9c4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf9c4e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puStack_90[5]);
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c1d0640(puStack_90[5]);
  _objc_release(puVar1);
  func_0x00010c268120(param_3);
  lVar3 = param_1;
  func_0x00010bec90c0();
  if ((lVar3 == 0xd) || (lVar3 == 0xe)) {
    func_0x00010c1d0640(puStack_90[5]);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744938);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puStack_90[5];
  func_0x00010bf51e00();
  func_0x00010c0a82c0(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar2);
  if (lVar3 == 0xe) {
    puVar1 = PTR_PTR_1126b2cf0;
    func_0x00010c23e220();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR____kCFBooleanTrue_11034ab68;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_68 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274493c);
    puVar1 = PTR_PTR_1126b2ce8;
    func_0x00010bfeb520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puStack_70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar2 = 8;
    __Block_object_dispose(&uStack_98,8);
    __Unwind_Resume();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
    _objc_retain(uVar2);
    func_0x00010c1d0640(uVar5);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106292db4; end: 106292e33;  */

void FUN_106292db4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010c1d0640(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106292e34; end: 106292f2f;  */

/* WARNING: Possible PIC construction at 0x000106292e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106292e84) */

void FUN_106292e34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setObject_forKeyedSubscript__112651bb8,puVar1,
             &PTR____CFConstantStringClassReference_110f43a38);
  return;
}



/* Entry: 106292f30; end: 10629303f; -[SCContextSpotlightSurveyViewController _surveyFeedActionTypeForSelectedOptionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106292f30(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_11274497c;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c07bb20();
  if (iVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + lVar8);
    func_0x00010c13ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (param_3 < uVar4) {
      uVar4 = *(ulong *)(param_1 + lVar8);
      func_0x00010c13ba80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar5);
      uVar4 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar3);
      if (uVar4 == 0) {
        uVar7 = 0;
      }
      else {
        func_0x00010c067fc0();
        uVar1 = 0xe;
        if (uVar3 != 2) {
          uVar1 = 0;
        }
        uVar7 = 0xd;
        if (uVar3 != 1) {
          uVar7 = uVar1;
        }
      }
      _objc_release(uVar4);
      return uVar7;
    }
  }
  return 0;
}



/* Entry: 106293040; end: 106293227; -[SCContextSpotlightSurveyViewController _handleSuperviewTap:] */

void FUN_106293040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7);
  uVar7 = param_1;
  uVar8 = param_2;
  _objc_release(param_7);
  uVar3 = param_5;
  func_0x00010c29bf00();
  iVar1 = (int)uVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar7,uVar8,param_3,param_4,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  _CGRectContainsPoint(uVar7,uVar8,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    uVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c9450;
    _objc_opt_class(PTR_PTR_1126c9450);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar3 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 != 0) {
      func_0x00010be269a0(param_5);
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106293228; end: 1062932eb; -[SCContextSpotlightSurveyViewController _receivedSpotlightParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106293228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744988);
  *(undefined8 *)(param_1 + _DAT_112744988) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274498c);
  *(undefined8 *)(param_1 + _DAT_11274498c) = uVar1;
  _objc_release(uVar3);
  uVar1 = param_3;
  func_0x00010c160280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bec90e0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062932ec; end: 10629343b; -[SCContextSpotlightSurveyViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062932ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_7 != *(long *)(param_5 + _DAT_112744974)) {
    return 1;
  }
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,lVar1);
  uVar4 = param_1;
  uVar5 = param_2;
  _objc_release(param_7);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar4,uVar5,param_3,param_4,lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(lVar2);
  _CGRectContainsPoint(uVar4,uVar5,param_3,param_4,param_1,param_2);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10629343c; end: 1062935ab; -[SCContextSpotlightSurveyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629343c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274498c,0);
  _objc_storeStrong(param_1 + _DAT_11274493c,0);
  _objc_storeStrong(param_1 + _DAT_112744988,0);
  _objc_storeStrong(param_1 + _DAT_112744980,0);
  _objc_storeStrong(param_1 + _DAT_112744970,0);
  _objc_storeStrong(param_1 + _DAT_112744974,0);
  _objc_storeStrong(param_1 + _DAT_112744944,0);
  _objc_storeStrong(param_1 + _DAT_112744940,0);
  _objc_storeStrong(param_1 + _DAT_112744954,0);
  _objc_storeStrong(param_1 + _DAT_11274495c,0);
  _objc_storeStrong(param_1 + _DAT_11274497c,0);
  _objc_storeStrong(param_1 + _DAT_112744938,0);
  _objc_storeStrong(param_1 + _DAT_112744968,0);
  _objc_storeStrong(param_1 + _DAT_112744990,0);
  _objc_storeStrong(param_1 + _DAT_112744964,0);
  _objc_storeStrong(param_1 + _DAT_112744958,0);
  _objc_storeStrong(param_1 + _DAT_112744960,0);
  _objc_storeStrong(param_1 + _DAT_112744950,0);
  _objc_storeStrong(param_1 + _DAT_112744948,0);
  _objc_storeStrong(param_1 + _DAT_112744934,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744930,0);
  return;
}



/* Entry: 1062935ac; end: 10629362f;  */

void FUN_1062935ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x000108534a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106293630; end: 1062937ef; -[SCContextSpotlightSwipeUpTeachingViewController initWithUserPreferences:animationConfig:videoDuration:spotlightLogger:storyId:viewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106293630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f0b00;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112744994;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112744998;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274499c) = param_1;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e47cd8;
    FUN_1062935ac(&PTR____CFConstantStringClassReference_110e47cd8,param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127449a0);
    *(undefined ***)((long)puVar1 + (long)_DAT_1127449a0) = ppuVar3;
    _objc_release(uVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e47cf8;
    FUN_1062935ac(&PTR____CFConstantStringClassReference_110e47cf8,param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127449a4);
    *(undefined ***)((long)puVar1 + (long)_DAT_1127449a4) = ppuVar3;
    _objc_release(uVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e47d18;
    FUN_1062935ac(&PTR____CFConstantStringClassReference_110e47d18,param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127449a8);
    *(undefined ***)((long)puVar1 + (long)_DAT_1127449a8) = ppuVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127449ac) = 0;
    lVar4 = (long)_DAT_1127449b0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127449b4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1062937f0; end: 106293847; -[SCContextSpotlightSwipeUpTeachingViewController viewDidLoad] */

void FUN_1062937f0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0b00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb14e0(param_1);
  func_0x00010bead6c0(param_1);
  func_0x00010bec1b20(param_1);
  return;
}



/* Entry: 106293848; end: 106293927; -[SCContextSpotlightSwipeUpTeachingViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106293848(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f0b00;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidDisappear__112684c48);
  if (*(char *)(param_1 + _DAT_1127449b8) == '\x01') {
    uVar2 = *(ulong *)(param_1 + _DAT_112744994);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2827c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((*(byte *)(param_1 + _DAT_1127449bc) & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112744998);
      func_0x00010c0c2da0();
      if (uVar4 < (ulong)(long)iVar1) {
        return;
      }
    }
    func_0x00010be928a0(param_1);
  }
  return;
}



/* Entry: 106293928; end: 1062939c3; -[SCContextSpotlightSwipeUpTeachingViewController _animateSwipeUpTeaching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106293928(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + _DAT_1127449b8) & 1) == 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1062939c4;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1062939cc;
    puStack_48 = &UNK_110841f20;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010bf03440(0x3fd999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,
                        &puStack_38,&puStack_60);
  }
  return;
}



/* Entry: 1062939c4; end: 1062939cb;  */

void FUN_1062939c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateAnimationConstraint_112592620);
  return;
}



/* Entry: 1062939cc; end: 106293bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062939cc(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_2 != 0) {
    func_0x00010bdd56a0(*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127449b8) = 1;
    func_0x00010be38840(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be51f00(*(undefined8 *)(param_1 + 0x20));
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = *(long *)(param_1 + 0x20);
    if (*(char *)(lVar5 + _DAT_1127449ac) == '\x01') {
      uVar7 = *(undefined8 *)(lVar5 + _DAT_1127449c0);
      lVar8 = (long)_DAT_112744994;
      uVar1 = *(undefined8 *)(lVar5 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar7);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(uVar1);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127449c4);
      func_0x00010c0c2560();
      func_0x00010c0c2da0();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 106293bb4; end: 106293c0f; -[SCContextSpotlightSwipeUpTeachingViewController _logContentTooltipImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106293bb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127449b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106293c10; end: 106293c23; -[SCContextSpotlightSwipeUpTeachingViewController _setOncePresentedSwipeUpTeachingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106293c10(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127449b8) = 1;
  return;
}



/* Entry: 106293c24; end: 106293f57; -[SCContextSpotlightSwipeUpTeachingViewController _bounceDoubleArrow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106293c24(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_4,
                      &PTR____CFConstantStringClassReference_110e446f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3ff3333333333333);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar9 = (long)_DAT_1127449c8;
  func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar9));
  func_0x00010c0df740((float)param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar2;
  func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar9));
  func_0x00010c0df740((float)(param_2 + -5.0));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar3;
  func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar9));
  func_0x00010c0df740((float)param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar4;
  func_0x00010bf345e0(*(undefined8 *)(param_3 + lVar9));
  dVar10 = (double)(ulong)(uint)(float)param_2;
  func_0x00010c0df740(dVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1b6d00(puVar1);
  _CACurrentMediaTime();
  func_0x00010c16fd40(dVar10 + 1.0,puVar1);
  uVar7 = *(undefined8 *)(param_3 + _DAT_112744998);
  func_0x00010bf207e0(uVar7);
  func_0x00010c1eabe0((float)(int)uVar7,puVar1);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_98 = puVar2;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_initWeak(auStack_a0,param_3);
  uVar7 = *(undefined8 *)(param_3 + lVar9);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_a0);
  puVar2 = puVar1;
  func_0x00010bef6c40(uVar7);
  iVar8 = (int)puVar2;
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(puVar1);
  if (iVar8 != 0) {
    puVar1 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bde33c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106293f58; end: 106293f8b;  */

void FUN_106293f58(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde33c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106293f8c; end: 106293ff3; -[SCContextSpotlightSwipeUpTeachingViewController _completeSwipeUpTeachingAnimation] */

void FUN_106293f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106293ff4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03420(0x3fd6666666666666,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,0);
  return;
}



/* Entry: 106293ff4; end: 10629402b;  */

void FUN_106293ff4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10629402c; end: 10629409b; -[SCContextSpotlightSwipeUpTeachingViewController _updateAnimationConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629402c(long param_1)

{
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_1127449cc));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_1127449d0));
  func_0x00010c181140(0xc039000000000000,*(undefined8 *)(param_1 + _DAT_1127449d4));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10629409c; end: 10629463b; -[SCContextSpotlightSwipeUpTeachingViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629409c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126b1198;
  _objc_alloc_init();
  lVar20 = (long)_DAT_1127449cc;
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar14;
  _objc_release(uVar15);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar14;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar14;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_90 = puVar14;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar8;
  func_0x00010bf414e0(0x3fd51eb851eb851f);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_88 = puVar14;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar13;
  func_0x00010bf414e0(0x3fe199999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar14;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bf414e0(0x3feae147ae147ae1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar14;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_78 = puVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf414e0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bfcd9c0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar15);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puStack_b0);
  _objc_release(puVar8);
  _objc_release(puStack_a8);
  _objc_release(puStack_a0);
  _objc_release(puStack_98);
  puVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar19 = (long)_DAT_1127449d8;
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar8;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xba);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19),param_2,puVar8);
  _objc_release(puVar8);
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c21ad00(uVar15,param_2,0x16);
  func_0x0001062ccd8c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar19),param_2,uVar15);
  _objc_release(uVar15);
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010bf1ff80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010bf493a0(uVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + _DAT_1127449d4);
  *(undefined8 *)(param_1 + _DAT_1127449d4) = uVar15;
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar19));
  puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e47d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar8,param_2,puVar13);
  lVar17 = (long)_DAT_1127449c8;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar8;
  _objc_release(uVar15);
  _objc_release(puVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar17));
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar17 = (long)_DAT_1127449d0;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar8;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar17),param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar17));
  puVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  puVar8 = puVar13;
  _objc_release();
  if (param_1[_DAT_1127449ac] == '\x01') {
    puVar8 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar19 = (long)_DAT_1127449c0;
    uVar15 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar8;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xba);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar19),param_2,puVar8);
    _objc_release(puVar8);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19),param_2,0x16);
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar20),param_2,*(undefined8 *)(param_1 + lVar19))
    ;
    puVar8 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar17 = (long)_DAT_1127449c4;
    uVar15 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar8;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xba);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar17),param_2,puVar13);
    _objc_release(puVar13);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar17),param_2,0x16);
    puVar8 = *(undefined **)(param_1 + lVar20);
    func_0x00010befbb60(puVar8,param_2,*(undefined8 *)(param_1 + lVar17));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_100 = &DAT_1127449ac;
  ppuStack_f8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_e0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_b8 = FUN_10629463c;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = (long)_DAT_1127449cc;
  uVar15 = *(undefined8 *)(puVar8 + lVar18);
  puStack_110 = puVar3;
  puStack_108 = puVar14;
  lStack_f0 = lVar20;
  lStack_e8 = lVar19;
  lStack_d8 = lVar17;
  puStack_d0 = puVar13;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  puStack_1b0 = (undefined *)uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar14;
  func_0x00010bf493a0(uVar15,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar8 + lVar18);
  puStack_1c0 = (undefined *)uVar15;
  uStack_160 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  uStack_1d0 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar14;
  func_0x00010bf493a0(uVar6,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar8 + lVar18);
  uStack_1e0 = uVar6;
  uStack_158 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  uStack_1f8 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = puVar14;
  func_0x00010bf493a0(uVar15,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar8 + lVar18);
  uStack_208 = uVar15;
  uStack_150 = uVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_210 = uVar6;
  func_0x00010bf49420(0x406e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_1127449d8;
  uVar16 = *(undefined8 *)(puVar8 + lVar19);
  uStack_218 = uVar6;
  uStack_148 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar8 + lVar18);
  uStack_220 = uVar16;
  func_0x00010bf34860(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar16,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = *(undefined8 *)(puVar8 + _DAT_1127449d4);
  lVar17 = (long)_DAT_1127449c8;
  uVar9 = *(undefined8 *)(puVar8 + lVar17);
  uStack_140 = uVar16;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar8 + lVar19);
  func_0x00010bf34860(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar8 + lVar17);
  lStack_228 = lVar17;
  uStack_130 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar8 + lVar19);
  func_0x00010c274200(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf493c0(0xc014000000000000,uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_128 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_160,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1e8,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(uStack_220);
  _objc_release(uStack_218);
  _objc_release(uStack_210);
  _objc_release(uStack_208);
  _objc_release(puStack_200);
  _objc_release(puStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1e0);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1b0);
  puStack_1d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = (long)_DAT_1127449d0;
  puVar13 = *(undefined **)(puVar8 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  puStack_1b0 = puVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar14;
  func_0x00010bf493a0(puVar13,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar8 + lVar17);
  puStack_1c0 = puVar13;
  puStack_180 = puVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  uStack_1d0 = uVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar7,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(puVar8 + lVar17);
  uStack_178 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar8 + lVar17);
  uStack_170 = uVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010bf49420(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_168 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1d8,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(puVar14);
  _objc_release(puStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(puStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1b0);
  if (puVar8[_DAT_1127449ac] == '\x01') {
    puStack_1c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar20 = (long)_DAT_1127449c0;
    puVar13 = *(undefined **)(puVar8 + lVar20);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lStack_228;
    puVar14 = *(undefined **)(puVar8 + lStack_228);
    puStack_1a8 = puVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar14;
    func_0x00010bf493a0(puVar13,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar8 + lVar20);
    puStack_1b8 = puVar13;
    puStack_1a0 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar8 + lVar17);
    func_0x00010c274200(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bf493c0(0xc014000000000000,uVar7,param_2,uVar16);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_1127449c4;
    uVar9 = *(undefined8 *)(puVar8 + lVar19);
    uStack_198 = uVar15;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar8 + lVar17);
    func_0x00010bf34860(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf493a0(uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = *(undefined **)(puVar8 + lVar19);
    uStack_190 = uVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined **)(puVar8 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf493c0(0xc014000000000000,puVar13,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_188 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c0,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar8);
    _objc_release(puVar13);
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar7);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_106294da4;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = PTR_PTR_1126c9460;
  puStack_250 = puVar13;
  puStack_248 = puVar8;
  ppuStack_240 = &puStack_c0;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_260 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_260,1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_106294e38;
  puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a0 = 0xc2000000;
  uStack_298 = 0x106294ed0;
  puStack_290 = &UNK_110842e18;
  puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c8 = 0xc2000000;
  uStack_2c0 = 0x106294f08;
  puStack_2b8 = &UNK_110841f20;
  puStack_2b0 = puVar13;
  puStack_288 = puVar13;
  puStack_280 = puVar14;
  puStack_278 = puVar8;
  ppuStack_270 = &ppuStack_240;
  func_0x00010bf03420(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_2a8,
                      &puStack_2d0);
  puVar13[_DAT_1127449bc] = 1;
  return;
}



/* Entry: 10629463c; end: 106294da3; -[SCContextSpotlightSwipeUpTeachingViewController _setupLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629463c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar12 = (long)_DAT_1127449cc;
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  puStack_100 = (undefined *)uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar13;
  func_0x00010bf493a0(uVar1,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  puStack_110 = (undefined *)uVar1;
  uStack_b0 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_120 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = (undefined *)lVar13;
  func_0x00010bf493a0(uVar2,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  uStack_130 = uVar2;
  uStack_a8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_148 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = lVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_150 = lVar13;
  func_0x00010bf493a0(uVar1,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  uStack_158 = uVar1;
  uStack_a0 = uVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_160 = uVar2;
  func_0x00010bf49420(0x406e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_1127449d8;
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  uStack_168 = uVar2;
  uStack_98 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_170 = uVar3;
  func_0x00010bf34860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(param_1 + _DAT_1127449d4);
  lVar13 = (long)_DAT_1127449c8;
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  uStack_90 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf34860(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  lStack_178 = lVar13;
  uStack_80 = uVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c274200(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf493c0(0xc014000000000000,uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_138,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uStack_170);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  _objc_release(uStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_130);
  _objc_release(puStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(puStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  _objc_release(puStack_100);
  puStack_128 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = (long)_DAT_1127449d0;
  puVar9 = *(undefined **)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  puStack_100 = puVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar13;
  func_0x00010bf493a0(puVar9,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  puStack_110 = puVar9;
  puStack_d0 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  uStack_120 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar4,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  uStack_c8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_c0 = uVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf49420(0x4039000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_128,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar13);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(puStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  _objc_release(puStack_100);
  if (*(char *)(param_1 + _DAT_1127449ac) == '\x01') {
    puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar14 = (long)_DAT_1127449c0;
    lVar12 = *(long *)(param_1 + lVar14);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lStack_178;
    puVar9 = *(undefined **)(param_1 + lStack_178);
    lStack_f8 = lVar12;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar9;
    func_0x00010bf493a0(lVar12,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar14);
    lStack_108 = lVar12;
    lStack_f0 = lVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c274200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf493c0(0xc014000000000000,uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_1127449c4;
    uVar5 = *(undefined8 *)(param_1 + lVar12);
    uStack_e8 = uVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf34860(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(param_1 + lVar12);
    uStack_e0 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(param_1 + lVar14);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf493c0(0xc014000000000000,lVar12,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_d8 = lVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_f0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_110,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(lVar13);
    _objc_release(param_1);
    _objc_release(lVar12);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lStack_108);
    _objc_release(puStack_100);
    _objc_release(lStack_f8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_106294da4;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR_PTR_1126c9460;
  lStack_1a0 = lVar12;
  lStack_198 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_106294e38;
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x106294ed0;
  puStack_1e0 = &UNK_110842e18;
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  uStack_210 = 0x106294f08;
  puStack_208 = &UNK_110841f20;
  puStack_200 = puVar11;
  puStack_1d8 = puVar11;
  puStack_1d0 = puVar9;
  puStack_1c8 = puVar10;
  ppuStack_1c0 = &puStack_190;
  func_0x00010bf03420(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_1f8,
                      &puStack_220);
  puVar11[_DAT_1127449bc] = 1;
  return;
}



/* Entry: 106294da4; end: 106294e37; -[SCContextSpotlightSwipeUpTeachingViewController operaRegisteredEventsForViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106294da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_38 = FUN_106294e38;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x106294ed0;
  puStack_60 = &UNK_110842e18;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106294f08;
  puStack_88 = &UNK_110841f20;
  puStack_80 = puVar3;
  puStack_58 = puVar3;
  puStack_50 = puVar1;
  puStack_48 = puVar2;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010bf03420(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78,
                      &puStack_a0);
  puVar3[_DAT_1127449bc] = 1;
  return;
}



/* Entry: 106294e38; end: 106294f43; -[SCContextSpotlightSwipeUpTeachingViewController _dismissView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106294e38(long param_1,undefined8 param_2)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106294ed0;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106294f08;
  puStack_58 = &UNK_110841f20;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010bf03420(0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                      &puStack_70);
  *(undefined1 *)(param_1 + _DAT_1127449bc) = 1;
  return;
}



/* Entry: 106294f44; end: 1062950ab; -[SCContextSpotlightSwipeUpTeachingViewController shouldPresentSwipeUpTeaching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106294f44(double param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  lVar8 = (long)_DAT_112744994;
  uVar2 = *(ulong *)(param_2 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2827c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar9 = (long)_DAT_112744998;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar9);
  func_0x00010c0c2560();
  if (uVar4 < (ulong)(long)iVar1) {
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    dVar10 = param_1;
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (dVar10 < param_1) {
      uVar2 = *(ulong *)(param_2 + lVar8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2827c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar7 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010c0c2da0(uVar7);
      return uVar4 < (ulong)(long)(int)uVar7;
    }
  }
  return false;
}



/* Entry: 1062950ac; end: 106295203; -[SCContextSpotlightSwipeUpTeachingViewController _incrementShowCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062950ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112744994;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2827c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar5);
  _objc_release(puVar4);
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2827c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106295204; end: 106295263; -[SCContextSpotlightSwipeUpTeachingViewController _resetCooldownDateAndShowCountBeforeCooldown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106295204(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be92880();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744994);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106295264; end: 106295323; -[SCContextSpotlightSwipeUpTeachingViewController _resetCooldownDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106295264(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112744998);
  func_0x00010bf51c00(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 + (double)((int)uVar2 * 0x15180),PTR__OBJC_CLASS___NSNumber_1126ae570)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + _DAT_112744994);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106295324; end: 1062953af; -[SCContextSpotlightSwipeUpTeachingViewController operaViewDidSendEvent:page:params:] */

void FUN_106295324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c9460;
  _objc_retain(param_3);
  func_0x00010c0f25e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be92880(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be03a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissView_11255e828);
    return;
  }
  return;
}



/* Entry: 1062953b0; end: 1062954cb; -[SCContextSpotlightSwipeUpTeachingViewController _startSwipeUpTeachingPresentationCountdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062953b0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar3 = (long)_DAT_112744998;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c0e1da0();
  if (iVar1 == 2) {
    lVar4 = (long)_DAT_11274499c;
    dVar6 = *(double *)(param_1 + lVar4);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c0e1d60();
    dVar5 = 2.0;
    if ((double)iVar1 <= dVar6) {
      dVar5 = *(double *)(param_1 + lVar4);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c0e1d60(uVar2);
      dVar5 = dVar5 - (double)(int)uVar2;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c0e1d60(uVar2);
    dVar5 = (double)(int)uVar2;
  }
  _objc_initWeak(auStack_48,param_1);
  uVar2 = 0;
  _dispatch_time(0,(long)(dVar5 * 1000000000.0));
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1062954cc;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010058c530(uVar2,PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1062954cc; end: 1062954f7;  */

void FUN_1062954cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062954f8; end: 106295517; -[SCContextSpotlightSwipeUpTeachingViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062954f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127449dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106295518; end: 10629552b; -[SCContextSpotlightSwipeUpTeachingViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106295518(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127449dc,param_3);
  return;
}



/* Entry: 10629552c; end: 106295637; -[SCContextSpotlightSwipeUpTeachingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10629552c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127449dc);
  _objc_storeStrong(param_1 + _DAT_1127449d0,0);
  _objc_storeStrong(param_1 + _DAT_1127449b4,0);
  _objc_storeStrong(param_1 + _DAT_1127449b0,0);
  _objc_storeStrong(param_1 + _DAT_1127449c4,0);
  _objc_storeStrong(param_1 + _DAT_1127449c0,0);
  _objc_storeStrong(param_1 + _DAT_1127449a8,0);
  _objc_storeStrong(param_1 + _DAT_1127449a4,0);
  _objc_storeStrong(param_1 + _DAT_1127449a0,0);
  _objc_storeStrong(param_1 + _DAT_112744998,0);
  _objc_storeStrong(param_1 + _DAT_112744994,0);
  _objc_storeStrong(param_1 + _DAT_1127449d4,0);
  _objc_storeStrong(param_1 + _DAT_1127449c8,0);
  _objc_storeStrong(param_1 + _DAT_1127449d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127449cc,0);
  return;
}



/* Entry: 106295638; end: 106295737; -[SCContextSpotlightActionsProvider initWithBoostCoordinator:circumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_106295638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0b08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106295738; end: 1062957fb; -[SCContextSpotlightActionsProvider fetchSpotlightSubcriptionActionsParamsWithSessionParamsResponse:] */

void FUN_106295738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109199f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e80(uVar1,param_2,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1062957fc; end: 10629598f;  */

void FUN_1062957fc(undefined8 param_1,undefined *param_2)

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
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *unaff_x25;
  undefined *puStack_1c8;
  undefined *puStack_1b8;
  undefined *puStack_130;
  undefined **ppuStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  _objc_retain(param_2);
  puVar19 = param_2;
  func_0x00010bf529e0();
  if (puVar19 == (undefined *)0x2) {
    puVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c93c8;
    _objc_opt_class();
    puVar4 = puVar2;
    _objc_opt_isKindOfClass();
    puVar19 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar19 = (undefined *)0x0;
    }
    _objc_retain(puVar19);
    _objc_release(puVar2);
  }
  else {
    puVar19 = (undefined *)0x0;
  }
  puVar2 = puVar19;
  func_0x00010bf0eac0();
  if ((int)puVar2 == 4) {
    puVar2 = puVar19;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfeddc0();
    bVar1 = (int)puVar4 != 0;
    _objc_release(puVar2);
  }
  else {
    bVar1 = false;
  }
  puVar2 = param_2;
  func_0x00010bf529e0();
  if ((puVar2 == (undefined *)0x1) || (bVar1)) {
    _objc_retain(param_2);
    puVar2 = param_2;
  }
  else {
    puVar4 = param_2;
    func_0x00010bf529e0();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar4 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar19);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar19);
  puVar19 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar19 = (undefined *)0x0;
  }
  _objc_retain(puVar19);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x2) {
    puVar4 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar2);
    puVar2 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) goto LAB_106295c10;
    puVar5 = puVar19;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar19;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar19;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar11;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar19;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar8);
    _objc_retain(puVar16);
    _objc_retain(puVar10);
    _objc_retain(puVar5);
    puVar2 = puVar4;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar17 = PTR_PTR_1126c9468;
    _objc_alloc_init(PTR_PTR_1126c9468);
    puVar6 = PTR_PTR_1126c9478;
    _objc_alloc_init(PTR_PTR_1126c9478);
    func_0x00010c1c0520(puVar17);
    _objc_release(puVar5);
    puVar2 = puVar9;
    func_0x00010bf85d80(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185be0(puVar17);
    _objc_release(puVar2);
    puVar2 = puVar4;
    FUN_10629a7c0(puVar4,puVar10,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar10);
    func_0x00010c20f560(puVar17);
    _objc_release(puVar2);
    func_0x00010c1d5540(puVar17);
    _objc_release(puVar8);
    puVar2 = puVar9;
    func_0x00010bfdc440();
    if ((int)puVar2 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = puVar9;
      func_0x00010c2427c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar9;
    func_0x00010bfe5ea0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar6);
    _objc_release(puVar2);
    puVar2 = puVar9;
    func_0x00010bfd4a60();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010c171440(puVar6);
    }
    else {
      puVar2 = puVar9;
      func_0x00010bf1a980(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c171440(puVar6);
      _objc_release(puVar12);
      _objc_release(puVar2);
    }
    puVar2 = puVar9;
    func_0x00010bfd4a60();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010c1706a0(puVar6);
    }
    else {
      puVar2 = puVar9;
      func_0x00010bf1a980(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1706a0(puVar6);
      _objc_release(puVar12);
      _objc_release(puVar2);
    }
    puVar2 = puVar20;
    func_0x00010bfd8b80();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010c185bc0(puVar6);
    }
    else {
      puVar2 = puVar20;
      func_0x00010c0b4520(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185bc0(puVar6);
      _objc_release(puVar12);
      _objc_release(puVar2);
    }
    puVar2 = puVar20;
    func_0x00010c0b4520(puVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070480();
    func_0x00010c1a5ce0(puVar6);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bfd3a00();
    _objc_release(puVar2);
    if ((int)puVar12 == 0) {
      puVar2 = PTR_PTR_1126b5b00;
      func_0x00010c0cb140(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010c0ccaa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126b5c68;
      func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010c0ccaa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161fe0();
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar12 = puVar2;
      func_0x00010c0ccaa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619e0();
      _objc_release(puVar12);
      puVar12 = puVar20;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c08fa60();
      if (puVar13 == (undefined *)0x0) {
        puVar13 = puVar9;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar13 = puVar20;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar12);
      puVar12 = puVar13;
      func_0x00010c08fa60();
      if (puVar12 == (undefined *)0x0) {
        puVar12 = puVar9;
        func_0x00010bfe5ea0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010c2932a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620();
        _objc_release(puVar14);
        _objc_release(puVar12);
        puVar12 = puVar9;
        func_0x00010c294420(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010c2932a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21f760();
        _objc_release(puVar14);
        _objc_release(puVar12);
        puVar12 = puVar9;
        func_0x00010bf85d80(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar2;
        func_0x00010c2932a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18af40();
        _objc_release(puVar14);
        _objc_release(puVar12);
        puVar12 = puVar9;
        func_0x00010bfd4a60();
        if ((int)puVar12 == 0) {
          puStack_1b8 = (undefined *)0x0;
        }
        else {
          puStack_1c8 = puVar9;
          func_0x00010bf1a980();
          _objc_retainAutoreleasedReturnValue();
          puStack_1b8 = puStack_1c8;
          func_0x00010bf12ea0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar14 = puVar2;
        func_0x00010c2932a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c170a80();
        _objc_release(puVar14);
        if ((int)puVar12 != 0) {
          _objc_release(puStack_1b8);
          _objc_release(puStack_1c8);
        }
        puVar14 = puVar9;
        func_0x00010bfd4a60();
        if ((int)puVar14 == 0) {
          puStack_1b8 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar9;
          func_0x00010bf1a980();
          _objc_retainAutoreleasedReturnValue();
          puStack_1b8 = puVar12;
          func_0x00010c15ade0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar15 = puVar2;
        func_0x00010c2932a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c171480();
        _objc_release(puVar15);
        if ((int)puVar14 == 0) goto LAB_1062965b8;
        _objc_release(puStack_1b8);
      }
      else {
        puVar12 = puVar2;
        func_0x00010c11a660(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e4140();
      }
      _objc_release(puVar12);
    }
    else {
      puVar2 = puVar4;
      func_0x00010bf0ea40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_1062965b8:
    func_0x00010c1d4fc0(puVar6);
    _objc_release(puVar13);
    _objc_release(puVar2);
    func_0x00010c20f3e0(puVar17);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(puVar6);
    _objc_release(puVar17);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar16);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  else {
LAB_106295c10:
    _objc_retain(puVar19);
    puVar4 = PTR_PTR_1126c9468;
    _objc_alloc_init();
    puVar2 = puVar19;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar7 = puVar19;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = 0;
    uStack_c8 = 0x2020000000;
    uStack_c0 = 0;
    puVar2 = puVar7;
    puStack_d0 = &uStack_d8;
    func_0x00010bfa29a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106296a8c;
    puStack_e8 = &UNK_11086fcd8;
    puStack_e0 = &uStack_d8;
    func_0x00010c0bed40();
    _objc_release(puVar2);
    puVar2 = puVar19;
    func_0x00010c0b3760(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0520(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar19;
    func_0x00010c0ea8e0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5540(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar7;
    func_0x00010c08bda0();
    if ((((puVar2 < (undefined *)0x19) ||
         ((puVar2 < (undefined *)0x23 && ((1L << ((ulong)puVar2 & 0x3f) & 0x510000000U) != 0)))) &&
        (puVar2 = puVar7, func_0x00010c08bda0(), ((ulong)puVar2 & 0xfffffffffffffffe) != 0x12)) ||
       (*(char *)(puStack_d0 + 3) == '\x01')) {
      puVar2 = puVar7;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c08fa60();
      if (puVar11 == (undefined *)0x0) {
        puVar16 = puVar19;
        func_0x00010c0ea8e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar16;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar16);
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar8 = puVar9;
        _objc_opt_isKindOfClass(puVar9,puVar16);
        puVar16 = puVar9;
        if (((ulong)puVar8 & 1) == 0) {
          puVar16 = (undefined *)0x0;
        }
        _objc_retain(puVar16);
        _objc_release(puVar9);
        puVar8 = puVar16;
      }
      else {
        puVar16 = puVar7;
        func_0x00010c290fa0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar16;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c185be0(puVar4);
      if (puVar11 != (undefined *)0x0) {
        _objc_release(puVar8);
      }
      _objc_release(puVar16);
      _objc_release(puVar10);
      _objc_release(puVar2);
      ppuStack_128 = &puStack_130;
      puStack_130 = (undefined *)0x0;
      pcStack_120 = (code *)0x3032000000;
      puStack_118 = (undefined *)0x106296a9c;
      puStack_110 = (undefined *)0x106296aac;
      puStack_108 = (undefined *)0x0;
      puVar2 = puVar7;
      func_0x00010c260880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar10 = puVar7;
      if (puVar2 == (undefined *)0x0) {
        func_0x00010c290fa0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar10;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c12a0();
      }
      else {
        func_0x00010c260880(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar10;
        func_0x00010c25fe60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c12c0();
      }
      _objc_release(puVar2);
      _objc_release(puVar10);
      if (ppuStack_128[5] != (undefined *)0x0) {
        puVar2 = puVar7;
        func_0x00010c290fa0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        func_0x00010c25b200(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010c259cc0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar2;
        FUN_10629acd8(puVar2,puVar10,puVar11,ppuStack_128[5]);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f560(puVar4);
        _objc_release(puVar16);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar2);
      }
      __Block_object_dispose(&puStack_130,8);
      puVar2 = puStack_108;
    }
    else {
      puVar10 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar11 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar2);
      puVar2 = puVar10;
      if (((ulong)puVar11 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar10);
      if (puVar2 == (undefined *)0x0) {
        unaff_x25 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar11 = unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar10);
        puVar10 = unaff_x25;
        if (((ulong)puVar11 & 1) == 0) {
          puVar10 = (undefined *)0x0;
        }
        _objc_retain(puVar10);
        _objc_release(unaff_x25);
        if (puVar10 == (undefined *)0x0) {
          puVar11 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar16 = puVar11;
          _objc_opt_isKindOfClass(puVar11,puVar10);
          puVar10 = puVar11;
          if (((ulong)puVar16 & 1) == 0) {
            puVar10 = (undefined *)0x0;
          }
          _objc_retain(puVar10);
          _objc_release(puVar11);
          unaff_x25 = (undefined *)0x0;
          bVar1 = true;
        }
        else {
          bVar1 = false;
          puVar10 = unaff_x25;
        }
      }
      else {
        bVar1 = false;
      }
      func_0x00010c185be0(puVar4);
      if (bVar1) {
        _objc_release(puVar10);
      }
      if (puVar2 == (undefined *)0x0) {
        _objc_release(unaff_x25);
      }
    }
    _objc_release(puVar2);
    puVar10 = PTR_PTR_1126c9478;
    _objc_alloc_init(PTR_PTR_1126c9478);
    puVar11 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar16 = puVar11;
    _objc_opt_isKindOfClass(puVar11,puVar2);
    puVar2 = puVar11;
    if (((ulong)puVar16 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar11);
    func_0x00010c185bc0(puVar10);
    _objc_release(puVar2);
    puVar11 = PTR_PTR_1126b5b00;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010c0ccaa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179660();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b5c68;
    func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar11;
    func_0x00010c0ccaa0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161fe0();
    _objc_release(puVar16);
    _objc_release(puVar2);
    puVar2 = puVar11;
    func_0x00010c0ccaa0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1619e0();
    _objc_release(puVar2);
    puVar2 = puVar7;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar16;
    func_0x00010c08fa60();
    _objc_release(puVar16);
    _objc_release(puVar2);
    puVar2 = puVar7;
    puVar16 = puVar11;
    if (puVar8 == (undefined *)0x0) {
      puVar8 = puVar7;
      func_0x00010c290fa0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_128 = (undefined **)0xc2000000;
      pcStack_120 = FUN_106296b70;
      puStack_118 = &UNK_1108450c8;
      puStack_110 = puVar11;
      func_0x00010c0c12a0();
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = puVar7;
      func_0x00010c290fa0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar11;
      func_0x00010c2932a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f760();
      _objc_release(puVar17);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010c290fa0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2932a0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18af40();
    }
    else {
      func_0x00010c290fa0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11a660(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4140();
    }
    _objc_release(puVar16);
    _objc_release(puVar8);
    _objc_release(puVar2);
    func_0x00010c1d4fc0(puVar10);
    func_0x00010c20f3e0(puVar4);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar19;
  }
  _objc_release(puVar4);
  _objc_release(puVar19);
  _objc_release(puVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106295990; end: 106296a8b;  */

void FUN_106295990(undefined8 param_1,undefined *param_2)

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
  undefined *unaff_x25;
  undefined *puStack_188;
  undefined *puStack_178;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x2) {
    puVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar2);
    puVar2 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c160280();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25b200();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c160280();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar3;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      _objc_retain(puVar15);
      _objc_retain(puVar10);
      _objc_retain(puVar6);
      _objc_retain(puVar2);
      puVar7 = puVar4;
      func_0x00010bf0ea40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126c9468;
      _objc_alloc_init(PTR_PTR_1126c9468);
      puVar16 = PTR_PTR_1126c9478;
      _objc_alloc_init(PTR_PTR_1126c9478);
      func_0x00010c1c0520(puVar7);
      _objc_release(puVar2);
      puVar18 = puVar8;
      func_0x00010bf85d80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185be0(puVar7);
      _objc_release(puVar18);
      puVar18 = puVar4;
      FUN_10629a7c0(puVar4,puVar6,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar6);
      func_0x00010c20f560(puVar7);
      _objc_release(puVar18);
      func_0x00010c1d5540(puVar7);
      _objc_release(puVar15);
      puVar18 = puVar8;
      func_0x00010bfdc440();
      if ((int)puVar18 == 0) {
        puVar18 = (undefined *)0x0;
      }
      else {
        puVar18 = puVar8;
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar17 = puVar8;
      func_0x00010bfe5ea0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(puVar16);
      _objc_release(puVar17);
      puVar17 = puVar8;
      func_0x00010bfd4a60();
      if (((ulong)puVar17 & 1) == 0) {
        func_0x00010c171440(puVar16);
      }
      else {
        puVar17 = puVar8;
        func_0x00010bf1a980(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar17;
        func_0x00010c15ade0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c171440(puVar16);
        _objc_release(puVar11);
        _objc_release(puVar17);
      }
      puVar17 = puVar8;
      func_0x00010bfd4a60();
      if (((ulong)puVar17 & 1) == 0) {
        func_0x00010c1706a0(puVar16);
      }
      else {
        puVar17 = puVar8;
        func_0x00010bf1a980(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar17;
        func_0x00010bf12ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1706a0(puVar16);
        _objc_release(puVar11);
        _objc_release(puVar17);
      }
      puVar17 = puVar18;
      func_0x00010bfd8b80();
      if (((ulong)puVar17 & 1) == 0) {
        func_0x00010c185bc0(puVar16);
      }
      else {
        puVar17 = puVar18;
        func_0x00010c0b4520(puVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar17;
        func_0x00010c0b4680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c185bc0(puVar16);
        _objc_release(puVar11);
        _objc_release(puVar17);
      }
      puVar17 = puVar18;
      func_0x00010c0b4520(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c070480();
      func_0x00010c1a5ce0(puVar16);
      _objc_release(puVar17);
      puVar17 = puVar4;
      func_0x00010bf0ea40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar17;
      func_0x00010bfd3a00();
      _objc_release(puVar17);
      if ((int)puVar11 == 0) {
        puVar17 = PTR_PTR_1126b5b00;
        func_0x00010c0cb140(PTR_PTR_1126b5b00);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar17;
        func_0x00010c0ccaa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c179660();
        _objc_release(puVar11);
        puVar11 = PTR_PTR_1126b5c68;
        func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar17;
        func_0x00010c0ccaa0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c161fe0();
        _objc_release(puVar12);
        _objc_release(puVar11);
        puVar11 = puVar17;
        func_0x00010c0ccaa0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1619e0();
        _objc_release(puVar11);
        puVar11 = puVar18;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c08fa60();
        if (puVar12 == (undefined *)0x0) {
          puVar12 = puVar8;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar12 = puVar18;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar11);
        puVar11 = puVar12;
        func_0x00010c08fa60();
        if (puVar11 == (undefined *)0x0) {
          puVar11 = puVar8;
          func_0x00010bfe5ea0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar17;
          func_0x00010c2932a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e620();
          _objc_release(puVar13);
          _objc_release(puVar11);
          puVar11 = puVar8;
          func_0x00010c294420(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar17;
          func_0x00010c2932a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21f760();
          _objc_release(puVar13);
          _objc_release(puVar11);
          puVar11 = puVar8;
          func_0x00010bf85d80(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar17;
          func_0x00010c2932a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18af40();
          _objc_release(puVar13);
          _objc_release(puVar11);
          puVar11 = puVar8;
          func_0x00010bfd4a60();
          if ((int)puVar11 == 0) {
            puStack_178 = (undefined *)0x0;
          }
          else {
            puStack_188 = puVar8;
            func_0x00010bf1a980();
            _objc_retainAutoreleasedReturnValue();
            puStack_178 = puStack_188;
            func_0x00010bf12ea0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar13 = puVar17;
          func_0x00010c2932a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c170a80();
          _objc_release(puVar13);
          if ((int)puVar11 != 0) {
            _objc_release(puStack_178);
            _objc_release(puStack_188);
          }
          puVar13 = puVar8;
          func_0x00010bfd4a60();
          if ((int)puVar13 == 0) {
            puStack_178 = (undefined *)0x0;
          }
          else {
            puVar11 = puVar8;
            func_0x00010bf1a980();
            _objc_retainAutoreleasedReturnValue();
            puStack_178 = puVar11;
            func_0x00010c15ade0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar14 = puVar17;
          func_0x00010c2932a0(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c171480();
          _objc_release(puVar14);
          if ((int)puVar13 == 0) goto LAB_1062965b8;
          _objc_release(puStack_178);
        }
        else {
          puVar11 = puVar17;
          func_0x00010c11a660(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e4140();
        }
        _objc_release(puVar11);
      }
      else {
        puVar17 = puVar4;
        func_0x00010bf0ea40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar17;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_1062965b8:
      func_0x00010c1d4fc0(puVar16);
      _objc_release(puVar12);
      _objc_release(puVar17);
      func_0x00010c20f3e0(puVar7);
      puVar17 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar16);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(puVar15);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      goto LAB_106296a08;
    }
  }
  _objc_retain(puVar3);
  puVar2 = PTR_PTR_1126c9468;
  _objc_alloc_init();
  puVar4 = puVar3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puVar6 = puVar4;
  puStack_90 = &uStack_98;
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106296a8c;
  puStack_a8 = &UNK_11086fcd8;
  puStack_a0 = &uStack_98;
  func_0x00010c0bed40();
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010c0b3760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0520(puVar2);
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010c0ea8e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5540(puVar2);
  _objc_release(puVar6);
  puVar6 = puVar4;
  func_0x00010c08bda0();
  if ((((puVar6 < (undefined *)0x19) ||
       ((puVar6 < (undefined *)0x23 && ((1L << ((ulong)puVar6 & 0x3f) & 0x510000000U) != 0)))) &&
      (puVar6 = puVar4, func_0x00010c08bda0(), ((ulong)puVar6 & 0xfffffffffffffffe) != 0x12)) ||
     (*(char *)(puStack_90 + 3) == '\x01')) {
    puVar6 = puVar4;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      puVar15 = puVar3;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar15);
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar7 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar15);
      puVar15 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar15 = (undefined *)0x0;
      }
      _objc_retain(puVar15);
      _objc_release(puVar8);
      puVar7 = puVar15;
    }
    else {
      puVar15 = puVar4;
      func_0x00010c290fa0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar15;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c185be0(puVar2);
    if (puVar10 != (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar6);
    ppuStack_e8 = &puStack_f0;
    puStack_f0 = (undefined *)0x0;
    pcStack_e0 = (code *)0x3032000000;
    puStack_d8 = (undefined *)0x106296a9c;
    puStack_d0 = (undefined *)0x106296aac;
    puStack_c8 = (undefined *)0x0;
    puVar6 = puVar4;
    func_0x00010c260880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar9 = puVar4;
    if (puVar6 == (undefined *)0x0) {
      func_0x00010c290fa0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c12a0();
    }
    else {
      func_0x00010c260880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010c25fe60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c12c0();
    }
    _objc_release(puVar6);
    _objc_release(puVar9);
    if (ppuStack_e8[5] != (undefined *)0x0) {
      puVar6 = puVar4;
      func_0x00010c290fa0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c25b200(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010c259cc0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      FUN_10629acd8(puVar6,puVar9,puVar10,ppuStack_e8[5]);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20f560(puVar2);
      _objc_release(puVar15);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
    }
    __Block_object_dispose(&puStack_f0,8);
    puVar6 = puStack_c8;
  }
  else {
    puVar9 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar6);
    puVar6 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar9);
    if (puVar6 == (undefined *)0x0) {
      unaff_x25 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar10 = unaff_x25;
      _objc_opt_isKindOfClass(unaff_x25,puVar9);
      puVar9 = unaff_x25;
      if (((ulong)puVar10 & 1) == 0) {
        puVar9 = (undefined *)0x0;
      }
      _objc_retain(puVar9);
      _objc_release(unaff_x25);
      if (puVar9 == (undefined *)0x0) {
        puVar10 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar15 = puVar10;
        _objc_opt_isKindOfClass(puVar10,puVar9);
        puVar9 = puVar10;
        if (((ulong)puVar15 & 1) == 0) {
          puVar9 = (undefined *)0x0;
        }
        _objc_retain(puVar9);
        _objc_release(puVar10);
        unaff_x25 = (undefined *)0x0;
        bVar1 = true;
      }
      else {
        bVar1 = false;
        puVar9 = unaff_x25;
      }
    }
    else {
      bVar1 = false;
    }
    func_0x00010c185be0(puVar2);
    if (bVar1) {
      _objc_release(puVar9);
    }
    if (puVar6 == (undefined *)0x0) {
      _objc_release(unaff_x25);
    }
  }
  _objc_release(puVar6);
  puVar9 = PTR_PTR_1126c9478;
  _objc_alloc_init(PTR_PTR_1126c9478);
  puVar10 = puVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar15 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar6);
  puVar6 = puVar10;
  if (((ulong)puVar15 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar10);
  func_0x00010c185bc0(puVar9);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b5b00;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010c0ccaa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179660();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b5c68;
  func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar6;
  func_0x00010c0ccaa0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(puVar15);
  _objc_release(puVar10);
  puVar10 = puVar6;
  func_0x00010c0ccaa0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1619e0();
  _objc_release(puVar10);
  puVar10 = puVar4;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar15;
  func_0x00010c08fa60();
  _objc_release(puVar15);
  _objc_release(puVar10);
  puVar10 = puVar4;
  puVar15 = puVar6;
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar4;
    func_0x00010c290fa0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_e8 = (undefined **)0xc2000000;
    pcStack_e0 = FUN_106296b70;
    puStack_d8 = &UNK_1108450c8;
    puStack_d0 = puVar6;
    func_0x00010c0c12a0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar4;
    func_0x00010c290fa0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar6;
    func_0x00010c2932a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760();
    _objc_release(puVar16);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c290fa0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2932a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18af40();
  }
  else {
    func_0x00010c290fa0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11a660(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
  }
  _objc_release(puVar15);
  _objc_release(puVar7);
  _objc_release(puVar10);
  func_0x00010c1d4fc0(puVar9);
  func_0x00010c20f3e0(puVar2);
  puVar17 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar9);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar4 = puVar3;
LAB_106296a08:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 106296a8c; end: 106296ab3;  */

void FUN_106296a8c(long param_1)

{
  undefined1 in_w4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_w4;
  return;
}



/* Entry: 106296ab4; end: 106296b6b;  */

void FUN_106296ab4(long param_1,undefined8 param_2)

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



/* Entry: 106296b6c; end: 106296b6f;  */

void FUN_106296b6c(void)

{
  return;
}



/* Entry: 106296b70; end: 106296bbf;  */

void FUN_106296b70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2932a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106296bc0; end: 106296bc3;  */

void FUN_106296bc0(void)

{
  return;
}



/* Entry: 106296bc4; end: 106296d6b; -[SCContextSpotlightActionsProvider fetchSpotlightActionsForSessionParams:withSessionParamsResponse:] */

void FUN_106296bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x18));
  func_0x00010bfaa620(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106296d6c;
  puStack_80 = &UNK_110919ac8;
  _objc_copyWeak(auStack_78,auStack_70);
  uVar1 = param_3;
  func_0x00010bf41860(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_68);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106296d6c; end: 1062976cb;  */

void FUN_106296d6c(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_160;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  uStack_f0 = 0x106296a9c;
  uStack_e8 = 0x106296aac;
  uStack_e0 = 0;
  func_0x00010c0c0800(param_3);
  lVar16 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07dd00();
  _objc_release(lVar16);
  lVar16 = param_2;
  func_0x00010843715c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar16 == 0) {
    puStack_160 = (undefined *)0x0;
    puStack_150 = (undefined *)0x0;
    puStack_148 = (undefined *)0x0;
    puStack_140 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar16;
    func_0x00010c22a980();
    puStack_140 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 < 0) {
      puStack_140 = (undefined *)0x0;
    }
    else {
      func_0x00010c22a980(lVar16);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar2 = lVar16;
    func_0x00010bf1f680();
    puStack_148 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 == 0) {
      puStack_148 = (undefined *)0x0;
    }
    else {
      func_0x00010bf1f680(lVar16);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar2 = lVar16;
    func_0x00010c25fae0();
    puStack_150 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 < 0) {
      puStack_150 = (undefined *)0x0;
    }
    else {
      func_0x00010c25fae0(lVar16);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar2 = lVar16;
    func_0x00010c123100();
    puStack_160 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 < 0) {
      puStack_160 = (undefined *)0x0;
    }
    else {
      func_0x00010c123100(lVar16);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  lVar2 = param_2;
  func_0x00010c08bda0();
  if ((lVar2 == 0x21) || (lVar2 == 0x1b)) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_2;
    FUN_106297704(param_2,lVar2);
    _objc_release(lVar2);
    if ((int)lVar3 != 0) goto LAB_106296f9c;
  }
  else {
LAB_106296f9c:
    lVar2 = param_2;
    func_0x00010c08bda0();
    if (lVar2 == 0x12) {
      lVar2 = param_2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06d7a0();
      _objc_release(lVar2);
    }
  }
  lVar2 = param_2;
  func_0x00010c08bda0();
  if ((lVar2 == 0x21) || (lVar2 == 0x1b)) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    func_0x000108f49488();
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25b720();
  if (lVar3 != 4) {
    lVar3 = param_2;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c082620();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  uVar4 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_retain(param_2);
  _objc_retain(uVar4);
  lVar2 = param_2;
  func_0x00010c08bda0();
  if (((lVar2 != 0x12) && (lVar2 = param_2, func_0x00010c08bda0(), lVar2 != 0x13)) &&
     (lVar2 = param_2, func_0x00010c08bda0(), lVar2 != 0xc)) {
    lVar2 = param_2;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25b720();
    if (lVar3 != 2) {
      lVar3 = param_2;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c25b720();
      if (lVar5 != 0xc) {
        lVar5 = param_2;
        func_0x00010c25a6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar5;
        func_0x00010c25b720();
        _objc_release(lVar5);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if (lVar12 != 10) {
          lVar2 = param_2;
          func_0x00010c25a6e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c25b720();
          _objc_release(lVar2);
          if (lVar3 == 0xb) {
            uVar13 = uVar4;
            func_0x000108f4b648();
            _objc_release(uVar4);
            _objc_release(param_2);
            _objc_release(uVar4);
            if ((uVar13 & 1) == 0) goto LAB_106297134;
          }
          else {
            lVar2 = param_2;
            func_0x00010bf9b320();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar2;
            func_0x00010c06b7e0();
            if ((int)lVar3 == 0) {
              _objc_release(lVar2);
              _objc_release(uVar4);
              _objc_release(param_2);
              _objc_release(uVar4);
            }
            else {
              _objc_retain(param_2);
              lVar3 = param_2;
              func_0x00010bf9b320();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar3;
              func_0x00010c06b7e0();
              _objc_release(lVar3);
              if ((int)lVar5 == 0) {
                _objc_release(param_2);
                _objc_release(lVar2);
                _objc_release(uVar4);
                _objc_release(param_2);
                _objc_release(uVar4);
                goto LAB_106297134;
              }
              uStack_b0 = 0;
              uStack_a0 = 0x2020000000;
              uStack_98 = 0;
              lVar3 = param_2;
              puStack_a8 = &uStack_b0;
              func_0x00010bfa29a0(param_2);
              _objc_retainAutoreleasedReturnValue();
              puStack_d8 = puVar6;
              uStack_d0 = 0xc2000000;
              uStack_c8 = 0x106298330;
              puStack_c0 = &UNK_110919bc8;
              puStack_b8 = &uStack_b0;
              func_0x00010c0bed40();
              _objc_release(lVar3);
              bVar1 = *(byte *)(puStack_a8 + 3);
              __Block_object_dispose(&uStack_b0,8);
              _objc_release(param_2);
              _objc_release(lVar2);
              _objc_release(uVar4);
              _objc_release(param_2);
              _objc_release(uVar4);
              if ((bVar1 & 1) == 0) goto LAB_106297134;
            }
          }
          lVar2 = param_2;
          func_0x00010c08bda0();
          if ((lVar2 == 0x21) || (lVar2 == 0x1b)) {
            param_1 = param_1 + 0x20;
            _objc_loadWeakRetained(param_1);
            FUN_106297704(param_2,param_1);
            _objc_release(param_1);
          }
          goto LAB_106297134;
        }
        goto LAB_106297118;
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
LAB_106297118:
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar4);
LAB_106297134:
  puVar6 = PTR_PTR_1126c9480;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c500();
  func_0x00010c08bda0();
  lVar12 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b5c0();
  func_0x00010c24b7a0();
  func_0x00010c24b580();
  func_0x00010c08bda0();
  lVar7 = param_2;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0d21c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24ba40();
  func_0x00010c08bda0();
  _objc_retain(param_2);
  lVar9 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c07f520();
  _objc_release(lVar9);
  if ((((int)lVar10 != 0) && (lVar9 = param_2, func_0x00010c08bda0(), lVar9 != 0x12)) &&
     (lVar9 = param_2, func_0x00010c08bda0(), lVar9 != 0x13)) {
    lVar9 = param_2;
    func_0x00010bf9b320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b7e0();
    _objc_release(lVar9);
  }
  _objc_release(param_2);
  func_0x00010c0452c0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = param_2;
  puStack_88 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar16);
  _objc_release(puStack_160);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b0,8);
  uVar15 = 8;
  __Block_object_dispose(&uStack_108);
  __Unwind_Resume();
  _objc_retain(uVar15);
  lVar16 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar14 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = uVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 1062976cc; end: 106297703;  */

void FUN_1062976cc(long param_1,undefined8 param_2)

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



/* Entry: 106297704; end: 106297783;  */

undefined8 FUN_106297704(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08bda0();
  if (((lVar1 == 0x1b) || (lVar1 = param_1, func_0x00010c08bda0(), lVar1 == 0x21)) &&
     (uVar2 = param_2, func_0x000108f4887c(), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 106297784; end: 1062978eb;  */

void FUN_106297784(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c06d7a0();
  if (((ulong)puVar3 & 1) == 0) {
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar3 = puVar1;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar4 != (undefined *)0x0) {
      puVar1 = (undefined *)(param_1 + 0x20);
      _objc_loadWeakRetained(puVar1);
      puVar3 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfaa600(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_1062978c4;
    }
  }
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_1062978c4:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062978ec; end: 106297b53; -[SCContextSpotlightActionsProvider fetchSpotlightActionsWithBoostForSessionParams:actionParams:] */

void FUN_1062978ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25b720();
  _objc_release(lVar1);
  lVar1 = param_3;
  lVar3 = param_3;
  if (lVar2 == 0xf) {
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b200(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107b2883c();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107b288cc(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar7 = uVar6;
  func_0x00010c0b8600(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf9b320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  func_0x00010b611854(0,lVar2);
  lVar9 = param_3;
  func_0x00010bf9b320(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  func_0x00010b611948(0,lVar9);
  uVar11 = param_4;
  FUN_106297fb8(param_4,uVar8,uVar10,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2519e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106297b54; end: 106297fb7;  */

void FUN_106297b54(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  double dVar18;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b5b98;
  _objc_opt_class(PTR_PTR_1126b5b98);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar17);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf9b320(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010b611854(uVar1,uVar6);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf9b320(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010b611948(uVar1,uVar6);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  func_0x00010c123100();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c067ec0();
  lVar16 = (long)(int)uVar9;
  _objc_release(uVar8);
  dVar18 = param_1;
  if (uVar1 != 0) {
    uVar8 = uVar6;
    func_0x00010bf9b320(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123160();
    dVar18 = param_1;
    _objc_release(uVar8);
    uVar10 = uVar4;
    func_0x00010c07bea0();
    if (param_1 <= 0.0) {
      lVar16 = lVar16 + (uVar10 & 0xffffffff);
    }
    else {
      lVar16 = lVar16 - (ulong)((uint)uVar10 ^ 1);
    }
  }
  if (lVar16 < 1) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar10 = *(ulong *)(param_2 + 0x20);
  uVar2 = *(ulong *)(param_2 + 0x28);
  _objc_retain(uVar10);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  uVar11 = uVar10;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c25b720();
  if (uVar12 == 0xf) {
LAB_106297d54:
    _objc_release(uVar11);
LAB_106297d5c:
    uVar11 = uVar2;
    func_0x00010bf1f680();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c067ec0();
    _objc_release(uVar11);
    if (-1 < (int)uVar12) {
      lVar16 = (long)(int)uVar12;
      if (uVar1 != 0) {
        uVar11 = uVar10;
        func_0x00010bf9b320(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f9a0();
        _objc_release(uVar11);
        func_0x00010c06d760();
        if (dVar18 <= 0.0) {
          lVar16 = lVar16 + (uVar4 & 0xffffffff);
        }
        else {
          lVar16 = lVar16 - (ulong)((uint)uVar4 ^ 1);
        }
      }
      if (0 < lVar16) {
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106297f20;
      }
    }
  }
  else {
    uVar12 = uVar10;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c25b720();
    if ((uVar13 == 0xb) || (uVar13 = uVar2, func_0x00010c07f3e0(), (uVar13 & 1) != 0)) {
      _objc_release(uVar12);
      goto LAB_106297d54;
    }
    _objc_retain(uVar10);
    uVar13 = uVar10;
    func_0x00010bf9b320();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c06b7e0();
    _objc_release(uVar13);
    if ((uVar14 & 1) != 0) {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x2020000000;
      uStack_78 = 0;
      uVar13 = uVar10;
      func_0x00010bfa29a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      dVar18 = 1.60807493534087e-314;
      func_0x00010c0bed40();
      _objc_release(uVar13);
      cVar3 = *(char *)(puStack_88 + 3);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uVar10);
      if (cVar3 != '\x01') goto LAB_106297f0c;
      uVar13 = uVar10;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c06d7a0();
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      if ((uVar14 & 1) == 0) goto LAB_106297f1c;
      goto LAB_106297d5c;
    }
    _objc_release(uVar10);
LAB_106297f0c:
    _objc_release(uVar12);
    _objc_release(uVar11);
  }
LAB_106297f1c:
  puVar15 = (undefined *)0x0;
LAB_106297f20:
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar10);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  FUN_106297fb8(uVar6,(int)uVar5,(int)uVar7,puVar17,puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar17);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106297fb8; end: 1062980cb;  */

void FUN_106297fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9488;
  _objc_retain(param_1);
  func_0x00010bf4f1e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9740();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9700(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c123140();
  _objc_release(param_1);
  if (lVar2 == 1) {
    func_0x00010c2b6a00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b69e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062980cc; end: 106298197; -[SCContextSpotlightActionsProvider fetchSpotlightCreateActionWithSessionParamsResponse:] */

void FUN_1062980cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010bfad7a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110919b28);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2519e0(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106298198; end: 1062981b7;  */

bool FUN_106298198(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 == 2;
}



/* Entry: 1062981b8; end: 10629821b;  */

void FUN_1062981b8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dfd40(param_2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93c8;
  _objc_opt_class(PTR_PTR_1126c93c8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10629821c; end: 1062982e7;  */

void FUN_10629821c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd3a00();
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beeed20();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126af5d0;
    if ((int)uVar2 == 0x2c) {
      uVar1 = param_2;
      func_0x00010beedca0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_1062982cc;
    }
  }
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
LAB_1062982cc:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062982e8; end: 1062983a3; -[SCContextSpotlightActionsProvider .cxx_destruct] */

void FUN_1062982e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062983a4; end: 106298547;  */

void FUN_1062983a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_5);
  uVar4 = uVar3;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106298548; end: 1062986f3;  */

void FUN_106298548(undefined8 param_1,undefined *param_2)

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
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puStack_228;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  _objc_retain(param_2);
  puVar25 = param_2;
  func_0x00010bf529e0();
  if (puVar25 == (undefined *)0x2) {
    puVar24 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c93c8;
    _objc_opt_class();
    puVar4 = puVar24;
    _objc_opt_isKindOfClass();
    puVar25 = puVar24;
    if (((ulong)puVar4 & 1) == 0) {
      puVar25 = (undefined *)0x0;
    }
    _objc_retain(puVar25);
    _objc_release(puVar24);
  }
  else {
    puVar25 = (undefined *)0x0;
  }
  puVar24 = puVar25;
  func_0x00010bfdcee0();
  puVar4 = puVar25;
  func_0x00010bf0eac0();
  if ((int)puVar4 == 4) {
    puVar4 = puVar25;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfeddc0();
    bVar2 = (int)puVar5 != 0;
    _objc_release(puVar4);
  }
  else {
    bVar2 = false;
  }
  puVar4 = param_2;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x1 || (bVar2 || ((ulong)puVar24 & 1) != 0)) {
    _objc_retain();
    puVar24 = param_2;
  }
  else {
    puVar4 = param_2;
    func_0x00010bf529e0();
    puVar24 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar4 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
  }
  _objc_release(puVar25);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar24 = puVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  puVar4 = puVar24;
  _objc_opt_isKindOfClass(puVar24,puVar25);
  puVar25 = puVar24;
  if (((ulong)puVar4 & 1) == 0) {
    puVar25 = (undefined *)0x0;
  }
  _objc_retain(puVar25);
  _objc_release(puVar24);
  puVar24 = puVar3;
  func_0x00010bf529e0();
  if (puVar24 == (undefined *)0x2) {
    puVar4 = puVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar24);
    puVar24 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar24 = (undefined *)0x0;
    }
    _objc_retain(puVar24);
    _objc_release(puVar4);
    if (puVar24 == (undefined *)0x0) goto LAB_106298928;
    puVar8 = puVar25;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar25;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar25;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar25;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    uVar22 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(puVar4);
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    _objc_retain(uVar1);
    _objc_retain(0);
    _objc_retain(uVar22);
    _objc_retain(puVar25);
    _objc_retain(puVar17);
    _objc_retain(puVar15);
    _objc_retain(puVar8);
    puVar24 = puVar4;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar24;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    puVar24 = puVar7;
    func_0x00010bfdc440();
    puVar26 = (undefined *)0x0;
    if ((int)puVar24 != 0) {
      puVar26 = puVar7;
      func_0x00010c2427c0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar24 = puVar7;
    func_0x00010bfd4a60();
    if ((int)puVar24 == 0) {
      puStack_228 = (undefined *)0x0;
    }
    else {
      puStack_228 = puVar7;
      func_0x00010bf1a980();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR_PTR_1126c9490;
    _objc_alloc_init();
    func_0x00010c1c0520();
    _objc_release(puVar8);
    puVar24 = puVar4;
    func_0x00010bf0ea40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar24;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar10);
    _objc_release(puVar11);
    _objc_release(puVar24);
    func_0x00010c1d5540(puVar10);
    puVar24 = puVar25;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    puVar11 = puVar24;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c25b7c0();
    _objc_release(puVar11);
    _objc_release(puVar24);
    if (puVar12 == (undefined *)0x24) {
      puVar24 = puVar4;
      func_0x00010bf0ea40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar24;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined *)0x0) {
        puVar18 = puVar4;
        func_0x00010bf0ea40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar18;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar19;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216240(puVar10);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar18);
      }
      else {
        func_0x00010c216240(puVar10);
      }
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar24);
    }
    puVar24 = puVar4;
    func_0x00010bf0ea40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar24;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar11);
    _objc_release(puVar24);
    puVar24 = puVar26;
    func_0x00010c0b4520(puVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar24;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar11);
    _objc_release(puVar24);
    func_0x00010c078f60(puVar7);
    func_0x00010c1b2ee0(puVar10);
    puVar24 = puVar4;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar24 != (undefined *)0x0) {
      puVar24 = PTR_PTR_1126c9498;
      _objc_alloc(PTR_PTR_1126c9498);
      puVar11 = puVar4;
      func_0x00010c260dc0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar4;
      func_0x00010c260dc0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03dda0(puVar24);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar12);
      _objc_release(puVar11);
      func_0x00010c1ea040(puVar10);
      _objc_release(puVar24);
    }
    puVar24 = puVar6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar24;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    puVar24 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    puVar12 = puVar11;
    _objc_opt_isKindOfClass(puVar11,puVar24);
    puVar24 = puVar11;
    if (((ulong)puVar12 & 1) == 0) {
      puVar24 = (undefined *)0x0;
    }
    _objc_retain(puVar24);
    _objc_release(puVar11);
    puVar11 = puVar24;
    func_0x00010bf0e700(puVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_retain(puVar6);
    func_0x00010c0c1320(puVar11);
    _objc_release(puVar11);
    puVar24 = puVar4;
    FUN_10629a7c0(puVar4,puVar15,puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar15);
    func_0x00010c20f560(puVar10);
    _objc_release(puVar24);
    puVar24 = puVar4;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar24;
    func_0x00010bfd3a00();
    _objc_release(puVar24);
    if ((int)puVar11 == 0) {
      puVar24 = PTR_PTR_1126b5b00;
      func_0x00010c0cb140(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar24;
      func_0x00010c0ccaa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126b5c68;
      func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar24;
      func_0x00010c0ccaa0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161fe0();
      _objc_release(puVar12);
      _objc_release(puVar11);
      puVar11 = puVar24;
      func_0x00010c0ccaa0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619e0();
      _objc_release(puVar11);
      puVar11 = puVar26;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c08fa60();
      if (puVar12 == (undefined *)0x0) {
        puVar12 = puVar7;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar12 = puVar26;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar11);
      puVar11 = puVar12;
      func_0x00010c08fa60();
      if (puVar11 == (undefined *)0x0) {
        puVar11 = puVar7;
        func_0x00010bfe5ea0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar24;
        func_0x00010c2932a0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620();
        _objc_release(puVar18);
        _objc_release(puVar11);
        puVar11 = puVar7;
        func_0x00010c294420(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar24;
        func_0x00010c2932a0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21f760();
        _objc_release(puVar18);
        _objc_release(puVar11);
        puVar11 = puVar7;
        func_0x00010bf85d80(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar24;
        func_0x00010c2932a0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18af40();
        _objc_release(puVar18);
        _objc_release(puVar11);
        puVar11 = puStack_228;
        func_0x00010bf12ea0(puStack_228);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar24;
        func_0x00010c2932a0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c170a80();
        _objc_release(puVar18);
        _objc_release(puVar11);
        puVar11 = puStack_228;
        func_0x00010c15ade0(puStack_228);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar24;
        func_0x00010c2932a0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c171480();
        _objc_release(puVar18);
      }
      else {
        puVar11 = puVar24;
        func_0x00010c11a660(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e4140();
      }
      _objc_release(puVar11);
    }
    else {
      puVar24 = puVar4;
      func_0x00010bf0ea40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar24;
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c161620(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar24);
    if ((puVar26 == (undefined *)0x0) ||
       (puVar24 = puVar26, func_0x00010bfd8b80(), (int)puVar24 == 0)) {
LAB_1062998cc:
      puVar24 = puVar5;
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_228;
      FUN_1062d304c(puStack_228,puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aac20(puVar10);
    }
    else {
      puVar24 = puVar26;
      func_0x00010c0b4520();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar24;
      func_0x00010c070480();
      _objc_release(puVar24);
      if (((ulong)puVar11 & 1) != 0) goto LAB_1062998cc;
      puVar24 = PTR_PTR_1126c94a0;
      _objc_opt_new(PTR_PTR_1126c94a0);
      puVar11 = PTR_PTR_1126c94a8;
      _objc_opt_new(PTR_PTR_1126c94a8);
      func_0x00010c16a7a0(puVar24);
      _objc_release(puVar11);
      puVar11 = puVar26;
      func_0x00010c0b4520(puVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar24;
      func_0x00010bf0af00(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea1c0();
      _objc_release(puVar18);
      _objc_release(puVar12);
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126c94b0;
      _objc_alloc(PTR_PTR_1126c94b0);
      puVar12 = puVar5;
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c820(puVar11);
      _objc_release(puVar12);
      func_0x00010bf47900(puVar11);
      func_0x00010c1aac20(puVar10);
      func_0x00010c1a9f00(puVar10);
    }
    _objc_release(puVar11);
    _objc_release(puVar24);
    puVar24 = puVar6;
    func_0x00010c118b40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    FUN_10629a378(puVar4,puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc500(puVar10);
    _objc_release(puVar11);
    _objc_release(puVar24);
    puVar24 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puStack_228);
    _objc_release(puVar26);
    _objc_release(puVar7);
    _objc_release(uVar22);
    _objc_release(0);
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar4);
  }
  else {
LAB_106298928:
    uVar23 = *(ulong *)(param_2 + 0x20);
    _objc_retain(puVar25);
    _objc_retain(uVar23);
    puVar24 = puVar25;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar24;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    puVar5 = PTR_PTR_1126c9490;
    _objc_alloc_init();
    puVar24 = puVar25;
    func_0x00010c0b3760(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0520(puVar5);
    _objc_release(puVar24);
    puVar24 = puVar25;
    func_0x00010c0ea8e0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5540(puVar5);
    _objc_release(puVar24);
    puVar24 = puVar25;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar24;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c25b7c0();
    _objc_release(puVar8);
    _objc_release(puVar24);
    puVar24 = puVar4;
    if (puVar9 == (undefined *)0x24) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar9 = puVar24;
      _objc_opt_isKindOfClass(puVar24,puVar8);
      puVar8 = puVar24;
      if (((ulong)puVar9 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar24);
      if (puVar8 != (undefined *)0x0) goto LAB_106298b14;
      puVar8 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar9 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar24);
      puVar24 = puVar8;
      if (((ulong)puVar9 & 1) == 0) {
        puVar24 = (undefined *)0x0;
      }
      _objc_retain(puVar24);
      _objc_release(puVar8);
      func_0x00010c216240(puVar5);
LAB_106298ce0:
      _objc_release(puVar24);
      puVar24 = (undefined *)0x0;
    }
    else {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar9 = puVar24;
      _objc_opt_isKindOfClass(puVar24,puVar8);
      puVar8 = puVar24;
      if (((ulong)puVar9 & 1) == 0) {
        puVar8 = (undefined *)0x0;
      }
      _objc_retain(puVar8);
      _objc_release(puVar24);
      if (puVar8 == (undefined *)0x0) {
        puVar24 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar9 = puVar24;
        _objc_opt_isKindOfClass(puVar24,puVar8);
        puVar8 = puVar24;
        if (((ulong)puVar9 & 1) == 0) {
          puVar8 = (undefined *)0x0;
        }
        _objc_retain(puVar8);
        _objc_release(puVar24);
        if (puVar8 == (undefined *)0x0) {
          puVar8 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          puVar9 = puVar8;
          _objc_opt_isKindOfClass(puVar8,puVar24);
          puVar24 = puVar8;
          if (((ulong)puVar9 & 1) == 0) {
            puVar24 = (undefined *)0x0;
          }
          _objc_retain(puVar24);
          _objc_release(puVar8);
        }
        func_0x00010c216240(puVar5);
        goto LAB_106298ce0;
      }
LAB_106298b14:
      func_0x00010c216240(puVar5);
    }
    _objc_release(puVar24);
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x2020000000;
    uStack_d0 = 0;
    puVar8 = puVar25;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar8;
    func_0x00010bfa29a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(puVar24);
    uVar13 = uVar23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126b12d0;
    func_0x00010bf4e2a0(PTR_PTR_1126b12d0);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf1f320();
    _objc_release(puVar24);
    _objc_release(uVar13);
    if ((uVar14 & 1) == 0) {
      puVar9 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar15 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar24);
      puVar24 = puVar9;
      if (((ulong)puVar15 & 1) == 0) {
        puVar24 = (undefined *)0x0;
      }
      _objc_retain(puVar24);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126c93d0;
      func_0x00010c0ea900(PTR_PTR_1126c93d0);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf1f3c0();
      if ((int)puVar16 == 0) {
        if (*(char *)(puStack_e0 + 3) == '\x01') {
          puVar16 = puVar5;
          func_0x00010c2711a0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar24;
          func_0x00010c0720c0();
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar9);
          if (((ulong)puVar17 & 1) == 0) goto LAB_106298e64;
        }
        else {
          _objc_release(puVar15);
          _objc_release(puVar9);
        }
      }
      else {
        _objc_release(puVar15);
        _objc_release(puVar9);
LAB_106298e64:
        func_0x00010c20f6c0(puVar5);
      }
      _objc_release(puVar24);
    }
    if (*(char *)(puStack_e0 + 3) == '\x01') {
      puVar24 = puVar8;
      func_0x00010c260880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar24 != (undefined *)0x0) {
        puVar24 = puVar8;
        func_0x00010c260880(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar24;
        func_0x00010c25fe60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c12c0();
        _objc_release(puVar9);
        _objc_release(puVar24);
      }
    }
    puVar24 = puVar4;
    func_0x00010c0e00e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1b2ee0(puVar5);
    _objc_release(puVar24);
    puVar24 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    puVar15 = puVar24;
    _objc_opt_isKindOfClass(puVar24,puVar9);
    puVar9 = puVar24;
    if (((ulong)puVar15 & 1) == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar24);
    puVar24 = puVar9;
    func_0x00010bf0e700(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c1320();
    _objc_release(puVar24);
    puVar24 = puVar25;
    func_0x00010c160280();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar24;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar24);
    puVar24 = puVar16;
    func_0x00010c08fa60();
    if (puVar24 != (undefined *)0x0) {
      puVar24 = PTR_PTR_1126b5b00;
      func_0x00010c0cb140(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar24;
      func_0x00010c0ccaa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179660();
      _objc_release(puVar15);
      puVar15 = PTR_PTR_1126b5c68;
      func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar24;
      func_0x00010c0ccaa0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161fe0();
      _objc_release(puVar17);
      _objc_release(puVar15);
      puVar15 = puVar24;
      func_0x00010c0ccaa0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1619e0();
      _objc_release(puVar15);
      puVar15 = puVar24;
      func_0x00010c11a660(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4140();
      _objc_release(puVar15);
      func_0x00010c161620(puVar5);
      _objc_release(puVar24);
    }
    puVar24 = PTR_PTR_1126ae6b8;
    _objc_retain(puVar25);
    func_0x00010bf54280(puVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    _objc_release(puVar16);
    _objc_release(puVar9);
    _objc_release(puVar8);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar23);
    _objc_release(puVar25);
  }
  _objc_release(puVar25);
  _objc_release(puVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 1062986f4; end: 106299b83;  */

void FUN_1062986f4(long param_1,undefined *param_2)

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
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puStack_1d8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c93c0;
  _objc_opt_class(PTR_PTR_1126c93c0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x2) {
    puVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c8;
    _objc_opt_class(PTR_PTR_1126c93c8);
    puVar22 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar2);
    puVar2 = puVar4;
    if (((ulong)puVar22 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar4);
    if (puVar2 != (undefined *)0x0) {
      puVar22 = puVar3;
      func_0x00010c0b3760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c160280();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c25b200();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar3;
      func_0x00010c160280();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar3;
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = *(undefined **)(param_1 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar20 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(puVar4);
      _objc_retain(puVar15);
      _objc_retain(puVar2);
      _objc_retain(uVar1);
      _objc_retain(0);
      _objc_retain(uVar20);
      _objc_retain(puVar3);
      _objc_retain(puVar14);
      _objc_retain(puVar8);
      _objc_retain(puVar22);
      puVar5 = puVar4;
      func_0x00010bf0ea40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010bfdc440();
      puVar23 = (undefined *)0x0;
      if ((int)puVar5 != 0) {
        puVar23 = puVar6;
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = puVar6;
      func_0x00010bfd4a60();
      if ((int)puVar5 == 0) {
        puStack_1d8 = (undefined *)0x0;
      }
      else {
        puStack_1d8 = puVar6;
        func_0x00010bf1a980();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = PTR_PTR_1126c9490;
      _objc_alloc_init();
      func_0x00010c1c0520();
      _objc_release(puVar22);
      puVar16 = puVar4;
      func_0x00010bf0ea40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar5);
      _objc_release(puVar9);
      _objc_release(puVar16);
      func_0x00010c1d5540(puVar5);
      puVar16 = puVar3;
      func_0x00010c160280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar9 = puVar16;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c25b7c0();
      _objc_release(puVar9);
      _objc_release(puVar16);
      if (puVar10 == (undefined *)0x24) {
        puVar16 = puVar4;
        func_0x00010bf0ea40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar16;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar10 == (undefined *)0x0) {
          puVar17 = puVar4;
          func_0x00010bf0ea40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010c290fa0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar18;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c216240(puVar5);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(puVar17);
        }
        else {
          func_0x00010c216240(puVar5);
        }
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar16);
      }
      puVar16 = puVar4;
      func_0x00010bf0ea40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar9);
      _objc_release(puVar16);
      puVar16 = puVar23;
      func_0x00010c0b4520(puVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(puVar9);
      _objc_release(puVar16);
      func_0x00010c078f60(puVar6);
      func_0x00010c1b2ee0(puVar5);
      puVar16 = puVar4;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar16 != (undefined *)0x0) {
        puVar16 = PTR_PTR_1126c9498;
        _objc_alloc(PTR_PTR_1126c9498);
        puVar9 = puVar4;
        func_0x00010c260dc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar4;
        func_0x00010c260dc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03dda0(puVar16);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar10);
        _objc_release(puVar9);
        func_0x00010c1ea040(puVar5);
        _objc_release(puVar16);
      }
      puVar16 = puVar15;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar16 = PTR_PTR_1126b5bc0;
      _objc_opt_class(PTR_PTR_1126b5bc0);
      puVar10 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar16);
      puVar16 = puVar9;
      if (((ulong)puVar10 & 1) == 0) {
        puVar16 = (undefined *)0x0;
      }
      _objc_retain(puVar16);
      _objc_release(puVar9);
      puVar9 = puVar16;
      func_0x00010bf0e700(puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_retain(puVar15);
      func_0x00010c0c1320(puVar9);
      _objc_release(puVar9);
      puVar16 = puVar4;
      FUN_10629a7c0(puVar4,puVar8,puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar8);
      func_0x00010c20f560(puVar5);
      _objc_release(puVar16);
      puVar16 = puVar4;
      func_0x00010bf0ea40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      func_0x00010bfd3a00();
      _objc_release(puVar16);
      if ((int)puVar9 == 0) {
        puVar16 = PTR_PTR_1126b5b00;
        func_0x00010c0cb140(PTR_PTR_1126b5b00);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar16;
        func_0x00010c0ccaa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c179660();
        _objc_release(puVar9);
        puVar9 = PTR_PTR_1126b5c68;
        func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        func_0x00010c0ccaa0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c161fe0();
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar9 = puVar16;
        func_0x00010c0ccaa0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1619e0();
        _objc_release(puVar9);
        puVar9 = puVar23;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c08fa60();
        if (puVar10 == (undefined *)0x0) {
          puVar10 = puVar6;
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar10 = puVar23;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar9);
        puVar9 = puVar10;
        func_0x00010c08fa60();
        if (puVar9 == (undefined *)0x0) {
          puVar9 = puVar6;
          func_0x00010bfe5ea0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c2932a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e620();
          _objc_release(puVar17);
          _objc_release(puVar9);
          puVar9 = puVar6;
          func_0x00010c294420(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c2932a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21f760();
          _objc_release(puVar17);
          _objc_release(puVar9);
          puVar9 = puVar6;
          func_0x00010bf85d80(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c2932a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18af40();
          _objc_release(puVar17);
          _objc_release(puVar9);
          puVar9 = puStack_1d8;
          func_0x00010bf12ea0(puStack_1d8);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c2932a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c170a80();
          _objc_release(puVar17);
          _objc_release(puVar9);
          puVar9 = puStack_1d8;
          func_0x00010c15ade0(puStack_1d8);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010c2932a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c171480();
          _objc_release(puVar17);
        }
        else {
          puVar9 = puVar16;
          func_0x00010c11a660(puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e4140();
        }
        _objc_release(puVar9);
      }
      else {
        puVar16 = puVar4;
        func_0x00010bf0ea40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar16;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c161620(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar16);
      if ((puVar23 == (undefined *)0x0) ||
         (puVar16 = puVar23, func_0x00010bfd8b80(), (int)puVar16 == 0)) {
LAB_1062998cc:
        puVar16 = puVar2;
        func_0x00010c269d40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puStack_1d8;
        FUN_1062d304c(puStack_1d8,puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aac20(puVar5);
      }
      else {
        puVar16 = puVar23;
        func_0x00010c0b4520();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar16;
        func_0x00010c070480();
        _objc_release(puVar16);
        if (((ulong)puVar9 & 1) != 0) goto LAB_1062998cc;
        puVar16 = PTR_PTR_1126c94a0;
        _objc_opt_new(PTR_PTR_1126c94a0);
        puVar9 = PTR_PTR_1126c94a8;
        _objc_opt_new(PTR_PTR_1126c94a8);
        func_0x00010c16a7a0(puVar16);
        _objc_release(puVar9);
        puVar9 = puVar23;
        func_0x00010c0b4520(puVar23);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c0b4680();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010bf0af00(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ea1c0();
        _objc_release(puVar17);
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar9 = PTR_PTR_1126c94b0;
        _objc_alloc(PTR_PTR_1126c94b0);
        puVar10 = puVar2;
        func_0x00010c269d40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01c820(puVar9);
        _objc_release(puVar10);
        func_0x00010bf47900(puVar9);
        func_0x00010c1aac20(puVar5);
        func_0x00010c1a9f00(puVar5);
      }
      _objc_release(puVar9);
      _objc_release(puVar16);
      puVar16 = puVar15;
      func_0x00010c118b40(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      FUN_10629a378(puVar4,puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc500(puVar5);
      _objc_release(puVar9);
      _objc_release(puVar16);
      puVar16 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar5);
      _objc_release(puStack_1d8);
      _objc_release(puVar23);
      _objc_release(puVar6);
      _objc_release(uVar20);
      _objc_release(0);
      _objc_release(uVar1);
      _objc_release(puVar2);
      _objc_release(puVar15);
      _objc_release(puVar4);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar22);
      _objc_release(puVar4);
      goto LAB_106299a14;
    }
  }
  uVar21 = *(ulong *)(param_1 + 0x20);
  _objc_retain(puVar3);
  _objc_retain(uVar21);
  puVar2 = puVar3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c9490;
  _objc_alloc_init();
  puVar22 = puVar3;
  func_0x00010c0b3760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0520(puVar2);
  _objc_release(puVar22);
  puVar22 = puVar3;
  func_0x00010c0ea8e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5540(puVar2);
  _objc_release(puVar22);
  puVar22 = puVar3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar22;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c25b7c0();
  _objc_release(puVar7);
  _objc_release(puVar22);
  puVar22 = puVar4;
  if (puVar8 == (undefined *)0x24) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar8 = puVar22;
    _objc_opt_isKindOfClass(puVar22,puVar7);
    puVar7 = puVar22;
    if (((ulong)puVar8 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar22);
    if (puVar7 != (undefined *)0x0) goto LAB_106298b14;
    puVar7 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar8 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar22);
    puVar22 = puVar7;
    if (((ulong)puVar8 & 1) == 0) {
      puVar22 = (undefined *)0x0;
    }
    _objc_retain(puVar22);
    _objc_release(puVar7);
    func_0x00010c216240(puVar2);
LAB_106298ce0:
    _objc_release(puVar22);
    puVar22 = (undefined *)0x0;
  }
  else {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar8 = puVar22;
    _objc_opt_isKindOfClass(puVar22,puVar7);
    puVar7 = puVar22;
    if (((ulong)puVar8 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar22);
    if (puVar7 == (undefined *)0x0) {
      puVar22 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar8 = puVar22;
      _objc_opt_isKindOfClass(puVar22,puVar7);
      puVar7 = puVar22;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar22);
      if (puVar7 == (undefined *)0x0) {
        puVar7 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar8 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar22);
        puVar22 = puVar7;
        if (((ulong)puVar8 & 1) == 0) {
          puVar22 = (undefined *)0x0;
        }
        _objc_retain(puVar22);
        _objc_release(puVar7);
      }
      func_0x00010c216240(puVar2);
      goto LAB_106298ce0;
    }
LAB_106298b14:
    func_0x00010c216240(puVar2);
  }
  _objc_release(puVar22);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puVar22 = puVar3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar22;
  func_0x00010bfa29a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(puVar7);
  uVar11 = uVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b12d0;
  func_0x00010bf4e2a0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1f320();
  _objc_release(puVar7);
  _objc_release(uVar11);
  if ((uVar12 & 1) == 0) {
    puVar8 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar13 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar7);
    puVar7 = puVar8;
    if (((ulong)puVar13 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126c93d0;
    func_0x00010c0ea900(PTR_PTR_1126c93d0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf1f3c0();
    if ((int)puVar14 == 0) {
      if (*(char *)(puStack_90 + 3) == '\x01') {
        puVar14 = puVar2;
        func_0x00010c2711a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar7;
        func_0x00010c0720c0();
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar8);
        if (((ulong)puVar15 & 1) == 0) goto LAB_106298e64;
      }
      else {
        _objc_release(puVar13);
        _objc_release(puVar8);
      }
    }
    else {
      _objc_release(puVar13);
      _objc_release(puVar8);
LAB_106298e64:
      func_0x00010c20f6c0(puVar2);
    }
    _objc_release(puVar7);
  }
  if (*(char *)(puStack_90 + 3) == '\x01') {
    puVar7 = puVar22;
    func_0x00010c260880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined *)0x0) {
      puVar7 = puVar22;
      func_0x00010c260880(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c25fe60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c12c0();
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
  }
  puVar7 = puVar4;
  func_0x00010c0e00e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1b2ee0(puVar2);
  _objc_release(puVar7);
  puVar8 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  puVar13 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar7);
  puVar7 = puVar8;
  if (((ulong)puVar13 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf0e700(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar8;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar8);
  puVar8 = puVar14;
  func_0x00010c08fa60();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126b5b00;
    func_0x00010c0cb140(PTR_PTR_1126b5b00);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010c0ccaa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179660();
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126b5c68;
    func_0x00010c0ee2e0(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar8;
    func_0x00010c0ccaa0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161fe0();
    _objc_release(puVar15);
    _objc_release(puVar13);
    puVar13 = puVar8;
    func_0x00010c0ccaa0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1619e0();
    _objc_release(puVar13);
    puVar13 = puVar8;
    func_0x00010c11a660(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar13);
    func_0x00010c161620(puVar2);
    _objc_release(puVar8);
  }
  puVar16 = PTR_PTR_1126ae6b8;
  _objc_retain(puVar3);
  func_0x00010bf54280(puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar7);
  _objc_release(puVar22);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar21);
  _objc_release(puVar3);
LAB_106299a14:
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106299b84; end: 106299b97;  */

void FUN_106299b84(long param_1)

{
  undefined1 in_w4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_w4;
  return;
}



/* Entry: 106299b98; end: 106299bdf;  */

void FUN_106299b98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9470;
  func_0x00010c11b720(PTR_PTR_1126c9470,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f560(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106299be0; end: 106299bfb;  */

void FUN_106299be0(void)

{
  return;
}



/* Entry: 106299bfc; end: 106299d3f;  */

void FUN_106299bfc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_5);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar4 == 0) {
    func_0x00010c216240(*(undefined8 *)(param_1 + 0x28));
  }
  if ((param_4 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    func_0x00010c20f6c0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar1);
  }
  else {
    func_0x00010c08fa60();
    func_0x00010c20f6c0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106299d40; end: 106299e3f;  */

void FUN_106299d40(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126c93d0;
  func_0x00010c0ea900(PTR_PTR_1126c93d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_opt_class(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c25cd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c20f6c0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 106299e40; end: 10629a1d3;  */

void FUN_106299e40(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf51e00();
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar4 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
LAB_10629a038:
    if (uVar1 == 0) goto LAB_10629a100;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c1aac20(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010010fab4();
    uVar10 = uVar9;
    if ((int)uVar8 == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar9);
    _objc_retain(param_2);
    func_0x00010c29cf00(uVar10);
    _objc_release(param_2);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar7 == 0) goto LAB_10629a038;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c1aac20(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0ea8e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010bfe78a0(uVar10);
    _objc_release(uVar10);
    _objc_release(uVar8);
    uVar10 = param_2;
  }
  _objc_release(uVar10);
LAB_10629a100:
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar10);
  func_0x00010c0d9840(param_2);
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10629a1d4; end: 10629a257;  */

void FUN_10629a1d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  func_0x00010c01bf60();
  _objc_release(param_2);
  func_0x00010c1aac20(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar3);
  func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10629a258; end: 10629a2af;  */

void FUN_10629a258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) != 0) {
    return;
  }
  func_0x00010c1aac20(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10629a2b0; end: 10629a2d7;  */

void FUN_10629a2b0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10629a2d8; end: 10629a373;  */

void FUN_10629a2d8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c20f6c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10629a374; end: 10629a377;  */

void FUN_10629a374(void)

{
  return;
}



/* Entry: 10629a378; end: 10629a663;  */

void FUN_10629a378(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c24aec0();
  if (lVar1 == 0) {
    puVar13 = (undefined *)0x0;
    goto LAB_10629a614;
  }
  puVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_10629a418:
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    puVar13 = puVar2;
    _objc_opt_isKindOfClass();
    if (((ulong)puVar13 & 1) == 0) goto LAB_10629a418;
    _objc_retain(puVar2);
    puVar12 = puVar2;
  }
  lVar4 = param_1;
  func_0x00010c24aea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar14 = *(ulong *)(lVar11 * 8);
        uVar6 = uVar14;
        func_0x00010bfd3a00();
        if ((uVar6 & 1) == 0) {
          func_0x00010c0720c0(puVar12);
        }
        else {
          uVar6 = uVar14;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010beeed20();
          _objc_release(uVar6);
          puVar13 = puVar12;
          func_0x00010c0720c0();
          if ((int)uVar7 == 0xe && (int)puVar13 != 0) {
            uVar6 = uVar14;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c08fa60();
            if (uVar7 == 0) {
              _objc_release(uVar6);
            }
            else {
              uVar7 = uVar14;
              func_0x00010c2711a0();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c08fa60();
              _objc_release(uVar7);
              _objc_release(uVar6);
              if (uVar8 != 0) {
                puVar13 = PTR_PTR_1126c94b8;
                _objc_alloc();
                uVar6 = uVar14;
                func_0x00010bfe5ea0(uVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2711a0(uVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c024780();
                _objc_release(uVar14);
                _objc_release(uVar6);
                goto LAB_10629a5f4;
              }
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
    puVar13 = (undefined *)0x0;
  }
LAB_10629a5f4:
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar12);
LAB_10629a614:
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(puVar3);
    puVar13 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar12 = puVar13;
    _objc_opt_isKindOfClass(puVar13,puVar3);
    puVar3 = puVar13;
    if (((ulong)puVar12 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar13);
    puVar13 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar9 = puVar13;
    _objc_opt_isKindOfClass(puVar13,puVar12);
    puVar12 = puVar13;
    if (((ulong)puVar9 & 1) == 0) {
      puVar12 = (undefined *)0x0;
    }
    _objc_retain(puVar12);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c94c0;
    _objc_alloc(PTR_PTR_1126c94c0);
    func_0x00010c04c240();
    _objc_release(puVar12);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10629a664; end: 10629a7bf;  */

void FUN_10629a664(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar2);
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar5 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126c94c0;
  _objc_alloc(PTR_PTR_1126c94c0);
  func_0x00010c04c240();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10629a7c0; end: 10629acd7;  */

void FUN_10629a7c0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = param_1;
  func_0x00010bf0ea40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_1;
  func_0x00010bfdce20();
  if ((int)puVar5 == 0) {
    puVar5 = puVar1;
    func_0x00010629aa54(puVar1,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = param_1;
    func_0x00010c25fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfed8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bfeddc0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c9470;
    if ((int)puVar2 == 1) {
      puVar5 = param_1;
      func_0x00010c25fea0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfed8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfde280();
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      if ((int)puVar3 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar5 = param_1;
        func_0x00010c25fea0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar5;
        func_0x00010bfed8e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c294d60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x000109189508();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar5);
      }
      puVar5 = puVar1;
      func_0x00010629aa54(puVar1,param_2,param_3,puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((int)puVar2 != 2) {
        puVar5 = (undefined *)0x0;
        goto LAB_10629aa14;
      }
      puVar6 = param_1;
      func_0x00010c25fea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010bfed8e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c11b280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b1e0();
      func_0x00010c11b720(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar6);
  }
LAB_10629aa14:
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10629acd8; end: 10629addb;  */

void FUN_10629acd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf25140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = param_4;
  func_0x00010629ab8c(param_4,uVar1,uVar2,uVar3,0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10588bd48; end: 10588c157; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _transcodeMashup:snapDocKey:crFeaturedStory:templateId:snapId:observer:] */

void FUN_10588bd48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x000107e66360(param_8,0xf,&PTR____CFConstantStringClassReference_110e09618);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12f680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xe8));
    uVar1 = uVar2;
    func_0x00010c13cb40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_8);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10588c158; end: 10588c18f;  */

void FUN_10588c158(long param_1,undefined8 param_2)

{
  func_0x00010be73240(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),0,0x3e,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10588c190; end: 10588c2db; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _convertSegmentWithAsset:] */

void FUN_10588c190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf8a0;
  _objc_alloc(PTR_PTR_1126bf8a0);
  func_0x00010c03ffa0(0x4094000000000000);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfe7f20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc1860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = uVar4;
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10588c2dc;
  puStack_58 = &UNK_1108ba708;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar3;
  func_0x00010c0b8600(uVar3,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10588c2dc; end: 10588c54b;  */

void FUN_10588c2dc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  uVar3 = uVar2;
  func_0x00010c2bda80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  _objc_release(uVar10);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar11 = (undefined *)0x0;
  if (lVar1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e09658;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e09658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x28));
    _CMTimeMake(&uStack_80,(long)(param_1 * 1000.0),1000);
    puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_c8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_d0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_c0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_e8 = uStack_78;
    uStack_f0 = uStack_80;
    uStack_e0 = uStack_70;
    _CMTimeRangeMake(auStack_b0,&uStack_d0,&uStack_f0);
    func_0x00010c297240(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126aff30;
    func_0x00010bfe94a0(PTR_PTR_1126aff30);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126aff28;
    func_0x00010bf2a9a0(PTR_PTR_1126aff28);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126aff40;
    _objc_alloc(PTR_PTR_1126aff40);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c09da80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d3c0(puVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10588c54c; end: 10588cb1b; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _persistInLocalDB:crFeaturedStory:entryId:entrySource:templateId:snapId:observer:] */

void FUN_10588c54c(long param_1,undefined1 *param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined **param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf90fc0();
  _objc_release(uVar1);
  if ((int)uVar9 == 0) {
    puVar3 = param_4;
    func_0x00010c0fa980();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar3;
    func_0x000107fe998c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    puVar4 = param_4;
    func_0x00010c0fa980();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar11 = *plStack_170;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_170 != lVar11) {
            _objc_enumerationMutation(puVar4);
          }
          uVar9 = *(undefined8 *)(lStack_178 + (long)puVar10 * 8);
          func_0x00010c09da80(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar9);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar4;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    ppuVar5 = (undefined **)PTR_PTR_1126bf820;
    _objc_alloc();
    puVar2 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c113c80(param_4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046fa0();
    _objc_release(puVar10);
    _objc_release(puVar4);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c14ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_initWeak(auStack_188,param_1);
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    pcStack_1c8 = FUN_10588cd1c;
    puStack_1c0 = &UNK_1108b9fe8;
    ppuVar12 = &puStack_1d8;
    param_2 = auStack_188;
    _objc_copyWeak(auStack_198,param_2);
    _objc_retain(param_9);
    ppuStack_1b8 = param_9;
    _objc_retain(param_3);
    lStack_1b0 = param_3;
    uStack_190 = param_6;
    _objc_retain(param_7);
    uStack_1a8 = param_7;
    _objc_retain(param_4);
    uVar1 = uVar9;
    puStack_1a0 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = *(undefined ***)(param_1 + 200);
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(puStack_1a0);
    _objc_release(uStack_1a8);
    _objc_release(lStack_1b0);
    _objc_release(ppuStack_1b8);
    _objc_destroyWeak(auStack_198);
    _objc_destroyWeak(auStack_188);
    _objc_release(uVar9);
  }
  else {
    puStack_1e8 = PTR_PTR_1126bf810;
    _objc_alloc();
    func_0x00010c0066e0();
    puVar2 = *(undefined **)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_10588cb1c;
    puStack_128 = &UNK_1108b9f88;
    _objc_retain(param_9);
    ppuStack_120 = param_9;
    lStack_118 = param_1;
    _objc_retain(param_3);
    lStack_110 = param_3;
    uStack_f8 = param_6;
    _objc_retain(param_7);
    uStack_108 = param_7;
    _objc_retain(param_4);
    ppuVar8 = &puStack_140;
    puStack_100 = param_4;
    func_0x00010c297260(puVar3);
    _objc_release(puStack_100);
    _objc_release(uStack_108);
    _objc_release(lStack_110);
    ppuVar5 = ppuStack_120;
    ppuVar12 = param_9;
  }
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(puStack_1e8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar12 + 8);
  _objc_destroyWeak(auStack_188);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126af4c0;
  if (ppuVar8 == (undefined **)0x0) {
    puVar6 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar6);
    puVar4 = PTR_PTR_1126af4d0;
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126bf818;
    _objc_alloc(PTR_PTR_1126bf818);
    puVar6 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0172c0(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    puVar10 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar10);
    func_0x00010bf436e0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010be056a0(*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar3);
    func_0x00010bf436e0(*(undefined8 *)(param_3 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588cb1c; end: 10588cd1b;  */

void FUN_10588cb1c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af4c0;
  if (param_3 == 0) {
    uVar6 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126af4d0;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126bf818;
    _objc_alloc(PTR_PTR_1126bf818);
    uVar6 = param_2;
    func_0x00010bf97200(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0172c0(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar5);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be056a0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588cd1c; end: 10588ce97;  */

void FUN_10588cd1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588ce98; end: 10588cf7b;  */

void FUN_10588ce98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be056a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588cf7c; end: 10588d22b; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager _doOnSaveWithSaveCompleteData:snapDoc:entrySource:templateId:crFeaturedStory:] */

void FUN_10588cf7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e695a0(param_5,puVar1,0,uVar2,0);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b80();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf977c0();
  lVar5 = (long)(int)uVar4;
  func_0x00010b5fb06c();
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0xc0);
  uVar3 = param_7;
  func_0x00010c0fa980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar4 = param_3;
  func_0x00010bfbd940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf977c0();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bfbcca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar13 = uVar12;
  func_0x00010bfa3220();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e69c2c(uVar6,uVar15,uVar14,uVar7,uVar16,uVar2,lVar5,uVar3,param_6,0,uVar9,
                      (long)(int)uVar11,puVar1,uVar13);
  _objc_release(param_6);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10588d22c; end: 10588d387; -[SCMemoriesMashupStyleFeaturedStoryCRMashupManager .cxx_destruct] */

void FUN_10588d22c(long param_1)

{
  _objc_storeStrong(param_1 + 0xe8,0);
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



/* Entry: 10588d388; end: 10588d48b; -[SCMemoriesCollageFeaturedStoryManagerFactoryImpl memoriesCollageFeaturedStoryManagerServices] */

void FUN_10588d388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10588d41c;
  puStack_30 = &UNK_1108ba738;
  puVar1 = PTR_PTR_1126ae720;
  uStack_28 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf8b0;
  _objc_alloc(PTR_PTR_1126bf8b0);
  func_0x00010c02a880();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10588d48c; end: 10588d5bb; -[SCMemoriesCollageFeaturedStoryManagerFactoryImpl .cxx_destruct] */

void FUN_10588d48c(long param_1)

{
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



/* Entry: 10588d5bc; end: 10588d6cb; -[SCMemoriesCollageFeaturedStoryManagerFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10588d5bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b390);
  _objc_destroyWeak(param_1 + _DAT_11272b38c);
  _objc_destroyWeak(param_1 + _DAT_11272b388);
  _objc_destroyWeak(param_1 + _DAT_11272b384);
  _objc_destroyWeak(param_1 + _DAT_11272b380);
  _objc_destroyWeak(param_1 + _DAT_11272b37c);
  _objc_destroyWeak(param_1 + _DAT_11272b378);
  _objc_destroyWeak(param_1 + _DAT_11272b374);
  _objc_destroyWeak(param_1 + _DAT_11272b370);
  _objc_destroyWeak(param_1 + _DAT_11272b36c);
  _objc_destroyWeak(param_1 + _DAT_11272b368);
  _objc_destroyWeak(param_1 + _DAT_11272b364);
  _objc_destroyWeak(param_1 + _DAT_11272b360);
  _objc_destroyWeak(param_1 + _DAT_11272b35c);
  _objc_destroyWeak(param_1 + _DAT_11272b358);
  _objc_destroyWeak(param_1 + _DAT_11272b354);
  _objc_destroyWeak(param_1 + _DAT_11272b350);
  _objc_destroyWeak(param_1 + _DAT_11272b34c);
  _objc_destroyWeak(param_1 + _DAT_11272b348);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b344);
  return;
}



/* Entry: 10588d6cc; end: 10588dbeb; -[SCMemoriesMashupStyleFeaturedStoryCollageManager initWithMemoriesMashupSnapDocFactory:cloudFSService:snapDocEditorFactory:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesProfile:memoriesDataObjectContext:memoriesFeaturedStoryDataMutator:grapheneRegistry:encryptedContentManager:snapDocDownloadingService:snapRenderer:circumstanceEngine:notificationPool:coordinator:applicationLifecycleEvents:docObjectContext:memoriesUserDefaultsManager:memoriesEncryptedDatabase:] */

undefined8 *
FUN_10588d6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126eaae8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x000108ec15f8();
    *(char *)(puVar1 + 0x1f) = (char)uVar2;
    puVar1[0x20] = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar1[0x1b] = 0;
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    func_0x00010bdff1c0(puVar1);
    func_0x00010bdcd7c0(puVar1);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10588dbec; end: 10588dc13; -[SCMemoriesMashupStyleFeaturedStoryCollageManager snapRendererProgressObservable] */

void FUN_10588dbec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10588dc14; end: 10588dd2b; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _observeSnapRendererProgress] */

void FUN_10588dc14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c1178e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10588dd2c; end: 10588dd7b;  */

void FUN_10588dd2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xf0));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588dd7c; end: 10588df43; -[SCMemoriesMashupStyleFeaturedStoryCollageManager generateMashupStyleFeaturedStoriesForNewCollectionsIfNecessaryWithServerRespondedCollections:allCollectionIds:context:origin:shouldEnableFailureCap:] */

void FUN_10588dd7c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined8 *)(param_1 + 0x100) = 0;
  lVar1 = param_4;
  func_0x00010bf529e0();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 == lVar2) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xe9) = param_7;
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_3);
    uStack_68 = param_5;
    uStack_60 = param_6;
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25ffc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar4 = PTR_PTR_1126ae6b8;
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10588df44; end: 10588e08b;  */

void FUN_10588df44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    *(undefined8 *)(lVar1 + 0x100) = 0;
    puVar4 = PTR_PTR_1126af4c0;
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaad00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x000107e665e8(puVar4,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1acc0(lVar1);
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10588e08c; end: 10588e0eb; -[SCMemoriesMashupStyleFeaturedStoryCollageManager generateMashupForGalleryEntry:memoriesMashupModel:] */

void FUN_10588e08c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10588e0ec; end: 10588e223; -[SCMemoriesMashupStyleFeaturedStoryCollageManager generateMashupForModel:videoCreateSessionId:] */

void FUN_10588e0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10588e224; end: 10588e477;  */

void FUN_10588e224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(puVar1 + 200);
    *(undefined8 *)(puVar1 + 200) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(puVar1 + 0x100) = 0;
    puVar3 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1968c0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c1b4ee0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185360(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c17cee0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar1 + 0xe0);
    *(undefined **)(puVar1 + 0xe0) = puVar7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(puVar1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8540();
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126bf7f0;
    _objc_opt_new(PTR_PTR_1126bf7f0);
    func_0x00010c17e420();
    puVar6 = PTR_PTR_1126bf7e8;
    _objc_opt_new(PTR_PTR_1126bf7e8);
    func_0x00010c1fd420();
    puVar7 = puVar1;
    func_0x00010be1b520(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10588e478; end: 10588e5cf;  */

void FUN_10588e478(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf5a940(PTR_PTR_1126bc830,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar1);
  _objc_release(uVar3);
  func_0x00010c1d7bc0(puVar1);
  puVar2 = PTR_PTR_1126b2508;
  func_0x00010bf350c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0fd860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bef7f40(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_88,puVar1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar6);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar3);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10588e5d0; end: 10588e707; -[SCMemoriesMashupStyleFeaturedStoryCollageManager generateMashupForGallerySnaps:collageCreativeTools:] */

void FUN_10588e5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10588e708; end: 10588eb1f;  */

void FUN_10588e708(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    *(undefined8 *)(puVar2 + 0x100) = 0;
    if ((0 < *(long *)(puVar2 + 0xd8)) || (*(long *)(puVar2 + 0xe0) == 0)) {
      *(undefined8 *)(puVar2 + 0xd8) = 0;
      puVar5 = PTR_PTR_1126bf8c8;
      func_0x00010c2aeac0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1968c0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c1b4ee0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185360(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c216240(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(puVar2 + 0xe0);
      *(undefined **)(puVar2 + 0xe0) = puVar3;
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(puVar2 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(puVar2 + 0x40);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8540();
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(puVar5);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar11 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar11);
    lVar6 = lVar11;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar11);
        }
        uVar9 = *(undefined8 *)(lVar13 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar9);
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar10 = PTR_PTR_1126bf8d8;
      _objc_opt_new();
      puVar5 = puVar10;
      func_0x00010c204700();
      func_0x00010b6fb240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e400(puVar10);
      _objc_release(puVar5);
      func_0x00010c1dcc20(puVar10);
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126bf8d0;
      _objc_opt_new(PTR_PTR_1126bf8d0);
      func_0x00010c17e3e0();
      puVar10 = puVar5;
      func_0x00010c207180(puVar5);
      func_0x00010b6fb240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(puVar5);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126bf7f0;
      _objc_opt_new(PTR_PTR_1126bf7f0);
      func_0x00010c17e420();
      puVar12 = PTR_PTR_1126bf7e8;
      _objc_opt_new();
      func_0x00010c1fd420();
      _objc_release(puVar10);
      _objc_release(puVar5);
      puVar10 = (undefined *)0x0;
    }
    puVar5 = puVar2;
    param_5 = param_2;
    func_0x00010be1b520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar2);
    _objc_release(puVar5);
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c2923e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5ce0(puVar2);
    _objc_release(uVar9);
    func_0x00010c1d7bc0(puVar2);
    puVar5 = PTR_PTR_1126b2508;
    func_0x00010bf350c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0fd860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 1;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bef7f40(puVar5);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(param_5);
    puVar3 = PTR_PTR_1126bf800;
    _objc_retain(lVar8);
    _objc_retain(uVar9);
    _objc_retain(puVar12);
    func_0x00010bfbcd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126bf808;
    _objc_alloc(PTR_PTR_1126bf808);
    uVar4 = *(undefined8 *)(puVar2 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar2 + 0xe0);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf977c0();
    func_0x00010c028a60(puVar10);
    _objc_release(lVar8);
    _objc_release(uVar9);
    _objc_release(puVar12);
    _objc_release(uVar7);
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar2 + 200);
    *(undefined **)(puVar2 + 200) = puVar5;
    _objc_release(uVar9);
    func_0x00010bef7860(*(undefined8 *)(puVar2 + 0x80));
    uVar4 = *(undefined8 *)(puVar2 + 200);
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c282760();
    _objc_release(uVar4);
    if ((int)uVar9 != 0) {
      func_0x000107e67794(1,param_5,0);
    }
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10588eb20; end: 10588ec77;  */

void FUN_10588eb20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf5a940(PTR_PTR_1126bc830,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5ce0(puVar1);
  _objc_release(uVar3);
  func_0x00010c1d7bc0(puVar1);
  puVar2 = PTR_PTR_1126b2508;
  func_0x00010bf350c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0fd860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bef7f40(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126bf800;
  _objc_retain(lVar9);
  _objc_retain(uVar3);
  _objc_retain(puVar8);
  func_0x00010bfbcd40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bf808;
  _objc_alloc(PTR_PTR_1126bf808);
  uVar6 = *(undefined8 *)(puVar1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + 0xe0);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf977c0();
  func_0x00010c028a60(puVar4);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar1 + 200);
  *(undefined **)(puVar1 + 200) = puVar5;
  _objc_release(uVar3);
  func_0x00010bef7860(*(undefined8 *)(puVar1 + 0x80));
  uVar6 = *(undefined8 *)(puVar1 + 200);
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c282760();
  _objc_release(uVar6);
  if ((int)uVar3 != 0) {
    func_0x000107e67794(1,param_5,0);
  }
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10588ec78; end: 10588ee9b; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _generateMashupForCollageDataModel:memoriesServerGeneratedSnapModel:observer:generationSubtype:priority:context:clientProcessingBitMaskType:videoCreateSessionId:] */

void FUN_10588ec78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 in_stack_00000008;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bf800;
  _objc_retain(in_stack_00000008);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfbcd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf808;
  _objc_alloc(PTR_PTR_1126bf808);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf977c0();
  func_0x00010c028a60(puVar2);
  _objc_release(in_stack_00000008);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar5;
  _objc_release(uVar3);
  func_0x00010bef7860(*(undefined8 *)(param_1 + 0x80));
  uVar4 = *(undefined8 *)(param_1 + 200);
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c282760();
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    func_0x000107e67794(1,param_5,0);
  }
  puVar5 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10588ee9c; end: 10588eec3; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _shouldKeepAddingCommand] */

void FUN_10588ee9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c25e900();
                    /* WARNING: Could not recover jumptable at 0x00010c22daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_shouldAddCommandForCurrentType__1126690e0,param_1);
  return;
}



/* Entry: 10588eec4; end: 10588eecb; -[SCMemoriesMashupStyleFeaturedStoryCollageManager subType] */

undefined8 FUN_10588eec4(void)

{
  return 2;
}



/* Entry: 10588eecc; end: 10588eed3; -[SCMemoriesMashupStyleFeaturedStoryCollageManager terminateFeaturedStoriesGenerationIfNeeded] */

void FUN_10588eecc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__terminateFeaturedStoriesGenerat_112590630,1)
  ;
  return;
}



/* Entry: 10588eed4; end: 10588f08f; -[SCMemoriesMashupStyleFeaturedStoryCollageManager featuredStoryGenerationDidComplete:generationResult:context:completionObserver:entrySource:collectionTitle:collectionCategory:] */

void FUN_10588eed4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_8);
  func_0x00010c0c0800(param_4);
  lVar1 = param_3;
  func_0x00010c113c80();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0xc0);
    _objc_retain(puVar3);
  }
  lVar1 = param_3;
  func_0x00010bf3d240();
  if (lVar1 == 0x10000) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e096d8;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf3d240();
    ppuVar2 = &PTR____CFConstantStringClassReference_110e096b8;
    if (lVar1 != 0x20000) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e09698;
    }
  }
  func_0x000107e67df8(param_3,param_4,param_5,param_7,param_6,param_8,puVar3,
                      &PTR____CFConstantStringClassReference_110e09678,
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0x78),ppuVar2,*(undefined8 *)(param_1 + 0x88),
                      *(undefined1 *)(param_1 + 0xe9));
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10588f090; end: 10588f0cf;  */

void FUN_10588f090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e096f8);
  if ((int)uVar1 != 0) {
    *(long *)(*(long *)(param_1 + 0x28) + 0xd8) = *(long *)(*(long *)(param_1 + 0x28) + 0xd8) + 1;
  }
  return;
}



/* Entry: 10588f0d0; end: 10588f0d3;  */

void FUN_10588f0d0(void)

{
  return;
}



/* Entry: 10588f0d4; end: 10588f2e3; -[SCMemoriesMashupStyleFeaturedStoryCollageManager generateFeaturedStoryWithLocalEntry:memoriesMashupStyleModel:memoriesServerGeneratedStoryModel:observer:collectionCategory:itemOrder:groupName:priority:] */

void FUN_10588f0d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = *(long *)(param_1 + 0x100);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_4 != 0 || param_5 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0xa0);
        _objc_retain(param_3);
        _objc_retain(param_6);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_8);
        _objc_retain(param_9);
        func_0x00010c0f7fc0(uVar1);
        _objc_release(param_9);
        _objc_release(param_8);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_6);
        _objc_release(param_3);
        goto LAB_10588f294;
      }
      uVar1 = 2;
    }
    else if (lVar2 == 1) {
      uVar1 = 0xc;
    }
    else {
LAB_10588f190:
      uVar1 = 0;
    }
  }
  else if (lVar2 == 3) {
    uVar1 = 0x25;
  }
  else {
    if (lVar2 != 2) goto LAB_10588f190;
    uVar1 = 0x23;
  }
  func_0x000107e66360(param_6,uVar1,&PTR____CFConstantStringClassReference_110e09678);
LAB_10588f294:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10588f2e4; end: 10588f687;  */

void FUN_10588f2e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10588f688;
  uStack_70 = 0x10588f698;
  uStack_68 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10588f6a0;
  puStack_a0 = &UNK_1108ba818;
  puStack_88 = puStack_98;
  func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_b8,
                      &PTR___NSConcreteGlobalBlock_1108ba868);
  puVar3 = PTR_PTR_1126af4c0;
  lVar1 = puStack_88[5];
  if (lVar1 != 0) {
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puStack_88[5];
    puStack_88[5] = puVar3;
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar4 = puStack_88[5];
    func_0x00010c080ca0();
    if ((uVar4 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar5 = *(long *)(param_1 + 0x40);
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar1);
        lVar5 = lVar1;
      }
      _objc_release(lVar1);
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010c241440();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar6 = *(long *)(param_1 + 0x40);
        func_0x00010c15f260();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar6;
        func_0x00010bf3f9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar9;
        func_0x00010c247ba0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        _objc_release(lVar6);
      }
      else {
        _objc_retain(lVar1);
        lVar7 = lVar1;
      }
      _objc_release(lVar1);
      lVar1 = lVar7;
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),4,
                            &PTR____CFConstantStringClassReference_110e09678);
      }
      else {
        lVar9 = *(long *)(param_1 + 0x30);
        lVar1 = lVar7;
        func_0x000107e666f0(lVar7,*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x98),
                            &PTR____CFConstantStringClassReference_110e09678,
                            *(undefined8 *)(lVar9 + 0xa0));
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_c0,*(undefined8 *)(param_1 + 0x30));
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar2);
        _objc_copyWeak(auStack_d0,auStack_c0);
        uStack_c8 = *(undefined8 *)(param_1 + 0x58);
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar8);
        uVar10 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar10);
        uVar11 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar11);
        uVar12 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain(uVar12);
        func_0x00010c297260(lVar1);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_destroyWeak(auStack_d0);
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_c0);
        _objc_release(lVar1);
      }
      _objc_release(lVar7);
      _objc_release(lVar5);
      goto LAB_10588f618;
    }
  }
  func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),3,
                      &PTR____CFConstantStringClassReference_110e09678);
LAB_10588f618:
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  return;
}



/* Entry: 10588f688; end: 10588f69f;  */

void FUN_10588f688(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10588f6a0; end: 10588f6d7;  */

void FUN_10588f6a0(long param_1,undefined8 param_2)

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



/* Entry: 10588f6d8; end: 10588f6db;  */

void FUN_10588f6d8(void)

{
  return;
}



/* Entry: 10588f6dc; end: 10588f8df;  */

void FUN_10588f6dc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_90;
  long lStack_88;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x20),5,
                        &PTR____CFConstantStringClassReference_110e09678);
    goto LAB_10588f8bc;
  }
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = 0x10;
LAB_10588f8b0:
    func_0x000107e66360(uVar6,uVar7,&PTR____CFConstantStringClassReference_110e09678);
  }
  else {
    if (((*(char *)(lVar2 + 0xf8) == '\x01') && (*(long *)(param_1 + 0x60) != 0)) &&
       (uVar1 = param_2, func_0x000107e6a748(param_2,*(undefined8 *)(lVar2 + 0x68)),
       (uVar1 & 1) == 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 0x22;
      goto LAB_10588f8b0;
    }
    uVar1 = param_2;
    func_0x00010bf51e00();
    func_0x00010c0fdba0();
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf3f9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    if (lVar3 == 0) {
      lStack_88 = *(long *)(param_1 + 0x30);
      func_0x00010c15f260();
      _objc_retainAutoreleasedReturnValue();
      lStack_90 = lStack_88;
      func_0x00010bf3f9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lStack_90;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15f260();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf3f9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf3f980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1ace0(lVar2);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (lVar3 == 0) {
      _objc_release(lVar4);
      _objc_release(lStack_90);
      _objc_release(lStack_88);
    }
    _objc_release(lVar3);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
LAB_10588f8bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10588f8e0; end: 10588f9db; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _didReceiveApplicationLifecycleEvents:] */

void FUN_10588f8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf79200();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10588f9dc; end: 10588fa07;  */

void FUN_10588f9dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10588fa08; end: 10588fb0f; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _applicationDidEnterBackgroudWithApplicationLifecycleEvents:] */

void FUN_10588fa08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10588fb10; end: 10588fb47;  */

void FUN_10588fb10(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010becb220(param_1,param_2,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10588fb48; end: 10588fbef; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _didReceiveMemoryWarning] */

void FUN_10588fb48(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10588fbf0; end: 10588fc1b;  */

void FUN_10588fbf0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10588fc1c; end: 10588fc23; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _respondeToMemoryWarning] */

void FUN_10588fc1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__terminateFeaturedStoriesGenerat_112590630,2)
  ;
  return;
}



/* Entry: 10588fc24; end: 10589093b; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _generateCollageFeaturedStoriesIfNecessaryWithCollections:featuredStoriesToConvert:context:completionObserver:origin:] */

undefined *
FUN_10588fc24(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5,undefined *param_6)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined *puStack_610;
  int iStack_5ec;
  long lStack_588;
  undefined *puStack_568;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar24 = param_3;
  func_0x00010bf529e0();
  puVar3 = param_4;
  func_0x00010bf529e0();
  puVar4 = param_3;
  if ((puVar24 == puVar3) && (puVar24 = param_3, func_0x00010bf529e0(), puVar24 != (undefined *)0x0)
     ) {
    puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined **)(param_1 + 0xc0) = puVar24;
    _objc_release(uVar20);
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_retain(puVar4);
    puStack_610 = puVar4;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    if (puStack_610 == (undefined *)0x0) {
      iStack_5ec = 0;
    }
    else {
      iStack_5ec = 0;
      do {
        puVar24 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(puVar4);
          }
          lVar21 = *(long *)((long)puVar24 * 8);
          lVar5 = param_1;
          func_0x00010beb43c0();
          if ((int)lVar5 == 0) goto LAB_10589089c;
          iVar2 = (int)*(undefined8 *)(param_1 + 0x68);
          func_0x000108ec1518();
          if (iVar2 == 0) {
LAB_10588fe00:
            puVar6 = param_4;
            func_0x00010bfb2040();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            puVar7 = puVar6;
            func_0x00010bf3cec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0a0c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            puVar7 = puVar3;
            func_0x00010bf529e0();
            if (puVar7 == (undefined *)0x0) {
              lVar29 = lVar21;
              func_0x00010bfcf800();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar29;
              func_0x00010bf52a60();
              lVar10 = lRam0000000000000000;
              while (lVar5 != 0) {
                lVar28 = 0;
                do {
                  if (lRam0000000000000000 != lVar10) {
                    _objc_enumerationMutation(lVar29);
                  }
                  lVar26 = *(long *)(lVar28 * 8);
                  lVar30 = lVar26;
                  func_0x00010c0848e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar30;
                  func_0x00010bf529e0();
                  _objc_release(lVar30);
                  if (lVar8 != 0) {
                    func_0x00010c0848e0(lVar26);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa160(puVar3);
                    _objc_release(lVar26);
                  }
                  lVar28 = lVar28 + 1;
                } while (lVar5 != lVar28);
                lVar5 = lVar29;
                func_0x00010bf52a60();
              }
              _objc_release(lVar29);
            }
            puVar7 = puVar6;
            func_0x00010bf9c1c0();
            if ((int)puVar7 == 0) {
              lVar29 = lVar21;
              func_0x00010bfcf800();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar29;
              func_0x00010bf52a60();
              lVar10 = lRam0000000000000000;
              while (lVar5 != 0) {
                lVar28 = 0;
                do {
                  if (lRam0000000000000000 != lVar10) {
                    _objc_enumerationMutation(lVar29);
                  }
                  func_0x000107e6a278();
                  lVar28 = lVar28 + 1;
                } while (lVar5 != lVar28);
                lVar5 = lVar29;
                func_0x00010bf52a60();
              }
              _objc_release(lVar29);
            }
            puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            lVar10 = lVar21;
            func_0x00010bfcf800();
            _objc_retainAutoreleasedReturnValue();
            lStack_588 = lVar10;
            func_0x00010bf52a60();
            lVar5 = lRam0000000000000000;
            if (lStack_588 == 0) {
              puStack_568 = (undefined *)0x0;
              puVar22 = (undefined *)0x0;
            }
            else {
              puStack_568 = (undefined *)0x0;
              puVar22 = (undefined *)0x0;
              do {
                lVar29 = 0;
                do {
                  if (lRam0000000000000000 != lVar5) {
                    _objc_enumerationMutation(lVar10);
                  }
                  lVar30 = *(long *)(lVar29 * 8);
                  lVar28 = param_1;
                  func_0x00010beb43c0();
                  if ((int)lVar28 == 0) goto LAB_1058903f8;
                  lVar28 = lVar30;
                  func_0x00010c0d4f60();
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar30;
                  func_0x00010c0bc100();
                  _objc_retainAutoreleasedReturnValue();
                  lVar26 = lVar8;
                  func_0x00010bf529e0();
                  if (lVar26 == 0) {
                    lVar26 = lVar30;
                    func_0x00010c15f280();
                    _objc_retainAutoreleasedReturnValue();
                    lVar11 = lVar26;
                    func_0x00010bf529e0();
                    _objc_release(lVar26);
                    _objc_release(lVar8);
                    if (lVar11 != 0) goto LAB_105890150;
                  }
                  else {
                    _objc_release(lVar8);
LAB_105890150:
                    puVar12 = param_4;
                    func_0x00010bfb2040();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar22);
                    puVar22 = puVar12;
                  }
                  puVar12 = PTR_PTR_1126af4d0;
                  if (puVar22 != (undefined *)0x0) {
                    uVar20 = *(undefined8 *)(param_1 + 0x40);
                    func_0x00010c269d40(uVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfa7380();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar20);
                    puVar23 = puVar12;
                    func_0x00010c0ba200();
                    _objc_retainAutoreleasedReturnValue();
                    puVar25 = puVar12;
                    func_0x00010c14cca0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puStack_568);
                    lVar8 = lVar30;
                    func_0x00010c0bc100(lVar30);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_retain(puVar23);
                    _objc_retain(puVar9);
                    _objc_retain(lVar28);
                    lVar26 = lVar8;
                    func_0x00010c0b8620(lVar8);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa160(puVar7);
                    _objc_release(lVar26);
                    _objc_release(lVar8);
                    func_0x00010c15f280(lVar30);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_retain(puVar9);
                    _objc_retain(lVar28);
                    _objc_retain(puVar23);
                    lVar8 = lVar30;
                    func_0x00010c0b8620(lVar30);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa160(puVar7);
                    _objc_release(lVar8);
                    _objc_release(lVar30);
                    _objc_release(lVar28);
                    _objc_release(puVar9);
                    _objc_release(puVar23);
                    _objc_release(lVar28);
                    _objc_release(puVar9);
                    _objc_release(puVar23);
                    _objc_release(puVar23);
                    _objc_release(puVar12);
                    puStack_568 = puVar25;
                  }
                  _objc_release(lVar28);
                  lVar29 = lVar29 + 1;
                } while (lStack_588 != lVar29);
                lStack_588 = lVar10;
                func_0x00010bf52a60();
              } while (lStack_588 != 0);
            }
LAB_1058903f8:
            _objc_release(lVar10);
            _objc_retain(puVar22);
            _objc_retain(puVar3);
            puVar12 = puVar7;
            func_0x00010c14cca0();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar12;
            func_0x00010c0d3c80();
            _objc_release(puVar7);
            _objc_release(puVar12);
            puVar7 = puVar23;
            param_2 = puVar22;
            func_0x000107e6a3c4(puVar23,puVar22);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar7;
            func_0x00010c0d3c80();
            _objc_release(puVar23);
            _objc_release(puVar7);
            _objc_retain(puVar12);
            puVar7 = puVar12;
            func_0x00010bf52a60();
            lVar5 = lRam0000000000000000;
            while (puVar7 != (undefined *)0x0) {
              puVar23 = (undefined *)0x0;
              iVar2 = iStack_5ec + (int)puVar7;
              do {
                if (lRam0000000000000000 != lVar5) {
                  _objc_enumerationMutation(puVar12);
                }
                uVar27 = *(ulong *)((long)puVar23 * 8);
                lVar10 = param_1;
                func_0x00010beb43c0();
                if ((int)lVar10 == 0) goto LAB_1058907f8;
                puVar13 = PTR_PTR_1126bf800;
                func_0x00010bfbcd40();
                _objc_retainAutoreleasedReturnValue();
                puVar25 = PTR_PTR_1126bf8d8;
                _objc_retain(uVar27);
                _objc_opt_class(puVar25);
                uVar14 = uVar27;
                _objc_opt_isKindOfClass(uVar27,puVar25);
                uVar1 = uVar27;
                if ((uVar14 & 1) == 0) {
                  uVar1 = 0;
                }
                _objc_retain(uVar1);
                _objc_release(uVar27);
                param_2 = PTR_PTR_1126bf7e8;
                _objc_retain(uVar27);
                _objc_opt_class(param_2);
                uVar15 = uVar27;
                _objc_opt_isKindOfClass(uVar27,param_2);
                uVar14 = uVar27;
                if ((uVar15 & 1) == 0) {
                  uVar14 = 0;
                }
                _objc_retain(uVar14);
                _objc_release(uVar27);
                puVar25 = (undefined *)0x0;
                if (uVar1 != 0 || uVar14 != 0) {
                  func_0x00010c0844e0(uVar27);
                  _objc_retainAutoreleasedReturnValue();
                  puVar25 = puVar9;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar27);
                }
                puVar16 = PTR_PTR_1126bf808;
                _objc_alloc();
                uVar20 = *(undefined8 *)(param_1 + 0x40);
                func_0x00010c269d40(uVar20);
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar21;
                func_0x00010c2711a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf977c0();
                lVar29 = lVar21;
                func_0x00010bf33240();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067fc0();
                lVar28 = lVar21;
                func_0x00010bfcf800();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf529e0();
                func_0x00010bf529e0();
                func_0x00010bf529e0();
                func_0x00010c028a60(puVar16);
                _objc_release(lVar28);
                _objc_release(lVar29);
                _objc_release(lVar10);
                _objc_release(uVar20);
                uVar20 = *(undefined8 *)(param_1 + 0xc0);
                puVar17 = PTR_PTR_1126b60f8;
                func_0x00010c0f2b40(PTR_PTR_1126b60f8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(uVar20);
                _objc_release(puVar17);
                uVar20 = *(undefined8 *)(param_1 + 0x80);
                func_0x00010c25e900(param_1);
                func_0x00010bef7840(uVar20);
                iStack_5ec = iStack_5ec + 1;
                _objc_release(puVar16);
                _objc_release(uVar14);
                _objc_release(uVar1);
                _objc_release(puVar25);
                _objc_release(puVar13);
                puVar23 = puVar23 + 1;
              } while (puVar7 != puVar23);
              puVar7 = puVar12;
              func_0x00010bf52a60();
              iStack_5ec = iVar2;
            }
LAB_1058907f8:
            _objc_release(puVar12);
            _objc_release(puVar3);
            _objc_release(puVar22);
            _objc_release(puStack_568);
            _objc_release(puVar9);
            _objc_release(puVar22);
            _objc_release(puVar12);
            _objc_release(puVar3);
            _objc_release(puVar6);
          }
          else {
            lVar5 = lVar21;
            func_0x00010bef03a0();
            func_0x000107ee8778();
            _objc_retainAutoreleasedReturnValue();
            if (lVar5 == 0) {
LAB_10588fdf8:
              _objc_release(lVar5);
              goto LAB_10588fe00;
            }
            puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf433a0();
            _objc_release(puVar3);
            if (puVar6 == (undefined *)0xffffffffffffffff) goto LAB_10588fdf8;
            _objc_release(lVar5);
          }
          puVar24 = puVar24 + 1;
        } while (puVar24 != puStack_610);
        puStack_610 = puVar4;
        func_0x00010bf52a60();
      } while (puStack_610 != (undefined *)0x0);
    }
LAB_10589089c:
    _objc_release(puVar4);
    *(bool *)(param_1 + 0xe8) = 0 < iStack_5ec;
    lVar18 = *(long *)(param_1 + 0xc0);
    func_0x00010bf529e0();
    if (lVar18 == 0) {
      param_2 = param_6;
      func_0x000107e67794(1,param_6,0);
    }
  }
  else {
    param_2 = param_6;
    func_0x000107e67794(1,param_6,0);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    func_0x00010bf9e140(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010bf3fe40(uVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = param_2;
    func_0x00010c0720c0(param_2);
    _objc_release(uVar20);
    _objc_release(param_2);
    return puVar24;
  }
  return puVar4;
}



/* Entry: 10589093c; end: 105890a1b;  */

undefined8 FUN_10589093c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3fe40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105890a1c; end: 105890a23;  */

void FUN_105890a1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105890a24; end: 105890a43;  */

bool FUN_105890a24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3d2a0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 105890a44; end: 105890bdb;  */

void FUN_105890a44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  func_0x000107e65eb0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0bc0e0();
  if ((int)uVar1 == 2) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010c0844e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = param_2;
      func_0x00010c0844e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar1);
      _objc_release(uVar2);
      _objc_retain(param_2);
      uVar1 = param_2;
      goto LAB_105890af0;
    }
  }
  uVar1 = 0;
LAB_105890af0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105890bdc; end: 105890d0b;  */

ulong FUN_105890bdc(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bf8d8;
  _objc_opt_class(PTR_PTR_1126bf8d8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bf7e8;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar6 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar3 = param_2;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_2);
  uVar6 = 0;
  if (uVar1 != 0 || uVar3 != 0) {
    uVar6 = param_2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar6;
  func_0x000107e679c8(uVar6,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50));
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  uVar7 = (ulong)((uint)(lVar5 == 0) & ((uint)uVar4 ^ 1));
  if ((lVar5 != 0) && ((uVar4 & 1) == 0)) {
    uVar7 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf4b900(uVar7);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(param_2);
  return uVar7;
}



/* Entry: 105890d0c; end: 105890fc7; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _generateCollageForFeaturedStory:orderedSelectedOriginalSnaps:collagePlacement:collageUCOLensID:snapId:itemOrder:groupName:collageCreativeTools:observer:] */

void FUN_105890d0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  int iStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_8 == 0 && param_5 == 0) {
    param_5 = 1;
  }
  uVar2 = param_6;
  func_0x00010c0b4ca0();
  _objc_initWeak(auStack_70,param_1);
  func_0x000108ec10b8();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_11);
  uStack_80 = uVar2;
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_6);
  iStack_78 = param_5;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x000107e614a0(param_4,0,uVar6,uVar1,uVar4,uVar3,uVar5,uVar7,1);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105890fc8; end: 1058911d7;  */

void FUN_105890fc8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),7,
                          &PTR____CFConstantStringClassReference_110e09678);
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfca5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_initWeak(auStack_48,lVar1);
      _objc_copyWeak(auStack_60,auStack_48);
      uStack_58 = *(undefined8 *)(param_1 + 0x68);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar9);
      uStack_50 = *(undefined4 *)(param_1 + 0x70);
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain(uVar11);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(uVar3);
      func_0x00010c297260(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1058911d8; end: 10589140b;  */

void FUN_1058911d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfbf2e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_copyWeak(auStack_68,param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar9);
    uStack_58 = *(undefined4 *)(param_1 + 0x70);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar11);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar2);
    func_0x00010c297260(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10589140c; end: 105891783;  */

void FUN_10589140c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_105891490;
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = 0x2d;
  }
  else {
    lVar6 = *(long *)(lVar1 + 0x100);
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bfb1920(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c270d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216040(param_2);
        _objc_release(uVar2);
        _objc_release(uVar5);
        puVar3 = PTR_PTR_1126b25e8;
        _objc_opt_new(PTR_PTR_1126b25e8);
        lVar6 = param_2;
        func_0x00010c0fee00(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar6;
        func_0x00010c0fef80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ac2a0();
        _objc_release(lVar4);
        _objc_release(lVar6);
        _objc_release(puVar3);
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0d2940(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd9580();
        _objc_release(uVar2);
        uVar2 = *(undefined8 *)(lVar1 + 8);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28a080();
        _objc_release(uVar2);
        uVar5 = *(undefined8 *)(lVar1 + 0x70);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c12f6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_retain(uVar2);
        uVar5 = *(undefined8 *)(lVar1 + 0xd0);
        *(undefined8 *)(lVar1 + 0xd0) = uVar2;
        _objc_release(uVar5);
        func_0x00010be66da0(lVar1);
        uVar5 = uVar2;
        func_0x00010c13cb40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar8);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar9);
        uVar10 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar10);
        uVar11 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(uVar11);
        uVar12 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar12);
        uVar13 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain(uVar13);
        uVar14 = *(undefined8 *)(param_1 + 0x58);
        _objc_retain(uVar14);
        uVar7 = *(undefined8 *)(param_1 + 0x60);
        _objc_retain(uVar7);
        _objc_retain(uVar2);
        func_0x00010c297260(uVar5);
        _objc_release(uVar7);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar2);
        _objc_release(uVar2);
        _objc_release(uVar5);
        goto LAB_105891490;
      }
      if (lVar6 == 1) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar5 = 0xc;
      }
      else {
LAB_1058914dc:
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        uVar5 = 0;
      }
    }
    else if (lVar6 == 3) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = 0x25;
    }
    else {
      if (lVar6 != 2) goto LAB_1058914dc;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = 0x23;
    }
  }
  func_0x000107e66360(uVar2,uVar5,&PTR____CFConstantStringClassReference_110e09678);
LAB_105891490:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105891784; end: 10589192f;  */

void FUN_105891784(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xd0) == *(long *)(param_1 + 0x28)) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0) = 0;
    _objc_release();
    lVar1 = param_2;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == 0) && (lVar1 != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(ulong *)(param_1 + 0x40);
      func_0x00010bfd4a60();
      if ((uVar3 & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 0x40);
        func_0x00010bfdd780();
      }
      else {
        uVar3 = 1;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      if ((uVar3 & 1) == 0) {
        func_0x00010be05c20(uVar5);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be05c20(uVar5);
        _objc_release(puVar4);
      }
      _objc_release(uVar2);
    }
    else {
      func_0x000107e664b4(*(undefined8 *)(param_1 + 0x30),param_3,
                          &PTR____CFConstantStringClassReference_110e09678);
    }
    _objc_release(lVar1);
  }
  else {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x30),0xe,
                        &PTR____CFConstantStringClassReference_110e09678);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105891930; end: 105891937;  */

void FUN_105891930(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105891938; end: 105891c0f; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _downloadAndPersistCollageSnapDoc:collageEntry:collageUCOLensId:createdFromSnapIds:collagePlacement:snapId:itemOrder:groupName:snapCreationDate:observer:] */

void FUN_105891938(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if ((param_3 == 0) || (lVar1 = param_6, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x000107e66360(param_12,9,&PTR____CFConstantStringClassReference_110e09678);
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126b25b8;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011280();
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107e6121c(puVar3,param_3,uVar6,uVar5,*(undefined8 *)(param_1 + 0x18),puVar2,
                        &PTR____CFConstantStringClassReference_110e09678);
    _objc_release(uVar5);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_12);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    func_0x00010c297260(puVar4);
    _objc_release(puVar4);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_12);
    _objc_release(param_4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105891c10; end: 105891cd3;  */

void FUN_105891c10(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be730a0(uVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x000107e66360(*(undefined8 *)(param_1 + 0x28),10,
                        &PTR____CFConstantStringClassReference_110e09678);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105891cd4; end: 105891e5b; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _persistCollageSnapDoc:collageEntry:collageUCOLensId:createdFromSnapIds:collagePlacement:snapId:itemOrder:groupName:snapCreationDate:observer:] */

void FUN_105891cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3d240(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e66da8(param_3,param_4,0,param_5,param_6,param_7,puVar1,param_8,param_9,param_10,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110e09678,param_12,param_11);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105891e5c; end: 105891eb3; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _terminateFeaturedStoriesGenerationIfNeededWithReasion:] */

void FUN_105891e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105891eb4;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0xa0),param_2,&puStack_40);
  return;
}



/* Entry: 105891eb4; end: 105891f7f;  */

void FUN_105891eb4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar4 + 200);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x28) == 2)) {
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c282760();
    if ((int)lVar4 != 0) goto LAB_105891f6c;
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x000108ec1a6c();
    _objc_release(lVar2);
    if (iVar1 == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x20);
  }
  *(undefined8 *)(lVar4 + 0x100) = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xd0);
  if ((uVar3 == 0) || (func_0x00010c06e0e0(), (uVar3 & 1) != 0)) {
    return;
  }
  func_0x00010bf2dba0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1392c0();
LAB_105891f6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105891f80; end: 105891fc3; -[SCMemoriesMashupStyleFeaturedStoryCollageManager _validateServerGeneratedSnapDataModelIsCollage:] */

bool FUN_105891f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c15f260(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c243a00();
  _objc_release(param_3);
  return (int)uVar1 == 4;
}



/* Entry: 105891fc4; end: 10589212b; -[SCMemoriesMashupStyleFeaturedStoryCollageManager .cxx_destruct] */

void FUN_105891fc4(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
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



/* Entry: 10589212c; end: 105892157; -[SCMemoriesFeaturedStoryDataMutator featuredStoryDataSourceDidChange] */

void FUN_10589212c(long param_1)

{
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa3360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105892158; end: 10589227f; -[SCMemoriesFeaturedStoryDataMutator deleteLocalTemporarySnaps:forEntry:completion:] */

void FUN_105892158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105892280;
  puStack_60 = &UNK_1108baae8;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x00010bf97e80(param_3,param_2,&puStack_78);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105892284;
  puStack_a0 = &UNK_1108465d0;
  lStack_98 = param_1;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_b8);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105892280; end: 105892283;  */

void FUN_105892280(void)

{
  return;
}



/* Entry: 105892284; end: 105892433;  */

void FUN_105892284(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x70) == '\x01') {
    func_0x00010be8c800();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  uVar2 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105892434;
  puStack_78 = &UNK_110848218;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uStack_68 = uVar4;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  func_0x00010c0f8520(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105892434; end: 10589247b;  */

void FUN_105892434(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be71a60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),(*(byte *)(lVar1 + 0x70) ^ 0xff) & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10589247c; end: 10589254f;  */

void FUN_10589247c(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfa3360(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105892550;
      puStack_50 = &UNK_1108523f8;
      _objc_retain(lVar2);
      lStack_40 = lVar2;
      uStack_38 = param_2;
      _objc_retain(param_3);
      uStack_48 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_68);
      _objc_release(uStack_48);
      _objc_release(lStack_40);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105892550; end: 105892563;  */

void FUN_105892550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105892560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105892564; end: 105892647; -[SCMemoriesFeaturedStoryDataMutator deleteLocalTemporarySnap:forEntry:completion:] */

void FUN_105892564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105892648;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105892648; end: 105892863;  */

void FUN_105892648(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,*(long *)(param_1 + 0x20));
  lVar9 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar9 + 0x70) == '\x01') {
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8c800(lVar9);
    _objc_release(puVar1);
    lVar9 = *(long *)(param_1 + 0x20);
  }
  uVar2 = *(undefined8 *)(lVar9 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105892864;
  puStack_88 = &UNK_110848218;
  ppuVar12 = &puStack_a0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar10;
  _objc_retain(uVar11);
  ppuVar3 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x60);
  uStack_78 = uVar11;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105892920;
  puStack_b8 = &UNK_11088fbf8;
  uVar7 = SUB81(auStack_68,0);
  _objc_copyWeak(auStack_a8);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar10);
  ppuVar8 = &puStack_a0;
  uStack_b0 = uVar10;
  func_0x00010c0f8520(uVar2);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  puVar4 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_d8 = FUN_105892864;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5 + 0x30;
  ppuStack_100 = ppuVar12;
  ppuStack_f8 = ppuVar3;
  uStack_f0 = uVar2;
  puStack_e8 = puVar4;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined1 *)0x0) {
    uStack_110 = *(undefined8 *)(puVar5 + 0x20);
    ppuVar12 = (undefined **)0x1;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00010be71a60(puVar6);
    _objc_release(ppuVar3);
  }
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  uStack_118 = 0x105892920;
  ppuStack_140 = ppuVar12;
  ppuStack_138 = ppuVar3;
  puStack_130 = puVar5;
  puStack_128 = puVar6;
  ppuStack_120 = &puStack_e0;
  _objc_retain(ppuVar8);
  puVar6 = puVar4 + 0x28;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined1 *)0x0) {
    func_0x00010bfa3360(puVar6);
    lVar9 = *(long *)(puVar4 + 0x20);
    if (lVar9 != 0) {
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_1058929f4;
      puStack_160 = &UNK_1108523f8;
      _objc_retain(lVar9);
      lStack_150 = lVar9;
      uStack_148 = uVar7;
      _objc_retain(ppuVar8);
      ppuStack_158 = ppuVar8;
      func_0x000100162d98("APPSTORE",&puStack_178);
      _objc_release(ppuStack_158);
      _objc_release(lStack_150);
    }
  }
  _objc_release(puVar6);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 105892864; end: 1058929f3;  */

void FUN_105892864(long param_1,undefined1 param_2,undefined *param_3)

{
  long lVar1;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  long lVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    unaff_x22 = 1;
    unaff_x21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x21;
    func_0x00010be71a60(lVar1);
    _objc_release(unaff_x21);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0x105892920;
  uStack_70 = unaff_x22;
  puStack_68 = unaff_x21;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  lVar1 = lVar2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfa3360(lVar1);
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 != 0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1058929f4;
      puStack_90 = &UNK_1108523f8;
      _objc_retain(lVar2);
      lStack_80 = lVar2;
      uStack_78 = param_2;
      _objc_retain(param_3);
      puStack_88 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_a8);
      _objc_release(puStack_88);
      _objc_release(lStack_80);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1058929f4; end: 105892a07;  */

void FUN_1058929f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105892a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105892a08; end: 105892aef; -[SCMemoriesFeaturedStoryDataMutator deleteLocalTemporaryEntry:completion:] */

void FUN_105892a08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010c080ca0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7140();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105892af0;
  puStack_50 = &UNK_11084a9e8;
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



/* Entry: 105892af0; end: 105892d37;  */

void FUN_105892af0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126af4d0;
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_105892d38;
  uStack_68 = 0x105892d48;
  uStack_60 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar3 + 0x70) == '\x01') {
    uVar1 = *(undefined8 *)(lVar3 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_80[5];
    puStack_80[5] = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010be8c800(*(undefined8 *)(param_1 + 0x20));
    lVar3 = *(long *)(param_1 + 0x20);
  }
  uVar1 = *(undefined8 *)(lVar3 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105892d50;
  puStack_a8 = &UNK_110851b50;
  _objc_copyWeak(auStack_90,auStack_58);
  puStack_98 = &uStack_88;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uStack_a0 = uVar5;
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c8,auStack_58);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c0f8520(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105892d38; end: 105892d4f;  */

void FUN_105892d38(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105892d50; end: 105892ea7;  */

void FUN_105892d50(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126af4d0;
  if (lVar3 != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar7 = *(long *)(lVar8 + 0x28);
    if (lVar7 == 0) {
      uVar6 = *(undefined8 *)(lVar3 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar5 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined **)(lVar7 + 0x28) = puVar1;
      _objc_release(uVar5);
    }
    else {
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar8 + 0x28);
      *(long *)(lVar8 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
    func_0x00010be71a60(lVar3);
    puVar1 = PTR_PTR_1126bc830;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    func_0x00010bf6be80(puVar1);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar4 = lVar3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar4 != 0) {
    func_0x00010bfa3360(lVar4);
    lVar3 = *(long *)(lVar3 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3);
    }
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105892ea8; end: 105892f17;  */

void FUN_105892ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfa3360(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105892f18; end: 1058930e3; -[SCMemoriesFeaturedStoryDataMutator addSnapsEntities:toEntry:snapsOrder:mutationInfo:completionHandler:] */

void FUN_105892f18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1058930e4;
    puStack_68 = &UNK_11084aaa8;
    uStack_60 = param_6;
    uStack_58 = param_7;
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(uStack_60);
    uVar2 = uStack_58;
  }
  else {
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_3);
    uVar2 = param_4;
  }
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058930e4; end: 1058930fb;  */

void FUN_1058930e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058930f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058930fc; end: 105893313;  */

void FUN_1058930fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105893314;
  puStack_a0 = &UNK_1108651a8;
  _objc_copyWeak(auStack_78,auStack_68);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar3;
  _objc_retain(uVar4);
  uStack_70 = *(undefined1 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_90 = uVar4;
  uStack_88 = uVar1;
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uStack_80 = uVar5;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c8,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uStack_c0 = *(undefined1 *)(param_1 + 0x50);
  func_0x00010c0f8520(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  return;
}



/* Entry: 105893314; end: 1058936ef;  */

void FUN_105893314(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *unaff_x19;
  long lVar8;
  long lVar9;
  undefined *unaff_x21;
  undefined *puVar10;
  undefined *unaff_x22;
  long lVar11;
  undefined *puVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar13;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar8 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lStack_148 = lVar8;
    _objc_opt_new();
    unaff_x24 = *(undefined8 *)(param_1 + 0x20);
    puStack_138 = puVar10;
    func_0x00010c245780();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar8 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar8);
    lStack_140 = lVar8;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar9 = 0;
        uVar5 = unaff_x24;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lStack_140);
          }
          puVar10 = PTR_PTR_1126bc7f8;
          lVar13 = *(long *)(lStack_128 + lVar9 * 8);
          lVar2 = lVar13;
          func_0x00010c23f220(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5a9c0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          func_0x00010c1d7bc0(puVar10);
          func_0x00010c1a7000(puVar10);
          func_0x00010c1b4ee0(puVar10);
          puVar12 = PTR_PTR_1126bf8e8;
          lVar2 = lVar13;
          func_0x00010bf6f520(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5a9e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          puVar3 = puVar12;
          func_0x00010c0fd8e0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18c580(puVar10);
          _objc_release(puVar3);
          lVar2 = lVar13;
          func_0x00010c0ce1e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar3 = PTR_PTR_1126bf8f0;
          if (lVar2 != 0) {
            lVar2 = lVar13;
            func_0x00010c0ce1e0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf5aa20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            puVar4 = puVar3;
            func_0x00010c0fd920(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1c8100(puVar10);
            _objc_release(puVar4);
            _objc_release(puVar3);
          }
          puVar3 = puVar10;
          func_0x00010c0fd8c0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_138);
          _objc_release(puVar3);
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar13;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar5;
          lVar7 = lVar2;
          func_0x00010b704538();
          param_2 = (int)lVar7;
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(lVar2);
          _objc_release(lVar13);
          _objc_release(puVar12);
          _objc_release(puVar10);
          lVar9 = lVar9 + 1;
          uVar5 = unaff_x24;
        } while (lVar8 != lVar9);
        lVar8 = lStack_140;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar8 != 0);
    }
    _objc_release(lStack_140);
    unaff_x22 = PTR_PTR_1126bc830;
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      func_0x00010bf35080();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf5a940();
      _objc_retainAutoreleasedReturnValue();
    }
    unaff_x21 = puStack_138;
    lVar8 = lStack_148;
    unaff_x19 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(puStack_138);
    func_0x00010bfed320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(unaff_x22);
    func_0x00010c206280(unaff_x22);
    param_3 = *(long *)(param_1 + 0x38);
    func_0x00010c2062e0(unaff_x22);
    _objc_release(unaff_x19);
    _objc_release(unaff_x22);
    _objc_release(unaff_x24);
    _objc_release(unaff_x21);
  }
  lVar11 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1058936f0;
  lVar9 = lVar11 + 0x38;
  uStack_190 = unaff_x24;
  uStack_188 = unaff_x23;
  puStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  lStack_170 = lVar8;
  puStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  puVar10 = PTR_PTR_1126af4c0;
  if (lVar9 != 0) {
    iVar1 = 0;
    if (param_3 == 0) {
      iVar1 = param_2;
    }
    if (iVar1 == 1) {
      uVar5 = *(undefined8 *)(lVar11 + 0x20);
      func_0x00010bf97200(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar9 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      puVar12 = PTR_PTR_1126af4d0;
      uVar5 = *(undefined8 *)(lVar9 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    else {
      puVar10 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
    }
    lVar8 = *(long *)(lVar11 + 0x30);
    if (lVar8 != 0) {
      puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c8 = 0xc2000000;
      pcStack_1c0 = FUN_1058938cc;
      puStack_1b8 = &UNK_1108465d0;
      _objc_retain(lVar8);
      lStack_198 = lVar8;
      _objc_retain(puVar10);
      puStack_1b0 = puVar10;
      _objc_retain(puVar12);
      uVar5 = *(undefined8 *)(lVar11 + 0x28);
      puStack_1a8 = puVar12;
      _objc_retain(uVar5);
      uStack_1a0 = uVar5;
      func_0x000100162d98("APPSTORE",&puStack_1d0);
      _objc_release(uStack_1a0);
      _objc_release(puStack_1a8);
      _objc_release(puStack_1b0);
      _objc_release(lStack_198);
    }
    if (iVar1 != 0) {
      if (*(char *)(lVar11 + 0x40) == '\x01') {
        func_0x00010bf74420(*(undefined8 *)(lVar9 + 0x68));
      }
      func_0x00010bfa3360(lVar9);
    }
    _objc_release(puVar12);
    _objc_release(puVar10);
  }
  _objc_release(lVar9);
  return;
}



/* Entry: 1058936f0; end: 1058938cb;  */

void FUN_1058936f0(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar5 = PTR_PTR_1126af4c0;
  if (lVar2 != 0) {
    iVar1 = 0;
    if (param_3 == 0) {
      iVar1 = param_2;
    }
    if (iVar1 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf97200(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar6 = PTR_PTR_1126af4d0;
      uVar3 = *(undefined8 *)(lVar2 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    else {
      puVar5 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 != 0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1058938cc;
      puStack_68 = &UNK_1108465d0;
      _objc_retain(lVar7);
      lStack_48 = lVar7;
      _objc_retain(puVar5);
      puStack_60 = puVar5;
      _objc_retain(puVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      puStack_58 = puVar6;
      _objc_retain(uVar3);
      uStack_50 = uVar3;
      func_0x000100162d98("APPSTORE",&puStack_80);
      _objc_release(uStack_50);
      _objc_release(puStack_58);
      _objc_release(puStack_60);
      _objc_release(lStack_48);
    }
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x00010bf74420(*(undefined8 *)(lVar2 + 0x68));
      }
      func_0x00010bfa3360(lVar2);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1058938cc; end: 1058938df;  */

void FUN_1058938cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058938dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1058938e0; end: 105893a1b; -[SCMemoriesFeaturedStoryDataMutator createTemporaryEntryFromEntry:queue:completion:] */

void FUN_1058938e0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    if (param_3 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105893a1c;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_5);
      lStack_48 = param_5;
      func_0x00010007380c(param_4,&puStack_68);
      lVar1 = lStack_48;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      lVar1 = param_3;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105893a1c; end: 105893a2f;  */

void FUN_105893a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105893a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105893a30; end: 105893dcb;  */

void FUN_105893a30(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  puVar1 = auStack_80;
  _objc_initWeak(puVar1,*(undefined8 *)(param_1 + 0x20));
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  puVar6 = PTR_PTR_1126af4c0;
  puVar7 = puVar3;
  if (puVar4 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf97200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126af4d0;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar6);
  }
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_105892d38;
  uStack_90 = 0x105892d48;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  puStack_88 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105893dcc;
  puStack_e8 = &UNK_1108bab48;
  _objc_copyWeak(auStack_b8,auStack_80);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar9);
  uStack_e0 = uVar9;
  _objc_retain(puVar1);
  puStack_d8 = puVar1;
  uStack_d0 = uVar2;
  _objc_retain(puVar7);
  puStack_c0 = &uStack_b0;
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  puStack_c8 = puVar7;
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_108,auStack_80);
  _objc_retain(puVar1);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar10);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar8);
  func_0x00010c0f8520(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_108);
  _objc_release(puStack_c8);
  _objc_release(puStack_d8);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(puStack_88);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105893dcc; end: 1058949d7;  */

void FUN_105893dcc(long param_1,uint param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *unaff_x19;
  undefined8 uVar9;
  long lVar10;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *puVar11;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar12;
  long unaff_x25;
  long unaff_x26;
  long lVar13;
  undefined *puStack_360;
  undefined8 uStack_358;
  code *pcStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_240;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar13 != 0) {
    puVar1 = PTR_PTR_1126bf8c8;
    func_0x00010c2aeac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0720();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192cc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1968c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b4ee0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1b1a80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bc830;
    puStack_1c0 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_1c8 = puVar2;
    func_0x00010c1d7bc0(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_170 = puVar2;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_178 = puVar1;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_180 = puVar2;
    _objc_opt_new();
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(lVar13 + 8);
    puStack_188 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010b5f972c();
    param_2 = (uint)uVar5;
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar9;
    _objc_release(uVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar10 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar10);
    lStack_1b8 = lVar10;
    func_0x00010bf52a60();
    lStack_168 = lVar10;
    if (lVar10 != 0) {
      lStack_138 = 0;
      lStack_1a8 = *plStack_120;
      lStack_1a0 = param_1;
      lStack_198 = lVar13;
      do {
        unaff_x26 = 0;
        do {
          if (*plStack_120 != lStack_1a8) {
            _objc_enumerationMutation(lStack_1b8);
          }
          lVar12 = *(long *)(lStack_128 + unaff_x26 * 8);
          param_2 = (uint)*(undefined8 *)(param_1 + 0x20);
          func_0x00010c080ca0();
          lVar10 = lVar12;
          func_0x00010c241220(lVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uStack_190;
          func_0x00010c0e00e0(uStack_190);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(lVar13 + 0x18);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(lVar13 + 0x20);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          param_2 = param_2 ^ 1;
          lVar4 = lVar12;
          uStack_1d0 = uVar9;
          func_0x000107e2cec0(lVar12,param_2,1,0,0,uVar5,0,uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(uVar3);
          _objc_release(uVar5);
          _objc_release(lVar10);
          puVar1 = PTR_PTR_1126bc7f8;
          func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7bc0();
          func_0x00010c1a7000(puVar1);
          func_0x00010c1b4ee0(puVar1);
          lVar10 = lVar4;
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar2 = PTR_PTR_1126af4d0;
          if (lVar10 != 0) {
            lVar10 = lVar4;
            func_0x00010bf8b0c0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(lVar13 + 8);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa72e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            _objc_release(lVar10);
            if (puVar2 == (undefined *)0x0) {
              func_0x00010c192ce0(puVar1);
            }
            _objc_release(puVar2);
          }
          puVar2 = PTR_PTR_1126bc7b8;
          uVar5 = *(undefined8 *)(lVar13 + 8);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          puVar6 = PTR_PTR_1126bf8f8;
          puStack_140 = puVar2;
          func_0x00010c2aebe0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar6;
          func_0x00010c1d0720();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar6);
          puVar2 = PTR_PTR_1126bf8e8;
          puStack_148 = puVar7;
          func_0x00010bf5a9e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_150 = puVar2;
          func_0x00010c0fd8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18c580(puVar1);
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126bc7c8;
          uVar5 = *(undefined8 *)(lVar13 + 8);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7220();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          puVar6 = PTR_PTR_1126bf900;
          puStack_158 = puVar2;
          func_0x00010c2aec40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar6;
          func_0x00010c1d0720();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar6);
          puVar2 = PTR_PTR_1126bf8f0;
          puStack_160 = puVar7;
          func_0x00010bf5aa20(PTR_PTR_1126bf8f0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c0fd920();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c8100(puVar1);
          _objc_release(puVar6);
          lVar13 = lVar4;
          func_0x00010c241220(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_178);
          _objc_release(lVar13);
          puVar6 = puVar1;
          func_0x00010c0fd8c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_170);
          _objc_release(puVar6);
          lVar13 = lVar12;
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar13 == 0) {
            unaff_x25 = lVar12;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(lVar13);
            unaff_x25 = lVar13;
          }
          _objc_release(lVar13);
          func_0x00010befa120(puStack_180);
          lVar13 = lVar12;
          func_0x00010c241220(lVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
          lVar10 = lVar4;
          func_0x00010c241220(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar5);
          _objc_release(lVar10);
          _objc_release(lVar13);
          lVar10 = *(long *)(param_1 + 0x20);
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c241220(lVar12);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar13 == 0) {
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puStack_1b0 = puVar6;
          }
          lVar8 = lVar4;
          func_0x00010c241220(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_188);
          _objc_release(lVar8);
          if (lVar13 == 0) {
            _objc_release(puStack_1b0);
          }
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar10);
          lStack_138 = lStack_138 + 1;
          _objc_release(unaff_x25);
          _objc_release(puVar2);
          _objc_release(puStack_160);
          _objc_release(puStack_158);
          _objc_release(puStack_150);
          _objc_release(puStack_148);
          _objc_release(puStack_140);
          _objc_release(puVar1);
          _objc_release(lVar4);
          lVar13 = lStack_198;
          param_1 = lStack_1a0;
          unaff_x26 = unaff_x26 + 1;
        } while (lStack_168 != unaff_x26);
        lVar10 = lStack_1b8;
        func_0x00010bf52a60();
        lStack_168 = lVar10;
      } while (lVar10 != 0);
    }
    _objc_release(lStack_1b8);
    uVar5 = *(undefined8 *)(lVar13 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puStack_180;
    puVar2 = puStack_180;
    func_0x00010bf51e00(puStack_180);
    unaff_x23 = puStack_178;
    puVar1 = puStack_178;
    func_0x00010bf51e00(puStack_178);
    puVar6 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    func_0x00010bf8b080(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar5);
    unaff_x22 = puStack_170;
    unaff_x19 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(puStack_170);
    func_0x00010bfed320();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puStack_1c8;
    func_0x00010c066e00(puStack_1c8);
    puVar2 = unaff_x23;
    func_0x00010b7043dc(unaff_x23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206280(unaff_x21);
    _objc_release(puVar2);
    unaff_x20 = puStack_188;
    param_3 = puStack_188;
    func_0x00010c2062e0(unaff_x21);
    _objc_release(unaff_x19);
    _objc_release(uStack_190);
    _objc_release(unaff_x20);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(puStack_1c0);
  }
  lVar10 = lVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_1d8 = 0x1058946dc;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar10 + 0x40;
  lStack_230 = param_1;
  lStack_228 = lVar13;
  lStack_220 = unaff_x26;
  lStack_218 = unaff_x25;
  puStack_210 = unaff_x24;
  puStack_208 = unaff_x23;
  puStack_200 = unaff_x22;
  puStack_1f8 = unaff_x21;
  puStack_1f0 = unaff_x20;
  puStack_1e8 = unaff_x19;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af4c0;
  if (lVar4 != 0) {
    if ((param_2 == 0) || (param_3 != (undefined *)0x0)) {
      puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_358 = 0xc2000000;
      pcStack_350 = FUN_105894a20;
      puStack_348 = &UNK_110849530;
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      puVar2 = *(undefined **)(lVar10 + 0x30);
      _objc_retain(puVar2);
      puStack_340 = puVar2;
      func_0x00010007380c(uVar5,&puStack_360);
      puVar1 = puStack_340;
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa70a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar1 = PTR_PTR_1126af4d0;
      uVar5 = *(undefined8 *)(lVar4 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      plStack_2f0 = (long *)0x0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      _objc_retain(puVar1);
      puVar7 = puVar1;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar13 = *plStack_2f0;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_2f0 != lVar13) {
              _objc_enumerationMutation(puVar1);
            }
            uVar5 = *(undefined8 *)(lStack_2f8 + (long)puVar11 * 8);
            uVar3 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 0x28);
            func_0x00010c241220(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0(uVar3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            func_0x00010c1d0640(puVar6);
            _objc_release(uVar3);
            puVar11 = puVar11 + 1;
          } while (puVar7 != puVar11);
          puVar7 = puVar1;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_330 = 0xc2000000;
      pcStack_328 = FUN_1058949d8;
      puStack_320 = &UNK_11084a9e8;
      uVar5 = *(undefined8 *)(lVar10 + 0x28);
      uVar3 = *(undefined8 *)(lVar10 + 0x30);
      _objc_retain(uVar3);
      puStack_318 = puVar2;
      puStack_310 = puVar6;
      uStack_308 = uVar3;
      _objc_retain(puVar6);
      _objc_retain(puVar2);
      func_0x00010007380c(uVar5,&puStack_338);
      func_0x00010bfa3360(lVar4);
      _objc_release(puStack_310);
      _objc_release(puStack_318);
      _objc_release(uStack_308);
      _objc_release(puVar6);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  lVar13 = *(long *)(lVar4 + 0x30);
  func_0x00010bf51e00(uVar5);
  (**(code **)(lVar13 + 0x10))(lVar13,uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1058949d8; end: 105894a1f;  */

void FUN_1058949d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105894a20; end: 105894a33;  */

void FUN_105894a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105894a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105894a34; end: 105894c7f; -[SCMemoriesFeaturedStoryDataMutator editFeaturedSnap:mediaData:rawMediaAssetCloudFile:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:completionHandler:] */

void FUN_105894a34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
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
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105894c80;
  puStack_f0 = &UNK_1108bac48;
  uStack_c0 = param_10;
  uStack_b0 = param_12;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = param_13;
  uStack_a0 = param_11;
  uStack_90 = param_14;
  uStack_e8 = param_4;
  lStack_e0 = param_2;
  uStack_d8 = param_5;
  uStack_d0 = uVar1;
  uStack_c8 = uVar3;
  uStack_b8 = param_6;
  uStack_98 = param_8;
  uStack_88 = param_1;
  uStack_80 = param_9;
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_retain(param_14);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar2,param_3,&puStack_108);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_d8);
  _objc_release(uStack_90);
  _objc_release(uStack_e8);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_11);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_14);
  _objc_release(param_4);
  return;
}



/* Entry: 105894c80; end: 105895a23;  */

void FUN_105894c80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  ulong in_stack_fffffffffffffe50;
  undefined *puStack_178;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar25 = PTR_PTR_1126af4d0;
  if (lVar3 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8b0c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (puVar25 == (undefined *)0x0) {
      lVar3 = *(long *)(param_1 + 0x78);
      if (lVar3 != 0) {
        puVar25 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))(lVar3,0,0,0,puVar25);
        _objc_release(puVar25);
      }
      goto LAB_1058959b8;
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf8b0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar25;
  if (lVar3 == 0) {
    puVar22 = *(undefined **)(param_1 + 0x20);
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  func_0x000107e2b7cc(puVar22,lVar1,0,puVar2,uVar4,0,1,puVar6,
                      in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(lVar3);
  puVar22 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    lVar26 = 0;
    puStack_178 = (undefined *)0x0;
  }
  else {
    _objc_retain(lVar3);
    puVar6 = puVar22;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
LAB_105894fdc:
      puStack_178 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar22;
      func_0x00010bdc1800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      if (puVar7 == (undefined *)0x0) goto LAB_105894fdc;
      uVar8 = *(ulong *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c232f00();
      _objc_release(uVar8);
      lVar26 = lVar3;
      if ((uVar9 & 1) == 0) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
        func_0x00010c269d40(lVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar22;
        func_0x00010c086560(puVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar22;
        func_0x00010bdc1800(puVar22);
        _objc_retainAutoreleasedReturnValue();
        lVar26 = lVar10;
        func_0x00010c156cc0(lVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(lVar10);
      }
      puStack_178 = PTR_PTR_1126bf908;
      _objc_alloc();
      puVar6 = puVar22;
      func_0x00010c086560(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar22;
      func_0x00010bdc1800(puVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0719c0(puVar22);
      func_0x00010c020a60();
      _objc_release(puVar7);
      _objc_release(puVar6);
      lVar3 = lVar26;
    }
    lVar10 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar10;
    func_0x00010c27a620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    func_0x00010c182c60(lVar26);
    lVar10 = lVar26;
    func_0x00010bfad160(lVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e060(lVar3);
    _objc_release(lVar10);
    _objc_release(lVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1d1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar22;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar22;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar7 != (undefined *)0x0) {
      uVar8 = *(ulong *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c232f00();
      _objc_release(uVar8);
      if ((uVar9 & 1) == 0) {
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar22;
        func_0x00010c086560(puVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar22;
        func_0x00010bdc1800(puVar22);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c156cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar11);
        uVar4 = uVar5;
      }
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c27a620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x00010c182c60(uVar5);
  uVar11 = uVar5;
  func_0x00010bfad160(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e060(uVar4);
  _objc_release(uVar11);
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x50) == 0) {
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c23f420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfece40();
      _objc_release(lVar3);
      lVar10 = *(long *)(param_1 + 0x20);
      func_0x00010c23f420();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar18 = lVar3;
      func_0x00010010fab4(lVar3,PTR_DAT_1126a4fc0);
      lVar10 = lVar3;
      if ((int)lVar18 == 0) {
        lVar10 = 0;
      }
      _objc_retain(lVar10);
      _objc_release(lVar3);
      lVar3 = lVar10;
      func_0x00010bf0b260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
    }
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  puVar6 = PTR_PTR_1126bf910;
  func_0x00010c2aebc0(PTR_PTR_1126bf910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0720();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c204680(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192d40((float)*(double *)(param_1 + 0x80),puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ac2c0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a65c0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c192ce0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c203960(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar22;
  func_0x000107e2bf14(puVar22,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  puVar7 = puVar22;
  func_0x00010c086560(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar22;
  func_0x00010bdc1800(puVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e2d6ec(uVar11,0,puVar12,puVar7,puVar13,0,*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58));
  _objc_release(puVar13);
  _objc_release(puVar7);
  if ((lVar26 == 0) && (lVar10 = *(long *)(param_1 + 0x50), lVar10 != 0)) {
    func_0x00010bfaca60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar26);
    lVar10 = lVar26;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080199ec(puVar12,uVar20,uVar5,lVar10,0,uVar11);
  _objc_release(uVar11);
  func_0x00010c11bda0(uVar5);
  func_0x00010c11bda0(lVar26);
  puVar7 = PTR_PTR_1126bf8f8;
  func_0x00010c2aebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010c1d7460();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar7);
  uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar14;
  func_0x00010c0ef4a0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar20;
  func_0x00010bfbfb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar20);
  puVar7 = puVar22;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar22;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010c08fa60();
  uVar20 = uVar11;
  if ((puVar15 != (undefined *)0x0) &&
     (puVar15 = puVar13, func_0x00010c08fa60(), puVar15 != (undefined *)0x0)) {
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar22;
    func_0x00010c0719c0();
    if ((int)puVar15 == 0) {
      lVar18 = 0;
      lVar17 = lVar10;
    }
    else {
      lVar17 = *(long *)(*(long *)(param_1 + 0x28) + 0x40);
      func_0x00010c269d40(lVar17);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c0bc420();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar20 = uVar16;
    func_0x00010c156cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    if ((int)puVar15 != 0) {
      _objc_release(lVar18);
      _objc_release(lVar17);
    }
    _objc_release(uVar16);
  }
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar18 = *(long *)(param_1 + 0x70);
  func_0x00010c245800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar18 != 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c245800(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar16;
    func_0x00010c0e00e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c245800(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar15);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(puVar15);
    _objc_release(uVar16);
    func_0x00010c220220(puVar15);
    _objc_release(uVar11);
  }
  _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x28));
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105895a68;
  puStack_d0 = &UNK_1108bac18;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(puVar12);
  puStack_c8 = puVar12;
  uStack_c0 = uVar11;
  _objc_retain(puVar14);
  puStack_b8 = puVar14;
  _objc_retain(lVar1);
  lStack_b0 = lVar1;
  _objc_retain(uVar20);
  uVar19 = *(undefined8 *)(param_1 + 0x70);
  uStack_a8 = uVar20;
  _objc_retain(uVar19);
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar19;
  _objc_retain(uVar21);
  uStack_98 = uVar21;
  _objc_retain(puVar15);
  uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
  puStack_90 = puVar15;
  func_0x00010c11de00(uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f0,auStack_80);
  _objc_retain(lVar1);
  uVar21 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar21);
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar23);
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar24);
  func_0x00010c0f8520(uVar16);
  _objc_release(uVar19);
  _objc_release(uVar16);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar21);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(lStack_b0);
  _objc_release(puStack_b8);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(uVar20);
  _objc_release(puVar14);
  _objc_release(lVar10);
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar26);
  _objc_release(puStack_178);
  _objc_release(puVar22);
  _objc_release(puVar25);
LAB_1058959b8:
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105895a24; end: 105895a67;  */

void FUN_105895a24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  
  func_0x00010bf0b760();
  if ((uint)param_2 < 0x16) {
    func_0x00010b697928();
    bVar1 = param_2 == 3;
  }
  else {
    bVar1 = false;
  }
  *(bool *)param_4 = bVar1;
  return;
}



/* Entry: 105895a68; end: 105895e57;  */

long FUN_105895a68(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126bc7f8;
    func_0x00010bf5a9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0();
    puVar3 = PTR_PTR_1126bf8e8;
    func_0x00010bf5a9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0fd8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126bf900;
    func_0x00010c2aec40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c204680();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c213f60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar6 = PTR_PTR_1126bf8f0;
    func_0x00010bf5aa20(PTR_PTR_1126bf8f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c0fd920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8100(puVar2);
    _objc_release(puVar4);
    puVar8 = PTR_PTR_1126bc830;
    func_0x00010bf35080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af4d0;
    uVar9 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar9);
    func_0x00010bfece40(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c0fd8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c131100(puVar8);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bc7f8;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bf20(puVar5);
    _objc_release(puVar10);
    if (*(long *)(param_1 + 0x58) != 0) {
      func_0x00010c2062e0(puVar8);
    }
    puVar5 = puVar8;
    func_0x00010c245780(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c241220(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010b704538(puVar5,uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206280(puVar8);
    _objc_release(puVar10);
    _objc_release(uVar12);
    _objc_release(puVar5);
    puVar5 = puVar8;
    func_0x00010c245780();
    _objc_retainAutoreleasedReturnValue();
    param_2 = *(long *)(param_1 + 0x38);
    puVar10 = puVar5;
    func_0x00010b704538();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206280(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(uVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010c241220(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar9);
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 105895e58; end: 105895ec7;  */

undefined8 FUN_105895e58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105895ec8; end: 105896053;  */

void FUN_105895ec8(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126af4d0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 != 0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105896054;
      puStack_80 = &UNK_110855c70;
      _objc_retain(lVar5);
      lStack_60 = lVar5;
      _objc_retain(puVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      puStack_78 = puVar3;
      _objc_retain(uVar2);
      uStack_58 = (undefined1)param_2;
      uStack_70 = uVar2;
      _objc_retain(param_3);
      lStack_68 = param_3;
      func_0x000100162d98("APPSTORE",&puStack_98);
      _objc_release(lStack_68);
      _objc_release(uStack_70);
      _objc_release(puStack_78);
      _objc_release(lStack_60);
    }
    if ((param_2 != 0) && (param_3 == 0)) {
      func_0x00010bfa3360(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080194b4(uVar2,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105896054; end: 1058960af;  */

void FUN_105896054(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf97200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))
            (lVar3,uVar1,uVar2,*(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



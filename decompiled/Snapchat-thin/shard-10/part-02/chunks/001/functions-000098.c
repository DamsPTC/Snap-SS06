/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b8cdd4; end: 107b8cdd7;  */

void FUN_107b8cdd4(void)

{
  return;
}



/* Entry: 107b8cdd8; end: 107b8ce37;  */

void FUN_107b8cdd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0000(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b8ce38; end: 107b8cf97; -[SCDiscoverSnapDocFetcher _updateSnapDoc:] */

void FUN_107b8ce38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf64e40(0x40ac200000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c1d0560(uVar5,param_2,param_3,lVar2);
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010c1d0500(uVar5,param_2,param_3,&PTR___NSConcreteGlobalBlock_1109fe9b8,lVar2,puVar4,0)
    ;
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b8cf98; end: 107b8cfc3;  */

void FUN_107b8cf98(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b8cfc4; end: 107b8d137; -[SCDiscoverSnapDocFetcher _fetchFullSnapDocWithRequestSnapDoc:editionId:publisherId:userInitiated:completion:] */

void FUN_107b8cfc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0,0);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107b8d138;
    puStack_78 = &UNK_11084cbf0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(param_4);
    uStack_68 = param_4;
    _objc_retain(param_5);
    uStack_60 = param_5;
    _objc_retain(param_7);
    lStack_58 = param_7;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8d138; end: 107b8d16f;  */

void FUN_107b8d138(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b8d170; end: 107b8d3bf; -[SCDiscoverSnapDocFetcher _fetchFullSnapDocWithRequestSnapDoc:editionId:publisherId:completion:] */

void FUN_107b8d170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_70,param_1);
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb968;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf4b900();
  if ((uVar5 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x18));
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___dispatch_main_q_11034be20;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107b8d3c0;
    puStack_b0 = &UNK_1109fe9d8;
    lStack_a8 = param_1;
    _objc_retain(puVar4);
    puStack_a0 = puVar4;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(param_4);
    uStack_90 = param_4;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(param_6);
    uStack_80 = param_6;
    func_0x00010846f9b4(uVar6,6,&PTR____CFConstantStringClassReference_110e65598,uVar1,uVar2,puVar4,
                        puVar3,&puStack_c8,(ulong)ppuVar7 & 0xffffffffffffff00,0,
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                        *(undefined8 *)(param_1 + 0x60));
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar6);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_78);
    _objc_release(puStack_a0);
  }
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8d3c0; end: 107b8d527;  */

void FUN_107b8d3c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    _objc_copyWeak(auStack_58,param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107b8d528; end: 107b8d563;  */

void FUN_107b8d528(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b8d564; end: 107b8d6f7; -[SCDiscoverSnapDocFetcher _fetchFullSnapDocWithRequestSnapDoc:editionId:publisherId:story:completion:] */

void FUN_107b8d564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010bee0040(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bfe5ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107b8d6f8;
  puStack_78 = &UNK_1108465d0;
  uStack_70 = uVar4;
  uStack_68 = param_5;
  uStack_60 = param_4;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(uVar4);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar4);
  return;
}



/* Entry: 107b8d6f8; end: 107b8d747;  */

void FUN_107b8d6f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126cc6f8;
  _objc_alloc(PTR_PTR_1126cc6f8);
  func_0x00010c0473c0();
  (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b8d748; end: 107b8d8c7; -[SCDiscoverSnapDocFetcher fullSnapDocForRequestSnapDoc:completion:] */

void FUN_107b8d748(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 8);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_107b8d884;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
LAB_107b8d884:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8d8c8; end: 107b8d8fb;  */

void FUN_107b8d8c8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbbce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b8d8fc; end: 107b8dae3; -[SCDiscoverSnapDocFetcher fullSnapDocForRequestSnapDocHelper:completion:] */

void FUN_107b8d8fc(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x20);
  puVar1 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0dff40(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(param_4);
    puVar1 = param_3;
  }
  else {
    if (param_4 == 0) goto LAB_107b8daac;
    puVar1 = PTR_PTR_1126cc6f8;
    _objc_alloc(PTR_PTR_1126cc6f8);
    func_0x00010c0473c0();
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
  }
  _objc_release(puVar1);
LAB_107b8daac:
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8dae4; end: 107b8db1b;  */

void FUN_107b8dae4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010c0f40e0(PTR_PTR_1126b25c0,param_2,param_2,&uStack_18);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b8db1c; end: 107b8db97;  */

void FUN_107b8db1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cc6f8;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    func_0x00010c0473c0();
    _objc_release(param_4);
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107b8db98; end: 107b8dc3f; -[SCDiscoverSnapDocFetcher .cxx_destruct] */

void FUN_107b8db98(long param_1)

{
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



/* Entry: 107b8dc40; end: 107b8dd4f;  */

void FUN_107b8dc40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b25b8;
  puVar5 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar4 = lVar2;
    func_0x00010c247e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd4898);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011280(puVar1,param_2,puVar5,0x14);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107b8dd50; end: 107b8de13;  */

void FUN_107b8dd50(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c032f60();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar4);
  if ((puVar2 == (undefined *)0x0) || (param_2 == 0)) {
    if (puVar4 != (undefined *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar4,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b4860;
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar2);
    _objc_retain(puVar4);
    _objc_retain(puVar2);
    _objc_retain(puVar1);
    func_0x00010c09bc40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(puVar2);
  return;
}



/* Entry: 107b8de14; end: 107b8df97;  */

void FUN_107b8de14(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b4860;
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_1);
    _objc_retain(param_3);
    _objc_retain(param_1);
    _objc_retain(puVar1);
    func_0x00010c09bc40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107b8df98; end: 107b8dfc7;  */

void FUN_107b8df98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b8dfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 107b8dfc8; end: 107b8e017;  */

void FUN_107b8dfc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b8e018; end: 107b8e023;  */

void FUN_107b8e018(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringByAppendingString__112674db8,
             &PTR____CFConstantStringClassReference_110eb11f8);
  return;
}



/* Entry: 107b8e024; end: 107b8e133;  */

void FUN_107b8e024(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfc90;
  func_0x00010c0c46a0(param_1);
  _objc_release(param_1);
  func_0x00010c119380();
  func_0x00010b7f519c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = puVar4;
  func_0x00010c25ce40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b8e134; end: 107b8e263;  */

void FUN_107b8e134(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b8e264; end: 107b8e2e7;  */

void FUN_107b8e264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b8e2e8; end: 107b8e52f; -[SCSnapDocOperaMediaManager initWithSnapDocMediaResolver:circumstanceEngine:imageDownloader:grapheneRegistry:playbackAssetCompositor:playbackAssetRepository:] */

undefined1 *
FUN_107b8e2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fa108;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d62a0;
    _objc_alloc();
    func_0x00010c018500();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c240420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x49) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    func_0x00010bdc7960(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b8e530; end: 107b8e543; -[SCSnapDocOperaMediaManager updateOperaNavigationStyle:] */

void FUN_107b8e530(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + 0x40) = param_3;
  *(bool *)(param_1 + 0x48) = param_3 == 1;
  return;
}



/* Entry: 107b8e544; end: 107b8e66b; -[SCSnapDocOperaMediaManager prepareForSnapDocKey:snapDoc:completion:] */

void FUN_107b8e544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b8e66c;
  puStack_60 = &UNK_110857fd0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_48 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8e66c; end: 107b8e71b;  */

void FUN_107b8e66c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b8e71c;
  puStack_48 = &UNK_1108538b0;
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  _objc_retain(uVar4);
  uStack_38 = uVar4;
  func_0x00010be784a0(lVar3,param_2,uVar1,uVar2,&puStack_60);
  _objc_release(lVar3);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 107b8e71c; end: 107b8e727;  */

void FUN_107b8e71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b8e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 107b8e728; end: 107b8e84f; -[SCSnapDocOperaMediaManager getPagePropertiesForSnapDocKey:snapDoc:completion:] */

void FUN_107b8e728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b8e850;
  puStack_60 = &UNK_110857fd0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_48 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8e850; end: 107b8e887;  */

void FUN_107b8e850(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b8e888; end: 107b8e9b7; -[SCSnapDocOperaMediaManager mediaPrefetchRequestForSnapDocKey:snapDoc:trigger:importance:completePrefetch:] */

void FUN_107b8e888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8010;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0003a0();
  puVar3 = PTR_PTR_1126bfc90;
  puVar5 = PTR_PTR_1126b1378;
  uVar2 = param_3;
  func_0x00010c0c46a0(param_3);
  func_0x00010c119380(puVar3,param_2,uVar2);
  puVar4 = puVar3;
  FUN_107b8dd50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1081c0(puVar5,param_2,puVar3,puVar4,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126d6cb8;
  _objc_alloc(PTR_PTR_1126d6cb8);
  func_0x00010c047740();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b8e9b8; end: 107b8ea73; -[SCSnapDocOperaMediaManager removePreparedPropertiesForSnapDocKey:snapDoc:] */

void FUN_107b8e9b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x50) < 2)) {
    func_0x00010be8dec0(param_1,param_2,param_3);
    func_0x00010be8c4a0(param_1,param_2,param_3);
    func_0x00010be8ccc0(param_1,param_2,param_3,param_4);
    func_0x00010be8bf40(param_1,param_2,param_3,param_4);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b8ea74; end: 107b8ea83; -[SCSnapDocOperaMediaManager increaseCounter] */

void FUN_107b8ea74(long param_1)

{
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  return;
}



/* Entry: 107b8ea84; end: 107b8eb3b; -[SCSnapDocOperaMediaManager decreaseCounter] */

void FUN_107b8ea84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar2 = *(long *)(param_1 + 0x50);
  lVar1 = lVar2 + -1;
  *(long *)(param_1 + 0x50) = lVar1;
  if (lVar1 == 0 || lVar2 < 1) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_107b8eb3c;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 107b8eb3c; end: 107b8eb67;  */

void FUN_107b8eb3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddee40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b8eb68; end: 107b8ed5f; -[SCSnapDocOperaMediaManager imageForKey:completion:] */

void FUN_107b8eb68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        _objc_release(puVar2);
      }
      else {
        puVar4 = puVar3;
        func_0x00010bfe4420();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c08fa60();
        _objc_release(puVar4);
        _objc_release(puVar2);
        if (puVar5 != (undefined *)0x0) {
          uVar6 = *(ulong *)(param_1 + 0x20);
          func_0x0001005929c0();
          if (((uVar6 & 1) != 0) || (*(long *)(param_1 + 0x40) != 1)) {
            uVar8 = *(undefined8 *)(param_1 + 0x18);
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_78 = 0xc2000000;
            pcStack_70 = FUN_107b8ed60;
            puStack_68 = &UNK_110853880;
            _objc_retain(puVar3);
            puStack_60 = puVar3;
            _objc_retain(param_4);
            lStack_58 = param_4;
            FUN_107b8de14(puVar3,uVar8,&puStack_80);
            _objc_release(lStack_58);
            _objc_release(puStack_60);
            goto LAB_107b8ebe8;
          }
          if (param_4 == 0) goto LAB_107b8ebe8;
          pcVar7 = *(code **)(param_4 + 0x10);
          puVar2 = (undefined *)0x0;
          goto LAB_107b8ebe4;
        }
      }
    }
    uVar8 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar8 == 0) {
      func_0x00010be1fa80(param_1);
    }
    else {
      func_0x00010be1fac0(param_1);
    }
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x70);
    func_0x00010c0e00e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = *(code **)(param_4 + 0x10);
    puVar3 = puVar2;
LAB_107b8ebe4:
    (*pcVar7)(param_4,puVar2);
  }
LAB_107b8ebe8:
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8ed60; end: 107b8edfb;  */

void FUN_107b8ed60(long param_1,undefined8 param_2)

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
  pcStack_40 = FUN_107b8edfc;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_30 = param_2;
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 107b8edfc; end: 107b8ee17;  */

void FUN_107b8edfc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b8ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 107b8ee18; end: 107b8ef1b; -[SCSnapDocOperaMediaManager videoAssetForKey:] */

void FUN_107b8ee18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010be23ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar1 = param_1;
    func_0x00010bde7fe0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfcaaa0();
    if (lVar4 - 3U < 2) {
      lVar4 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      FUN_107b8dfc8(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf549c0(lVar2,param_2,lVar1,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_retain(lVar4);
    }
    _objc_release(lVar1);
  }
  else {
    _objc_retain();
  }
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107b8ef1c; end: 107b8ef6b; -[SCSnapDocOperaMediaManager videoAssetFutureForKey:] */

void FUN_107b8ef1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c2991c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b8ef6c; end: 107b8ef6f; -[SCSnapDocOperaMediaManager resetVideoAssetForKey:] */

void FUN_107b8ef6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetVideoAssetForKey__112582aa8);
  return;
}



/* Entry: 107b8ef70; end: 107b8f05b; -[SCSnapDocOperaMediaManager _getImagePlaceholder:] */

void FUN_107b8ef70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b8f05c;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b8f05c; end: 107b8f18f;  */

void FUN_107b8f05c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe97a0(uRam0000000113241930,uRam0000000113241938,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b8f190;
  puStack_60 = &UNK_110848378;
  _objc_copyWeak(auStack_48,param_2 + 0x28);
  _objc_retain(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  puStack_58 = puVar3;
  _objc_retain(uVar4);
  uStack_50 = uVar4;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  return;
}



/* Entry: 107b8f190; end: 107b8f1cf;  */

void FUN_107b8f190(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea6500();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000107b8f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107b8f1d0; end: 107b8f31b; -[SCSnapDocOperaMediaManager _getImageFromDiskForKey:completion:] */

void FUN_107b8f1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bde7fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107b8f31c;
  puStack_70 = &UNK_110857fd0;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b8f31c; end: 107b8f48f;  */

void FUN_107b8f31c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107b8f490;
    puStack_40 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x000100162d98("APPSTORE",&puStack_58);
    uVar3 = uStack_38;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    FUN_107b8e264();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107b8f4a0;
    puStack_88 = &UNK_11084cbf0;
    _objc_copyWeak(auStack_60,param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_80 = uVar4;
    _objc_retain(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = uVar3;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = uVar5;
    _objc_retain(uVar4);
    uStack_68 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 107b8f490; end: 107b8f49f;  */

void FUN_107b8f490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b8f49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107b8f4a0; end: 107b8f4e7;  */

void FUN_107b8f4a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea4880();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000107b8f4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b8f4e8; end: 107b8f527; -[SCSnapDocOperaMediaManager _clearLoadedAVAssets] */

void FUN_107b8f4e8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1283e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b8f528; end: 107b8f52f; -[SCSnapDocOperaMediaManager _clearCachedImages] */

void FUN_107b8f528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107b8f530; end: 107b8f58b; -[SCSnapDocOperaMediaManager _resetVideoAssetForKey:] */

void FUN_107b8f530(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b8f58c; end: 107b8f663; -[SCSnapDocOperaMediaManager _addNotifications] */

void FUN_107b8f58c(void)

{
  undefined *puVar1;
  
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
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b8f664; end: 107b8f66f; -[SCSnapDocOperaMediaManager didReceiveMediaServicesWereLostNotification] */

void FUN_107b8f664(long param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}



/* Entry: 107b8f670; end: 107b8f6df; -[SCSnapDocOperaMediaManager didReceiveMediaServicesWereResetNotification] */

void FUN_107b8f670(long param_1)

{
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x49) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    _objc_retain();
    func_0x00010bde07c0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_28);
  }
  *(undefined1 *)(param_1 + 0x49) = 0;
  return;
}



/* Entry: 107b8f6e0; end: 107b8f753; -[SCSnapDocOperaMediaManager _didReceiveMemoryWarning:] */

void FUN_107b8f6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_retain();
  func_0x00010bddffe0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8f754; end: 107b8fa53; -[SCSnapDocOperaMediaManager _prepareForSnapDocKey:snapDoc:completion:] */

void FUN_107b8f754(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined **param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  ppuVar5 = param_5;
  if (lVar2 == 0) {
    if (param_5 == (undefined **)0x0) goto LAB_107b8f8ac;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)param_5[2])(param_5,puVar3);
LAB_107b8f89c:
    _objc_release(puVar3);
  }
  else {
    lVar2 = param_1;
    func_0x00010be79920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 == 0) && (uVar4 = param_4, func_0x000108f56dbc(), (int)uVar4 == 0)) {
      lVar2 = *(long *)(param_1 + 0x58);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        puVar3 = *(undefined **)(param_1 + 0x58);
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainBlock(param_5);
        func_0x00010befa120(puVar3);
        _objc_release(param_5);
        goto LAB_107b8f89c;
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainBlock(param_5);
      func_0x00010befa120(uVar4);
      _objc_release(ppuVar5);
      _objc_release(uVar4);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107b8fa54;
      puStack_78 = &UNK_1108420a0;
      uStack_70 = uVar6;
      _objc_retain(lVar1);
      lStack_68 = lVar1;
      _objc_retain(uVar6);
      ppuVar5 = &puStack_90;
      _objc_retainBlock();
      _objc_release(param_5);
      uVar4 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar3;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_107b8fc08;
      puStack_c0 = &UNK_110852488;
      _objc_retain(lVar1);
      lStack_b8 = lVar1;
      lStack_b0 = param_1;
      _objc_retain(param_3);
      lStack_a8 = param_3;
      _objc_retain(param_4);
      uStack_a0 = param_4;
      ppuStack_98 = ppuVar5;
      _objc_retain(ppuVar5);
      func_0x00010007380c(uVar4,&puStack_d8);
      _objc_release(uVar4);
      _objc_release(ppuStack_98);
      _objc_release(uStack_a0);
      _objc_release(lStack_a8);
      _objc_release(lStack_b8);
      _objc_release(lStack_68);
      _objc_release(uVar6);
    }
    else {
      if (param_5 == (undefined **)0x0) goto LAB_107b8f8ac;
      (*(code *)param_5[2])(param_5,0);
    }
  }
  _objc_release(ppuVar5);
LAB_107b8f8ac:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b8fa54; end: 107b8fafb;  */

void FUN_107b8fa54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b8fafc;
  puStack_40 = &UNK_110848ba8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_38 = uVar1;
  uStack_30 = uVar2;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 107b8fafc; end: 107b8fc07;  */

void FUN_107b8fafc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar9 * 8) + 0x10))
                (*(long *)(lVar9 * 8),*(undefined8 *)(param_1 + 0x30));
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c12d3e0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_168,*(undefined8 *)(lVar3 + 0x28));
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x28) + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bfc90;
  puVar6 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(*(undefined8 *)(lVar3 + 0x30));
  func_0x00010c119380(puVar5);
  FUN_107b8dd50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291580(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  uVar10 = *(undefined8 *)(lVar3 + 0x30);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(lVar3 + 0x38);
  _objc_retain(uVar11);
  uVar8 = *(undefined8 *)(lVar3 + 0x40);
  _objc_retain(uVar8);
  func_0x00010c13edc0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  return;
}



/* Entry: 107b8fc08; end: 107b8fdb3;  */

void FUN_107b8fc08(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfc90;
  puVar3 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c119380(puVar2);
  FUN_107b8dd50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291580(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  func_0x00010c13edc0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107b8fdb4; end: 107b8fe0b;  */

void FUN_107b8fdb4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be797e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b8fe0c; end: 107b90967; -[SCSnapDocOperaMediaManager _prepareVideoAssetForSnapDocKey:snapDoc:playbackMediaResult:completion:] */

void FUN_107b8fe0c(ulong param_1,undefined8 param_2,long param_3,undefined **param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_280;
  long lStack_258;
  long lStack_250;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined **ppuStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [136];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bfcaaa0();
  if (lVar3 != 0) {
    lStack_250 = param_5;
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_110,param_1);
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_107b90968;
    puStack_138 = &UNK_110850cf8;
    ppuVar14 = &puStack_150;
    _objc_copyWeak(auStack_118,auStack_110);
    _objc_retain(lStack_250);
    lStack_130 = lStack_250;
    _objc_retain(param_3);
    lStack_128 = param_3;
    _objc_retain(param_4);
    ppuStack_120 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_150);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,lStack_250);
    }
    _objc_release(ppuStack_120);
    _objc_release(lStack_128);
    _objc_release(lStack_130);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_110);
    goto LAB_107b90790;
  }
  lVar3 = param_5;
  func_0x00010bfc76e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  puStack_180 = (undefined8 *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  ppuVar14 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar14;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar14);
  ppuVar5 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar5 == (undefined **)0x0) {
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    ppuVar14 = ppuVar4;
  }
  else {
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    ppuVar14 = (undefined **)*puStack_180;
    lVar13 = -1;
    do {
      ppuVar15 = (undefined **)0x0;
      lVar16 = -lVar13;
      do {
        if ((undefined **)*puStack_180 != ppuVar14) {
          _objc_enumerationMutation(ppuVar4);
        }
        lVar18 = *(long *)(lStack_188 + (long)ppuVar15 * 8);
        lVar6 = lVar18;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x000108f56bcc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar6);
        lVar6 = lVar18;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar6);
        if (lVar7 != 0) {
          func_0x00010c0c3fe0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar18;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(lVar18);
          lVar6 = lVar7;
          func_0x00010bfc4120();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar7;
          func_0x00010bfc7700();
          if ((((int)lVar18 == 3) || (lVar18 = lVar8, func_0x00010c0c6c20(), (int)lVar18 == 5)) ||
             (lVar18 = lVar8, func_0x00010c0c6c20(), (int)lVar18 == 9)) {
            lVar9 = *(long *)(param_1 + 0x10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar9;
            func_0x00010bf549c0();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar18;
            func_0x00010c0d5720();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lStack_250);
            _objc_release(lVar18);
            lVar18 = lStack_258;
            lStack_258 = lVar6;
            lStack_250 = lVar10;
LAB_107b901a0:
            _objc_release(lVar9);
            _objc_retain(lVar6);
            _objc_release(lVar18);
          }
          else {
            lVar18 = lVar7;
            func_0x00010bfc7700();
            if ((int)lVar18 == 2) {
              if (lVar16 == 1) {
                lVar10 = lVar6;
                FUN_107b8e264();
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lStack_298;
                lVar9 = lStack_290;
                lStack_298 = lVar6;
                lStack_290 = lVar10;
              }
              else {
                if (lVar16 != 0) goto LAB_107b901b8;
                lVar10 = lVar6;
                FUN_107b8e264();
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lStack_2a8;
                lVar9 = lStack_2a0;
                lStack_2a8 = lVar6;
                lStack_2a0 = lVar10;
              }
              goto LAB_107b901a0;
            }
          }
LAB_107b901b8:
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
        _objc_release(lVar8);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        lVar16 = lVar16 + -1;
      } while (ppuVar5 != ppuVar15);
      ppuVar15 = ppuVar4;
      func_0x00010bf52a60();
      lVar13 = (long)ppuVar5 + lVar13;
      ppuVar5 = ppuVar15;
    } while (ppuVar15 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar4 = param_4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bfdcf00();
  _objc_release(ppuVar4);
  if ((int)ppuVar5 == 0) {
    lStack_280 = 0;
LAB_107b9037c:
    ppuVar14 = param_4;
    func_0x00010bfdd480();
    if ((int)ppuVar14 == 0) {
LAB_107b9042c:
      bVar1 = false;
      lVar16 = 0;
      lVar13 = 0;
    }
    else {
      ppuVar14 = param_4;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar14;
      func_0x00010bfdd4a0();
      _objc_release(ppuVar14);
      if ((int)ppuVar4 == 0) goto LAB_107b9042c;
      ppuVar14 = param_4;
      func_0x00010c26d760(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar14;
      func_0x00010c26e060();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(ppuVar14);
      lVar7 = lVar6;
      func_0x00010bfc4120();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar7;
      func_0x00010bfcaaa0();
      bVar1 = lVar13 == 0;
      if (lVar13 == 0) {
        lVar13 = lVar7;
        FUN_107b8e264();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar7);
        lVar16 = lVar7;
      }
      else {
        lVar13 = 0;
        lVar16 = 0;
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    _objc_initWeak(auStack_110,param_1);
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_107b909a0;
    puStack_208 = &UNK_1109feb00;
    ppuVar14 = &puStack_220;
    _objc_copyWeak(auStack_1a8,auStack_110);
    _objc_retain(lStack_250);
    lStack_200 = lStack_250;
    _objc_retain(lStack_258);
    lStack_1f8 = lStack_258;
    _objc_retain(param_3);
    lStack_1f0 = param_3;
    _objc_retain(param_4);
    ppuStack_1e8 = param_4;
    _objc_retain(lStack_290);
    lStack_1e0 = lStack_290;
    _objc_retain(lStack_298);
    lStack_1d8 = lStack_298;
    _objc_retain(lStack_2a0);
    lStack_1d0 = lStack_2a0;
    _objc_retain(lStack_2a8);
    lStack_1c8 = lStack_2a8;
    _objc_retain(lVar13);
    lStack_1c0 = lVar13;
    _objc_retain(lVar16);
    lStack_1b8 = lVar16;
    uStack_1a0 = bVar1;
    _objc_retain(param_6);
    ppuVar4 = &puStack_220;
    lStack_1b0 = param_6;
    _objc_retainBlock();
    lVar6 = 0;
    if (((lStack_250 == 0) || (lStack_280 == 0)) ||
       (uVar12 = param_1, func_0x00010be4ea00(param_1,0), lVar6 = lStack_280, (uVar12 & 1) != 0)) {
      (*(code *)ppuVar4[2])(ppuVar4,lVar6,0,0);
    }
    else {
      func_0x00010c087f80(lStack_280,lStack_280);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar11);
      _objc_release(lVar6);
      if (lVar7 == 0) {
        uVar17 = *(undefined8 *)(param_1 + 0x30);
        puVar11 = PTR_PTR_1126d6cc8;
        func_0x00010c2612a0(PTR_PTR_1126d6cc8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0(uVar17);
        _objc_release(puVar11);
        (*(code *)ppuVar4[2])(ppuVar4,0,0,0xcf);
      }
      else {
        puVar11 = PTR_PTR_1126bcb80;
        _objc_alloc(PTR_PTR_1126bcb80);
        func_0x00010bfefc40();
        _objc_retain(ppuVar4);
        func_0x00010bde3ae0(param_1);
        _objc_release(puVar11);
        _objc_release(ppuVar4);
      }
    }
    _objc_release(ppuVar4);
    _objc_release(lStack_1b0);
    _objc_release(lStack_1b8);
    _objc_release(lStack_1c0);
    _objc_release(lStack_1c8);
    _objc_release(lStack_1d0);
    _objc_release(lStack_1d8);
    _objc_release(lStack_1e0);
    _objc_release(ppuStack_1e8);
    _objc_release(lStack_1f0);
    _objc_release(lStack_1f8);
    _objc_release(lStack_200);
    _objc_destroyWeak(auStack_1a8);
    _objc_destroyWeak(auStack_110);
  }
  else {
    ppuVar4 = param_4;
    func_0x00010c0fee00(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c261180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    lVar16 = lVar13;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar16;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    if (lVar6 == 0) {
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,puVar11);
      _objc_release(puVar11);
      _objc_release(lVar13);
      lVar16 = 0;
      lVar13 = 0;
      lStack_280 = 0;
    }
    else {
      puVar11 = PTR_PTR_1126d6cc0;
      _objc_alloc(PTR_PTR_1126d6cc0);
      lStack_198 = 0;
      func_0x00010c008360();
      lVar16 = lStack_198;
      _objc_retain(lStack_198);
      if (lVar16 == 0) {
        lVar18 = *(long *)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_3;
        func_0x00010bf9e140(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        FUN_107b8e018();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c46a0(param_3);
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar17);
        _objc_retainAutoreleasedReturnValue();
        lStack_280 = lVar18;
        func_0x00010bf59460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar18);
      }
      else {
        (**(code **)(param_6 + 0x10))(param_6,lVar16);
        lStack_280 = 0;
      }
      _objc_release(puVar11);
      _objc_release(lVar16);
      _objc_release(lVar6);
      _objc_release(lVar13);
      if (lVar16 == 0) goto LAB_107b9037c;
      lVar16 = 0;
      lVar13 = 0;
      ppuVar14 = (undefined **)0x0;
    }
  }
  _objc_release(lStack_280);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar13);
  _objc_release(lStack_2a8);
  _objc_release(lStack_2a0);
  _objc_release(lStack_298);
  _objc_release(lStack_290);
  _objc_release(lStack_258);
LAB_107b90790:
  _objc_release(lStack_250);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar14 + 0xf);
    _objc_destroyWeak(auStack_110);
    __Unwind_Resume();
    param_3 = param_3 + 0x38;
    _objc_loadWeakRetained(param_3);
    func_0x00010bea3b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107b90968; end: 107b9099f;  */

void FUN_107b90968(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b909a0; end: 107b90ba3;  */

void FUN_107b909a0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107b90ba4;
  puStack_c0 = &UNK_1109fead0;
  _objc_copyWeak(auStack_50,param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_b8 = uVar3;
  _objc_retain(param_2);
  uStack_b0 = param_2;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = param_3;
  uStack_48 = param_4;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar3;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar1;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_90 = uVar3;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = uVar1;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_80 = uVar3;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_78 = uVar1;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = uVar3;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_44 = *(undefined1 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  func_0x0001000d76cc("APPSTORE",&puStack_d8);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107b90ba4; end: 107b90c13;  */

void FUN_107b90ba4(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedcaa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b90c14; end: 107b90c2b;  */

void FUN_107b90c14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107b90c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2,param_3);
  return;
}



/* Entry: 107b90c2c; end: 107b90c43; -[SCSnapDocOperaMediaManager _loadSubtitlesOnDemand] */

void FUN_107b90c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ea1bb8,0,0);
  return;
}



/* Entry: 107b90c44; end: 107b91033; -[SCSnapDocOperaMediaManager _updatePagePropertiesForVideoAsset:subtitleAsset:compositeAsset:languageCode:videoContentResult:snapDocKey:snapDoc:baseImage:baseImageContentResult:overlayImage:overlayContentResult:firstFrameImage:firstFrameContentResult:isServerSideFirstFrame:completion:] */

void FUN_107b90c44(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,undefined8 param_11,long param_12,undefined8 param_13,long param_14,
                  undefined8 param_15,undefined4 param_16,undefined4 param_17,long param_18)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_9);
  _objc_opt_new(puVar1);
  if ((param_3 != 0) && (param_7 != 0)) {
    func_0x00010bea9fc0(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfc68a0(param_7);
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    func_0x00010c1d0640(puVar1);
    puVar2 = PTR_PTR_1126bdd88;
    func_0x00010bf4ca80(PTR_PTR_1126bdd88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(uRam0000000113241930,uRam0000000113241938,
                        PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    if (param_14 != 0) {
      func_0x00010bea3f60(param_1);
    }
    lVar3 = param_7;
    func_0x00010bfc40e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010be538a0(param_1);
    _objc_release(lVar3);
    if (param_4 == 0) {
      if (param_5 != 0) {
        func_0x00010bea2d60(param_1);
      }
    }
    else {
      func_0x00010bea8280(param_1);
    }
    _objc_release(puVar2);
  }
  if (param_10 != 0) {
    func_0x00010bea2360(param_1);
  }
  if (param_12 != 0) {
    func_0x00010bea6240(param_1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar4);
  func_0x00010be8bf40(param_1);
  func_0x00010bea67a0(param_1);
  _objc_release(param_9);
  if (param_18 != 0) {
    (**(code **)(param_18 + 0x10))(param_18,0);
  }
  _objc_release(puVar1);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b91034; end: 107b912bf; -[SCSnapDocOperaMediaManager composeVideoAssetWithKey:subtitleEnabled:languageId:subtitleAsset:completion:] */

void FUN_107b91034(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  FUN_107b8e134();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d50e0;
  if (param_4 != 0) {
    uVar2 = param_6;
    func_0x00010c087f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087ee0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    if ((int)puVar3 != 0) {
      uVar2 = param_3;
      FUN_107b8e024(param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x78);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        uStack_80 = 0x3032000000;
        pcStack_78 = FUN_107b912c0;
        uStack_70 = 0x107b912d0;
        _objc_retain(param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x78);
        lStack_68 = param_1;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_7);
        _objc_retain(uVar2);
        _objc_retain(uVar1);
        func_0x00010bde3ae0(param_1);
        _objc_release(uVar5);
        _objc_release(uVar1);
        _objc_release(uVar2);
        _objc_release(param_7);
        _objc_release(param_3);
        __Block_object_dispose(&uStack_90,8);
        _objc_release(lStack_68);
      }
      else {
        (**(code **)(param_7 + 0x10))(param_7,uVar2);
      }
      _objc_release(uVar2);
      goto LAB_107b91260;
    }
  }
  (**(code **)(param_7 + 0x10))(param_7,uVar1);
LAB_107b91260:
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107b912c0; end: 107b912d7;  */

void FUN_107b912c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107b912d8; end: 107b913d7;  */

void FUN_107b912d8(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107b913d8;
  puStack_70 = &UNK_1109feb60;
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  uStack_38 = param_3;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 107b913d8; end: 107b9142f;  */

void FUN_107b913d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = 0x38;
  }
  else {
    func_0x00010bea2d60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),param_2,
                        *(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined4 *)(param_1 + 0x50),0);
    lVar1 = 0x30;
  }
                    /* WARNING: Could not recover jumptable at 0x000107b9142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 107b91430; end: 107b9153f; -[SCSnapDocOperaMediaManager _composeWithVideoAsset:subtitleAsset:desiredLanguageCode:completion:] */

void FUN_107b91430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d6cd0;
  _objc_alloc(PTR_PTR_1126d6cd0);
  func_0x00010c021660();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107b91540;
  puStack_58 = &UNK_1109febc0;
  uStack_50 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_6);
  func_0x00010bf45560(uVar2,param_2,param_3,param_4,puVar1,&puStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_6);
  return;
}



/* Entry: 107b91540; end: 107b9155b;  */

void FUN_107b91540(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000107b91558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 107b9155c; end: 107b916af; -[SCSnapDocOperaMediaManager _getPagePropertiesForSnapDocKey:snapDoc:completion:] */

void FUN_107b9155c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf9e140(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x000108f56dbc();
  if ((int)uVar2 == 0) {
    if (param_5 != 0) {
      lVar3 = param_1;
      func_0x00010be79920();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      if (lVar4 == 0) {
        func_0x00010be0b3a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = param_1;
        func_0x00010c0e00e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,param_1,lVar3);
        _objc_release(lVar3);
      }
      else {
        (**(code **)(param_5 + 0x10))(param_5,lVar3,0);
        param_1 = lVar3;
      }
      _objc_release(param_1);
    }
  }
  else if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b916b0; end: 107b91797; -[SCSnapDocOperaMediaManager _setVideoAsset:contentResult:snapDocKey:pageProperties:] */

void FUN_107b916b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  FUN_107b8e134();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126bcb80;
    _objc_alloc(PTR_PTR_1126bcb80);
    func_0x00010bfefc40();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78),param_2,puVar2,param_5);
    _objc_release(puVar2);
    func_0x00010c1d0640(param_6,param_2,param_5,&PTR____CFConstantStringClassReference_110f0c298);
    func_0x00010bea2f20(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b91798; end: 107b917f7; -[SCSnapDocOperaMediaManager _getVideoAssetForKey:] */

void FUN_107b91798(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b917f8; end: 107b918bb; -[SCSnapDocOperaMediaManager _removeVideoAssetForSnapDocKey:] */

void FUN_107b917f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_107b8e134();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be23ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    _objc_opt_isKindOfClass(lVar2,puVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128420();
    _objc_release(uVar4);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x78));
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b918bc; end: 107b918cf; -[SCSnapDocOperaMediaManager _setSubtitleAsset:pageProperties:] */

void FUN_107b918bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110f0c2d8);
  return;
}



/* Entry: 107b918d0; end: 107b91a47; -[SCSnapDocOperaMediaManager _setCompositeAsset:snapDocKey:languageCode:pageProperties:] */

void FUN_107b918d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  FUN_107b8e024(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x78));
  _objc_release(param_3);
  if (param_6 != (undefined *)0x0) {
    puVar1 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      puVar2 = param_6;
      func_0x00010c0e00e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0d3c80();
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar1);
    func_0x00010c1d0640(param_6);
    puVar1 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c1d0640(param_6);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107b91a48; end: 107b91af3; -[SCSnapDocOperaMediaManager _setBaseImage:contentResult:snapDocKey:pageProperties:] */

void FUN_107b91a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107b8e218(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea4860(param_1,param_2,param_3,param_4,
                      &PTR____CFConstantStringClassReference_110f0c078,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b91af4; end: 107b91b9f; -[SCSnapDocOperaMediaManager _setOverlayImage:contentResult:snapDocKey:pageProperties:] */

void FUN_107b91af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107b8e1cc(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea4860(param_1,param_2,param_3,param_4,
                      &PTR____CFConstantStringClassReference_110f0c098,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b91ba0; end: 107b91c4b; -[SCSnapDocOperaMediaManager _setFirstFrameImage:contentResult:snapDocKey:pageProperties:] */

void FUN_107b91ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107b8e180(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea4860(param_1,param_2,param_3,param_4,
                      &PTR____CFConstantStringClassReference_110f0c0b8,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b91c4c; end: 107b91d27; -[SCSnapDocOperaMediaManager _setImageHelper:contentResult:pagePropertyKey:pagePropertyValue:pageProperties:] */

void FUN_107b91c4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (lVar1 = param_6, func_0x00010c08fa60(), param_3 != 0)) && (lVar1 != 0)) {
    func_0x00010c1d0640(param_7,param_2,param_6,param_5);
    func_0x00010bea4880(param_1,param_2,param_6,param_3,param_4);
    func_0x00010bea2f20(param_1,param_2,param_6,param_4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b91d28; end: 107b91d9f; -[SCSnapDocOperaMediaManager _setImageHelperForKey:image:contentResult:] */

void FUN_107b91d28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c1d0640(uVar1,param_2,param_4,param_3);
  func_0x00010bea2f20(param_1,param_2,param_3,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b91da0; end: 107b91daf; -[SCSnapDocOperaMediaManager _setPlaceHolderImage:] */

void FUN_107b91da0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eb1218);
  return;
}



/* Entry: 107b91db0; end: 107b91e67; -[SCSnapDocOperaMediaManager _removeImagesForSnapDocKey:] */

void FUN_107b91db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000107b8e180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = param_3;
  func_0x000107b8e1cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = param_3;
  func_0x000107b8e218(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b91e68; end: 107b91ecb; -[SCSnapDocOperaMediaManager _preparedPagePropertiesForSnapDocKey:snapDoc:] */

void FUN_107b91e68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b91ecc; end: 107b91f3b; -[SCSnapDocOperaMediaManager _setPreparedPageProperties:forSnapDocKey:snapDoc:] */

void FUN_107b91ecc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b91f3c; end: 107b91f83; -[SCSnapDocOperaMediaManager _removePagePropertiesForSnapDocKey:snapDoc:] */

void FUN_107b91f3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b91f84; end: 107b92067; -[SCSnapDocOperaMediaManager _setError:forSnapDocKey:snapDoc:] */

void FUN_107b91f84(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b2368;
    _objc_opt_new(PTR_PTR_1126b2368);
    FUN_107b926b0();
    puVar4 = puVar3;
    func_0x00010c1531a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3bc0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b92068; end: 107b920cb; -[SCSnapDocOperaMediaManager _errorsPagePropertiesForSnapDocKey:snapDoc:] */

void FUN_107b92068(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b920cc; end: 107b9213b; -[SCSnapDocOperaMediaManager _setErrorsPageProperties:forSnapDocKey:snapDoc:] */

void FUN_107b920cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b9213c; end: 107b92183; -[SCSnapDocOperaMediaManager _removeErrorsPagePropertiesForSnapDocKey:snapDoc:] */

void FUN_107b9213c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b92184; end: 107b921cb; -[SCSnapDocOperaMediaManager _cleanAllCaches] */

void FUN_107b92184(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bde07c0(param_1);
  func_0x00010bddffe0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bddfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearAllContentResult_1125558f0);
  return;
}



/* Entry: 107b921cc; end: 107b921e7; -[SCSnapDocOperaMediaManager _setContentResultForKey:contentResult:] */

void FUN_107b921cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x80),PTR_s_setObject_forKeyedSubscript__112651bb8,param_4,
               param_3);
    return;
  }
  return;
}



/* Entry: 107b921e8; end: 107b92213; -[SCSnapDocOperaMediaManager _contentResultForKey:] */

void FUN_107b921e8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x80));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b92214; end: 107b92283; -[SCSnapDocOperaMediaManager contentResultForSnapDocKey:] */

void FUN_107b92214(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_107b8e134();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



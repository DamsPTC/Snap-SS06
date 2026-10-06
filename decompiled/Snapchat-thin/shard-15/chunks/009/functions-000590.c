/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd46458; end: 10bd4645f; -[DJSharedSate setHandler:] */

void FUN_10bd46458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10bd46460; end: 10bd46467; -[DJSharedSate ready] */

undefined1 FUN_10bd46460(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10bd46468; end: 10bd4646f; -[DJSharedSate setReady:] */

void FUN_10bd46468(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10bd46470; end: 10bd464ab; -[DJSharedSate .cxx_destruct] */

void FUN_10bd46470(long param_1)

{
  func_0x00010bd471b4(param_1 + 0x28);
  func_0x00010bd471b4(param_1 + 0x20);
  func_0x00010bd471b4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bd464ac; end: 10bd4650b; -[DJFuture initWithSharedState:] */

long FUN_10bd464ac(long param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  FUN_10bd47104();
  func_0x00010bd471f0();
  if (param_1 != 0) {
    func_0x00010bd47148();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = unaff_x19;
    _objc_release(uVar1);
  }
  func_0x00010bd47114();
  return param_1;
}



/* Entry: 10bd4650c; end: 10bd46637; -[DJFuture isReady] */

/* WARNING: Removing unreachable block (ram,0x00010bd465e4) */

uint FUN_10bd4650c(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bd47148();
  _objc_sync_exit(param_1);
  func_0x00010bd4711c();
  uVar1 = uVar3;
  func_0x00010bf45c60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47138();
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bd46638;
  puStack_40 = &UNK_110d9e780;
  func_0x00010bd47148();
  uStack_38 = uVar3;
  func_0x00010bd47150();
  _objc_retain(auStack_58);
  func_0x00010c09faa0(uVar1);
  puVar2 = auStack_58;
  (*pcStack_48)(puVar2);
  func_0x00010c280b40(uVar1);
  func_0x00010bd471ac();
  func_0x00010bd4711c();
  func_0x00010bd47124();
  func_0x00010bd4711c();
  func_0x00010bd47114();
  return (uint)puVar2 & 1;
}



/* Entry: 10bd46638; end: 10bd4663f;  */

void FUN_10bd46638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_isReady_1125fc920);
  return;
}



/* Entry: 10bd46640; end: 10bd4677f; -[DJFuture get] */

/* WARNING: Removing unreachable block (ram,0x00010bd4672c) */

void FUN_10bd46640(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bd47148();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  func_0x00010bd4711c();
  uVar1 = uVar3;
  func_0x00010bf45c60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47138();
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bd46780;
  puStack_40 = &UNK_110d9e7b0;
  func_0x00010bd47148();
  uStack_38 = uVar3;
  func_0x00010bd47150();
  _objc_retain(auStack_58);
  func_0x00010c09faa0(uVar1);
  puVar2 = auStack_58;
  (*pcStack_48)(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280b40(uVar1);
  func_0x00010bd471ac();
  func_0x00010bd4711c();
  func_0x00010bd47124();
  func_0x00010bd4711c();
  func_0x00010bd47114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bd46780; end: 10bd46807;  */

void FUN_10bd46780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  while( true ) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c07bc40();
    lVar3 = *(long *)(param_1 + 0x20);
    if ((uVar2 & 1) != 0) break;
    func_0x00010bf45c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1260();
    func_0x00010bd4711c();
  }
  func_0x00010bf9aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_value_112683588);
    return;
  }
  func_0x00010bf9aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  func_0x00010bd4711c();
  func_0x00010bd471bc();
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar6 = puVar5;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10bd46a5c;
  puStack_a8 = &UNK_110d9e7e0;
  func_0x00010bd47150();
  puStack_a0 = puVar5;
  func_0x00010bd47148();
  ppuVar7 = &puStack_c0;
  uStack_98 = param_3;
  _objc_retainBlock();
  _objc_retain(lVar4);
  _objc_sync_enter(lVar4);
  uVar9 = *(undefined8 *)(lVar4 + 8);
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)(lVar4 + 8) = 0;
  _objc_release(uVar8);
  _objc_sync_exit(lVar4);
  _objc_release(lVar4);
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_10bd46b44;
  uStack_d0 = 0x10bd46b54;
  uStack_c8 = 0;
  uVar8 = uVar9;
  puStack_e8 = &uStack_f0;
  func_0x00010bf45c60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10bd46bfc;
  puStack_110 = &UNK_110c9b1c0;
  _objc_retain(uVar9);
  uStack_108 = uVar9;
  puStack_f8 = &uStack_f0;
  _objc_retain(ppuVar7);
  ppuStack_100 = ppuVar7;
  FUN_10bd46b5c(uVar8,&puStack_128);
  _objc_release(uVar8);
  if (puStack_e8[5] != 0) {
    (*(code *)ppuVar7[2])(ppuVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bd4717c();
  func_0x00010bd47124();
  func_0x00010bd4712c();
  func_0x00010bd4718c();
  func_0x00010bd471dc();
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_release(ppuVar7);
  func_0x00010bd4711c();
  func_0x00010bd47114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10bd46808; end: 10bd46a5b; -[DJFuture then:] */

void FUN_10bd46808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10bd46a5c;
  puStack_88 = &UNK_110d9e7e0;
  func_0x00010bd47150();
  puStack_80 = puVar2;
  func_0x00010bd47148();
  ppuVar4 = &puStack_a0;
  uStack_78 = param_3;
  _objc_retainBlock();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar5);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10bd46b44;
  uStack_b0 = 0x10bd46b54;
  uStack_a8 = 0;
  uVar5 = uVar6;
  puStack_c8 = &uStack_d0;
  func_0x00010bf45c60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10bd46bfc;
  puStack_f0 = &UNK_110c9b1c0;
  _objc_retain(uVar6);
  uStack_e8 = uVar6;
  puStack_d8 = &uStack_d0;
  _objc_retain(ppuVar4);
  ppuStack_e0 = ppuVar4;
  FUN_10bd46b5c(uVar5,&puStack_108);
  _objc_release(uVar5);
  if (puStack_c8[5] != 0) {
    (*(code *)ppuVar4[2])(ppuVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bd4717c();
  func_0x00010bd47124();
  func_0x00010bd4712c();
  func_0x00010bd4718c();
  func_0x00010bd471dc();
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_release(ppuVar4);
  func_0x00010bd4711c();
  func_0x00010bd47114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd46a5c; end: 10bd46b43;  */

undefined8 FUN_10bd46a5c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x00010bd4719c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  puVar3 = PTR_PTR_1126e3070;
  _objc_alloc(PTR_PTR_1126e3070);
  func_0x00010c045c00();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x00010bd471dc();
  func_0x00010bd47174();
  func_0x00010bd47114();
  return 0;
}



/* Entry: 10bd46b44; end: 10bd46b5b;  */

void FUN_10bd46b44(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10bd46b5c; end: 10bd46bfb;  */

/* WARNING: Removing unreachable block (ram,0x00010bd46bb8) */

void FUN_10bd46b5c(undefined8 param_1,long param_2)

{
  _objc_retain();
  func_0x00010bd47150();
  func_0x00010c09faa0(param_1);
  (**(code **)(param_2 + 0x10))(param_2);
  func_0x00010c280b40(param_1);
  func_0x00010bd4711c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd46bfc; end: 10bd46c47;  */

void FUN_10bd46bfc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07bc40();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00010bd47150();
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHandler__112646f08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10bd46c48; end: 10bd46c53; -[DJFuture .cxx_destruct] */

void FUN_10bd46c48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd46c54; end: 10bd46ccf; -[DJPromise init] */

long FUN_10bd46c54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bd471f0(param_1,PTR_s_init_1125d9248);
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126e3078;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    func_0x00010bd47194(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bd47150();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 10bd46cd0; end: 10bd46d23; -[DJPromise getFuture] */

void FUN_10bd46cd0(undefined8 param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  _objc_alloc(PTR_PTR_1126e3070);
  func_0x00010c045c00();
  func_0x00010bd471e4();
  func_0x00010bd47114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd46d24; end: 10bd46eb7; -[DJPromise updateAndCallResultHandler:] */

void FUN_10bd46d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bd47150();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  func_0x00010bd47174();
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10bd46eb8;
  pcStack_40 = FUN_10bd46ee0;
  uStack_38 = 0;
  lVar2 = lVar3;
  puStack_58 = &uStack_60;
  func_0x00010bf45c60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47138();
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10bd46ee8;
  puStack_80 = &UNK_110c9b1c0;
  func_0x00010bd47148();
  uStack_70 = param_3;
  func_0x00010bd47150();
  lStack_78 = lVar3;
  puStack_68 = &uStack_60;
  FUN_10bd46b5c(lVar2,auStack_98);
  func_0x00010bd47174();
  if (puStack_58[5] != 0) {
    func_0x00010bfd3220();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bd47174();
  }
  func_0x00010bd47124();
  func_0x00010bd4717c();
  func_0x00010bd4712c();
  func_0x00010bd4718c();
  func_0x00010bd4711c();
  func_0x00010bd47114();
  return;
}



/* Entry: 10bd46eb8; end: 10bd46edf;  */

void FUN_10bd46eb8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10bd46ee0; end: 10bd46ee7;  */

void FUN_10bd46ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10bd46ee8; end: 10bd46f77;  */

void FUN_10bd46ee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd3220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  func_0x00010bd47194(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf45c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd46f78; end: 10bd46fdb; -[DJPromise setValue:] */

void FUN_10bd46f78(void)

{
  FUN_10bd47104();
  func_0x00010bd47138();
  func_0x00010bd47148();
  func_0x00010bd471d0();
  func_0x00010bd47124();
  func_0x00010bd47114();
  return;
}



/* Entry: 10bd46fdc; end: 10bd4701b;  */

void FUN_10bd46fdc(void)

{
  func_0x00010bd4719c();
  func_0x00010c220160();
  func_0x00010c1e7f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10bd4701c; end: 10bd47067; -[DJPromise setValue] */

void FUN_10bd4701c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bd47068; end: 10bd470cb; -[DJPromise setException:] */

void FUN_10bd47068(void)

{
  FUN_10bd47104();
  func_0x00010bd47138();
  func_0x00010bd47148();
  func_0x00010bd471d0();
  func_0x00010bd47124();
  func_0x00010bd47114();
  return;
}



/* Entry: 10bd470cc; end: 10bd470d7;  */

void FUN_10bd470cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c197ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setException__1126439d8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10bd470d8; end: 10bd47103; -[DJPromise .cxx_destruct] */

void FUN_10bd470d8(long param_1)

{
  func_0x00010bd471b4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd47104; end: 10bd471f7;  */

void FUN_10bd47104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10bd471f8; end: 10bd4724f;  */

void FUN_10bd471f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  _objc_retain(param_2);
  func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd4723c);
  (*pcVar1)();
}



/* Entry: 10bd47250; end: 10bd472ef;  */

void FUN_10bd47250(void)

{
  code *pcVar1;
  
  ___cxa_rethrow();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bd472cc);
  (*pcVar1)();
}



/* Entry: 10bd472f0; end: 10bd472f3;  */

void FUN_10bd472f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bd472f4; end: 10bd47307;  */

void FUN_10bd472f4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd47308; end: 10bd4730f;  */

void FUN_10bd47308(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10bd47368(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd47310; end: 10bd47347;  */

long FUN_10bd47310(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110d9e890);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10bd47348; end: 10bd4734b;  */

void FUN_10bd47348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd4734c; end: 10bd47367;  */

void FUN_10bd4734c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10bd47368(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd47368; end: 10bd47407;  */

undefined8 FUN_10bd47368(void)

{
  undefined8 unaff_x19;
  
  func_0x00010bd47578();
  func_0x00010bd473b0();
  func_0x000107c3a94c();
  FUN_10bd47408();
  return unaff_x19;
}



/* Entry: 10bd47408; end: 10bd47423;  */

void FUN_10bd47408(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd47424; end: 10bd47437;  */

void FUN_10bd47424(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd47438; end: 10bd4743f;  */

void FUN_10bd47438(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10bd47498(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd47440; end: 10bd47477;  */

long FUN_10bd47440(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110d9e908);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10bd47478; end: 10bd4747b;  */

void FUN_10bd47478(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd4747c; end: 10bd47497;  */

void FUN_10bd4747c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10bd47498(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd47498; end: 10bd47537;  */

undefined8 FUN_10bd47498(void)

{
  undefined8 unaff_x19;
  
  func_0x00010bd47578();
  func_0x00010bd474e0();
  func_0x000107c3a94c();
  func_0x00010bd47538();
  return unaff_x19;
}



/* Entry: 10bd47538; end: 10bd47583;  */

void FUN_10bd47538(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bd47584; end: 10bd475f7; -[DJOutcome initWithResult:] */

undefined1 * FUN_10bd47584(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x00010bd47db4();
  func_0x00010bd47e88();
  puVar1 = auStack_30;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bd47e78();
    func_0x00010bd47e2c();
    func_0x00010bd47ec4();
    func_0x00010bd47e68();
    func_0x00010bd47e60();
  }
  func_0x00010bd47dc4();
  return puVar1;
}



/* Entry: 10bd475f8; end: 10bd47623;  */

void FUN_10bd475f8(long param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd47624; end: 10bd47697; -[DJOutcome initWithError:] */

undefined1 * FUN_10bd47624(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x00010bd47db4();
  func_0x00010bd47e88();
  puVar1 = auStack_30;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bd47e78();
    func_0x00010bd47e2c();
    func_0x00010bd47ec4();
    func_0x00010bd47e68();
    func_0x00010bd47e60();
  }
  func_0x00010bd47dc4();
  return puVar1;
}



/* Entry: 10bd47698; end: 10bd476bf;  */

void FUN_10bd47698(long param_1,undefined8 param_2,long param_3)

{
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd476c0; end: 10bd476f7; +[DJOutcome fromResult:] */

void FUN_10bd476c0(void)

{
  func_0x00010bd47eb8();
  func_0x00010bd47ee4();
  _objc_alloc();
  func_0x00010c03fc80();
  func_0x00010bd47da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd476f8; end: 10bd4772f; +[DJOutcome fromError:] */

void FUN_10bd476f8(void)

{
  func_0x00010bd47eb8();
  func_0x00010bd47ee4();
  _objc_alloc();
  func_0x00010c010760();
  func_0x00010bd47da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd47730; end: 10bd4775b; -[DJOutcome matchResult:Error:] */

void FUN_10bd47730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd4775c; end: 10bd47777; -[DJOutcome result] */

void FUN_10bd4775c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bd47774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_110d9e960,
             &PTR___NSConcreteGlobalBlock_110d9e980);
  return;
}



/* Entry: 10bd47778; end: 10bd47797;  */

void FUN_10bd47778(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd47e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10bd47798; end: 10bd4779f;  */

undefined8 FUN_10bd47798(void)

{
  return 0;
}



/* Entry: 10bd477a0; end: 10bd4783b; -[DJOutcome resultOr:] */

void FUN_10bd477a0(void)

{
  long unaff_x20;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  
  func_0x00010bd47db4();
  lVar1 = *(long *)(unaff_x20 + 8);
  func_0x00010bd47e78();
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10bd4785c;
  puStack_40 = &UNK_110d9e9c0;
  pcVar2 = *(code **)(lVar1 + 0x10);
  func_0x00010bd47e2c();
  (*pcVar2)(lVar1,&PTR___NSConcreteGlobalBlock_110d9e9a0,auStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47e60();
  func_0x00010bd47dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10bd4783c; end: 10bd4787b;  */

void FUN_10bd4783c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd47e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10bd4787c; end: 10bd4789f; -[DJOutcome error] */

void FUN_10bd4787c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bd47894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_110d9e9f0,
             &PTR___NSConcreteGlobalBlock_110d9ea10);
  return;
}



/* Entry: 10bd478a0; end: 10bd478bf;  */

void FUN_10bd478a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd47e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10bd478c0; end: 10bd478db; -[DJOutcome description] */

void FUN_10bd478c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bd478d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_110d9ea30,
             &PTR___NSConcreteGlobalBlock_110d9ea50);
  return;
}



/* Entry: 10bd478dc; end: 10bd4794b;  */

void FUN_10bd478dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_11102e2f8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd4794c; end: 10bd47a47; -[DJOutcome isEqualToOutcome:] */

long FUN_10bd4794c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  
  func_0x00010bd47db4();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar3 = *(long *)(unaff_x20 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10bd47a48;
  puStack_50 = &UNK_110d9ea70;
  func_0x00010bd47e2c();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10bd47abc;
  puStack_78 = &UNK_110d9ea70;
  func_0x00010bd47e2c();
  (**(code **)(lVar3 + 0x10))(lVar3,&puStack_68,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf1f3c0();
  _objc_release(lVar3);
  _objc_release(unaff_x19);
  _objc_release(unaff_x19);
  func_0x00010bd47dc4();
  return lVar2;
}



/* Entry: 10bd47a48; end: 10bd47abb;  */

void FUN_10bd47a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x00010bd47ef0();
  func_0x00010bd47e1c();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00010c13ca20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47e50();
  func_0x00010c0df6e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47dcc();
  func_0x00010bd47dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd47abc; end: 10bd47b2f;  */

void FUN_10bd47abc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x00010bd47ef0();
  func_0x00010bd47e1c();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00010bf987e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47e50();
  func_0x00010c0df6e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47dcc();
  func_0x00010bd47dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10bd47b30; end: 10bd47b9f; -[DJOutcome isEqual:] */

ulong FUN_10bd47b30(void)

{
  ulong unaff_x19;
  ulong unaff_x20;
  
  func_0x00010bd47db4();
  if (unaff_x19 == unaff_x20) {
    unaff_x20 = 1;
  }
  else {
    if (unaff_x19 != 0) {
      _objc_opt_class();
      _objc_opt_isKindOfClass();
      if ((unaff_x19 & 1) != 0) {
        func_0x00010c071f80();
        goto LAB_10bd47b84;
      }
    }
    unaff_x20 = 0;
  }
LAB_10bd47b84:
  func_0x00010bd47dc4();
  return unaff_x20;
}



/* Entry: 10bd47ba0; end: 10bd47c6b; -[DJOutcome hash] */

undefined8 * FUN_10bd47ba0(long param_1)

{
  long lVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  lVar1 = param_1;
  puStack_38 = &uStack_40;
  _objc_opt_class();
  func_0x00010bfde980();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10bd47c6c;
  puStack_50 = &UNK_110d9eaa0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10bd47cc8;
  puStack_78 = &UNK_110d9eaa0;
  puStack_70 = &uStack_40;
  puStack_48 = &uStack_40;
  lStack_28 = lVar1;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),&puStack_68,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010bd47da8();
  func_0x00010bd47ea0();
  return &uStack_40;
}



/* Entry: 10bd47c6c; end: 10bd47cc7;  */

void FUN_10bd47c6c(void)

{
  func_0x00010bd47ef0();
  func_0x00010bd47e1c();
  func_0x00010bd47e34();
  func_0x00010bd47ed0();
  func_0x00010bfde980();
  func_0x00010bd47dec();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd47cc8; end: 10bd47d1f;  */

void FUN_10bd47cc8(void)

{
  func_0x00010bd47ef0();
  func_0x00010bd47e1c();
  func_0x00010bd47e34();
  func_0x00010bd47ed0();
  func_0x00010bfde980();
  func_0x00010bd47dec();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd47da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd47d20; end: 10bd47d9b; -[DJOutcome copyWithZone:] */

void FUN_10bd47d20(long param_1)

{
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_110d9eaf0,
             &PTR___NSConcreteGlobalBlock_110d9eb10);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 10bd47d9c; end: 10bd47efb; -[DJOutcome .cxx_destruct] */

void FUN_10bd47d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd47efc; end: 10bd47f3b; +[DJProvider providerWithBlock:] */

void FUN_10bd47efc(void)

{
  func_0x00010bd47ff0();
  _objc_alloc();
  func_0x00010bff8d00();
  func_0x00010bd47fe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd47f3c; end: 10bd47fcb; -[DJProvider initWithBlock:] */

undefined1 * FUN_10bd47f3c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010bd47ff0();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 10bd47fcc; end: 10bd47fd7; -[DJProvider get] */

void FUN_10bd47fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bd47fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10bd47fd8; end: 10bd47fff; -[DJProvider .cxx_destruct] */

void FUN_10bd47fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd48000; end: 10bd48047;  */

undefined8 * FUN_10bd48000(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  uStack_30 = param_3;
  uStack_28 = param_2;
  FUN_10bd48048(auStack_40,&uStack_28,&uStack_30);
  func_0x000107c3a984();
  func_0x000107c3a9a4();
  return param_1;
}



/* Entry: 10bd48048; end: 10bd48067;  */

void FUN_10bd48048(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c3a9a0(param_1,param_2,param_2);
  FUN_10bd48100();
  return;
}



/* Entry: 10bd48068; end: 10bd480a7;  */

undefined8 * FUN_10bd48068(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10bd480a8(auStack_30,param_2);
  func_0x000107c3a984();
  func_0x000107c3a9a4();
  return param_1;
}



/* Entry: 10bd480a8; end: 10bd480c3;  */

void FUN_10bd480a8(void)

{
  func_0x000107c3a9a0();
  FUN_10bd4820c();
  return;
}



/* Entry: 10bd480c4; end: 10bd480c7;  */

void FUN_10bd480c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9eb40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bd480c8; end: 10bd480ef;  */

void FUN_10bd480c8(void)

{
  FUN_10bd480f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd480f0; end: 10bd480ff;  */

void FUN_10bd480f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9eb40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bd48100; end: 10bd48177;  */

void FUN_10bd48100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *unaff_x19;
  long lStack_40;
  
  func_0x000107c3a950();
  func_0x000107c3a964();
  FUN_10bd48178(lStack_40,param_2,param_3);
  *unaff_x19 = lStack_40 + 0x18;
  unaff_x19[1] = lStack_40;
  func_0x000107c3a980();
  func_0x000107c3a954();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd483a8();
  func_0x00010bd483bc();
  func_0x000107c3a958();
  FUN_10bd481a0();
  return;
}



/* Entry: 10bd48178; end: 10bd4819f;  */

void FUN_10bd48178(void)

{
  func_0x000107c3a958();
  FUN_10bd481a0();
  return;
}



/* Entry: 10bd481a0; end: 10bd481ab;  */

undefined8 * FUN_10bd481a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110d9eb90;
  puVar1 = param_1;
  func_0x000107c3a98c();
  _CFDataCreateMutable();
  param_1[2] = puVar1;
  _CFDataAppendBytes();
  param_1[1] = param_1[2];
  return param_1;
}



/* Entry: 10bd481ac; end: 10bd4820b;  */

undefined8 * FUN_10bd481ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110d9eb90;
  puVar1 = param_1;
  func_0x000107c3a98c();
  _CFDataCreateMutable();
  param_1[2] = puVar1;
  _CFDataAppendBytes();
  param_1[1] = param_1[2];
  return param_1;
}



/* Entry: 10bd4820c; end: 10bd4826b;  */

void FUN_10bd4820c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *unaff_x19;
  long lStack_30;
  
  func_0x000107c3a950();
  func_0x000107c3a964();
  FUN_10bd4826c(lStack_30,param_2);
  *unaff_x19 = lStack_30 + 0x18;
  unaff_x19[1] = lStack_30;
  func_0x000107c3a980();
  func_0x000107c3a954();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bd483a8();
  func_0x00010bd483bc();
  func_0x000107c3a958();
  FUN_10bd48294();
  return;
}



/* Entry: 10bd4826c; end: 10bd48293;  */

void FUN_10bd4826c(void)

{
  func_0x000107c3a958();
  FUN_10bd48294();
  return;
}



/* Entry: 10bd48294; end: 10bd482db;  */

void FUN_10bd48294(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 extraout_x8;
  
  func_0x000107c3a970();
  *param_1 = extraout_x8;
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x000107c31728();
  }
  else {
    FUN_10bd482dc();
  }
  return;
}



/* Entry: 10bd482dc; end: 10bd48373;  */

void FUN_10bd482dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = param_1;
  func_0x000107c3a988();
  puVar1[2] = param_2[2];
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar3 = (long)*(char *)((long)puVar1 + 0x17);
  puVar4 = puVar1;
  if (lVar3 < 0) {
    lVar3 = puVar1[1];
    puVar4 = (undefined8 *)*puVar1;
  }
  func_0x000107c3a98c();
  _CFAllocatorCreate();
  uVar2 = 0;
  _CFDataCreateWithBytesNoCopy(0,puVar4,lVar3,puVar1);
  param_1[1] = uVar2;
  _CFRelease(puVar1);
  param_1[2] = 0;
  return;
}



/* Entry: 10bd48374; end: 10bd4838f;  */

void FUN_10bd48374(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd48390; end: 10bd483c3;  */

void FUN_10bd48390(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10bd483c4; end: 10bd48443;  */

void FUN_10bd483c4(undefined8 param_1,long param_2)

{
  undefined1 auStack_98 [56];
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_10bd48444(auStack_98,param_2 / 1000);
  pcStack_58 = FUN_10bd484f8;
  lStack_50 = param_2 % 1000;
  uStack_48 = 0;
  puStack_60 = auStack_98;
  func_0x000107c2793c(&UNK_10f836f80);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 10bd48444; end: 10bd484d7;  */

undefined8 * FUN_10bd48444(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  FUN_10bd484d8();
  if (((ulong)puVar1 & 1) != 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
    return puVar1;
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000106e53aa8();
  lVar3 = lVar2;
  ___cxa_throw(lVar2,&PTR_DAT_110d9ebd0,FUN_10bd486fc);
  ___cxa_free_exception(lVar2);
  __Unwind_Resume(lVar3);
  _localtime_r();
  return (undefined8 *)(ulong)(lVar3 != 0);
}



/* Entry: 10bd484d8; end: 10bd484f7;  */

bool FUN_10bd484d8(long param_1)

{
  _localtime_r(param_1,param_1 + 8);
  return param_1 != 0;
}



/* Entry: 10bd484f8; end: 10bd486fb;  */

void FUN_10bd484f8(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuStack_488;
  undefined1 *puStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined1 auStack_468 [504];
  undefined **ppuStack_270;
  undefined1 *puStack_268;
  long lStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [504];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_480 = auStack_468;
  ppuStack_488 = &PTR_DAT_11099bc38;
  uStack_470 = 500;
  lStack_478 = 0;
  pcVar2 = (char *)*param_2;
  pcVar6 = pcVar2;
  pcVar8 = pcVar2;
  if ((param_2[1] != 0) && (*pcVar2 == ':')) {
    pcVar6 = pcVar2 + 1;
    pcVar8 = pcVar2 + 1;
  }
  for (; (pcVar7 = pcVar2 + param_2[1], pcVar6 != pcVar2 + param_2[1] &&
         (pcVar7 = pcVar6, *pcVar6 != '}')); pcVar6 = pcVar6 + 1) {
  }
  if ((char *)0x1f4 < pcVar7 + (1 - (long)pcVar8)) {
    func_0x000107c283e4(&ppuStack_488);
  }
  func_0x000107c283ec(&ppuStack_488,pcVar8,pcVar7);
  ppuStack_270 = (undefined **)((ulong)ppuStack_270 & 0xffffffffffffff00);
  func_0x000107c283a0(&ppuStack_488,&ppuStack_270);
  lVar3 = *param_2;
  *param_2 = (long)pcVar7;
  param_2[1] = param_2[1] + (lVar3 - (long)pcVar7);
  puStack_268 = auStack_250;
  ppuStack_270 = &PTR_DAT_11099bc38;
  uStack_258 = 500;
  lStack_260 = 0;
  while (uVar1 = uStack_258, puVar4 = puStack_268,
        _strftime(puStack_268,uStack_258,puStack_480,param_1), puVar4 == (undefined1 *)0x0) {
    if ((ulong)(lStack_478 << 8) <= uVar1) goto LAB_10bd48668;
    if (uVar1 < 0xb) {
      uVar1 = 10;
    }
    if (uStack_258 < uStack_258 + uVar1) {
      (*(code *)*ppuStack_270)(&ppuStack_270);
    }
  }
  func_0x000107c283e0(&ppuStack_270);
LAB_10bd48668:
  puVar4 = puStack_268 + lStack_260;
  func_0x0001087a366c(puStack_268,puVar4,*param_3);
  func_0x000107c283e8(&ppuStack_270);
  *param_3 = (long)puVar4;
  pppuVar5 = &ppuStack_488;
  func_0x000107c283e8(pppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000107c283e8(&ppuStack_270);
    func_0x000107c283e8(&ppuStack_488);
    __Unwind_Resume(pppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
    return;
  }
  return;
}



/* Entry: 10bd486fc; end: 10bd486ff;  */

void FUN_10bd486fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10bd48700; end: 10bd48713;  */

void FUN_10bd48700(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bd48714; end: 10bd4873f;  */

void FUN_10bd48714(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  int extraout_w8;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int extraout_w9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  func_0x00010bd4cd78();
  func_0x000106e53aa8();
  func_0x00010bd4cc30();
  func_0x00010bd4cd04();
  func_0x00010bd4d038();
  pcVar5 = FUN_10bd48740;
  func_0x000107c3aaf8();
  uVar6 = param_1 & 0x7fffff;
  if ((param_1 & 0x7f800000) == 0) {
    if (uVar6 == 0) {
      uVar12 = 0;
      uVar8 = 0;
      goto LAB_10bd48a5c;
    }
    uVar7 = 0xffffff6b;
LAB_10bd48780:
    uVar12 = (int)(uVar7 * 0x134413) >> 0x16;
    lVar11 = ((long)((ulong)(uVar7 * 0x134413) << 0x20) >> 0x36) + -1;
    uVar14 = *(ulong *)(&UNK_10e60d498 + (ulong)(0x20 - uVar12) * 8);
    uVar10 = uVar7 + ((int)(uVar12 * -0x1a934f + 0x1a934f) >> 0x13);
    uVar2 = uVar6 * 2;
    uVar4 = uVar6 << 1 | 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    uVar9 = SUB164(ZEXT416(uVar4 << (ulong)(uVar10 & 0x1f)) * auVar3,8);
    uVar13 = uVar9 / 100;
    uVar9 = uVar9 % 100;
    uVar15 = (uint)(uVar14 >> ((ulong)~uVar10 & 0x3f));
    if (uVar15 > uVar9 || uVar9 == uVar15) {
      if (uVar15 <= uVar9) {
        if ((((uVar6 & 1) == 0) &&
            (uVar8 = (ulong)(uVar2 - 1), func_0x00010bd4d398(), (uVar8 & 1) != 0)) ||
           ((uVar14 * (uVar2 - 1) >> ((ulong)-uVar10 & 0x3f) & 1) != 0)) goto LAB_10bd48944;
      }
      else {
        if ((((uVar6 & 1) == 0) || (uVar9 != 0)) || (func_0x00010bd4d398(), uVar4 == 0)) {
LAB_10bd48944:
          uVar6 = 0;
          uVar7 = (uVar13 & 0xaaaaaaaa | 0x80) >> 1 | (uVar13 & 0x55555555) << 1;
          uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
          while ((uVar10 = uVar7 & 6, (int)uVar6 < (int)(uVar7 - 1) &&
                 (uVar10 = uVar6, uVar13 * -0x3d70a3d7 < 0xa3d70a4))) {
            uVar6 = uVar6 + 2;
            uVar13 = uVar13 * -0x3d70a3d7;
          }
          uVar6 = uVar10;
          uVar4 = uVar13;
          if (uVar13 * -0x33333333 < 0x33333334) {
            uVar6 = uVar10 + 1;
            uVar4 = uVar13 * -0x33333333;
          }
          if (uVar10 < uVar7) {
            uVar13 = uVar4;
            uVar10 = uVar6;
          }
          goto LAB_10bd48a54;
        }
        uVar13 = uVar13 - 1;
        uVar9 = 100;
      }
    }
    uVar6 = (uVar9 - (uVar15 >> 1)) + 5;
    if ((uVar6 & 1) == 0) {
      uVar4 = (uVar6 >> 1) * 0xcccd;
      uVar6 = uVar13 * 10 + (uVar4 >> 0x12);
      uVar8 = (ulong)uVar6;
      if ((uVar4 >> 2 & 0x3fff) < 0xccd) {
        if ((uVar14 * uVar2 >> ((ulong)-uVar10 & 0x3f) & 1) == 0) {
          uVar8 = (ulong)(uVar6 - 1);
        }
        else if ((int)uVar7 < 0x28) {
          if ((int)uVar7 < 7) {
            if (((int)uVar7 < -2) &&
               (uVar10 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1,
               uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2,
               uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4,
               uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8,
               (int)LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10) <= (int)((int)lVar11 - uVar7)))
            goto LAB_10bd48a5c;
          }
          else {
            lVar11 = lVar11 * 8;
            if (*(uint *)(&UNK_10e60d2c4 + lVar11) < *(int *)(&UNK_10e60d2c0 + lVar11) * uVar2)
            goto LAB_10bd48a5c;
          }
          uVar8 = (ulong)(uVar6 & 0xfffffffe);
        }
      }
    }
    else {
      uVar8 = (ulong)(uVar13 * 10 + (uVar6 * 0xcccd >> 0x13));
    }
  }
  else {
    uVar7 = ((param_1 & 0x7f800000) >> 0x17) - 0x96;
    if (uVar6 != 0) {
      uVar6 = uVar6 | 0x800000;
      goto LAB_10bd48780;
    }
    func_0x00010bd4d4e0();
    uVar12 = (int)(extraout_w9 + uVar7 * extraout_w8) >> 0x16;
    iVar1 = uVar7 + ((int)(uVar12 * -0x1a934f) >> 0x13);
    uVar8 = *(ulong *)(&UNK_10e60d498 + (ulong)(0x1f - uVar12) * 8);
    uVar14 = (ulong)(0x28 - iVar1);
    uVar6 = (uint)(uVar8 - (uVar8 >> 0x19) >> (uVar14 & 0x3f));
    if ((uVar7 & 0xfffffffe) != 2) {
      uVar6 = uVar6 + 1;
    }
    uVar13 = (uint)(uVar8 + (uVar8 >> 0x18) >> (uVar14 & 0x3f)) / 10;
    if (uVar13 * 10 < uVar6) {
      uVar10 = (int)(uVar8 >> ((ulong)(0x27 - iVar1) & 0x3f)) + 1U >> 1;
      if (uVar7 == 0xffffffdd) {
        uVar8 = (ulong)(uVar10 & 0x7ffffffe);
      }
      else {
        if (uVar10 < uVar6) {
          uVar10 = uVar10 + 1;
        }
        uVar8 = (ulong)uVar10;
      }
      goto LAB_10bd48a5c;
    }
    uVar6 = 0;
    uVar7 = (uVar13 & 0xaaaaaaaa | 0x80) >> 1 | (uVar13 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    while ((uVar10 = uVar7 & 6, (int)uVar6 < (int)(uVar7 - 1) &&
           (uVar10 = uVar6, uVar13 * -0x3d70a3d7 < 0xa3d70a4))) {
      uVar6 = uVar6 + 2;
      uVar13 = uVar13 * -0x3d70a3d7;
    }
    uVar6 = uVar10;
    uVar4 = uVar13;
    if (uVar13 * -0x33333333 < 0x33333334) {
      uVar6 = uVar10 + 1;
      uVar4 = uVar13 * -0x33333333;
    }
    if (uVar10 < uVar7) {
      uVar13 = uVar4;
      uVar10 = uVar6;
    }
LAB_10bd48a54:
    uVar8 = (ulong)(uVar13 >> (ulong)(uVar10 & 0x1f));
    uVar12 = uVar12 + 1 + uVar10;
  }
LAB_10bd48a5c:
  func_0x00010bd4d054(uVar8 | (ulong)uVar12 << 0x20,pcVar5);
  return;
}



/* Entry: 10bd48740; end: 10bd48aa3;  */

void FUN_10bd48740(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int extraout_w8;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int extraout_w9;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 unaff_x30;
  
  func_0x000107c3aaf8();
  uVar5 = param_1 & 0x7fffff;
  if ((param_1 & 0x7f800000) == 0) {
    if (uVar5 == 0) {
      uVar11 = 0;
      uVar7 = 0;
      goto LAB_10bd48a5c;
    }
    uVar6 = 0xffffff6b;
LAB_10bd48780:
    uVar11 = (int)(uVar6 * 0x134413) >> 0x16;
    lVar10 = ((long)((ulong)(uVar6 * 0x134413) << 0x20) >> 0x36) + -1;
    uVar13 = *(ulong *)(&UNK_10e60d498 + (ulong)(0x20 - uVar11) * 8);
    uVar9 = uVar6 + ((int)(uVar11 * -0x1a934f + 0x1a934f) >> 0x13);
    uVar2 = uVar5 * 2;
    uVar4 = uVar5 << 1 | 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar13;
    uVar8 = SUB164(ZEXT416(uVar4 << (ulong)(uVar9 & 0x1f)) * auVar3,8);
    uVar12 = uVar8 / 100;
    uVar8 = uVar8 % 100;
    uVar14 = (uint)(uVar13 >> ((ulong)~uVar9 & 0x3f));
    if (uVar14 > uVar8 || uVar8 == uVar14) {
      if (uVar14 <= uVar8) {
        if ((((uVar5 & 1) == 0) &&
            (uVar7 = (ulong)(uVar2 - 1), func_0x00010bd4d398(), (uVar7 & 1) != 0)) ||
           ((uVar13 * (uVar2 - 1) >> ((ulong)-uVar9 & 0x3f) & 1) != 0)) goto LAB_10bd48944;
      }
      else {
        if ((((uVar5 & 1) == 0) || (uVar8 != 0)) || (func_0x00010bd4d398(), uVar4 == 0)) {
LAB_10bd48944:
          uVar5 = 0;
          uVar6 = (uVar12 & 0xaaaaaaaa | 0x80) >> 1 | (uVar12 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          while ((uVar9 = uVar6 & 6, (int)uVar5 < (int)(uVar6 - 1) &&
                 (uVar9 = uVar5, uVar12 * -0x3d70a3d7 < 0xa3d70a4))) {
            uVar5 = uVar5 + 2;
            uVar12 = uVar12 * -0x3d70a3d7;
          }
          uVar5 = uVar9;
          uVar4 = uVar12;
          if (uVar12 * -0x33333333 < 0x33333334) {
            uVar5 = uVar9 + 1;
            uVar4 = uVar12 * -0x33333333;
          }
          if (uVar9 < uVar6) {
            uVar12 = uVar4;
            uVar9 = uVar5;
          }
          goto LAB_10bd48a54;
        }
        uVar12 = uVar12 - 1;
        uVar8 = 100;
      }
    }
    uVar5 = (uVar8 - (uVar14 >> 1)) + 5;
    if ((uVar5 & 1) == 0) {
      uVar4 = (uVar5 >> 1) * 0xcccd;
      uVar5 = uVar12 * 10 + (uVar4 >> 0x12);
      uVar7 = (ulong)uVar5;
      if ((uVar4 >> 2 & 0x3fff) < 0xccd) {
        if ((uVar13 * uVar2 >> ((ulong)-uVar9 & 0x3f) & 1) == 0) {
          uVar7 = (ulong)(uVar5 - 1);
        }
        else if ((int)uVar6 < 0x28) {
          if ((int)uVar6 < 7) {
            if (((int)uVar6 < -2) &&
               (uVar9 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1,
               uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2,
               uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4,
               uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8,
               (int)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10) <= (int)((int)lVar10 - uVar6)))
            goto LAB_10bd48a5c;
          }
          else {
            lVar10 = lVar10 * 8;
            if (*(uint *)(&UNK_10e60d2c4 + lVar10) < *(int *)(&UNK_10e60d2c0 + lVar10) * uVar2)
            goto LAB_10bd48a5c;
          }
          uVar7 = (ulong)(uVar5 & 0xfffffffe);
        }
      }
    }
    else {
      uVar7 = (ulong)(uVar12 * 10 + (uVar5 * 0xcccd >> 0x13));
    }
  }
  else {
    uVar6 = ((param_1 & 0x7f800000) >> 0x17) - 0x96;
    if (uVar5 != 0) {
      uVar5 = uVar5 | 0x800000;
      goto LAB_10bd48780;
    }
    func_0x00010bd4d4e0();
    uVar11 = (int)(extraout_w9 + uVar6 * extraout_w8) >> 0x16;
    iVar1 = uVar6 + ((int)(uVar11 * -0x1a934f) >> 0x13);
    uVar7 = *(ulong *)(&UNK_10e60d498 + (ulong)(0x1f - uVar11) * 8);
    uVar13 = (ulong)(0x28 - iVar1);
    uVar5 = (uint)(uVar7 - (uVar7 >> 0x19) >> (uVar13 & 0x3f));
    if ((uVar6 & 0xfffffffe) != 2) {
      uVar5 = uVar5 + 1;
    }
    uVar12 = (uint)(uVar7 + (uVar7 >> 0x18) >> (uVar13 & 0x3f)) / 10;
    if (uVar12 * 10 < uVar5) {
      uVar9 = (int)(uVar7 >> ((ulong)(0x27 - iVar1) & 0x3f)) + 1U >> 1;
      if (uVar6 == 0xffffffdd) {
        uVar7 = (ulong)(uVar9 & 0x7ffffffe);
      }
      else {
        if (uVar9 < uVar5) {
          uVar9 = uVar9 + 1;
        }
        uVar7 = (ulong)uVar9;
      }
      goto LAB_10bd48a5c;
    }
    uVar5 = 0;
    uVar6 = (uVar12 & 0xaaaaaaaa | 0x80) >> 1 | (uVar12 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    while ((uVar9 = uVar6 & 6, (int)uVar5 < (int)(uVar6 - 1) &&
           (uVar9 = uVar5, uVar12 * -0x3d70a3d7 < 0xa3d70a4))) {
      uVar5 = uVar5 + 2;
      uVar12 = uVar12 * -0x3d70a3d7;
    }
    uVar5 = uVar9;
    uVar4 = uVar12;
    if (uVar12 * -0x33333333 < 0x33333334) {
      uVar5 = uVar9 + 1;
      uVar4 = uVar12 * -0x33333333;
    }
    if (uVar9 < uVar6) {
      uVar12 = uVar4;
      uVar9 = uVar5;
    }
LAB_10bd48a54:
    uVar7 = (ulong)(uVar12 >> (ulong)(uVar9 & 0x1f));
    uVar11 = uVar11 + 1 + uVar9;
  }
LAB_10bd48a5c:
  func_0x00010bd4d054(uVar7 | (ulong)uVar11 << 0x20,unaff_x30);
  return;
}



/* Entry: 10bd48aa4; end: 10bd48ae3;  */

bool FUN_10bd48aa4(int param_1,uint param_2,int param_3)

{
  if (-2 < (int)param_2) {
    if ((int)param_2 < 7) {
      return true;
    }
    if (param_2 < 0x28) {
      return (uint)(*(int *)(&UNK_10e60d2c0 + (long)param_3 * 8) * param_1) <=
             *(uint *)(&UNK_10e60d2c4 + (long)param_3 * 8);
    }
  }
  return false;
}



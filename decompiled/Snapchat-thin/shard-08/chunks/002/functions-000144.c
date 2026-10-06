/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e80098; end: 105e8012f;  */

void FUN_105e80098(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_2 == 2)) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    }
    _objc_retain(uVar2);
    func_0x00010be69b00(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e80130; end: 105e80427; -[SCRetriableRequestManagerV2 _submitJob:onComplete:] */

void FUN_105e80130(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new();
  func_0x00010c198180();
  lVar2 = param_1;
  func_0x00010c085940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6840(puVar1);
  _objc_release(lVar2);
  if (param_3 == 0) {
    _objc_retain(0);
    func_0x00010c1b67a0(puVar1);
    _objc_release(0);
    func_0x00010c1b6780(puVar1);
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    _objc_retain(uVar6);
    func_0x00010c1b67a0(puVar1);
    _objc_release(uVar6);
    func_0x00010c1b6780(puVar1);
  }
  func_0x00010c1b6740(puVar1);
  puVar3 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1c35c0(puVar3);
  func_0x00010c1edae0(puVar3);
  func_0x00010c1ed860(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c168b40();
  func_0x00010c1cc140(puVar3);
  puVar4 = PTR_PTR_1126ae740;
  _objc_opt_new(PTR_PTR_1126ae740);
  func_0x00010befc800();
  func_0x00010befc800(puVar4);
  func_0x00010c169200(puVar3);
  _objc_release(puVar4);
  func_0x00010c1b66e0(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126bdbc0;
  func_0x00010bf64c20(PTR_PTR_1126bdbc0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c25f200(lVar5);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e80428; end: 105e8047b;  */

void FUN_105e80428(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e8047c; end: 105e804eb; -[SCRetriableRequestManagerV2 _handleJobSubmission:config:onComplete:] */

void FUN_105e8047c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be55000(param_1);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e804ec; end: 105e805b7; -[SCRetriableRequestManagerV2 _logJobSuccessByPersist:] */

void FUN_105e804ec(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar2 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c13f160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    _objc_release(0);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e2dab8;
  }
  else {
    cVar1 = *(char *)(param_3 + 8);
    _objc_release(param_3);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e2da98;
    if (cVar1 == '\0') {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e2dab8;
    }
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110f24c38,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105e805b8; end: 105e80643; -[SCRetriableRequestManagerV2 _logMissingCallback:] */

void FUN_105e805b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010be46400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010c13f140(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e80644; end: 105e807e7; -[SCRetriableRequestManagerV2 _logJobAdded:error:] */

void FUN_105e80644(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c13f100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar6 = puVar2;
  if (param_4 != 0) {
    lVar3 = param_4;
    func_0x00010bf3ec40(param_4);
    func_0x00010c0df780(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db0dd8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  lVar3 = param_1;
  func_0x00010c085940(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dcef38,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar3);
  uVar7 = param_3;
  func_0x00010c085660();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2da98;
  if ((int)uVar7 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2dab8;
  }
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24c38,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105e807e8; end: 105e80917; -[SCRetriableRequestManagerV2 submitRequest:completionQueue:completionBlock:] */

void FUN_105e807e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e80918; end: 105e8097b;  */

void FUN_105e80918(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c54a0;
  _objc_alloc(PTR_PTR_1126c54a0);
  func_0x00010c000580();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6480();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e8097c; end: 105e809ff; -[SCRetriableRequestManagerV2 clearPersistedRequests] */

void FUN_105e8097c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c085940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e5c0(lVar2,param_2,param_1,0,0,0,0);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e80a00; end: 105e80a3b; -[SCRetriableRequestManagerV2 shouldRetryBlock] */

void FUN_105e80a00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
    *(undefined ***)(param_1 + 0x68) = &PTR___NSConcreteGlobalBlock_1108efe98;
    _objc_release();
    lVar1 = *(long *)(param_1 + 0x68);
  }
  _objc_retainBlock(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e80a3c; end: 105e80a5b;  */

bool FUN_105e80a3c(undefined8 param_1,long param_2)

{
  func_0x00010c252ee0(param_2);
  return 499 < param_2;
}



/* Entry: 105e80a5c; end: 105e80a77; -[SCRetriableRequestManagerV2 maxRetryRuntimeSeconds] */

double FUN_105e80a5c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13f1c0(lVar1);
  return (double)lVar1;
}



/* Entry: 105e80a78; end: 105e80a93; -[SCRetriableRequestManagerV2 maxRetryRuntimeSecondsBackground] */

double FUN_105e80a78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13f1e0(lVar1);
  return (double)lVar1;
}



/* Entry: 105e80a94; end: 105e80aaf; -[SCRetriableRequestManagerV2 retryIntervalSeconds] */

double FUN_105e80a94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13f240(lVar1);
  return (double)lVar1;
}



/* Entry: 105e80ab0; end: 105e80acb; -[SCRetriableRequestManagerV2 maxRetryDelaySeconds] */

double FUN_105e80ab0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c13f1a0(lVar1);
  return (double)lVar1;
}



/* Entry: 105e80acc; end: 105e80ae7; -[SCRetriableRequestManagerV2 backoffFailureThreshold] */

double FUN_105e80acc(float param_1,long param_2)

{
  func_0x00010c13f0c0(*(undefined8 *)(param_2 + 0x20));
  return (double)param_1;
}



/* Entry: 105e80ae8; end: 105e80aef; -[SCRetriableRequestManagerV2 retryBackoffBlock] */

undefined8 FUN_105e80ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105e80af0; end: 105e80af7; -[SCRetriableRequestManagerV2 setRetryBackoffBlock:] */

void FUN_105e80af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e80af8; end: 105e80aff; -[SCRetriableRequestManagerV2 shouldPersistBlock] */

undefined8 FUN_105e80af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105e80b00; end: 105e80b07; -[SCRetriableRequestManagerV2 setShouldPersistBlock:] */

void FUN_105e80b00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e80b08; end: 105e80b0f; -[SCRetriableRequestManagerV2 setShouldRetryBlock:] */

void FUN_105e80b08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105e80b10; end: 105e80b17; -[SCRetriableRequestManagerV2 jobTypeIdentifier] */

undefined8 FUN_105e80b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105e80b18; end: 105e80b1f; -[SCRetriableRequestManagerV2 performer] */

undefined8 FUN_105e80b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105e80b20; end: 105e80b4f; -[SCRetriableRequestManagerV2 setPerformer:] */

void FUN_105e80b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e80b50; end: 105e80c17; -[SCRetriableRequestManagerV2 .cxx_destruct] */

void FUN_105e80b50(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e80c18; end: 105e80eb3;  */

void FUN_105e80c18(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    _objc_opt_class(PTR_PTR_1126c5488);
    if (param_2 == 0) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_a0,param_2);
    }
    puVar3 = &uStack_111;
    FUN_105e821b8();
    uStack_180 = 0xf;
    uStack_170 = 0x100;
    _objc_retain(param_1);
    ppuStack_188 = &PTR_SUB_110862760;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    plStack_128 = (long *)0x0;
    uStack_130 = 0;
    plStack_120 = (long *)0x0;
    uStack_f6 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_108 = 10;
    uStack_f8 = 0x100;
    ppuStack_110 = &PTR_SUB_110862700;
    uStack_c0 = 0;
    uStack_c8 = 0;
    plStack_b0 = (long *)0x0;
    uStack_b8 = 0;
    plStack_a8 = (long *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    puStack_198 = (undefined8 *)0x0;
    uStack_190 = 0;
    uStack_1a4 = 0;
    puVar4 = &uStack_a0;
    lStack_158 = param_1;
    puStack_d8 = puVar3;
    pppuStack_d0 = &ppuStack_188;
    func_0x0001000e77a0(puVar4,&ppuStack_110,&puStack_1a0,&uStack_1a4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puStack_1a0 != (undefined8 *)0x0) {
      puStack_198 = puStack_1a0;
      __ZdlPv();
    }
    plVar1 = plStack_a8;
    ppuStack_110 = &PTR_SUB_110862700;
    plStack_a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1a0 = &uStack_c8;
    func_0x000100105004(&puStack_1a0);
    plVar1 = plStack_120;
    ppuStack_188 = &PTR_SUB_110862760;
    plStack_120 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_128;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1a0 = &uStack_140;
    func_0x000100105004(&puStack_1a0);
    _objc_release(lStack_158);
    func_0x0001000e76e0(&uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e80eb4; end: 105e80f57;  */

void FUN_105e80eb4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010c0f8500(param_2);
  _objc_release(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 105e80f58; end: 105e80fe3;  */

void FUN_105e80f58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105e8288c(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e80fe4; end: 105e810bb;  */

void FUN_105e80fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_retain(param_1);
    func_0x00010c0f8500(param_2);
    _objc_release(param_1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 105e810bc; end: 105e8117f;  */

void FUN_105e810bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105e80c18(uVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c54a8;
  FUN_105e82818(PTR_PTR_1126c54a8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e81180; end: 105e8127f; -[SCRetroJob initWithCoder:] */

undefined1 * FUN_105e81180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed868;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e81280; end: 105e81373;  */

undefined1 *
FUN_105e81280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126ed868;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_6;
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 105e81374; end: 105e81397; -[SCRetroJob copyWithZone:] */

undefined8 FUN_105e81374(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e81398; end: 105e81433; -[SCRetroJob encodeWithCoder:] */

void FUN_105e81398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e2db98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e2dbb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e2dbd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e2dbf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110e2dc18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e81434; end: 105e814bb; -[SCRetroJob hash] */

undefined8 * FUN_105e81434(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105e81574:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105e81580;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
          if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_105e81580;
          }
          goto LAB_105e81574;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105e81580:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105e814bc; end: 105e8159b; -[SCRetroJob isEqual:] */

long FUN_105e814bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e81574:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e81580;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_105e81580;
          }
          goto LAB_105e81574;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105e81580:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e8159c; end: 105e815d7; -[SCRetroJob .cxx_destruct] */

void FUN_105e8159c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105e815d8; end: 105e81763;  */

void FUN_105e815d8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  _objc_opt_self(PTR_PTR_1126c5490);
  puVar1 = PTR_PTR_1126c5490;
  _objc_alloc_init();
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
  }
  _objc_retain(uVar6);
  func_0x000105e817a0(puVar1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
  }
  _objc_retain(uVar7);
  if (puVar1 != (undefined *)0x0) {
    uVar4 = uVar7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    _objc_retain(puVar1);
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
    }
    *(undefined8 *)(puVar1 + 0x18) = uVar4;
    _objc_retain(puVar1);
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
  }
  _objc_retain(uVar4);
  if (puVar1 != (undefined *)0x0) {
    uVar3 = uVar4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar1 + 0x20) = uVar3;
    _objc_release(uVar5);
    _objc_retain(puVar1);
  }
  if (param_2 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 8);
  }
  if (puVar1 != (undefined *)0x0) {
    puVar1[0x28] = bVar2 & 1;
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e81764; end: 105e817e3;  */

void FUN_105e81764(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126c5478);
    FUN_105e81280();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e817e4; end: 105e8181f; -[SCRetroJobBuilder .cxx_destruct] */

void FUN_105e817e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e81820; end: 105e81a87; -[SCAdTrackPersistenceRequest initWithCoder:] */

undefined1 *
FUN_105e81820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126ed870;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x78) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105e81a88; end: 105e81cef; -[SCAdTrackPersistenceRequest initWithUrl:userAgent:type:overrideHeaders:body:key:cookies:adIdentifier:adType:requestType:adProductType:requestFormat:retroType:serveItemId:adServeTimestamp:adId:] */

undefined8 *
FUN_105e81a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_78 = PTR_PTR_1126ed870;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_13;
    puVar1[0xb] = param_14;
    puVar1[0xc] = param_15;
    puVar1[0xd] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_1;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105e81cf0; end: 105e81d13; -[SCAdTrackPersistenceRequest copyWithZone:] */

undefined8 FUN_105e81cf0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e81d14; end: 105e81e8b; -[SCAdTrackPersistenceRequest encodeWithCoder:] */

void FUN_105e81d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e2dc38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e2dc58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e2dc78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e2dc98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e2dcb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e2dbb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e2dcd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e2dcf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110e2dd18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110e2dd38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110e2dd58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110e2dd78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110e2dd98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110e2ddb8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x78),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e2ddd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110e2ddf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e81e8c; end: 105e81e93; -[SCAdTrackPersistenceRequest url] */

undefined8 FUN_105e81e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e81e94; end: 105e81e9b; -[SCAdTrackPersistenceRequest userAgent] */

undefined8 FUN_105e81e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e81e9c; end: 105e81ea3; -[SCAdTrackPersistenceRequest type] */

undefined8 FUN_105e81e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e81ea4; end: 105e81eab; -[SCAdTrackPersistenceRequest overrideHeaders] */

undefined8 FUN_105e81ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e81eac; end: 105e81eb3; -[SCAdTrackPersistenceRequest body] */

undefined8 FUN_105e81eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e81eb4; end: 105e81ebb; -[SCAdTrackPersistenceRequest key] */

undefined8 FUN_105e81eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105e81ebc; end: 105e81ec3; -[SCAdTrackPersistenceRequest cookies] */

undefined8 FUN_105e81ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e81ec4; end: 105e81ecb; -[SCAdTrackPersistenceRequest adIdentifier] */

undefined8 FUN_105e81ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105e81ecc; end: 105e81ed3; -[SCAdTrackPersistenceRequest adType] */

undefined8 FUN_105e81ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105e81ed4; end: 105e81edb; -[SCAdTrackPersistenceRequest requestType] */

undefined8 FUN_105e81ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105e81edc; end: 105e81ee3; -[SCAdTrackPersistenceRequest adProductType] */

undefined8 FUN_105e81edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105e81ee4; end: 105e81eeb; -[SCAdTrackPersistenceRequest requestFormat] */

undefined8 FUN_105e81ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105e81eec; end: 105e81ef3; -[SCAdTrackPersistenceRequest retroType] */

undefined8 FUN_105e81eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105e81ef4; end: 105e81efb; -[SCAdTrackPersistenceRequest serveItemId] */

undefined8 FUN_105e81ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105e81efc; end: 105e81f03; -[SCAdTrackPersistenceRequest adServeTimestamp] */

undefined8 FUN_105e81efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105e81f04; end: 105e81f0b; -[SCAdTrackPersistenceRequest adId] */

undefined8 FUN_105e81f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105e81f0c; end: 105e81f9b; -[SCAdTrackPersistenceRequest .cxx_destruct] */

void FUN_105e81f0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e81f9c; end: 105e82033; -[SCAdTrackRetriableMetadata initWithKey:networkState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e81f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112738794);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112738794) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112738798) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e82034; end: 105e82057; -[SCAdTrackRetriableMetadata copyWithZone:] */

undefined8 FUN_105e82034(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e82058; end: 105e820d3; -[SCAdTrackRetriableMetadata hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105e82058(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738794);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(uint *)(param_1 + _DAT_112738798);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105e82168;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (*(int *)((long)puVar2 + (long)_DAT_112738798) !=
        *(int *)((long)param_3 + (long)_DAT_112738798))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_105e82168;
    }
    puVar4 = *(undefined8 **)((long)puVar2 + (long)_DAT_112738794);
    if (puVar4 != *(undefined8 **)((long)param_3 + (long)_DAT_112738794)) {
      func_0x00010c071ae0();
      goto LAB_105e82168;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_105e82168:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105e820d4; end: 105e82183; -[SCAdTrackRetriableMetadata isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105e820d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e82168;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(int *)(param_1 + (long)_DAT_112738798) != *(int *)(param_3 + (long)_DAT_112738798))) {
      lVar3 = 0;
      goto LAB_105e82168;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_112738794);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_112738794)) {
      func_0x00010c071ae0();
      goto LAB_105e82168;
    }
  }
  lVar3 = 1;
LAB_105e82168:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e82184; end: 105e82193; -[SCAdTrackRetriableMetadata key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e82184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112738794);
}



/* Entry: 105e82194; end: 105e821a3; -[SCAdTrackRetriableMetadata networkState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105e82194(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112738798);
}



/* Entry: 105e821a4; end: 105e821b7; -[SCAdTrackRetriableMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e821a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112738794,0);
  return;
}



/* Entry: 105e821b8; end: 105e8221b;  */

undefined ** FUN_105e821b8(void)

{
  int iVar1;
  
  if ((bRam000000011381ac00 & 1) == 0) {
    iVar1 = 0x1381ac00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&SUB_105004938,&PTR_PTR_11312e9e8,0x100000000);
      ___cxa_guard_release(0x11381ac00);
    }
  }
  return &PTR_PTR_11312e9e8;
}



/* Entry: 105e8221c; end: 105e822a3;  */

void FUN_105e8221c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e822a4; end: 105e8232f;  */

void FUN_105e822a4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e82330; end: 105e8233b; +[SCAdTrackRetriableMetadata table] */

undefined * FUN_105e82330(void)

{
  return &UNK_10f346bdf;
}



/* Entry: 105e8233c; end: 105e8242b; +[SCAdTrackRetriableMetadata immutableObjectParse:bufferSize:] */

void FUN_105e8233c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126c5488;
  _objc_alloc(PTR_PTR_1126c5488);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    if ((6 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar6)), uVar7 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar7);
      goto LAB_105e823ec;
    }
  }
  uVar4 = 0;
LAB_105e823ec:
  func_0x00010c020c40(puVar3,param_2,puVar8,uVar4);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e8242c; end: 105e8244f; +[SCAdTrackRetriableMetadata objectClassFunctionPointer] */

undefined1  [16] FUN_105e8242c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105e82448;
  auVar1._0_8_ = 0x105e82440;
  return auVar1;
}



/* Entry: 105e82450; end: 105e824f3;  */

undefined1 * FUN_105e82450(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126ed880;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_4;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105e824f4; end: 105e82817;  */

void FUN_105e824f4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar5 < 0) {
      puVar5 = param_1;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf636c0();
        _objc_release(puVar5);
        func_0x0001001b9e08(puVar1,&UNK_10f346bfa);
        puVar5 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_105e82784;
        puVar5 = param_1;
        func_0x00010c086560(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar5 = puVar1;
        _sqlite3_step();
        if ((int)puVar5 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar5 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126c5488);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar5;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar5);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_105e8277c;
          puVar5 = PTR_PTR_1126c54a8;
          _objc_alloc(PTR_PTR_1126c54a8);
          puVar1 = puVar3;
          func_0x00010c086560(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0d8160(puVar3);
          FUN_105e82450(puVar5,puVar2,puVar1,puVar4);
          param_1 = puVar3;
          goto LAB_105e825d0;
        }
      }
    }
    else {
      puVar2 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c5488);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126c54a8;
        _objc_alloc(PTR_PTR_1126c54a8);
        puVar1 = puVar3;
        func_0x00010c086560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0d8160(puVar3);
        FUN_105e82450(puVar5,puVar2,puVar1,puVar4);
        param_1 = puVar3;
LAB_105e825d0:
        _objc_release(puVar1);
        goto LAB_105e82784;
      }
LAB_105e8277c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105e82784:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e82818; end: 105e8288b;  */

void FUN_105e82818(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105e824f4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e8288c; end: 105e82a4f;  */

void FUN_105e8288c(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c54a8;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_105e824f4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126c54a8;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126c54a8;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c0d8160(param_1);
      FUN_105e82450(puVar4,0xffffffffffffffff,puVar2,puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar4 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c0d8160();
    *(int *)(puVar1 + 0x14) = (int)puVar4;
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e82a50; end: 105e82ab3;  */

void FUN_105e82a50(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c5488;
    _objc_alloc(PTR_PTR_1126c5488);
    func_0x00010c020c40();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e82ab4; end: 105e82abf; -[SCAdTrackRetriableMetadataChangeRequest .cxx_destruct] */

void FUN_105e82ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105e82ac0; end: 105e82acb; -[SCAdTrackRetriableMetadataChangeRequest table] */

undefined * FUN_105e82ac0(void)

{
  return &UNK_10f346bdf;
}



/* Entry: 105e82acc; end: 105e82b13; -[SCAdTrackRetriableMetadataChangeRequest createTableWithSQLite:] */

void FUN_105e82acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddd1240,0x82,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105e82b14; end: 105e82e9b; -[SCAdTrackRetriableMetadataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105e82b14(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_105e82a50(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105e82e9c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f346c75);
    if (lVar6 == 0) goto LAB_105e82e38;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105e82e38;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c5488);
    func_0x00010c21c9a0(puVar7);
LAB_105e82e20:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f346c3f);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c5488);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105e82e44;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105e82e44;
    }
    FUN_105e82a50(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105e82e9c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f346cb5);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c5488);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105e82e20;
      }
    }
LAB_105e82e38:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105e82e44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105e82e9c; end: 105e83077;  */

ulong FUN_105e82e9c(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_105e82f9c;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_105e82f9c;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_105e82f5c;
    uVar9 = 0;
  }
  else {
LAB_105e82f5c:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_105e82f9c:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c0d8160(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce354(param_1,6,pcVar5,0);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105e83078; end: 105e8318b;  */

bool FUN_105e83078(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = param_1;
  _objc_retain(param_5);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  dVar1 = dVar1 - param_1;
  if (param_2 < dVar1) {
    func_0x00010c0a92e0(dVar1,param_5);
  }
  _objc_release(param_5);
  return param_2 < dVar1;
}



/* Entry: 105e8318c; end: 105e8332b;  */

ulong FUN_105e8318c(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  
  dVar5 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 <= 0.0) goto LAB_105e832f0;
  uVar4 = 0;
  if (0x16 < param_2) goto LAB_105e832f4;
  uVar3 = param_4;
  if ((1L << (param_2 & 0x3f) & 0x6321e4U) == 0) {
    if (param_2 == 4) {
      uVar2 = param_5;
      func_0x00010bf1f480();
      if ((int)uVar2 == 0) {
LAB_105e832f0:
        uVar4 = 0;
        goto LAB_105e832f4;
      }
      func_0x00010c259000(param_4);
      param_2 = 4;
    }
    else {
      if (param_2 != 9) goto LAB_105e832f4;
      uVar2 = param_5;
      func_0x00010bf1f480();
      if ((int)uVar2 == 0) goto LAB_105e832f0;
      func_0x00010c096ae0(param_4);
      param_2 = 9;
    }
  }
  else {
    uVar2 = param_4;
    func_0x00010bef5c60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf8f180();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      func_0x00010bef5c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1d40();
      FUN_105e83078(param_1,dVar5,param_2,param_3,param_6);
      _objc_release(uVar3);
      uVar4 = param_2;
      goto LAB_105e832f4;
    }
    func_0x00010c23f2c0(param_4);
  }
  func_0x000105e830fc(param_1,param_2,uVar3,param_3,param_6);
  uVar4 = param_2;
LAB_105e832f4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 105e8332c; end: 105e83393; +[SCAdsRetroRequestConfig descriptor] */

void FUN_105e8332c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aa5540,
                        &PTR____CFConstantStringClassReference_110e2de58,
                        &PTR_s_snapchat_ads_request_schema_11312ea58,&PTR_DAT_11312ea70,0xb,0x38,
                        0x1c);
    puRam00000001136c2338 = puVar1;
  }
  return;
}



/* Entry: 105e83394; end: 105e833cf; -[SCAdSdkAutoMeasureEvent initWithEventName:sampleRate:measureType:sliceNames:loggingTypes:] */

void FUN_105e83394(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed888;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithEventName_sampleRate_mea_11252da20);
  return;
}



/* Entry: 105e833d0; end: 105e8340f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityFill] */

void FUN_105e833d0(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83410; end: 105e8344f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityNoFillAd] */

void FUN_105e83410(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83450; end: 105e8348f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityNoFillAdPendingRequest] */

void FUN_105e83450(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83490; end: 105e834cf; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityNoFillAdResolvedError] */

void FUN_105e83490(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e834d0; end: 105e8350f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityNoFillAdResolving] */

void FUN_105e834d0(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83510; end: 105e8354f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityNoFillMediaLoading] */

void FUN_105e83510(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83550; end: 105e8358f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityNoFillMediaLoadError] */

void FUN_105e83550(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83590; end: 105e835cf; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdOpportunityNoFillNotBrandSafe] */

void FUN_105e83590(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e835d0; end: 105e8360f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdRequest2XxLatency] */

void FUN_105e835d0(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83610; end: 105e8364f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdRequest408Latency] */

void FUN_105e83610(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e83650; end: 105e8368f; +[SCAdSdkAutoMeasureEvent SCAutoEventSnapadsSdkAdRequest4XxLatency] */

void FUN_105e83650(void)

{
  _objc_alloc(PTR_PTR_1126c54b0);
  func_0x00010c010d20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



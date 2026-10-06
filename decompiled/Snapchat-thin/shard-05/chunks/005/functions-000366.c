/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103edda14; end: 103edda5b; -[_TtC16SCFanPassSticker18FanPassStickerView intrinsicSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103edda14(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_11302c858);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 103edda5c; end: 103edda63; -[_TtC16SCFanPassSticker18FanPassStickerView type] */

undefined8 FUN_103edda5c(void)

{
  return 6;
}



/* Entry: 103edda64; end: 103eddb4b; -[_TtC16SCFanPassSticker18FanPassStickerView loggingParameters] */

void FUN_103edda64(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar1 = PTR___sSSN_11034da80;
  uStack_98 = 0x65707974;
  uStack_90 = 0xe400000000000000;
  __ss11AnyHashableVyABxcSHRzlufC
            (lVar2 + 0x20,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0x535341505f4e4146;
  *(undefined8 *)(lVar2 + 0x50) = 0xe800000000000000;
  lVar3 = lVar2;
  func_0x000100dfa3f0(lVar2);
  _swift_setDeallocating(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
             PTR___ss11AnyHashableVSHsWP_11034e450);
  _swift_bridgeObjectRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103eddb4c; end: 103eddb5f; -[_TtC16SCFanPassSticker18FanPassStickerView toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eddb4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c860));
  return;
}



/* Entry: 103eddb60; end: 103eddb73; -[_TtC16SCFanPassSticker18FanPassStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eddb60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c868));
  return;
}



/* Entry: 103eddb74; end: 103eddc13;  */

/* WARNING: Possible PIC construction at 0x000103eddbc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103eddbc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eddb74(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + _DAT_11302c808));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_11302c810 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_11302c818 + 8));
  if (*(long *)(unaff_x20 + _DAT_11302c820) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(unaff_x20 + _DAT_11302c820))[1]);
    return;
  }
  return;
}



/* Entry: 103eddc14; end: 103eddc8b; -[_TtC16SCFanPassSticker18FanPassStickerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103eddc6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103eddc70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eddc14(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c808));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302c810 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302c818 + 8));
  if (*(long *)(param_1 + _DAT_11302c820) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11302c820))[1]);
    return;
  }
  return;
}



/* Entry: 103eddc8c; end: 103eddc8f; -[_TtC16SCFanPassSticker18FanPassStickerView copyWithZone:] */

void FUN_103eddc8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103eddc90; end: 103eddcf3;  */

void FUN_103eddc90(void)

{
  _objc_opt_self(&PTR_PTR_112961f00);
  return;
}



/* Entry: 103eddcf4; end: 103eddd1b;  */

void FUN_103eddcf4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103eddcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103eddd1c; end: 103eddd53;  */

void FUN_103eddd1c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103eddd54; end: 103eddd5b;  */

void FUN_103eddd54(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103eddd5c; end: 103eddd5f; -[_TtC16SCFanPassSticker18FanPassStickerView stickerId] */

void FUN_103eddd5c(void)

{
  func_0x000107c5fadc(0x535341505f4e4146,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eddd60; end: 103eddd63; -[_TtC16SCFanPassSticker18FanPassStickerView packId] */

void FUN_103eddd60(void)

{
  func_0x000107c5fadc(0x535341505f4e4146,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eddd64; end: 103eddd6f; -[_TtC16SCFanPassSticker18FanPassStickerView shortLoggingName] */

void FUN_103eddd64(void)

{
  func_0x000107c5fadc(0x535341505f4e4146,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eddd70; end: 103edde0f;  */

void FUN_103eddd70(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103edde10; end: 103edde23;  */

void FUN_103edde10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103edde24; end: 103edde77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edde24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c858);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Entry: 103edde78; end: 103eddeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103edde78(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302c858;
  _swift_beginAccess(unaff_x20 + _DAT_11302c858,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103edf0a4;
  return auVar2;
}



/* Entry: 103eddeb8; end: 103eddec7; -[_TtC17SCStickerBaseView19InfoStickerBaseView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eddeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c860));
  return;
}



/* Entry: 103eddec8; end: 103edded7; -[_TtC17SCStickerBaseView19InfoStickerBaseView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eddec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c868));
  return;
}



/* Entry: 103edded8; end: 103eddee7; -[_TtC17SCStickerBaseView19InfoStickerBaseView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edded8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c870));
  return;
}



/* Entry: 103eddee8; end: 103eddf6b; -[_TtC17SCStickerBaseView19InfoStickerBaseView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103eddee8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302c878;
  _swift_beginAccess(param_1 + _DAT_11302c878,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103eddf6c; end: 103ede007; -[_TtC17SCStickerBaseView19InfoStickerBaseView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eddf6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302c878;
  _swift_beginAccess(param_1 + _DAT_11302c878,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103ede008; end: 103ede047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ede008(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302c878;
  _swift_beginAccess(unaff_x20 + _DAT_11302c878,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103edf0a8;
  return auVar2;
}



/* Entry: 103ede048; end: 103ede06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ede048(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11302c880);
  _swift_beginAccess(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*(code *)0x103edf0b8)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103ede070; end: 103ede0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ede070(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302c880;
  _swift_beginAccess(unaff_x20 + _DAT_11302c880,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103edf0b0;
  return auVar2;
}



/* Entry: 103ede0fc; end: 103ede14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ede0fc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302c888;
  _swift_beginAccess(unaff_x20 + _DAT_11302c888,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 103ede150; end: 103ede1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ede150(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302c888;
  _swift_beginAccess(unaff_x20 + _DAT_11302c888,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103edf0ac;
  return auVar2;
}



/* Entry: 103ede1dc; end: 103ede22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ede1dc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302c890;
  _swift_beginAccess(unaff_x20 + _DAT_11302c890,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 103ede230; end: 103ede26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ede230(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302c890;
  _swift_beginAccess(unaff_x20 + _DAT_11302c890,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103ede270;
  return auVar2;
}



/* Entry: 103ede270; end: 103ede287;  */

void FUN_103ede270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103ede288; end: 103ede2e7;  */

undefined1  [16] FUN_103ede288(long *param_1,code *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_2)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103ede2e8; end: 103ede2fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ede2e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c898);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*(code *)&SUB_10058d43c)(uVar2,uVar3);
  return;
}



/* Entry: 103ede2fc; end: 103ede357;  */

void FUN_103ede2fc(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_4)(uVar2,uVar3);
  return;
}



/* Entry: 103ede358; end: 103ede397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ede358(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302c898;
  _swift_beginAccess(unaff_x20 + _DAT_11302c898,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103edf0b4;
  return auVar2;
}



/* Entry: 103ede398; end: 103ede4bf;  */

void FUN_103ede398(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  func_0x000103ede3d8(param_1,param_2);
  return;
}



/* Entry: 103ede4c0; end: 103ede4df;  */

void FUN_103ede4c0(void)

{
  _objc_opt_self(&PTR_PTR_1129620e8);
  return;
}



/* Entry: 103ede4e0; end: 103ede507; -[_TtC17SCStickerBaseView19InfoStickerBaseView initWithCoder:] */

void FUN_103ede4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000103eded7c();
  return;
}



/* Entry: 103ede508; end: 103ede757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ede508(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_11302c890;
  _swift_beginAccess(unaff_x20 + _DAT_11302c890,auStack_68,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = param_1;
  _objc_retain();
  _objc_release(uVar6);
  func_0x000107c5a050(param_1);
  func_0x000107c3d89c();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 9;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  uVar6 = param_1;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = unaff_x20;
  func_0x000107c4acb0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar3);
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  uVar6 = param_1;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = unaff_x20;
  func_0x000107c5ce8c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar3);
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  uVar6 = param_1;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = unaff_x20;
  func_0x000107c5cbe4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar3);
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3ec1c();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x000107c40280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(unaff_x20);
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  uVar6 = 0;
  func_0x000100847984(0);
  puVar5 = puVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar2,uVar6);
  _swift_release(puVar2);
  func_0x000107c3d048(puVar1);
  _objc_release(puVar5);
  return;
}



/* Entry: 103ede758; end: 103ede78b; -[_TtC17SCStickerBaseView19InfoStickerBaseView imageFuture] */

void FUN_103ede758(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ede78c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ede78c; end: 103ede9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ede78c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  lVar2 = _DAT_11302c888;
  _swift_beginAccess(unaff_x20 + _DAT_11302c888,auStack_78,1,0);
  puVar8 = *(undefined **)(unaff_x20 + lVar2);
  puVar7 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c858);
    _swift_beginAccess(puVar1,auStack_90,0,0);
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c880);
    _swift_beginAccess(puVar1,auStack_a8,0,0);
    pcVar11 = (code *)*puVar1;
    if (pcVar11 == (code *)0x0) {
      uVar12 = 0x112d4f920;
      func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
      FUN_103edee80();
      puVar7 = &UNK_11071ebe0;
      _swift_allocError(&UNK_11071ebe0,uVar12,0,0);
      puVar10 = puVar7;
      func_0x00010488904c();
      _swift_errorRelease(puVar7);
      func_0x00010488b12c();
      _swift_release(puVar10);
    }
    else {
      uVar9 = puVar1[1];
      uVar4 = uVar9;
      _swift_retain(uVar9);
      (*pcVar11)(uVar12,uVar13);
      func_0x000100d71b1c(pcVar11,uVar9);
      func_0x0001000285a8(0x11302c8a0,&UNK_10dca7be0);
      _swift_allocObject();
      lVar5 = 0;
      func_0x00010095c380();
      puVar7 = &UNK_11071eb20;
      _swift_allocObject(&UNK_11071eb20,0x38,7);
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(long *)(puVar7 + 0x18) = lVar5;
      *(undefined8 *)(puVar7 + 0x20) = uVar12;
      *(undefined8 *)(puVar7 + 0x28) = uVar13;
      *(long *)(puVar7 + 0x30) = lVar3;
      pcStack_b8 = FUN_103edee54;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1010ffbc4;
      puStack_c0 = &UNK_11071eb38;
      ppuVar6 = &puStack_d8;
      puStack_b0 = puVar7;
      __Block_copy(ppuVar6);
      puVar7 = puStack_b0;
      _objc_retain();
      _swift_retain(lVar5);
      _swift_release(puVar7);
      func_0x000107c4db80(uVar4);
      __Block_release(ppuVar6);
      puVar10 = *(undefined **)(lVar5 + 0x10);
      puVar7 = puVar10;
      _swift_retain();
      func_0x00010488b12c();
      _swift_release(puVar10);
      _swift_release(lVar5);
      _objc_release(uVar4);
      uVar12 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined **)(unaff_x20 + lVar2) = puVar7;
      _objc_retain(puVar7);
      _objc_release(uVar12);
    }
  }
  _objc_retain(puVar8);
  return puVar7;
}



/* Entry: 103ede9f4; end: 103edeb1f;  */

void FUN_103ede9f4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_58;
  
  lVar1 = param_2;
  if ((param_3 == 0) && (param_2 != 0)) {
    _objc_retain();
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_2);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_allocWithZone();
    lVar3 = param_2;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
    func_0x000107c4635c();
    _objc_release(lVar3);
    func_0x00010006c090(param_2,param_3);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = puVar2;
      FUN_103edeff0(param_1);
      puStack_58 = puVar4;
      func_0x000100b60084(&puStack_58);
      _objc_release(puVar4);
      _objc_release(lVar1);
      _objc_release(puVar2);
      return;
    }
    _objc_release(lVar1);
  }
  FUN_103edee80();
  puVar2 = &UNK_11071ebe0;
  _swift_allocError(&UNK_11071ebe0,lVar1,0,0);
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 103edeb20; end: 103edeb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103edeb20(void)

{
  undefined1 (*pauVar1) [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11302c858);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 103edeb64; end: 103edeba7; -[_TtC17SCStickerBaseView19InfoStickerBaseView previewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103edeb64(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(param_1 + _DAT_11302c858);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  return *pauVar1;
}



/* Entry: 103edeba8; end: 103edebf3; -[_TtC17SCStickerBaseView19InfoStickerBaseView shouldRespondToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103edeba8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302c898;
  _swift_beginAccess(param_1 + _DAT_11302c898,auStack_38,0,0);
  return *(long *)(param_1 + lVar1) != 0;
}



/* Entry: 103edebf4; end: 103edec7f; -[_TtC17SCStickerBaseView19InfoStickerBaseView tap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edebf4(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c898);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    _objc_retain(param_1);
    func_0x000100d71b0c(pcVar2,uVar3);
    (*pcVar2)();
    _objc_release(param_1);
    func_0x000100d71b1c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 103edec80; end: 103edec83;  */

void FUN_103edec80(void)

{
  return;
}



/* Entry: 103edec84; end: 103edec8b; -[_TtC17SCStickerBaseView19InfoStickerBaseView didEndDisplay] */

void FUN_103edec84(void)

{
  return;
}



/* Entry: 103edec8c; end: 103edec8f; -[_TtC17SCStickerBaseView19InfoStickerBaseView willDisplay] */

void FUN_103edec8c(void)

{
  return;
}



/* Entry: 103edec90; end: 103edeceb; -[_TtC17SCStickerBaseView19InfoStickerBaseView initWithFrame:] */

void FUN_103edec90(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCStickerBaseView.InfoStickerBaseView",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103edecbc);
  (*pcVar1)();
}



/* Entry: 103edecec; end: 103edee53; -[_TtC17SCStickerBaseView19InfoStickerBaseView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103eded3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103eded40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edecec(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c860));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c868));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c870));
  if (*(long *)(param_1 + _DAT_11302c880) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11302c880))[1]);
    return;
  }
  return;
}



/* Entry: 103edee54; end: 103edee7f;  */

void FUN_103edee54(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = param_1;
  if ((param_2 == 0) && (param_1 != 0)) {
    _objc_retain(uVar5,*(undefined8 *)(unaff_x20 + 0x28),param_1,0,*(undefined8 *)(unaff_x20 + 0x10)
                 ,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x30));
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_allocWithZone();
    lVar3 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
    func_0x000107c4635c();
    _objc_release(lVar3);
    func_0x00010006c090(param_1,param_2);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = puVar2;
      FUN_103edeff0(uVar5);
      puStack_58 = puVar4;
      func_0x000100b60084(&puStack_58);
      _objc_release(puVar4);
      _objc_release(lVar1);
      _objc_release(puVar2);
      return;
    }
    _objc_release(lVar1);
  }
  FUN_103edee80();
  puVar2 = &UNK_11071ebe0;
  _swift_allocError(&UNK_11071ebe0,lVar1,0,0);
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 103edee80; end: 103edeebf;  */

void FUN_103edee80(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c8a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7cbc;
  _swift_getWitnessTable(&UNK_10dca7cbc,&UNK_11071ebe0);
  puRam000000011302c8a8 = puVar1;
  return;
}



/* Entry: 103edeec0; end: 103edefaf;  */

uint FUN_103edeec0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103edefb0; end: 103edefef;  */

void FUN_103edefb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7c94;
  _swift_getWitnessTable(&UNK_10dca7c94,&UNK_11071ebe0);
  puRam000000011302c8d8 = puVar1;
  return;
}



/* Entry: 103edeff0; end: 103edf0a3;  */

undefined * FUN_103edeff0(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_2;
  func_0x00010bdc1020();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    if (0.0 < param_1) {
      puVar2 = puVar1;
      _CGImageGetWidth();
      if ((double)(long)puVar2 / param_1 <= 1.0) {
        _objc_retain(param_2);
      }
      else {
        func_0x000107c450e0();
        param_2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_allocWithZone(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c45afc((double)(long)puVar2 / param_1);
      }
      _objc_release(puVar1);
      return param_2;
    }
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return param_2;
}



/* Entry: 103edf0a4; end: 103edf0bb;  */

void FUN_103edf0a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103edf0bc; end: 103edf1a7;  */

undefined8 FUN_103edf0bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *unaff_x20;
  uVar1 = 0x112e7b040;
  func_0x0001000285a8(0x112e7b040,&UNK_10da85700);
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar2 = &UNK_11071ece0;
  _swift_allocObject(&UNK_11071ece0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  _objc_retain();
  uVar3 = 0;
  func_0x00010488a220(0,1,FUN_103edf1a8,puVar2);
  _swift_release(puVar2);
  puVar2 = &UNK_11071ed08;
  _swift_allocObject(&UNK_11071ed08,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  _objc_retain(uVar1);
  func_0x000104888fc0(0,1,FUN_103edf1d8,puVar2);
  _swift_release(uVar3);
  _swift_release(puVar2);
  return uVar1;
}



/* Entry: 103edf1a8; end: 103edf1d7;  */

void FUN_103edf1a8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c43b74(*(undefined8 *)(unaff_x20 + 0x18),param_2,*param_1);
  return;
}



/* Entry: 103edf1d8; end: 103edf20b;  */

void FUN_103edf1d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  func_0x000107c43b70(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103edf20c; end: 103edf2d7;  */

undefined8 FUN_103edf20c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000100759d7c(0,*(undefined8 *)(unaff_x20 + 0x50));
  lVar2 = 0;
  func_0x000100759dd0();
  pcStack_40 = FUN_103edf2d8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100b5fea4;
  puStack_48 = &UNK_11071ed20;
  lStack_38 = lVar2;
  __Block_copy(&puStack_60);
  lVar1 = lStack_38;
  _swift_retain(lVar2);
  _swift_release(lVar1);
  func_0x000107c4db80(param_1);
  __Block_release(ppuVar3);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  _swift_retain(uVar4);
  _swift_release(lVar2);
  return uVar4;
}



/* Entry: 103edf2d8; end: 103edf367;  */

void FUN_103edf2d8(long param_1,undefined *param_2)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    _swift_unknownObjectRetain();
    func_0x000100b60084(&lStack_28);
    _swift_unknownObjectRelease(param_1);
    return;
  }
  if (param_2 == (undefined *)0x0) {
    FUN_103edf638();
    param_2 = &UNK_11071ee40;
    _swift_allocError(&UNK_11071ee40,param_1,0,0);
  }
  else {
    _swift_errorRetain(param_2);
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
  return;
}



/* Entry: 103edf368; end: 103edf383;  */

void FUN_103edf368(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103edf384; end: 103edf457;  */

undefined * FUN_103edf384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar2 = &UNK_11071ed58;
  _swift_allocObject(&UNK_11071ed58,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  _objc_retain();
  uVar3 = 0;
  func_0x00010488a220(0,1,FUN_103edf458,puVar2);
  _swift_release(puVar2);
  puVar2 = &UNK_11071ed80;
  _swift_allocObject(&UNK_11071ed80,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  _objc_retain(puVar1);
  func_0x000104888fc0(0,1,FUN_103edf4bc,puVar2);
  _swift_release(uVar3);
  _swift_release(puVar2);
  return puVar1;
}



/* Entry: 103edf458; end: 103edf4bb;  */

void FUN_103edf458(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126b15a8;
  _objc_opt_self();
  func_0x000107c5d1f4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c43b74(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103edf4bc);
  (*pcVar1)();
}



/* Entry: 103edf4bc; end: 103edf4ef;  */

void FUN_103edf4bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  func_0x000107c43b70(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103edf4f0; end: 103edf5cf;  */

undefined8 FUN_103edf4f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  _swift_allocObject();
  lVar2 = 0;
  func_0x00010095c380();
  pcStack_40 = FUN_103edf5d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f22f40;
  puStack_48 = &UNK_11071ed98;
  lStack_38 = lVar2;
  __Block_copy(&puStack_60);
  lVar1 = lStack_38;
  _swift_retain(lVar2);
  _swift_release(lVar1);
  func_0x000107c4db80(param_1);
  __Block_release(ppuVar3);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  _swift_retain(uVar4);
  _swift_release(lVar2);
  return uVar4;
}



/* Entry: 103edf5d0; end: 103edf637;  */

void FUN_103edf5d0(long param_1,undefined *param_2)

{
  if (param_1 != 0) {
    func_0x000100b5ff9c();
    return;
  }
  if (param_2 == (undefined *)0x0) {
    FUN_103edf638();
    param_2 = &UNK_11071ee40;
    _swift_allocError(&UNK_11071ee40,param_1,0,0);
  }
  else {
    _swift_errorRetain(param_2);
  }
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
  return;
}



/* Entry: 103edf638; end: 103edf677;  */

void FUN_103edf638(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7d9c;
  _swift_getWitnessTable(&UNK_10dca7d9c,&UNK_11071ee40);
  puRam000000011302c8e0 = puVar1;
  return;
}



/* Entry: 103edf678; end: 103edf67f;  */

undefined8 FUN_103edf678(void)

{
  return 1;
}



/* Entry: 103edf680; end: 103edf71f;  */

void FUN_103edf680(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103edf720; end: 103edf81f;  */

void FUN_103edf720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103edf820; end: 103edf85f;  */

void FUN_103edf820(void)

{
  undefined *puVar1;
  
  if (puRam000000011302c8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca7d74;
  _swift_getWitnessTable(&UNK_10dca7d74,&UNK_11071ee40);
  puRam000000011302c8e8 = puVar1;
  return;
}



/* Entry: 103edf860; end: 103edf867;  */

void FUN_103edf860(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103edf868; end: 103edf887; +[SCItemInstanceStickerUtils altitudeStickerItemInstanceWithAltitude:measurementUnit:type:] */

void FUN_103edf868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_103ee06f8(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103edf888; end: 103edf89f; +[SCItemInstanceStickerUtils batteryStickerItemInstanceForBatteryLevel:] */

void FUN_103edf888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000103ee084c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103edf8a0; end: 103edf8bb; +[SCItemInstanceStickerUtils dateTimeStickerItemInstanceForTime:type:] */

void FUN_103edf8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_103ee0980(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103edf8bc; end: 103edf90b; +[SCItemInstanceStickerUtils pollStickerItemInstanceWithPollInfo:isDynamic:] */

void FUN_103edf8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_103ee0b4c(param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edf90c; end: 103edf90f;  */

undefined *
FUN_103edf90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  func_0x000107c553a0(puVar3);
  func_0x000107c545cc(puVar2);
  puVar5 = PTR_PTR_1126dc308;
  _objc_allocWithZone(PTR_PTR_1126dc308);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uVar9 = param_1;
  func_0x000107c5a42c(puVar5);
  uVar8 = (uint)uVar9;
  _objc_release(param_1);
  FUN_103ee34e0(param_3,param_4);
  if ((uVar8 & 0xff) == 1) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126afad0;
    _objc_allocWithZone(PTR_PTR_1126afad0);
    func_0x000107c453e4();
    func_0x000107c55138();
    func_0x000107c5616c(puVar10);
  }
  func_0x000107c5a344(puVar5);
  _objc_release(puVar10);
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    func_0x000107c54230(puVar5);
    _objc_release(param_5);
  }
  func_0x000107c5a0f8(puVar5);
  puVar10 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar6 = puVar10;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c56610(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar7);
      return puVar10;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0eac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee0ea8);
  (*pcVar1)();
}



/* Entry: 103edf910; end: 103edf9bb; +[SCItemInstanceStickerUtils mentionStickerItemInstanceWithUsername:userId:displayName:type:] */

void FUN_103edf910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_103ee0c94(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edf9bc; end: 103edf9bf;  */

undefined * FUN_103edf9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  func_0x000107c553a0(puVar3);
  func_0x000107c545cc(puVar2);
  puVar5 = PTR_PTR_1126cf228;
  _objc_allocWithZone(PTR_PTR_1126cf228);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c57a94(puVar5);
  _objc_release(param_1);
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    func_0x000107c5273c(puVar5);
    _objc_release(param_3);
  }
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c57a90(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar8);
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee1038);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee1034);
  (*pcVar1)();
}



/* Entry: 103edf9c0; end: 103edf9cb; +[SCItemInstanceStickerUtils questionStickerItemInstanceWithQuestionText:answerText:] */

void FUN_103edf9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  FUN_103ee0eac();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edf9cc; end: 103edfbb7;  */

undefined * FUN_103edf9cc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103edfbb8);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_103ee3380(0,param_3,param_2);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        _objc_retain();
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        FUN_103ee053c(uVar8,param_1,param_2,param_3);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_103ee3380(0,param_3,param_2);
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 103edfbb8; end: 103edfc9b; +[SCItemInstanceStickerUtils weatherStickerItemInstanceWithCelsius:locationName:hourlyForecast:dailyForecast:type:measurementSystem:] */

void FUN_103edfbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar1 = 0;
  FUN_103ee3380(0,0x11302c918,&PTR_PTR_1126bab60);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar1);
  uVar1 = 0;
  FUN_103ee3380(0,0x11302c920,&PTR_PTR_1126bab68);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar1);
  FUN_103ee1038(param_1,param_4,param_3,param_5,param_6,param_7,param_8);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 103edfc9c; end: 103edfc9f;  */

undefined *
FUN_103edfc9c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,ulong param_10,
             long param_11)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  func_0x000107c553a0(puVar3);
  func_0x000107c545cc(puVar2);
  puVar5 = PTR_PTR_1126ba9f0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  uVar14 = 0;
  if (param_5 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
    uVar14 = param_4;
  }
  func_0x000107c59c6c(puVar5);
  _objc_release(uVar14);
  uVar14 = 0;
  if (param_7 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
    uVar14 = param_6;
  }
  func_0x000107c55f9c(puVar5);
  _objc_release(uVar14);
  func_0x000107c55540(puVar5);
  func_0x000107c5a0f8(puVar5);
  if (param_11 == 0) {
    param_10 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_10,param_11);
  }
  func_0x000107c57ae0(puVar5);
  _objc_release();
  _CGSizeEqualToSize(param_1,param_2,0,0);
  if ((param_10 & 1) == 0) {
    puVar12 = PTR_PTR_1126ba9f8;
    _objc_allocWithZone(PTR_PTR_1126ba9f8);
    func_0x000107c453e4();
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee1794);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee1798);
      (*pcVar1)();
    }
    if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee179c);
      (*pcVar1)();
    }
    func_0x000107c5a724();
    if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee17a0);
      (*pcVar1)();
    }
    if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee17a4);
      (*pcVar1)();
    }
    if (4294967296.0 <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee17a8);
      (*pcVar1)();
    }
    func_0x000107c550b8(puVar12);
    func_0x000107c552ac(puVar5);
    _objc_release(puVar12);
  }
  if (param_3 == 0) {
    uStack_c8 = 0;
    puStack_c0 = (undefined *)0x0;
    uStack_d0 = 0;
    puVar12 = (undefined *)0x0;
    uVar14 = 0;
    puVar13 = (undefined *)0x0;
  }
  else {
    puStack_c0 = &UNK_11071f0d0;
    _swift_allocObject(&UNK_11071f0d0,0x18,7);
    *(undefined **)(puStack_c0 + 0x10) = puVar5;
    puVar12 = &UNK_11071f0f8;
    _swift_allocObject(&UNK_11071f0f8,0x20,7);
    uStack_c8 = 0x103ee34d4;
    *(undefined8 *)(puVar12 + 0x10) = 0x103ee34d4;
    *(undefined **)(puVar12 + 0x18) = puStack_c0;
    puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x103ee34c8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de6bdc;
    puStack_88 = &UNK_11071f110;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar12;
    __Block_copy(ppuVar6);
    puVar12 = puStack_78;
    _objc_retain(param_3);
    puVar7 = puVar5;
    _objc_retain();
    _swift_release(puVar12);
    puVar12 = &UNK_11071f148;
    _swift_allocObject(&UNK_11071f148,0x18,7);
    *(undefined **)(puVar12 + 0x10) = puVar7;
    puVar13 = &UNK_11071f170;
    _swift_allocObject(&UNK_11071f170,0x20,7);
    uStack_d0 = 0x103ee34d8;
    *(undefined8 *)(puVar13 + 0x10) = 0x103ee34d8;
    *(undefined **)(puVar13 + 0x18) = puVar12;
    uStack_80 = 0x103ee34cc;
    puStack_a0 = puVar11;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de6bdc;
    puStack_88 = &UNK_11071f188;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar13;
    __Block_copy(ppuVar8);
    puVar13 = puStack_78;
    _objc_retain();
    _swift_release(puVar13);
    puVar13 = &UNK_11071f1c0;
    _swift_allocObject(&UNK_11071f1c0,0x18,7);
    *(undefined **)(puVar13 + 0x10) = puVar7;
    puVar9 = &UNK_11071f1e8;
    _swift_allocObject(&UNK_11071f1e8,0x20,7);
    uVar14 = 0x103ee34dc;
    *(undefined8 *)(puVar9 + 0x10) = 0x103ee34dc;
    *(undefined **)(puVar9 + 0x18) = puVar13;
    uStack_80 = 0x103ee34d0;
    puStack_a0 = puVar11;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100de6bdc;
    puStack_88 = &UNK_11071f200;
    ppuVar10 = &puStack_a0;
    puStack_78 = puVar9;
    __Block_copy(ppuVar10);
    puVar9 = puStack_78;
    _objc_retain(puVar7);
    _swift_release(puVar9);
    func_0x000107c4c68c(param_3);
    __Block_release(ppuVar10);
    __Block_release(ppuVar8);
    __Block_release(ppuVar6);
    _objc_release(param_3);
  }
  puVar9 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar11 = puVar9;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 != (undefined *)0x0) {
    puVar7 = puVar11;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c54e48(puVar7);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar7);
      func_0x0001010398f0(uStack_c8,puStack_c0);
      func_0x0001010398f0(uStack_d0,puVar12);
      func_0x0001010398f0(uVar14,puVar13);
      return puVar9;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee17b0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee17ac);
  (*pcVar1)();
}



/* Entry: 103edfca0; end: 103edfdbb; +[SCItemInstanceStickerUtils genericImageStickerItemInstanceWithImageStickerSource:text:imageSize:actionLinkUrl:isAnimated:type:quotedUserId:] */

void FUN_103edfca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
    uVar2 = param_4;
  }
  if (param_7 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    uVar1 = param_4;
  }
  if (param_10 == 0) {
    param_4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_10);
  }
  _objc_retain(param_5);
  uVar3 = param_5;
  func_0x000103ee12b4(param_1,param_2);
  _objc_release(param_5);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103edfdbc; end: 103edfe1b; +[SCItemInstanceStickerUtils snapKitStickerItemInstanceWithSticker:temporaryFileWriter:] */

void FUN_103edfdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000103ee17b0(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103edfe1c; end: 103edfecb; +[SCItemInstanceStickerUtils attachmentStickerItemInstanceFromUrl:title:shortenedURL:] */

void FUN_103edfe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar2 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    uVar1 = uVar2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_103ee1f14(param_3,param_2,param_4,uVar1,param_5,uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edfecc; end: 103edfed7; +[SCItemInstanceStickerUtils discoverDeeplinkStickerItemInstanceFromDeeplinkUrl:title:] */

void FUN_103edfecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  FUN_103ee20ac();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edfed8; end: 103edff53;  */

void FUN_103edfed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  (*param_5)();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edff54; end: 103edff57;  */

undefined * FUN_103edff54(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126adaf0;
  _objc_allocWithZone(PTR_PTR_1126adaf0);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c53f64(puVar5);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee2380);
    (*pcVar1)();
  }
  puVar8 = puVar7;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c548ac(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar8);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee2384);
  (*pcVar1)();
}



/* Entry: 103edff58; end: 103edff67; +[SCItemInstanceStickerUtils fanPassStickerItemInstanceFromDeeplinkUrl:] */

void FUN_103edff58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*(code *)0x103ee2230)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edff68; end: 103ee0003; +[SCItemInstanceStickerUtils shareYoursStickerItemInstanceWithShareYoursId:promptText:participantUserIds:] */

void FUN_103edff68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_5,PTR___sSSN_11034da80);
  FUN_103ee2384(param_3,param_2,param_4,uVar1,param_5);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ee0004; end: 103ee0007;  */

undefined * FUN_103ee0004(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126ba8f8;
  _objc_allocWithZone(PTR_PTR_1126ba8f8);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar3 = PTR_PTR_1126b37c0;
  _objc_allocWithZone(PTR_PTR_1126b37c0);
  func_0x000107c453e4();
  func_0x000107c553a0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_allocWithZone(PTR_PTR_1126b0cb8);
  func_0x000107c453e4();
  func_0x000107c545cc();
  puVar5 = PTR_PTR_1126cf230;
  _objc_allocWithZone(PTR_PTR_1126cf230);
  func_0x000107c453e4();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x000107c57988(puVar5);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b0cc0;
  _objc_allocWithZone();
  func_0x000107c453e4();
  func_0x000107c55900();
  puVar7 = puVar6;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee286c);
    (*pcVar1)();
  }
  puVar8 = puVar7;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c59410(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar8);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee2870);
  (*pcVar1)();
}



/* Entry: 103ee0008; end: 103ee0013; +[SCItemInstanceStickerUtils snapMeStickerItemInstanceWithPrompt:] */

void FUN_103ee0008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_103ee271c();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ee0014; end: 103ee004f;  */

void FUN_103ee0014(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  (*param_4)();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ee0050; end: 103ee0147; +[SCItemInstanceStickerUtils snapcodeStickerItemInstanceWithUserId:username:avatarId:displayName:withUserTag:] */

void FUN_103ee0050(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar3 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    uVar2 = uVar3;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar1 = uVar3;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  FUN_103ee2870(param_3,param_2,param_4,uVar2,param_5,uVar1,param_6,uVar3,param_7);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ee0148; end: 103ee01c7; +[SCItemInstanceStickerUtils venueStickerItemInstanceWithVenueId:name:type:] */

void FUN_103ee0148(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  func_0x000103ee2aac();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103ee01c8; end: 103ee0267; +[SCItemInstanceStickerUtils storyInviteStickerItemInstanceWithInviteId:storyName:storyId:type:] */

void FUN_103ee01c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  func_0x000103ee2c88(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



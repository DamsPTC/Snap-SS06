/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027a584c; end: 1027a5857; -[SCMemoriesFeaturedStoryAdapter setSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a584c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebeb58);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a5858; end: 1027a58b3; -[SCMemoriesFeaturedStoryAdapter items] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5858(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ebeb60);
  func_0x000107c61434(uVar3);
  uVar1 = 0x112ebebc8;
  func_0x0001000285a8(0x112ebebc8,&UNK_10dadb380);
  uVar2 = uVar3;
  func_0x000107c5fc48(uVar3,uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a58b4; end: 1027a5907; -[SCMemoriesFeaturedStoryAdapter setItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a58b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebebc8;
  func_0x0001000285a8(0x112ebebc8,&UNK_10dadb380);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebeb60);
  *(undefined8 *)(param_1 + _DAT_112ebeb60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1027a5908; end: 1027a5913; -[SCMemoriesFeaturedStoryAdapter thumbnailUri] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebeb68);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ebeb68))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a5914; end: 1027a595b;  */

void FUN_1027a5914(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a595c; end: 1027a5967; -[SCMemoriesFeaturedStoryAdapter setThumbnailUri:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a595c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebeb68);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a5968; end: 1027a59a3;  */

void FUN_1027a5968(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + *param_4);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a59a4; end: 1027a59ab; -[SCMemoriesFeaturedStoryAdapter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1027a59a4(void)

{
  return 0;
}



/* Entry: 1027a59ac; end: 1027a59b7; -[SCMemoriesFeaturedStoryAdapter pushToValdiMarshaller:] */

undefined8 FUN_1027a59ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df030;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af97690();
  func_0x00010af976a0();
  return param_3;
}



/* Entry: 1027a59b8; end: 1027a5a17; -[SCMemoriesFeaturedStoryAdapter init] */

void FUN_1027a59b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerFeaturedStoryAdapter.MemoriesFeaturedStoryAdapter",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a59e4);
  (*pcVar1)();
}



/* Entry: 1027a5a18; end: 1027a5a8f; -[SCMemoriesFeaturedStoryAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027a5a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027a5a60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a5a3c) */
/* WARNING: Removing unreachable block (ram,0x0001027a5a64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebeb48 + 8))
  ;
  return;
}



/* Entry: 1027a5a90; end: 1027a5aff;  */

void FUN_1027a5a90(void)

{
  func_0x000107c61168(&PTR_PTR_1128613e8);
  return;
}



/* Entry: 1027a5b00; end: 1027a5b07;  */

void FUN_1027a5b00(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1027a5b08; end: 1027a5c7b;  */

void FUN_1027a5b08(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1027a5c7c; end: 1027a5ca3;  */

void FUN_1027a5c7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1027a5ca4; end: 1027a5d0f;  */

void FUN_1027a5ca4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112ebebb8;
  FUN_1027a5ee8(0x112ebebb8,&UNK_10dadb26c);
  uVar2 = 0x112ebebc0;
  FUN_1027a5ee8(0x112ebebc0,&UNK_10dadb214);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1027a5d10; end: 1027a5d57;  */

void FUN_1027a5d10(void)

{
  FUN_1027a5ee8(0x112ebeba0,&UNK_10dadb1dc);
  return;
}



/* Entry: 1027a5d58; end: 1027a5dcf;  */

undefined8 FUN_1027a5d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 1027a5dd0; end: 1027a5ec3;  */

undefined1 * FUN_1027a5dd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1027a5ec4; end: 1027a5ee7;  */

void FUN_1027a5ec4(void)

{
  FUN_1027a5ee8(0x112ebebb0,&UNK_10dadb244);
  return;
}



/* Entry: 1027a5ee8; end: 1027a5f27;  */

void FUN_1027a5ee8(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001027a5ab0(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1027a5f28; end: 1027a5f33; -[SCMemoriesFeaturedStoryItemAdapter id2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5f28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebebd0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ebebd0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a5f34; end: 1027a5f3f; -[SCMemoriesFeaturedStoryItemAdapter setId2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebebd0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a5f40; end: 1027a5f4f; -[SCMemoriesFeaturedStoryItemAdapter source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebebd8));
  return;
}



/* Entry: 1027a5f50; end: 1027a5f83; -[SCMemoriesFeaturedStoryItemAdapter setSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebebd8);
  *(undefined8 *)(param_1 + _DAT_112ebebd8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1027a5f84; end: 1027a5fdf; -[SCMemoriesFeaturedStoryItemAdapter snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5f84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ebebe0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ebebe0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a5fe0; end: 1027a602b; -[SCMemoriesFeaturedStoryItemAdapter setSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a5fe0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ebebe0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1027a602c; end: 1027a6037; -[SCMemoriesFeaturedStoryItemAdapter thumbnailUri] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a602c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebebe8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ebebe8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a6038; end: 1027a607f;  */

void FUN_1027a6038(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1027a6080; end: 1027a608b; -[SCMemoriesFeaturedStoryItemAdapter setThumbnailUri:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a6080(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebebe8);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a608c; end: 1027a60c7;  */

void FUN_1027a608c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + *param_4);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1027a60c8; end: 1027a60cf; -[SCMemoriesFeaturedStoryItemAdapter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1027a60c8(void)

{
  return 0;
}



/* Entry: 1027a60d0; end: 1027a60db; -[SCMemoriesFeaturedStoryItemAdapter pushToValdiMarshaller:] */

undefined8 FUN_1027a60d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df038;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af97690();
  func_0x00010af976a0();
  return param_3;
}



/* Entry: 1027a60dc; end: 1027a613b; -[SCMemoriesFeaturedStoryItemAdapter init] */

void FUN_1027a60dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerFeaturedStoryAdapter.MemoriesFeaturedStoryItemAdapter",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a6108);
  (*pcVar1)();
}



/* Entry: 1027a613c; end: 1027a619f; -[SCMemoriesFeaturedStoryItemAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027a615c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027a6180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a6160) */
/* WARNING: Removing unreachable block (ram,0x0001027a6184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a613c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebebd0 + 8))
  ;
  return;
}



/* Entry: 1027a61a0; end: 1027a61bf;  */

void FUN_1027a61a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128614c8);
  return;
}



/* Entry: 1027a61c0; end: 1027a62bf;  */

void FUN_1027a61c0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  func_0x0001027a6200(param_1,param_2);
  return;
}



/* Entry: 1027a62c0; end: 1027a637f; -[SCMemoriesPickerFeaturedStoryProviderAdapter initWithHighlightContentDataSource:mergedDataSource:] */

void FUN_1027a62c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x0001027a6200(param_3,param_4);
  return;
}



/* Entry: 1027a6380; end: 1027a6407; -[SCMemoriesPickerFeaturedStoryProviderAdapter dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a6380(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112ebec20);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027a6408; end: 1027a643f; -[SCMemoriesPickerFeaturedStoryProviderAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027a6424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a6428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a6408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebec18));
  return;
}



/* Entry: 1027a6440; end: 1027a65b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027a6440(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ebec18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c42538();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  else {
    puVar3 = puVar2;
    func_0x000107c4daa0();
    func_0x000107c61180();
    puVar6 = &UNK_11054bd58;
    func_0x000107c613fc(&UNK_11054bd58,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar1;
    puVar4 = &UNK_11054bd80;
    func_0x000107c613fc(&UNK_11054bd80,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1027a6818;
    *(undefined **)(puVar4 + 0x18) = puVar6;
    pcStack_40 = FUN_1027a68e8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_10117fbac;
    puStack_48 = &UNK_11054bd98;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    puVar4 = puVar3;
    func_0x000107c4c280(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar6 = puVar4;
    func_0x000107c5cb24(puVar4);
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return puVar6;
}



/* Entry: 1027a65b8; end: 1027a6817;  */

void FUN_1027a65b8(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  FUN_1027a7808(param_2,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001027a7850(auStack_80,0x112d387f8,&UNK_10d902650);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = 0x112d63630;
    func_0x0001000285a8(0x112d63630,&UNK_10d929158);
    ppuVar3 = &puStack_88;
    func_0x000107c6147c(ppuVar3,auStack_80,PTR___sypN_11034f1a8 + 8,uVar9,6);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)ppuVar3 & 1) != 0) {
      puVar8 = puStack_88;
    }
  }
  puVar13 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar11 = *(undefined **)(puVar13 + 0x10);
  }
  else {
    puVar11 = puVar13;
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar11 = puVar8;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = (undefined *)0x0;
  while( true ) {
    if (puVar11 == puVar6) {
      func_0x000107c6142c(puVar8);
      uVar9 = 0x112ebec50;
      func_0x0001000285a8(0x112ebec50,&UNK_10dadb360);
      puVar8 = puVar7;
      func_0x000107c5fc48(puVar7,uVar9);
      func_0x000107c6142c(puVar7);
      uVar9 = 0;
      func_0x0001027a7890(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      param_1[3] = uVar9;
      *param_1 = puVar8;
      return;
    }
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar13 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6804);
        (*pcVar2)();
      }
      puVar4 = *(undefined **)(puVar8 + (long)puVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar4 = puVar6;
      FUN_1027a6fdc(puVar6,puVar8,&PTR_PTR_1126bf970,0x112d63640);
    }
    if (SCARRY8((long)puVar6,1)) break;
    puVar12 = puVar6 + 1;
    puVar5 = puVar4;
    FUN_1027a7198();
    func_0x000107c61170(puVar4);
    puVar6 = puVar6 + 1;
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar4 = puVar7;
          }
          func_0x000107c60480(puVar4);
        }
        puVar6 = (undefined *)0x0;
        FUN_1027a6a20(0,puVar4 + 1,1,puVar7);
      }
      uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar10 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_1027a6a20(puVar7,uVar1 + 1,1,puVar6);
        uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar5;
      puVar6 = puVar12;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6800);
  (*pcVar2)();
}



/* Entry: 1027a6818; end: 1027a681f;  */

void FUN_1027a6818(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  FUN_1027a7808(param_2,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001027a7850(auStack_80,0x112d387f8,&UNK_10d902650);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = 0x112d63630;
    func_0x0001000285a8(0x112d63630,&UNK_10d929158);
    ppuVar3 = &puStack_88;
    func_0x000107c6147c(ppuVar3,auStack_80,PTR___sypN_11034f1a8 + 8,uVar9,6);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)ppuVar3 & 1) != 0) {
      puVar8 = puStack_88;
    }
  }
  puVar13 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar11 = *(undefined **)(puVar13 + 0x10);
  }
  else {
    puVar11 = puVar13;
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar11 = puVar8;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = (undefined *)0x0;
  while( true ) {
    if (puVar11 == puVar6) {
      func_0x000107c6142c(puVar8);
      uVar9 = 0x112ebec50;
      func_0x0001000285a8(0x112ebec50,&UNK_10dadb360);
      puVar8 = puVar7;
      func_0x000107c5fc48(puVar7,uVar9);
      func_0x000107c6142c(puVar7);
      uVar9 = 0;
      func_0x0001027a7890(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      param_1[3] = uVar9;
      *param_1 = puVar8;
      return;
    }
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar13 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6804);
        (*pcVar2)();
      }
      puVar4 = *(undefined **)(puVar8 + (long)puVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar4 = puVar6;
      FUN_1027a6fdc(puVar6,puVar8,&PTR_PTR_1126bf970,0x112d63640);
    }
    if (SCARRY8((long)puVar6,1)) break;
    puVar12 = puVar6 + 1;
    puVar5 = puVar4;
    FUN_1027a7198();
    func_0x000107c61170(puVar4);
    puVar6 = puVar6 + 1;
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar4 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar4 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar4 = puVar7;
          }
          func_0x000107c60480(puVar4);
        }
        puVar6 = (undefined *)0x0;
        FUN_1027a6a20(0,puVar4 + 1,1,puVar7);
      }
      uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar10 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_1027a6a20(puVar7,uVar1 + 1,1,puVar6);
        uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar5;
      puVar6 = puVar12;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6800);
  (*pcVar2)();
}



/* Entry: 1027a6820; end: 1027a68e7;  */

void FUN_1027a6820(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  
  uVar1 = 0;
  func_0x0001027a7890(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = 0x112d387f8;
  auStack_70[0] = param_2;
  uStack_58 = uVar1;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  param_1[3] = uVar2;
  puVar3 = &UNK_11054bdd0;
  func_0x000107c613fc(&UNK_11054bdd0,0x30,7);
  *param_1 = puVar3;
  func_0x000107c61174(param_2);
  (*param_3)(puVar3 + 0x10,auStack_70);
  func_0x0001027a7850(auStack_70,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 1027a68e8; end: 1027a690b;  */

void FUN_1027a68e8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = 0;
  func_0x0001027a7890(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = 0x112d387f8;
  auStack_70[0] = param_2;
  uStack_58 = uVar2;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  param_1[3] = uVar3;
  puVar4 = &UNK_11054bdd0;
  func_0x000107c613fc(&UNK_11054bdd0,0x30,7);
  *param_1 = puVar4;
  func_0x000107c61174(param_2);
  (*pcVar1)(puVar4 + 0x10,auStack_70);
  func_0x0001027a7850(auStack_70,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 1027a690c; end: 1027a693f; -[SCMemoriesPickerFeaturedStoryProviderAdapter observeFeaturedStories] */

void FUN_1027a690c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027a6440();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027a6940; end: 1027a69ab; -[SCMemoriesPickerFeaturedStoryProviderAdapter dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_1027a6940(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong in_x4;
  
  if (in_x4 != 0) {
    uVar2 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    func_0x000107c5fc54(in_x4,uVar2);
    if (in_x4 >> 0x3e != 0) {
      uVar1 = in_x4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < in_x4) {
        uVar1 = in_x4;
      }
      func_0x000107c60480(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1027a69ac; end: 1027a69f7; -[SCMemoriesPickerFeaturedStoryProviderAdapter init] */

void FUN_1027a69ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPickerFeaturedStoryAdapter.MemoriesPickerFeaturedStoryProviderAdapter"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a69d8);
  (*pcVar1)();
}



/* Entry: 1027a69f8; end: 1027a6a1f;  */

void FUN_1027a69f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebec58 == (undefined *)0x0 || ((ulong)puRam0000000112ebec58 & 1) != 0) {
    puVar1 = &UNK_10e925858;
    func_0x000107c61518(&UNK_10e925858,0x1d,0,0);
    puRam0000000112ebec58 = puVar1;
  }
  return;
}



/* Entry: 1027a6a20; end: 1027a6b47;  */

ulong FUN_1027a6a20(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a6b48);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1027a6b48(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a6b44);
      (*pcVar1)();
    }
    FUN_1027a6bc8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1027a6b48; end: 1027a6bc7;  */

undefined * FUN_1027a6b48(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1027a69f8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1027a6bc8; end: 1027a6ceb;  */

long FUN_1027a6bc8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1027a6ce8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1027a6cec);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ebec50;
        func_0x0001000285a8(0x112ebec50,&UNK_10dadb360);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ebec50;
      func_0x0001000285a8(0x112ebec50,&UNK_10dadb360);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1027a6ce4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1027a6cec; end: 1027a6d07;  */

void FUN_1027a6cec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1027a6d08();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1027a6d08; end: 1027a6e37;  */

undefined * FUN_1027a6d08(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6e38);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x0001027a6a0c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112ebebc8;
    func_0x0001000285a8(0x112ebebc8,&UNK_10dadb380);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1027a6e38; end: 1027a6fdb;  */

ulong FUN_1027a6e38(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6f10);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6f14);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000014,0x800000010f0bc270);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a6fdc);
  (*pcVar2)();
}



/* Entry: 1027a6fdc; end: 1027a7197;  */

ulong FUN_1027a6fdc(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a70c0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a70c4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001027a7890(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a7198);
  (*pcVar2)();
}



/* Entry: 1027a7198; end: 1027a7807;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1027a7198(undefined *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  lVar19 = 0x112d36580;
  puVar18 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar16 = param_1;
  func_0x000107c4fd30();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
    return (long *)0x0;
  }
  puVar15 = puVar16;
  func_0x000107c40440();
  func_0x000107c61180();
  puVar6 = puVar15;
  func_0x000107c5cab0();
  func_0x000107c61180();
  func_0x000107c615e8(puVar15);
  if (puVar6 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    puVar18 = (undefined *)0xe000000000000000;
  }
  else {
    puVar15 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
  }
  puVar20 = puVar16;
  func_0x000107c5b538();
  func_0x000107c61180();
  puVar6 = (undefined *)0x0;
  func_0x0001027a7890(0,0x112d63638,&PTR_PTR_1126af4d0);
  puVar7 = puVar20;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar20);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar20 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar20 = puVar7;
    }
    func_0x000107c60480();
  }
  puStack_100 = puVar18;
  puStack_f8 = puVar15;
  puStack_f0 = puVar16;
  if (puVar20 == (undefined *)0x0) {
    func_0x000107c6142c(puVar7);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1027a6cec(0,(ulong)puVar20 & ((long)puVar20 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1027a77e8);
      (*pcVar5)();
    }
    puVar16 = (undefined *)0x0;
    uStack_c0 = (ulong)puVar7 & 0xc000000000000001;
    uStack_e8 = (ulong)puVar7 & 0xffffffffffffff8;
    puStack_e0 = PTR_PTR_1133ba5d0;
    puStack_108 = param_1;
    puStack_d8 = puVar20;
    puStack_d0 = puVar7;
    puStack_c8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    do {
      puVar4 = puStack_c8;
      puVar15 = puStack_70;
      puVar18 = puStack_d0;
      if (uStack_c0 == 0) {
        if (*(long *)(uStack_e8 + 0x10) <= (long)puVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1027a77cc);
          (*pcVar5)();
        }
        puVar6 = *(undefined **)(puStack_d0 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar16;
        FUN_1027a6fdc(puVar16,puStack_d0,&PTR_PTR_1126af4d0,0x112d63638);
      }
      puVar20 = puVar6;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1027a7804);
        (*pcVar5)();
      }
      puVar7 = puVar20;
      func_0x000107c5faec();
      puStack_98 = puVar18;
      func_0x000107c61170(puVar20);
      puVar20 = puVar6;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (puVar20 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar20;
        func_0x000107c5faec();
        puStack_a0 = puVar18;
        func_0x000107c61170(puVar20);
      }
      puVar20 = puVar6;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1027a7808);
        (*pcVar5)();
      }
      puVar8 = puVar20;
      func_0x000107c5faec();
      func_0x000107c61170(puVar20);
      func_0x000107c5fadc(puVar8,puVar18);
      puVar20 = puVar8;
      func_0x000106d7a74c(0x4065000000000000,0x406b000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puStack_b8 = puVar13;
      puStack_b0 = puVar7;
      puStack_a8 = puVar15;
      if (puVar20 != (undefined *)0x0) {
        func_0x000107c5edb4(lVar19,puVar20);
        func_0x000107c61170(puVar20);
      }
      lVar9 = 0;
      func_0x000107c5ede0();
      lVar17 = *(long *)(lVar9 + -8);
      (**(code **)(lVar17 + 0x38))(lVar19,puVar20 == (undefined *)0x0,1,lVar9);
      func_0x0001027a7808(lVar19,puVar4,0x112d36580,&UNK_10d9016d0);
      uVar12 = 1;
      puVar14 = puVar4;
      (**(code **)(lVar17 + 0x30))(puVar4,1,lVar9);
      if ((int)puVar14 == 1) {
        func_0x0001027a7850(puVar4,0x112d36580,&UNK_10d9016d0);
        puVar14 = (undefined1 *)0x0;
        uVar12 = 0xe000000000000000;
      }
      else {
        func_0x000107c5ed70();
        (**(code **)(lVar17 + 8))(puVar4,lVar9);
      }
      func_0x0001027a7850(lVar19,0x112d36580,&UNK_10d9016d0);
      func_0x000107c6142c(puVar18);
      lVar17 = 0;
      FUN_1027a61a0();
      lVar9 = lVar17;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar9 + _DAT_112ebebe0);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined8 *)(lVar9 + _DAT_112ebebd0);
      *puVar2 = puStack_b0;
      puVar2[1] = puStack_98;
      *(undefined **)(lVar9 + _DAT_112ebebd8) = puStack_e0;
      *puVar1 = puStack_b8;
      puVar1[1] = puStack_a0;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112ebebe8);
      *puVar1 = puVar14;
      puVar1[1] = uVar12;
      puVar18 = PTR_s_init_1125d9248;
      lStack_80 = lVar9;
      lStack_78 = lVar17;
      func_0x000107c61174(puStack_e0);
      plVar10 = &lStack_80;
      func_0x000107c61154(plVar10,puVar18);
      func_0x000107c61170(puVar6);
      puStack_70 = puStack_a8;
      uVar3 = *(ulong *)(puStack_a8 + 0x10);
      if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar3) {
        FUN_1027a6cec(1 < *(ulong *)(puStack_a8 + 0x18),uVar3 + 1,1);
      }
      puVar18 = puStack_70;
      puVar16 = puVar16 + 1;
      *(ulong *)(puStack_70 + 0x10) = uVar3 + 1;
      *(long **)(puStack_70 + uVar3 * 8 + 0x20) = plVar10;
    } while (puStack_d8 != puVar16);
    puVar6 = puStack_d0;
    func_0x000107c6142c(puStack_d0);
    param_1 = puStack_108;
  }
  if ((ulong)puVar18 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar18) {
      puVar16 = puVar18;
    }
    func_0x000107c60480();
  }
  if (puVar16 == (undefined *)0x0) {
    uVar12 = 0;
    puVar15 = (undefined *)0xe000000000000000;
    puVar16 = puVar6;
  }
  else {
    if (((ulong)puVar18 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1027a7800);
        (*pcVar5)();
      }
      uVar12 = *(undefined8 *)(puVar18 + 0x20);
      func_0x000107c615f0(uVar12);
    }
    else {
      uVar12 = 0;
      puVar6 = puVar18;
      FUN_1027a6e38();
    }
    uVar11 = uVar12;
    func_0x000107c5c960();
    func_0x000107c61180();
    func_0x000107c615e8(uVar12);
    uVar12 = uVar11;
    func_0x000107c5faec();
    puVar16 = puVar6;
    func_0x000107c61170(uVar11);
    puVar15 = puVar6;
  }
  func_0x000107c42edc();
  func_0x000107c61180();
  puVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar9 = 0;
  FUN_1027a5a90();
  lVar19 = lVar9;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar19 + _DAT_112ebeb48);
  *puVar1 = puVar6;
  puVar1[1] = puVar16;
  puVar1 = (undefined8 *)(lVar19 + _DAT_112ebeb50);
  *puVar1 = puStack_f8;
  puVar1[1] = puStack_100;
  puVar1 = (undefined8 *)(lVar19 + _DAT_112ebeb58);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined **)(lVar19 + _DAT_112ebeb60) = puVar18;
  puVar1 = (undefined8 *)(lVar19 + _DAT_112ebeb68);
  *puVar1 = uVar12;
  puVar1[1] = puVar15;
  plVar10 = &lStack_90;
  lStack_90 = lVar19;
  lStack_88 = lVar9;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(puStack_f0);
  return plVar10;
}



/* Entry: 1027a7808; end: 1027a78cf;  */

undefined8 FUN_1027a7808(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1027a78d0; end: 1027a798b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027a78d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ebec70;
  func_0x000107c61614(unaff_x20 + _DAT_112ebec70,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebec68) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1027a798c; end: 1027a7a2f; -[QuickCaptureCameraScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a798c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112ebec70;
  func_0x000107c61614(param_1 + _DAT_112ebec70,0);
  *(undefined8 *)(param_1 + _DAT_112ebec68) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1027a7a30; end: 1027a7a63;  */

void FUN_1027a7a30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027a7a64; end: 1027a7abf; -[QuickCaptureCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027a7a64(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebec68));
  param_1 = param_1 + _DAT_112ebec70;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1027a7ac0; end: 1027a7adf;  */

void FUN_1027a7ac0(void)

{
  func_0x000107c61168(&PTR_PTR_112861668);
  return;
}



/* Entry: 1027a7ae0; end: 1027a7b9b;  */

/* WARNING: Possible PIC construction at 0x0001027a7b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a7b7c) */

void FUN_1027a7ae0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11054bf90;
  func_0x000107c613fc(&UNK_11054bf90,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112ebeca8;
  func_0x0001000285a8(0x112ebeca8,&UNK_10dadb418);
  func_0x000107c613fc();
  pcVar4 = FUN_1027a7be0;
  func_0x0001000841fc(FUN_1027a7be0,puVar2,uVar3);
  func_0x000100084214(&UNK_10dadb3e0,0x34,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1027a7b9c; end: 1027a7bab;  */

undefined1  [16] FUN_1027a7b9c(void)

{
  return ZEXT816(0x11054bf70);
}



/* Entry: 1027a7bac; end: 1027a7bdf;  */

void FUN_1027a7bac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027a7be0; end: 1027a7e8b;  */

void FUN_1027a7be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *param_2;
  func_0x0001000285a8(0x112ebecb0,&UNK_10dadb420);
  puVar2 = &uStack_48;
  uStack_48 = uVar5;
  func_0x0001000838ec(puVar2);
  func_0x0001027a7c80(uVar3,uVar1,uVar4,puVar2);
  func_0x0001002acff8("MemoriesLinkManagementUIEntryPointEntryPointProvider",0x34,2);
  func_0x000107c61574(puVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 1027a7e8c; end: 1027a8047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a7e8c(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  
  lVar2 = _DAT_112ebecc0;
  if ((*(byte *)(unaff_x20 + _DAT_112ebecc0) & 1) == 0) {
    func_0x000100083b20(alStack_68);
    lVar5 = alStack_68[0];
    lVar4 = alStack_68[0];
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c615f0(lVar5);
      func_0x000100083b20(alStack_68);
      lVar4 = alStack_68[0];
      func_0x000100083b20(alStack_68);
      uVar8 = *(undefined8 *)(alStack_68[0] + _DAT_113097748);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(alStack_68[0]);
      lVar9 = *(long *)(unaff_x20 + _DAT_112ebece0);
      uVar1 = *(undefined1 *)(lVar9 + 0x18);
      uVar6 = 0;
      FUN_1027a9008(0);
      func_0x000107c610f8();
      lVar7 = lVar5;
      func_0x0001027a85a0(lVar5,lVar4,uVar8,uVar1,uVar6);
      func_0x000107c61428(lVar9 + 0x20,alStack_68,0,0);
      lVar4 = lVar9 + 0x20;
      func_0x000107c61618(lVar4);
      lVar3 = _DAT_112ebed38;
      func_0x000107c61428(lVar7 + _DAT_112ebed38,auStack_80,1,0);
      func_0x000107c61604(lVar7 + lVar3,lVar4);
      func_0x000107c615e8(lVar4);
      uVar6 = *(undefined8 *)(lVar9 + 0x10);
      func_0x000107c615f0(uVar6);
      func_0x000107c3e2c0();
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(uVar6);
      func_0x000107c615e8(lVar5);
      *(undefined1 *)(unaff_x20 + lVar2) = 1;
    }
  }
  return;
}



/* Entry: 1027a8048; end: 1027a806f; -[_TtC38MemoriesLinkManagementUIEntryPointImpl34MemoriesLinkManagementUIEntryPoint begin] */

void FUN_1027a8048(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027a7e8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027a8070; end: 1027a80e3; -[_TtC38MemoriesLinkManagementUIEntryPointImpl34MemoriesLinkManagementUIEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8070(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112ebecc0;
  if (*(char *)(param_1 + _DAT_112ebecc0) == '\x01') {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + _DAT_112ebece0) + 0x10);
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x000107c41864(uVar3,param_2,0);
    *(undefined1 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1027a80e4; end: 1027a8117;  */

void FUN_1027a80e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027a8118; end: 1027a8127;  */

undefined1  [16] FUN_1027a8118(void)

{
  return ZEXT816(0x11054c088);
}



/* Entry: 1027a8128; end: 1027a817f; -[_TtC38MemoriesLinkManagementUIEntryPointImpl34MemoriesLinkManagementUIEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027a8144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027a8164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a8148) */
/* WARNING: Removing unreachable block (ram,0x0001027a8168) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebecd8));
  return;
}



/* Entry: 1027a8180; end: 1027a819f;  */

void FUN_1027a8180(void)

{
  func_0x000107c61168(&PTR_PTR_112861730);
  return;
}



/* Entry: 1027a81a0; end: 1027a8257; -[_TtC22MyMemoriesLinkSettings26MediaLinkComposerNavigator popWithAnimated:] */

void FUN_1027a81a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  long alStack_60 [2];
  long alStack_50 [2];
  
  plVar4 = alStack_60;
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c4c250();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4d508();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      ppuVar5 = &PTR_s_popWithAnimated__112526600;
      goto LAB_1027a8228;
    }
  }
  ppuVar5 = &PTR_s_dismissWithAnimated__1125becc8;
  plVar4 = alStack_50;
LAB_1027a8228:
  *plVar4 = param_1;
  plVar4[1] = lVar1;
  func_0x000107c61154(plVar4,*ppuVar5,param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1027a8258; end: 1027a830f; -[_TtC22MyMemoriesLinkSettings26MediaLinkComposerNavigator popToSelfWithAnimated:] */

void FUN_1027a8258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  long alStack_60 [2];
  long alStack_50 [2];
  
  plVar4 = alStack_60;
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c4c250();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4d508();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      ppuVar5 = &PTR_s_popToSelfWithAnimated__11261e888;
      goto LAB_1027a82e0;
    }
  }
  ppuVar5 = &PTR_s_dismissWithAnimated__1125becc8;
  plVar4 = alStack_50;
LAB_1027a82e0:
  *plVar4 = param_1;
  plVar4[1] = lVar1;
  func_0x000107c61154(plVar4,*ppuVar5,param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1027a8310; end: 1027a8353; -[_TtC22MyMemoriesLinkSettings26MediaLinkComposerNavigator initWithRuntime:] */

void FUN_1027a8310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithRuntime__1125edce0,param_3);
  return;
}



/* Entry: 1027a8354; end: 1027a838f; -[_TtC22MyMemoriesLinkSettings26MediaLinkComposerNavigator init] */

void FUN_1027a8354(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027a8390; end: 1027a83e3;  */

void FUN_1027a8390(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027a83e4; end: 1027a83eb; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController pageViewName] */

undefined8 FUN_1027a83e4(void)

{
  return 0x7a;
}



/* Entry: 1027a83ec; end: 1027a8433; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a83ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebed38;
  func_0x000107c61428(param_1 + _DAT_112ebed38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027a8434; end: 1027a848b; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8434(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebed38;
  func_0x000107c61428(param_1 + _DAT_112ebed38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027a848c; end: 1027a86b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1027a848c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ebed38,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebed40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebed48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebed50) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112ebed58) = param_4;
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(auStack_50,puVar1,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c53dec(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar2;
}



/* Entry: 1027a86b4; end: 1027a8723; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController initWithValdiRuntimeProvider:boltURLMediaOperaService:currentPageTracker:isModalPresentation:] */

void FUN_1027a86b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x0001027a85a0(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1027a8724; end: 1027a877f; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8724(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112ebed38,0);
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MyMemoriesLinkSettings/MyMemoriesLinkViewController.swift",0x39,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a8780);
  (*pcVar1)();
}



/* Entry: 1027a8780; end: 1027a8983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8780(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112ebed40);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_loadView_112604be0);
  }
  else {
    uVar4 = 0;
    func_0x0001027a83c4(0);
    func_0x000107c610f8();
    func_0x000107c4842c();
    func_0x000107c561c0();
    puVar5 = PTR_PTR_1126aaf08;
    func_0x000107c610f8(PTR_PTR_1126aaf08);
    func_0x000107c453e4();
    func_0x000107c569fc();
    cVar1 = *(char *)(unaff_x20 + _DAT_112ebed58);
    func_0x000107c55730(puVar5);
    puVar6 = &UNK_11054c150;
    func_0x000107c613fc(&UNK_11054c150,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    pcStack_60 = FUN_1027a8b20;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1027a8bfc;
    puStack_68 = &UNK_11054c168;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c56dc0(puVar5);
    func_0x000107c60bd0(ppuVar7);
    puVar6 = PTR_PTR_1126aaf10;
    func_0x000107c610f8(PTR_PTR_1126aaf10);
    func_0x000107c49520();
    func_0x000107c5a568();
    if (cVar1 == '\x01') {
      puVar8 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
      func_0x000107c610f8(PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870);
      func_0x000107c48c2c();
      func_0x000107c54118();
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027a8984);
        (*pcVar2)();
      }
      func_0x000107c3d6fc();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(unaff_x20);
    }
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1027a8984; end: 1027a8b1f;  */

void FUN_1027a8984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_9 + 0x10,auStack_78,0,0);
  param_9 = param_9 + 0x10;
  func_0x000107c61618();
  if (param_9 != 0) {
    FUN_1027a9324(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (param_1 == 0) {
      func_0x000107c61170(param_9);
    }
    else {
      pcVar1 = "loadView()";
      func_0x0001000c10c0("loadView()");
      func_0x000107c61180();
      puVar2 = &UNK_11054c150;
      func_0x000107c613fc(&UNK_11054c150,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_9);
      puVar3 = &UNK_11054c1a0;
      func_0x000107c613fc(&UNK_11054c1a0,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = param_1;
      pcStack_88 = FUN_1027a9b6c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11054c1b8;
      ppuVar4 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_80;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 1027a8b20; end: 1027a8b3f;  */

void FUN_1027a8b20(void)

{
  FUN_1027a8984();
  return;
}



/* Entry: 1027a8b40; end: 1027a8bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8b40(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ebed48);
    func_0x000107c4f07c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c4ef94(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1027a8bfc; end: 1027a8cd7;  */

/* WARNING: Possible PIC construction at 0x0001027a8ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027a8cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027a8ca8) */
/* WARNING: Removing unreachable block (ram,0x0001027a8cb8) */

void FUN_1027a8bfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  uVar5 = uVar4;
  func_0x000107c5faec(param_4);
  uVar6 = uVar5;
  func_0x000107c5faec(param_5);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4,uVar5,param_5,uVar6);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1027a8cd8; end: 1027a8cf3;  */

void FUN_1027a8cd8(long param_1,long param_2)

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



/* Entry: 1027a8cf4; end: 1027a8d1b; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController loadView] */

void FUN_1027a8cf4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027a8780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027a8d1c; end: 1027a8d67; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController handleDownSwipeDismiss] */

/* WARNING: Possible PIC construction at 0x0001027a8d54: Changing call to branch */

void FUN_1027a8d1c(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4f090();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c420a8();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027a8d68; end: 1027a8d77; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController disableLeftSwipe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027a8d68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebed58);
}



/* Entry: 1027a8d78; end: 1027a8def; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController viewDidLoad] */

void FUN_1027a8d78(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = &uStack_30;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  func_0x000108dfdefc();
  func_0x000107c61180();
  func_0x000107c59e18(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1027a8df0; end: 1027a8e67; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c5bb50(*(undefined8 *)(param_1 + _DAT_112ebed50));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1027a8e68; end: 1027a8efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027a8e68(uint param_1)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  uVar1 = unaff_x20;
  func_0x000107c4a094();
  if (((uVar1 & 1) != 0) || (uVar1 = unaff_x20, func_0x000107c49aa0(), (int)uVar1 != 0)) {
    lVar2 = _DAT_112ebed38;
    func_0x000107c61428(unaff_x20 + _DAT_112ebed38,auStack_48,0,0);
    lVar2 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4cbb4();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1027a8efc; end: 1027a8f2b; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController viewDidDisappear:] */

void FUN_1027a8efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1027a8e68(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027a8f2c; end: 1027a8f8b; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController initWithNibName:bundle:] */

void FUN_1027a8f2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyMemoriesLinkSettings.MediaLinkViewController",0x2e,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027a8f58);
  (*pcVar1)();
}



/* Entry: 1027a8f8c; end: 1027a9007; -[_TtC22MyMemoriesLinkSettings23MediaLinkViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027a8f8c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebed40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebed48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebed50));
  param_1 = param_1 + _DAT_112ebed38;
  func_0x000107c61610();
  return param_1;
}



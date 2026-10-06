/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10394c628; end: 10394c637; -[_TtC26SCSpotlightLoggingServices26SCSpotlightLoggingServices logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394c628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb6910));
  return;
}



/* Entry: 10394c638; end: 10394c683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394c638(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb6910) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10394c684; end: 10394c6db; -[_TtC26SCSpotlightLoggingServices26SCSpotlightLoggingServices initWithLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394c684(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb6910) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10394c6dc; end: 10394c73b; -[_TtC26SCSpotlightLoggingServices26SCSpotlightLoggingServices init] */

void FUN_10394c6dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightLoggingServices.SCSpotlightLoggingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10394c708);
  (*pcVar1)();
}



/* Entry: 10394c73c; end: 10394c74b; -[_TtC26SCSpotlightLoggingServices26SCSpotlightLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394c73c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb6910));
  return;
}



/* Entry: 10394c74c; end: 10394c77f; +[SCSpotlightLoggingTypes upsellShareImpression] */

void FUN_10394c74c(void)

{
  func_0x000107c5fadc(0x6c65737055676f6c,0xee0065726168536c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10394c780; end: 10394c7ab; +[SCSpotlightLoggingTypes replyToFriendBarImpression] */

void FUN_10394c780(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010f17b470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10394c7ac; end: 10394c7e7; -[SCSpotlightLoggingTypes init] */

void FUN_10394c7ac(undefined8 param_1)

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



/* Entry: 10394c7e8; end: 10394c81b;  */

void FUN_10394c7e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10394c81c; end: 10394c81f; -[SCSpotlightLoggingTypes .cxx_destruct] */

void FUN_10394c81c(void)

{
  return;
}



/* Entry: 10394c820; end: 10394c83f;  */

void FUN_10394c820(void)

{
  func_0x000107c61168(&PTR_PTR_112905b88);
  return;
}



/* Entry: 10394c840; end: 10394c847; +[SCSpotlightMediaFetchingConstants maxUnviewedMetadataCount] */

undefined8 FUN_10394c840(void)

{
  return 0x32;
}



/* Entry: 10394c848; end: 10394c883; -[SCSpotlightMediaFetchingConstants init] */

void FUN_10394c848(undefined8 param_1)

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



/* Entry: 10394c884; end: 10394c8d7;  */

void FUN_10394c884(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10394c8d8; end: 10394c923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394c8d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb6990) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10394c924; end: 10394c983; -[_TtC32SCSpotlightMediaFetchingServices32SCSpotlightMediaFetchingServices init] */

void FUN_10394c924(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightMediaFetchingServices.SCSpotlightMediaFetchingServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10394c950);
  (*pcVar1)();
}



/* Entry: 10394c984; end: 10394c9ab; -[_TtC32SCSpotlightMediaFetchingServices32SCSpotlightMediaFetchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394c984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb6990));
  return;
}



/* Entry: 10394c9ac; end: 10394c9eb;  */

void FUN_10394c9ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb69c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc28bb0;
  func_0x000107c61520(&UNK_10dc28bb0,&UNK_1106b0bc8);
  puRam0000000112fb69c0 = puVar1;
  return;
}



/* Entry: 10394c9ec; end: 10394ca97;  */

void FUN_10394c9ec(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10394ca98; end: 10394cacf;  */

void FUN_10394ca98(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10394cad0; end: 10394cadf; -[_TtC24SCSpotlightQueryServices24SCSpotlightQueryServices spotlightQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394cad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb69c8));
  return;
}



/* Entry: 10394cae0; end: 10394cb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394cae0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb69c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb69d0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10394cb44; end: 10394cba3; -[_TtC24SCSpotlightQueryServices24SCSpotlightQueryServices init] */

void FUN_10394cb44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightQueryServices.SCSpotlightQueryServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10394cb70);
  (*pcVar1)();
}



/* Entry: 10394cba4; end: 10394cbdb; -[_TtC24SCSpotlightQueryServices24SCSpotlightQueryServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010394cbc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010394cbc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394cba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb69c8));
  return;
}



/* Entry: 10394cbdc; end: 10394cc63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10394cbdc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ae0d7c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fb6a00) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fb6a08) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10394cc64);
  (*pcVar1)();
}



/* Entry: 10394cc64; end: 10394ccc3; -[_TtC33StrUserNavigationScopeGraphBridge48StrUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_10394cc64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StrUserNavigationScopeGraphBridge.StrUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10394cc90);
  (*pcVar1)();
}



/* Entry: 10394ccc4; end: 10394ccfb; -[_TtC33StrUserNavigationScopeGraphBridge48StrUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010394cce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010394cce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394ccc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb6a00));
  return;
}



/* Entry: 10394ccfc; end: 10394cd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394ccfc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fb6a08),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fb6a00));
  return;
}



/* Entry: 10394cd24; end: 10394cd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394cd24(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8108);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394cd88; end: 10394cd8f;  */

void FUN_10394cd88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394cd90; end: 10394ce2f;  */

void FUN_10394cd90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394ce30; end: 10394ce4f;  */

void FUN_10394ce30(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394ce50; end: 10394ceb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394ce50(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8110);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394ceb4; end: 10394cebb;  */

void FUN_10394ceb4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394cebc; end: 10394cf5b;  */

void FUN_10394cebc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394cf5c; end: 10394cf7b;  */

void FUN_10394cf5c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394cf7c; end: 10394cfdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394cf7c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8118);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394cfe0; end: 10394cfe7;  */

void FUN_10394cfe0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394cfe8; end: 10394d087;  */

void FUN_10394cfe8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d088; end: 10394d0a7;  */

void FUN_10394d088(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d0a8; end: 10394d10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d0a8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8120);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d10c; end: 10394d113;  */

void FUN_10394d10c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d114; end: 10394d1b3;  */

void FUN_10394d114(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d1b4; end: 10394d1d3;  */

void FUN_10394d1b4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d1d4; end: 10394d237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d1d4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8128);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d238; end: 10394d23f;  */

void FUN_10394d238(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d240; end: 10394d2df;  */

void FUN_10394d240(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d2e0; end: 10394d2ff;  */

void FUN_10394d2e0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d300; end: 10394d363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d300(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8130);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d364; end: 10394d36b;  */

void FUN_10394d364(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d36c; end: 10394d40b;  */

void FUN_10394d36c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d40c; end: 10394d42b;  */

void FUN_10394d40c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d42c; end: 10394d48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d42c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8138);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d490; end: 10394d497;  */

void FUN_10394d490(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d498; end: 10394d537;  */

void FUN_10394d498(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d538; end: 10394d557;  */

void FUN_10394d538(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d558; end: 10394d5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d558(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8140);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d5bc; end: 10394d5c3;  */

void FUN_10394d5bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d5c4; end: 10394d663;  */

void FUN_10394d5c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d664; end: 10394d683;  */

void FUN_10394d664(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d684; end: 10394d6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d684(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8148);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d6e8; end: 10394d6ef;  */

void FUN_10394d6e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d6f0; end: 10394d78f;  */

void FUN_10394d6f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d790; end: 10394d7af;  */

void FUN_10394d790(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d7b0; end: 10394d813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d7b0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8150);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d814; end: 10394d81b;  */

void FUN_10394d814(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d81c; end: 10394d8bb;  */

void FUN_10394d81c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d8bc; end: 10394d8db;  */

void FUN_10394d8bc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394d8dc; end: 10394d93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394d8dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8158);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394d940; end: 10394d947;  */

void FUN_10394d940(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394d948; end: 10394d9e7;  */

void FUN_10394d948(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394d9e8; end: 10394da07;  */

void FUN_10394d9e8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394da08; end: 10394da6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394da08(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8160);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394da6c; end: 10394da73;  */

void FUN_10394da6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394da74; end: 10394db13;  */

void FUN_10394da74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394db14; end: 10394db33;  */

void FUN_10394db14(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394db34; end: 10394db97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394db34(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8168);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394db98; end: 10394db9f;  */

void FUN_10394db98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394dba0; end: 10394dc3f;  */

void FUN_10394dba0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394dc40; end: 10394dc5f;  */

void FUN_10394dc40(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394dc60; end: 10394dcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394dc60(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8170);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394dcc4; end: 10394dccb;  */

void FUN_10394dcc4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394dccc; end: 10394dd6b;  */

void FUN_10394dccc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394dd6c; end: 10394dd8b;  */

void FUN_10394dd6c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394dd8c; end: 10394ddef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394dd8c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8178);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394ddf0; end: 10394ddf7;  */

void FUN_10394ddf0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394ddf8; end: 10394de97;  */

void FUN_10394ddf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394de98; end: 10394deb7;  */

void FUN_10394de98(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394deb8; end: 10394df1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394deb8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8180);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394df1c; end: 10394df23;  */

void FUN_10394df1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394df24; end: 10394dfc3;  */

void FUN_10394df24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394dfc4; end: 10394dfe3;  */

void FUN_10394dfc4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394dfe4; end: 10394e047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394dfe4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8188);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394e048; end: 10394e04f;  */

void FUN_10394e048(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394e050; end: 10394e0ef;  */

void FUN_10394e050(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394e0f0; end: 10394e10f;  */

void FUN_10394e0f0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10394e110; end: 10394e173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10394e110(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb8190);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10394e174; end: 10394e17b;  */

void FUN_10394e174(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10394e17c; end: 10394e21b;  */

void FUN_10394e17c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10394e21c; end: 10394e23b;  */

void FUN_10394e21c(void)

{
  func_0x000100083b20();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032c7a08; end: 1032c7aaf;  */

void FUN_1032c7a08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110637808;
  func_0x000107c613fc(&UNK_110637808,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032c7c38;
  func_0x0001000823a8(FUN_1032c7c38,puVar1);
  func_0x000100082720("SCLensCarouselScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032c7ab0; end: 1032c7ab7;  */

void FUN_1032c7ab0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110637808;
  func_0x000107c613fc(&UNK_110637808,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032c7c38;
  func_0x0001000823a8(FUN_1032c7c38,puVar3);
  func_0x000100082720("SCLensCarouselScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032c7ab8; end: 1032c7b3b;  */

void FUN_1032c7ab8(void)

{
  FUN_1032c7b3c();
  return;
}



/* Entry: 1032c7b3c; end: 1032c7bbf;  */

void FUN_1032c7b3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1032c7bc0; end: 1032c7beb;  */

void FUN_1032c7bc0(void)

{
  FUN_1032c7b3c();
  return;
}



/* Entry: 1032c7bec; end: 1032c7c0b;  */

void FUN_1032c7bec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032c7138);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c7c0c; end: 1032c7c37;  */

void FUN_1032c7c0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032c7c38; end: 1032c7c8f;  */

void FUN_1032c7c38(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110636d58;
  func_0x000107c613fc(&UNK_110636d58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032c264c;
  func_0x00010058fa64(FUN_1032c264c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032c7c90; end: 1032c7d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032c7c90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032c8eec();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f54190) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f54198) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c7d18);
  (*pcVar1)();
}



/* Entry: 1032c7d18; end: 1032c7d77; -[_TtC28LensCarouselScopeGraphBridge43LensCarouselScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032c7d18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselScopeGraphBridge.LensCarouselScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c7d44);
  (*pcVar1)();
}



/* Entry: 1032c7d78; end: 1032c7daf; -[_TtC28LensCarouselScopeGraphBridge43LensCarouselScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032c7d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c7d98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c7d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f54190));
  return;
}



/* Entry: 1032c7db0; end: 1032c7dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c7db0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f54198),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f54190));
  return;
}



/* Entry: 1032c7dd8; end: 1032c7df7;  */

void FUN_1032c7dd8(void)

{
  func_0x000107c61168(&PTR_PTR_1128caa90);
  return;
}



/* Entry: 1032c7df8; end: 1032c7e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032c7df8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f54b40);
  *(undefined8 *)(unaff_x20 + _DAT_112f541c8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f541d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1032c7e94; end: 1032c7ef3; -[_TtC28LensCarouselScopeGraphBridge40SCLensCTACarouselServicesSaberEntryPoint init] */

void FUN_1032c7e94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselScopeGraphBridge.SCLensCTACarouselServicesSaberEntryPoint",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c7ec0);
  (*pcVar1)();
}



/* Entry: 1032c7ef4; end: 1032c7f87; -[_TtC28LensCarouselScopeGraphBridge40SCLensCTACarouselServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c7ef4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f541c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f541d0));
  return;
}



/* Entry: 1032c7f88; end: 1032c7f8f;  */

undefined8 FUN_1032c7f88(void)

{
  return 0;
}



/* Entry: 1032c7f90; end: 1032c7faf;  */

void FUN_1032c7f90(void)

{
  func_0x000107c61168(&PTR_PTR_1128cab58);
  return;
}



/* Entry: 1032c7fb0; end: 1032c8013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c7fb0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b38);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c8014; end: 1032c801b;  */

void FUN_1032c8014(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c801c; end: 1032c80bb;  */

void FUN_1032c801c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c80bc; end: 1032c80db;  */

void FUN_1032c80bc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c80dc; end: 1032c813f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c80dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b48);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c8140; end: 1032c8147;  */

void FUN_1032c8140(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c8148; end: 1032c81e7;  */

void FUN_1032c8148(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c81e8; end: 1032c8207;  */

void FUN_1032c81e8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c8208; end: 1032c826b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c8208(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b50);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c826c; end: 1032c8273;  */

void FUN_1032c826c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c8274; end: 1032c8313;  */

void FUN_1032c8274(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c8314; end: 1032c8333;  */

void FUN_1032c8314(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c8334; end: 1032c8397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c8334(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b58);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c8398; end: 1032c839f;  */

void FUN_1032c8398(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c83a0; end: 1032c843f;  */

void FUN_1032c83a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c8440; end: 1032c845f;  */

void FUN_1032c8440(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c8460; end: 1032c84c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c8460(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c84c4; end: 1032c84cb;  */

void FUN_1032c84c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c84cc; end: 1032c856b;  */

void FUN_1032c84cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c856c; end: 1032c858b;  */

void FUN_1032c856c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c858c; end: 1032c85ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c858c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c85f0; end: 1032c85f7;  */

void FUN_1032c85f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c85f8; end: 1032c8697;  */

void FUN_1032c85f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c8698; end: 1032c86b7;  */

void FUN_1032c8698(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c86b8; end: 1032c871b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c86b8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c871c; end: 1032c8723;  */

void FUN_1032c871c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c8724; end: 1032c87c3;  */

void FUN_1032c8724(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c87c4; end: 1032c87e3;  */

void FUN_1032c87c4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c87e4; end: 1032c8847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c87e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c8848; end: 1032c884f;  */

void FUN_1032c8848(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c8850; end: 1032c88ef;  */

void FUN_1032c8850(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c88f0; end: 1032c890f;  */

void FUN_1032c88f0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c8910; end: 1032c8973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c8910(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b80);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c8974; end: 1032c897b;  */

void FUN_1032c8974(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c897c; end: 1032c8a1b;  */

void FUN_1032c897c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c8a1c; end: 1032c8a3b;  */

void FUN_1032c8a1c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c8a3c; end: 1032c8a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c8a3c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c8aa0; end: 1032c8aa7;  */

void FUN_1032c8aa0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c8aa8; end: 1032c8b47;  */

void FUN_1032c8aa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c8b48; end: 1032c8b67;  */

void FUN_1032c8b48(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c8b68; end: 1032c8bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032c8b68(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f54b90);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1032c8bcc; end: 1032c8bd3;  */

void FUN_1032c8bcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c8bd4; end: 1032c8c73;  */

void FUN_1032c8bd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c8c74; end: 1032c8c93;  */

void FUN_1032c8c74(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1032c8c94; end: 1032c8d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032c8c94(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f54af0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f54af8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032c8d1c);
  (*pcVar2)();
}



/* Entry: 1032c8d1c; end: 1032c8e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032c8d1c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f54af0);
  *(undefined **)(unaff_x20 + _DAT_112f54af0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f54af8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f54af8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110637a50;
  func_0x000107c613fc(&UNK_110637a50,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032c8e08,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032c8e04; end: 1032c8e0f;  */

void FUN_1032c8e04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032c8e10; end: 1032c8e6f; -[_TtC28LensCarouselScopeGraphBridge43SCLensCarouselScopedServicesSaberEntryPoint init] */

void FUN_1032c8e10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselScopeGraphBridge.SCLensCarouselScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c8e3c);
  (*pcVar1)();
}



/* Entry: 1032c8e70; end: 1032c8ea7; -[_TtC28LensCarouselScopeGraphBridge43SCLensCarouselScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c8e70(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f54af8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f54af0));
  return;
}



/* Entry: 1032c8ea8; end: 1032c8eab;  */

void FUN_1032c8ea8(void)

{
  return;
}



/* Entry: 1032c8eac; end: 1032c8ecb;  */

void FUN_1032c8eac(void)

{
  FUN_1032c8d1c();
  return;
}



/* Entry: 1032c8ecc; end: 1032c8eeb;  */

void FUN_1032c8ecc(void)

{
  func_0x000107c61168(&PTR_PTR_1128cac20);
  return;
}



/* Entry: 1032c8eec; end: 1032c8fbb;  */

undefined8 FUN_1032c8eec(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f54b28,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1032c8fbc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032c8fbc; end: 1032c8fdb;  */

void FUN_1032c8fbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128cace8);
  return;
}



/* Entry: 1032c8fdc; end: 1032c92af;  */

void FUN_1032c8fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f54b30,&UNK_10dbac4a8);
  puVar1 = &UNK_110637a98;
  func_0x000107c613fc(&UNK_110637a98,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_1032c92b0,puVar1);
  return;
}



/* Entry: 1032c92b0; end: 1032c92eb;  */

void FUN_1032c92b0(void)

{
  long unaff_x20;
  
  func_0x0001032c9110(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1032c92ec; end: 1032c9413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c92ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f54b38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b50) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b58) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b60) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b68) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b70) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b78) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b80) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b88) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f54b90) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032c9414; end: 1032c9473; -[_TtC28LensCarouselScopeGraphBridge36LensCarouselScopeGraphBridgeServices init] */

void FUN_1032c9414(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselScopeGraphBridge.LensCarouselScopeGraphBridgeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c9440);
  (*pcVar1)();
}



/* Entry: 1032c9474; end: 1032c954b; -[_TtC28LensCarouselScopeGraphBridge36LensCarouselScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032c9490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c94b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c94d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c94f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c9510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c9530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c9514) */
/* WARNING: Removing unreachable block (ram,0x0001032c94f4) */
/* WARNING: Removing unreachable block (ram,0x0001032c94d4) */
/* WARNING: Removing unreachable block (ram,0x0001032c94b4) */
/* WARNING: Removing unreachable block (ram,0x0001032c9494) */
/* WARNING: Removing unreachable block (ram,0x0001032c9534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f54b40));
  return;
}



/* Entry: 1032c954c; end: 1032c9553;  */

undefined8 FUN_1032c954c(void)

{
  return 0x1b;
}



/* Entry: 1032c9554; end: 1032c96cb;  */

void FUN_1032c9554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110637ac0;
  func_0x000107c613fc(&UNK_110637ac0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032c96cc,puVar1);
  return;
}



/* Entry: 1032c96cc; end: 1032c96d3;  */

void FUN_1032c96cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f54b28,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f54b28,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110637b58;
  func_0x000107c613fc(&UNK_110637b58,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032c9780;
  func_0x00010058fa64(0x1032c9780,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032c96d4; end: 1032c972f;  */

void FUN_1032c96d4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f54b28,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f54b28,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032c9730; end: 1032c9787;  */

undefined ** FUN_1032c9730(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c9788; end: 1032c97cf; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9788(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f54be8;
  func_0x000107c61428(param_1 + _DAT_112f54be8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032c97d0; end: 1032c9827; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c97d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f54be8;
  func_0x000107c61428(param_1 + _DAT_112f54be8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032c9828; end: 1032c986f; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint lensCarouselScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9828(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f54bf0;
  func_0x000107c61428(param_1 + _DAT_112f54bf0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032c9870; end: 1032c98d3; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint setLensCarouselScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9870(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f54bf0;
  func_0x000107c61428(param_1 + _DAT_112f54bf0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032c98d4; end: 1032c9a07;  */

/* WARNING: Possible PIC construction at 0x0001032c998c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c99a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c99c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c9990) */
/* WARNING: Removing unreachable block (ram,0x0001032c99ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c98d4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4af18();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032c7dd8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032c8eec();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c9a08);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f54190) = lVar5;
    *(long *)(lVar4 + _DAT_112f54198) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032c9a08; end: 1032c9a2f; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032c9a08(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032c98d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032c9a30; end: 1032c9a73; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032c9a30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032c9a74; end: 1032c9c0b;  */

void FUN_1032c9a74(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0ec54c0)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f13ab40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensCarouselScopeGraphBridge/SCLensCarouselScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x50,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c9c0c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55c70();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032c9c0c; end: 1032c9cb7; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032c9c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1032c9a74(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032c9cb8; end: 1032c9d23; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9cb8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f54be8,0);
  *(undefined8 *)(param_1 + _DAT_112f54bf0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f54bf8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032c9d24; end: 1032c9d57;  */

void FUN_1032c9d24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032c9d58; end: 1032c9d9f; -[SCLensCarouselScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032c9d84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c9d88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9d58(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f54be8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f54bf0));
  return;
}



/* Entry: 1032c9da0; end: 1032c9dbf;  */

void FUN_1032c9da0(void)

{
  func_0x000107c61168(&PTR_PTR_1128cae00);
  return;
}



/* Entry: 1032c9dc0; end: 1032c9dcb; -[SCSCLensCTACarouselServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9dc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f54c28;
  func_0x000107c61428(param_1 + _DAT_112f54c28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032c9dcc; end: 1032c9dd7; -[SCSCLensCTACarouselServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f54c28;
  func_0x000107c61428(param_1 + _DAT_112f54c28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032c9dd8; end: 1032c9de3; -[SCSCLensCTACarouselServicesSaberEntryPoint lensCarouselScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9dd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f54c30;
  func_0x000107c61428(param_1 + _DAT_112f54c30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032c9de4; end: 1032c9e27;  */

void FUN_1032c9de4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032c9e28; end: 1032c9e33; -[SCSCLensCTACarouselServicesSaberEntryPoint setLensCarouselScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c9e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f54c30;
  func_0x000107c61428(param_1 + _DAT_112f54c30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



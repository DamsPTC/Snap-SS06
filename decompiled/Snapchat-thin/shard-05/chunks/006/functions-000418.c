/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fafce8; end: 103fafd87;  */

void FUN_103fafce8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fafd88; end: 103fafe8f;  */

void FUN_103fafd88(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 103fafe90; end: 103fb0167;  */

long FUN_103fafe90(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fb0168; end: 103fb0207;  */

void FUN_103fb0168(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fb0208; end: 103fb022b;  */

void FUN_103fb0208(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 103fb022c; end: 103fb0247; -[SCConverterEditType description] */

void FUN_103fb022c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fb0248; end: 103fb028f; -[SCConverterEditType init] */

void FUN_103fb0248(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSnapRenderNGSMESnapDocConverterServices/ConverterEditTypeWrapper.swift",0x48,2,0x24,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fb0290);
  (*pcVar1)();
}



/* Entry: 103fb0290; end: 103fb0293; -[SCConverterEditType copyWithZone:] */

void FUN_103fb0290(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fb0294; end: 103fb02d3; +[SCConverterEditType uco] */

void FUN_103fb0294(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fb02d4; end: 103fb02df; -[SCConverterEditType matchUco:] */

void FUN_103fb02d4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103fb02dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103fb02e0; end: 103fb0333;  */

void FUN_103fb02e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fb0334; end: 103fb0423;  */

uint FUN_103fb0334(uint *param_1,int param_2)

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



/* Entry: 103fb0424; end: 103fb0463;  */

void FUN_103fb0424(void)

{
  undefined *puVar1;
  
  if (puRam000000011303c308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb5f7c;
  _swift_getWitnessTable(&UNK_10dcb5f7c,&UNK_11072b6f0);
  puRam000000011303c308 = puVar1;
  return;
}



/* Entry: 103fb0464; end: 103fb0473; -[SCConverterOutput videoAndEdits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb0464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c310));
  return;
}



/* Entry: 103fb0474; end: 103fb0483; -[SCConverterOutput overlayEdits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb0474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303c318));
  return;
}



/* Entry: 103fb0484; end: 103fb04f7; -[SCConverterOutput overlayRenderKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb0484(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11303c320))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11303c320);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fb04f8; end: 103fb057b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb04f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c310) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303c318) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c320);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fb057c; end: 103fb0653; -[SCConverterOutput initWithVideoAndEdits:overlayEdits:overlayRenderKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb057c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    param_2 = -0x1000000000000000;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_4);
    lVar3 = param_5;
    _objc_retain(param_5);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + _DAT_11303c310) = param_3;
  *(undefined8 *)(param_1 + _DAT_11303c318) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11303c320);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fb0654; end: 103fb07f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103fb0654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11303c310) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11303c318) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11303c320);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x000100de78a0(param_3,param_4);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x0001000b44c0(param_3,param_4);
  return puVar2;
}



/* Entry: 103fb07f4; end: 103fb07f7; -[SCConverterOutput copyWithZone:] */

void FUN_103fb07f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fb07f8; end: 103fb088b; -[SCConverterOutput description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb07f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11303c310);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11303c318);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11303c320);
  uVar2 = ((undefined8 *)(param_1 + _DAT_11303c320))[1];
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x000100de78a0(uVar1,uVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x0001000b44c0(uVar1,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fb088c; end: 103fb0907; -[SCConverterOutput init] */

void FUN_103fb088c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSnapRenderNGSMESnapDocConverterServices/ConverterOutputWrapper.swift",0x46,2,0x2e,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fb08d4);
  (*pcVar1)();
}



/* Entry: 103fb0908; end: 103fb0953; -[SCConverterOutput .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb0908(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303c310));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303c318));
  uVar2 = *(ulong *)(param_1 + _DAT_11303c320);
  uVar1 = ((ulong *)(param_1 + _DAT_11303c320))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103fb0954; end: 103fb0973;  */

void FUN_103fb0954(void)

{
  _objc_opt_self(&PTR_PTR_112974838);
  return;
}



/* Entry: 103fb0974; end: 103fb09fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fb0974(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a537f4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11303c350) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11303c358) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fb09fc);
  (*pcVar1)();
}



/* Entry: 103fb09fc; end: 103fb0a5b; -[_TtC30MemUserSessionScopeGraphBridge45MemUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103fb09fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemUserSessionScopeGraphBridge.MemUserSessionScopeGraphBridgeSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fb0a28);
  (*pcVar1)();
}



/* Entry: 103fb0a5c; end: 103fb0a93; -[_TtC30MemUserSessionScopeGraphBridge45MemUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb0a5c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11303c350));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c358));
  return;
}



/* Entry: 103fb0a94; end: 103fb0abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb0a94(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11303c358),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11303c350));
  return;
}



/* Entry: 103fb0abc; end: 103fb0b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fb0abc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11303d580);
  *(undefined8 *)(unaff_x20 + _DAT_11303c388) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11303c390) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103fb0b58; end: 103fb0bb7; -[_TtC30MemUserSessionScopeGraphBridge40SCPhotoPermissionServicesSaberEntryPoint init] */

void FUN_103fb0b58(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MemUserSessionScopeGraphBridge.SCPhotoPermissionServicesSaberEntryPoint",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fb0b84);
  (*pcVar1)();
}



/* Entry: 103fb0bb8; end: 103fb0c4b; -[_TtC30MemUserSessionScopeGraphBridge40SCPhotoPermissionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fb0bb8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11303c388));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11303c390));
  return;
}



/* Entry: 103fb0c4c; end: 103fb0c53;  */

undefined8 FUN_103fb0c4c(void)

{
  return 0;
}



/* Entry: 103fb0c54; end: 103fb0cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb0c54(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d4e0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb0cb8; end: 103fb0cbf;  */

void FUN_103fb0cb8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb0cc0; end: 103fb0d5f;  */

void FUN_103fb0cc0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb0d60; end: 103fb0d7f;  */

void FUN_103fb0d60(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb0d80; end: 103fb0de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb0d80(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d4e8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb0de4; end: 103fb0deb;  */

void FUN_103fb0de4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb0dec; end: 103fb0e8b;  */

void FUN_103fb0dec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb0e8c; end: 103fb0eab;  */

void FUN_103fb0e8c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb0eac; end: 103fb0f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb0eac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d4f0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb0f10; end: 103fb0f17;  */

void FUN_103fb0f10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb0f18; end: 103fb0fb7;  */

void FUN_103fb0f18(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb0fb8; end: 103fb0fd7;  */

void FUN_103fb0fb8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb0fd8; end: 103fb103b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb0fd8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d4f8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb103c; end: 103fb1043;  */

void FUN_103fb103c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1044; end: 103fb10e3;  */

void FUN_103fb1044(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb10e4; end: 103fb1103;  */

void FUN_103fb10e4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1104; end: 103fb1167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1104(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d500);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1168; end: 103fb116f;  */

void FUN_103fb1168(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1170; end: 103fb120f;  */

void FUN_103fb1170(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1210; end: 103fb122f;  */

void FUN_103fb1210(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1230; end: 103fb1293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1230(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d508);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1294; end: 103fb129b;  */

void FUN_103fb1294(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb129c; end: 103fb133b;  */

void FUN_103fb129c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb133c; end: 103fb135b;  */

void FUN_103fb133c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb135c; end: 103fb13bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb135c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d510);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb13c0; end: 103fb13c7;  */

void FUN_103fb13c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb13c8; end: 103fb1467;  */

void FUN_103fb13c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1468; end: 103fb1487;  */

void FUN_103fb1468(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1488; end: 103fb14eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1488(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d518);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb14ec; end: 103fb14f3;  */

void FUN_103fb14ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb14f4; end: 103fb1593;  */

void FUN_103fb14f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1594; end: 103fb15b3;  */

void FUN_103fb1594(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb15b4; end: 103fb1617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb15b4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d520);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1618; end: 103fb161f;  */

void FUN_103fb1618(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1620; end: 103fb16bf;  */

void FUN_103fb1620(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb16c0; end: 103fb16df;  */

void FUN_103fb16c0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb16e0; end: 103fb1743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb16e0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d528);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1744; end: 103fb174b;  */

void FUN_103fb1744(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb174c; end: 103fb17eb;  */

void FUN_103fb174c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb17ec; end: 103fb180b;  */

void FUN_103fb17ec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb180c; end: 103fb186f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb180c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d530);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1870; end: 103fb1877;  */

void FUN_103fb1870(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1878; end: 103fb1917;  */

void FUN_103fb1878(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1918; end: 103fb1937;  */

void FUN_103fb1918(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1938; end: 103fb199b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1938(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d538);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb199c; end: 103fb19a3;  */

void FUN_103fb199c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb19a4; end: 103fb1a43;  */

void FUN_103fb19a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1a44; end: 103fb1a63;  */

void FUN_103fb1a44(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1a64; end: 103fb1ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1a64(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d540);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1ac8; end: 103fb1acf;  */

void FUN_103fb1ac8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1ad0; end: 103fb1b6f;  */

void FUN_103fb1ad0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1b70; end: 103fb1b8f;  */

void FUN_103fb1b70(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1b90; end: 103fb1bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1b90(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d548);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1bf4; end: 103fb1bfb;  */

void FUN_103fb1bf4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1bfc; end: 103fb1c9b;  */

void FUN_103fb1bfc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1c9c; end: 103fb1cbb;  */

void FUN_103fb1c9c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1cbc; end: 103fb1d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1cbc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d550);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1d20; end: 103fb1d27;  */

void FUN_103fb1d20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1d28; end: 103fb1dc7;  */

void FUN_103fb1d28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1dc8; end: 103fb1de7;  */

void FUN_103fb1dc8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1de8; end: 103fb1e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1de8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d558);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1e4c; end: 103fb1e53;  */

void FUN_103fb1e4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1e54; end: 103fb1ef3;  */

void FUN_103fb1e54(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb1ef4; end: 103fb1f13;  */

void FUN_103fb1ef4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103fb1f14; end: 103fb1f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103fb1f14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11303d560);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103fb1f78; end: 103fb1f7f;  */

void FUN_103fb1f78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103fb1f80; end: 103fb201f;  */

void FUN_103fb1f80(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103fb2020; end: 103fb203f;  */

void FUN_103fb2020(void)

{
  func_0x000100083b20();
  return;
}



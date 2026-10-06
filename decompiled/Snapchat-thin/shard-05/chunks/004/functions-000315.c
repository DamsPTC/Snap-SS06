/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e35e64; end: 103e35ea7; -[SCUnifiedGRPCServicesSaberServiceProvider end] */

void FUN_103e35e64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e35ea8; end: 103e3603f;  */

void FUN_103e35ea8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e3f2e0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1c0d20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CntUserSessionScopeGraphBridge/SCUnifiedGRPCServicesSaberServiceProvider.swift",
                   0x4e,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e36040);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5351c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e36040; end: 103e360eb; -[SCUnifiedGRPCServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e36040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103e35ea8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e360ec; end: 103e3615f; -[SCUnifiedGRPCServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e360ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130183a8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130183b0,0);
  *(undefined8 *)(param_1 + _DAT_1130183b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e36160; end: 103e36193;  */

void FUN_103e36160(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e36194; end: 103e361db; -[SCUnifiedGRPCServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36194(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130183a8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130183b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130183b8));
  return;
}



/* Entry: 103e361dc; end: 103e361fb;  */

void FUN_103e361dc(void)

{
  _objc_opt_self(&PTR_PTR_113018400);
  return;
}



/* Entry: 103e361fc; end: 103e3620f;  */

bool FUN_103e361fc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103e36210; end: 103e362bb;  */

void FUN_103e36210(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103e362bc; end: 103e362bf;  */

void FUN_103e362bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113018468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9ce20;
  _swift_getWitnessTable(&UNK_10dc9ce20,&UNK_1107171f0);
  puRam0000000113018468 = puVar1;
  return;
}



/* Entry: 103e362c0; end: 103e362ff;  */

void FUN_103e362c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113018468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9ce20;
  _swift_getWitnessTable(&UNK_10dc9ce20,&UNK_1107171f0);
  puRam0000000113018468 = puVar1;
  return;
}



/* Entry: 103e36300; end: 103e36463;  */

int FUN_103e36300(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e3637c;
        goto LAB_103e36360;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e36360:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103e3637c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e36464; end: 103e367bb;  */

long FUN_103e36464(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103e367bc; end: 103e36827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e367bc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001001f57e8();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113018478) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103e36828; end: 103e3682f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36828(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001001f57e8();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_113018478) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103e36830; end: 103e368a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36830(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113018478) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e368a4; end: 103e36903; -[_TtC19UnifiedGRPCServices19UnifiedGRPCServices init] */

void FUN_103e368a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UnifiedGRPCServices.UnifiedGRPCServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e368d0);
  (*pcVar1)();
}



/* Entry: 103e36904; end: 103e36913;  */

undefined1  [16] FUN_103e36904(void)

{
  return ZEXT816(0x1107172e8);
}



/* Entry: 103e36914; end: 103e36923; -[_TtC19UnifiedGRPCServices19UnifiedGRPCServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113018478));
  return;
}



/* Entry: 103e36924; end: 103e369ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e36924(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4ec6c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130184a8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130184b0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e369ac);
  (*pcVar1)();
}



/* Entry: 103e369ac; end: 103e36a0b; -[_TtC30CofUserSessionScopeGraphBridge45CofUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e369ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CofUserSessionScopeGraphBridge.CofUserSessionScopeGraphBridgeSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e369d8);
  (*pcVar1)();
}



/* Entry: 103e36a0c; end: 103e36a43; -[_TtC30CofUserSessionScopeGraphBridge45CofUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36a0c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130184a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130184b0));
  return;
}



/* Entry: 103e36a44; end: 103e36a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36a44(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130184b0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130184a8));
  return;
}



/* Entry: 103e36a6c; end: 103e36b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e36a6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113018560);
  *(undefined8 *)(unaff_x20 + _DAT_1130184e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130184e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e36b08; end: 103e36b67; -[_TtC30CofUserSessionScopeGraphBridge43SCApplicationConfigProvidingSaberEntryPoint init] */

void FUN_103e36b08(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CofUserSessionScopeGraphBridge.SCApplicationConfigProvidingSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e36b34);
  (*pcVar1)();
}



/* Entry: 103e36b68; end: 103e36bfb; -[_TtC30CofUserSessionScopeGraphBridge43SCApplicationConfigProvidingSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36b68(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130184e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130184e8));
  return;
}



/* Entry: 103e36bfc; end: 103e36c03;  */

undefined8 FUN_103e36bfc(void)

{
  return 0;
}



/* Entry: 103e36c04; end: 103e36c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e36c04(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113018568);
  *(undefined8 *)(unaff_x20 + _DAT_113018518) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113018520) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e36ca0; end: 103e36cff; -[_TtC30CofUserSessionScopeGraphBridge43SCCircumstanceEngineServicesSaberEntryPoint init] */

void FUN_103e36ca0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CofUserSessionScopeGraphBridge.SCCircumstanceEngineServicesSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e36ccc);
  (*pcVar1)();
}



/* Entry: 103e36d00; end: 103e36d93; -[_TtC30CofUserSessionScopeGraphBridge43SCCircumstanceEngineServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36d00(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113018518));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113018520));
  return;
}



/* Entry: 103e36d94; end: 103e36d9b;  */

undefined8 FUN_103e36d94(void)

{
  return 0;
}



/* Entry: 103e36d9c; end: 103e36dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36d9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113018560) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113018568) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e36e00; end: 103e36e5f; -[_TtC30CofUserSessionScopeGraphBridge38CofUserSessionScopeGraphBridgeServices init] */

void FUN_103e36e00(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CofUserSessionScopeGraphBridge.CofUserSessionScopeGraphBridgeServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e36e2c);
  (*pcVar1)();
}



/* Entry: 103e36e60; end: 103e36ef3; -[_TtC30CofUserSessionScopeGraphBridge38CofUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36e60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113018560));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113018568));
  return;
}



/* Entry: 103e36ef4; end: 103e36f2b;  */

undefined1  [16] FUN_103e36ef4(void)

{
  return ZEXT816(0x110717448);
}



/* Entry: 103e36f2c; end: 103e36f6f; -[SCCofUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e36f2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e36f70; end: 103e36fa3;  */

void FUN_103e36f70(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e36fa4; end: 103e36feb; -[SCCofUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e36fa4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130185c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130185c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130185d0));
  return;
}



/* Entry: 103e36fec; end: 103e3700b;  */

void FUN_103e36fec(void)

{
  _objc_opt_self(&PTR_PTR_112954210);
  return;
}



/* Entry: 103e3700c; end: 103e3704f; -[SCSCApplicationConfigProvidingSaberEntryPoint end] */

void FUN_103e3700c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37050; end: 103e37083;  */

void FUN_103e37050(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e37084; end: 103e370db; -[SCSCApplicationConfigProvidingSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37084(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018600);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018608);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113018610));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113018618));
  return;
}



/* Entry: 103e370dc; end: 103e370fb;  */

void FUN_103e370dc(void)

{
  _objc_opt_self(&PTR_PTR_1129542d8);
  return;
}



/* Entry: 103e370fc; end: 103e3713f; -[SCSCCircumstanceEngineServicesSaberEntryPoint end] */

void FUN_103e370fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37140; end: 103e37173;  */

void FUN_103e37140(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e37174; end: 103e371cb; -[SCSCCircumstanceEngineServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37174(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018648);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018650);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113018658));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113018660));
  return;
}



/* Entry: 103e371cc; end: 103e371eb;  */

void FUN_103e371cc(void)

{
  _objc_opt_self(&PTR_PTR_1129543a8);
  return;
}



/* Entry: 103e371ec; end: 103e37273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e371ec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4f2b4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113018690) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113018698) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e37274);
  (*pcVar1)();
}



/* Entry: 103e37274; end: 103e372d3; -[_TtC35ComposerUserSessionScopeGraphBridge50ComposerUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e37274(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComposerUserSessionScopeGraphBridge.ComposerUserSessionScopeGraphBridgeSaberEntryPoint"
             ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e372a0);
  (*pcVar1)();
}



/* Entry: 103e372d4; end: 103e3730b; -[_TtC35ComposerUserSessionScopeGraphBridge50ComposerUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e372d4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113018690));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113018698));
  return;
}



/* Entry: 103e3730c; end: 103e37333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3730c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113018698),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113018690));
  return;
}



/* Entry: 103e37334; end: 103e373cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e37334(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113018990);
  *(undefined8 *)(unaff_x20 + _DAT_1130186c8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130186d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e373d0; end: 103e3742f; -[_TtC35ComposerUserSessionScopeGraphBridge49SCComposerNetworkingBridgeServicesSaberEntryPoint init] */

void FUN_103e373d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComposerUserSessionScopeGraphBridge.SCComposerNetworkingBridgeServicesSaberEntryPoint"
             ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e373fc);
  (*pcVar1)();
}



/* Entry: 103e37430; end: 103e374c3; -[_TtC35ComposerUserSessionScopeGraphBridge49SCComposerNetworkingBridgeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37430(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130186c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130186d0));
  return;
}



/* Entry: 103e374c4; end: 103e374cb;  */

undefined8 FUN_103e374c4(void)

{
  return 0;
}



/* Entry: 103e374cc; end: 103e3752f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e374cc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113018980);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e37530; end: 103e37537;  */

void FUN_103e37530(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e37538; end: 103e375d7;  */

void FUN_103e37538(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e375d8; end: 103e375f7;  */

void FUN_103e375d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e375f8; end: 103e3765b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e375f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113018988);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e3765c; end: 103e37663;  */

void FUN_103e3765c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e37664; end: 103e37703;  */

void FUN_103e37664(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e37704; end: 103e37723;  */

void FUN_103e37704(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e37724; end: 103e37787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e37724(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113018998);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e37788; end: 103e3778f;  */

void FUN_103e37788(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e37790; end: 103e3782f;  */

void FUN_103e37790(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e37830; end: 103e3784f;  */

void FUN_103e37830(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e37850; end: 103e378db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113018980) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113018988) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113018990) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113018998) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e378dc; end: 103e3793b; -[_TtC35ComposerUserSessionScopeGraphBridge43ComposerUserSessionScopeGraphBridgeServices init] */

void FUN_103e378dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComposerUserSessionScopeGraphBridge.ComposerUserSessionScopeGraphBridgeServices",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e37908);
  (*pcVar1)();
}



/* Entry: 103e3793c; end: 103e379ef; -[_TtC35ComposerUserSessionScopeGraphBridge43ComposerUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3793c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113018990));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113018980));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113018988));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113018998));
  return;
}



/* Entry: 103e379f0; end: 103e37a27;  */

undefined1  [16] FUN_103e379f0(void)

{
  return ZEXT816(0x110717648);
}



/* Entry: 103e37a28; end: 103e37a6b; -[SCComposerUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e37a28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37a6c; end: 103e37a9f;  */

void FUN_103e37a6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e37aa0; end: 103e37ae7; -[SCComposerUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37aa0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130189f0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130189f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113018a00));
  return;
}



/* Entry: 103e37ae8; end: 103e37b07;  */

void FUN_103e37ae8(void)

{
  _objc_opt_self(&PTR_PTR_1129546e0);
  return;
}



/* Entry: 103e37b08; end: 103e37b4b; -[SCSCComposerNetworkingBridgeServicesSaberEntryPoint end] */

void FUN_103e37b08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37b4c; end: 103e37b7f;  */

void FUN_103e37b4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e37b80; end: 103e37bd7; -[SCSCComposerNetworkingBridgeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37b80(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018a30);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018a38);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113018a40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113018a48));
  return;
}



/* Entry: 103e37bd8; end: 103e37bf7;  */

void FUN_103e37bd8(void)

{
  _objc_opt_self(&PTR_PTR_1129547a8);
  return;
}



/* Entry: 103e37bf8; end: 103e37c03; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37bf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018a78;
  _swift_beginAccess(param_1 + _DAT_113018a78,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37c04; end: 103e37c0f; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018a78;
  _swift_beginAccess(param_1 + _DAT_113018a78,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e37c10; end: 103e37c1b; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider composerUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37c10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018a80;
  _swift_beginAccess(param_1 + _DAT_113018a80,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37c1c; end: 103e37c5f;  */

void FUN_103e37c1c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37c60; end: 103e37c6b; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider setComposerUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e37c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018a80;
  _swift_beginAccess(param_1 + _DAT_113018a80,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e37c6c; end: 103e37cbf;  */

void FUN_103e37c6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e37cc0; end: 103e37ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e37cc0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4003c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e3755c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113018980);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113018a88);
      *(long *)(unaff_x20 + _DAT_113018a88) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "ComposerUserSessionScopeGraphBridge/SCSCComposerAnimatedImageViewServicesSaberServiceProvider.swift"
             ,99,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e37dec);
  (*pcVar1)();
}



/* Entry: 103e37ed4; end: 103e37f07; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider provide] */

void FUN_103e37ed4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e37cc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e37f08; end: 103e37f3b; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider __safeProvide] */

void FUN_103e37f08(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e37dec();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e37f3c; end: 103e37f7f; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider end] */

void FUN_103e37f3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e37f80; end: 103e38117;  */

void FUN_103e37f80(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e3ebe0)) {
      uVar2 = 0xd00000000000002b;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000002b,0x800000010f1c1420,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ComposerUserSessionScopeGraphBridge/SCSCComposerAnimatedImageViewServicesSaberServiceProvider.swift"
                   ,99,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e38118);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c536fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e38118; end: 103e381c3; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e38118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103e37f80(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e381c4; end: 103e38237; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e381c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113018a78,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113018a80,0);
  *(undefined8 *)(param_1 + _DAT_113018a88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e38238; end: 103e3826b;  */

void FUN_103e38238(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e3826c; end: 103e382b3; -[SCSCComposerAnimatedImageViewServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3826c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018a78);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113018a88));
  return;
}



/* Entry: 103e382b4; end: 103e382d3;  */

void FUN_103e382b4(void)

{
  _objc_opt_self(&PTR_PTR_113018ad0);
  return;
}



/* Entry: 103e382d4; end: 103e382df; -[SCSCComposerApplicationBridgeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e382d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018b38;
  _swift_beginAccess(param_1 + _DAT_113018b38,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e382e0; end: 103e382eb; -[SCSCComposerApplicationBridgeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e382e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018b38;
  _swift_beginAccess(param_1 + _DAT_113018b38,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e382ec; end: 103e382f7; -[SCSCComposerApplicationBridgeServicesSaberServiceProvider composerUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e382ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018b40;
  _swift_beginAccess(param_1 + _DAT_113018b40,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e382f8; end: 103e3833b;  */

void FUN_103e382f8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e3833c; end: 103e38347; -[SCSCComposerApplicationBridgeServicesSaberServiceProvider setComposerUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3833c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018b40;
  _swift_beginAccess(param_1 + _DAT_113018b40,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e22344; end: 103e22377;  */

void FUN_103e22344(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e22378; end: 103e22387; -[SCBitmojiFashionTrayOutfitOption .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e22378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113014790));
  return;
}



/* Entry: 103e22388; end: 103e223c7;  */

void FUN_103e22388(void)

{
  _objc_opt_self(&PTR_PTR_112951188);
  return;
}



/* Entry: 103e223c8; end: 103e223d3;  */

void FUN_103e223c8(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103e223d4; end: 103e22443;  */

ulong * FUN_103e223d4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  _objc_retain(uVar1 & 0x7fffffffffffffff);
  _objc_release(uVar2 & 0x7fffffffffffffff);
  return param_1;
}



/* Entry: 103e22444; end: 103e2253b;  */

int FUN_103e22444(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103e2253c; end: 103e22677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2253c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&uStack_70);
  if (param_9 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar4 = FUN_103e22678;
  }
  else {
    puVar3 = &UNK_110715e68;
    _swift_allocObject(&UNK_110715e68,0x20,7);
    *(long *)(puVar3 + 0x10) = param_9;
    *(undefined8 *)(puVar3 + 0x18) = param_10;
    pcVar4 = (code *)0x103e2269c;
  }
  uVar1 = uStack_70;
  _swift_getObjectType();
  puVar2 = &UNK_110715e40;
  _swift_allocObject(&UNK_110715e40,0x20,7);
  *(code **)(puVar2 + 0x10) = pcVar4;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  pcVar4 = *(code **)(lStack_68 + 8);
  func_0x000100b64c10(param_9,param_10);
  (*pcVar4)(0,param_2,param_3,param_6,param_7,param_4,param_5,0,0,0,0,param_1,0,param_8,
            FUN_103e2267c,puVar2,uVar1,lStack_68);
  _swift_unknownObjectRelease(uStack_70);
  _swift_release(puVar2);
  return;
}



/* Entry: 103e22678; end: 103e2267b;  */

void FUN_103e22678(void)

{
  return;
}



/* Entry: 103e2267c; end: 103e226bb;  */

void FUN_103e2267c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103e226bc; end: 103e2299f; -[_TtC38SCBitmojiFashionTrayPresentingServices36BitmojiFashionTrayPresentingServices presentFashionTrayWithAvatarIdOverrides:title:surfaceType:parentSessionId:presentingViewController:completion:] */

void FUN_103e226bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_70;
  
  __Block_copy();
  puVar2 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  if (param_4 == 0) {
    lStack_70 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar4 = puVar2;
    lStack_70 = param_4;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  puVar3 = puVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  if (param_8 == 0) {
    puVar5 = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    puVar5 = &UNK_110715f58;
    _swift_allocObject(&UNK_110715f58,0x18,7);
    *(long *)(puVar5 + 0x10) = param_8;
    uVar6 = 0x103e2318c;
  }
  uVar1 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_1);
  FUN_103e2253c(param_3,lStack_70,puVar4,param_5,puVar2,param_6,puVar3,param_7,uVar6,puVar5);
  func_0x00010058d43c(uVar6,puVar5);
  _objc_release(uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
  return;
}



/* Entry: 103e229a0; end: 103e229a3;  */

void FUN_103e229a0(void)

{
  return;
}



/* Entry: 103e229a4; end: 103e22d57; -[_TtC38SCBitmojiFashionTrayPresentingServices36BitmojiFashionTrayPresentingServices presentFashionTrayWithAvatarIdOverrides:title:surfaceType:parentSessionId:presentingViewController:onViewMore:completion:] */

void FUN_103e229a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  
  __Block_copy();
  __Block_copy();
  puVar3 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3);
  if (param_4 == 0) {
    puStack_68 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    puStack_68 = puVar3;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar4 = puVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = &UNK_110715f08;
  _swift_allocObject(&UNK_110715f08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  if (param_9 == 0) {
    puVar5 = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    puVar5 = &UNK_110715f30;
    _swift_allocObject(&UNK_110715f30,0x18,7);
    *(long *)(puVar5 + 0x10) = param_9;
    uVar6 = 0x103e23188;
  }
  uVar2 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_1);
  func_0x000103e22818(param_3,param_4,puStack_68,param_5,puVar3,param_6,puVar4,param_7,FUN_103e23148
                      ,puVar1,uVar6,puVar5);
  func_0x00010058d43c(uVar6,puVar5);
  _objc_release(uVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(puVar4);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puStack_68);
  return;
}



/* Entry: 103e22d58; end: 103e22e7b; -[_TtC38SCBitmojiFashionTrayPresentingServices36BitmojiFashionTrayPresentingServices presentFashionTrayWithGarmentOptions:surfaceType:granularSource:presentingViewController:completion:] */

void FUN_103e22d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __Block_copy();
  uVar1 = 0;
  FUN_103e22388(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  puVar2 = &UNK_110715ee0;
  _swift_allocObject(&UNK_110715ee0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  uVar3 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_1);
  func_0x000103e22b44(param_3,param_4,uVar1,param_5,uVar4,param_6,FUN_103e2313c,puVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103e22e7c; end: 103e22e97;  */

void FUN_103e22e7c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103e22e98();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103e22e98; end: 103e22f9f;  */

undefined * FUN_103e22e98(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e22fa0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d4b0f8;
    func_0x0001000285a8(0x112d4b0f8,&UNK_10d911858);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&UNK_110715e20);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103e22fa0; end: 103e2313b;  */

ulong FUN_103e22fa0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e23070);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e23074);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_103e22388(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_103e22388(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001f,0x800000010f1be610);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e2313c);
  (*pcVar2)();
}



/* Entry: 103e2313c; end: 103e23147;  */

void FUN_103e2313c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103e23144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103e23148; end: 103e2317f;  */

void FUN_103e23148(undefined8 param_1)

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



/* Entry: 103e23180; end: 103e2318f;  */

void FUN_103e23180(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103e23190; end: 103e231db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e23190(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130147f0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e231dc; end: 103e2323b; -[_TtC38SCBitmojiFashionTrayPresentingServices36BitmojiFashionTrayPresentingServices init] */

void FUN_103e231dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiFashionTrayPresentingServices.BitmojiFashionTrayPresentingServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e23208);
  (*pcVar1)();
}



/* Entry: 103e2323c; end: 103e2324b;  */

undefined1  [16] FUN_103e2323c(void)

{
  return ZEXT816(0x110715f80);
}



/* Entry: 103e2324c; end: 103e2325b; -[_TtC38SCBitmojiFashionTrayPresentingServices36BitmojiFashionTrayPresentingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2324c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130147f0));
  return;
}



/* Entry: 103e2325c; end: 103e2326b; -[_TtC28SCBitmojiProfileLensServices28SCBitmojiProfileLensServices profileLensProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2325c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113014820));
  return;
}



/* Entry: 103e2326c; end: 103e232b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2326c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113014820) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e232b8; end: 103e23317; -[_TtC28SCBitmojiProfileLensServices28SCBitmojiProfileLensServices init] */

void FUN_103e232b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiProfileLensServices.SCBitmojiProfileLensServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e232e4);
  (*pcVar1)();
}



/* Entry: 103e23318; end: 103e23327; -[_TtC28SCBitmojiProfileLensServices28SCBitmojiProfileLensServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e23318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113014820));
  return;
}



/* Entry: 103e23328; end: 103e233af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e23328(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4c6bc();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113014850) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113014858) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e233b0);
  (*pcVar1)();
}



/* Entry: 103e233b0; end: 103e2340f; -[_TtC32CameoUserSessionScopeGraphBridge47CameoUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e233b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameoUserSessionScopeGraphBridge.CameoUserSessionScopeGraphBridgeSaberEntryPoint",0x50
             ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e233dc);
  (*pcVar1)();
}



/* Entry: 103e23410; end: 103e23447; -[_TtC32CameoUserSessionScopeGraphBridge47CameoUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e23410(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113014850));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113014858));
  return;
}



/* Entry: 103e23448; end: 103e2346f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e23448(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113014858),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113014850));
  return;
}



/* Entry: 103e23470; end: 103e2350b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e23470(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113015388);
  *(undefined8 *)(unaff_x20 + _DAT_113014888) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113014890) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e2350c; end: 103e2356b; -[_TtC32CameoUserSessionScopeGraphBridge31SCBloopsServicesSaberEntryPoint init] */

void FUN_103e2350c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameoUserSessionScopeGraphBridge.SCBloopsServicesSaberEntryPoint",0x40,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e23538);
  (*pcVar1)();
}



/* Entry: 103e2356c; end: 103e235ff; -[_TtC32CameoUserSessionScopeGraphBridge31SCBloopsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e2356c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113014888));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113014890));
  return;
}



/* Entry: 103e23600; end: 103e23607;  */

undefined8 FUN_103e23600(void)

{
  return 0;
}



/* Entry: 103e23608; end: 103e2366b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23608(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113015360);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2366c; end: 103e23673;  */

void FUN_103e2366c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e23674; end: 103e23713;  */

void FUN_103e23674(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e23714; end: 103e23733;  */

void FUN_103e23714(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e23734; end: 103e23797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23734(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113015368);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e23798; end: 103e2379f;  */

void FUN_103e23798(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e237a0; end: 103e2383f;  */

void FUN_103e237a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e23840; end: 103e2385f;  */

void FUN_103e23840(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e23860; end: 103e238c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23860(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113015370);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e238c4; end: 103e238cb;  */

void FUN_103e238c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e238cc; end: 103e2396b;  */

void FUN_103e238cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e2396c; end: 103e2398b;  */

void FUN_103e2396c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e2398c; end: 103e239ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e2398c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113015378);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e239f0; end: 103e239f7;  */

void FUN_103e239f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e239f8; end: 103e23a97;  */

void FUN_103e239f8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e23a98; end: 103e23ab7;  */

void FUN_103e23a98(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e23ab8; end: 103e23b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23ab8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113015380);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e23b1c; end: 103e23b23;  */

void FUN_103e23b1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e23b24; end: 103e23bc3;  */

void FUN_103e23b24(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e23bc4; end: 103e23be3;  */

void FUN_103e23bc4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e23be4; end: 103e23c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23be4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113015390);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e23c48; end: 103e23c4f;  */

void FUN_103e23c48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e23c50; end: 103e23cef;  */

void FUN_103e23c50(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e23cf0; end: 103e23d0f;  */

void FUN_103e23cf0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e23d10; end: 103e23d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23d10(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113015398);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e23d74; end: 103e23d7b;  */

void FUN_103e23d74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e23d7c; end: 103e23e1b;  */

void FUN_103e23d7c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e23e1c; end: 103e23e3b;  */

void FUN_103e23e1c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e23e3c; end: 103e23e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23e3c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130153a0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e23ea0; end: 103e23ea7;  */

void FUN_103e23ea0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e23ea8; end: 103e23f47;  */

void FUN_103e23ea8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e23f48; end: 103e23f67;  */

void FUN_103e23f48(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e23f68; end: 103e23fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e23f68(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130153a8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e23fcc; end: 103e23fd3;  */

void FUN_103e23fcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e23fd4; end: 103e24073;  */

void FUN_103e23fd4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e24074; end: 103e24093;  */

void FUN_103e24074(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e24094; end: 103e240f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e24094(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130153b0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e240f8; end: 103e240ff;  */

void FUN_103e240f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e24100; end: 103e2419f;  */

void FUN_103e24100(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e241a0; end: 103e241bf;  */

void FUN_103e241a0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e241c0; end: 103e24223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e241c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130153b8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e24224; end: 103e2422b;  */

void FUN_103e24224(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e2422c; end: 103e242cb;  */

void FUN_103e2422c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e242cc; end: 103e242eb;  */

void FUN_103e242cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e242ec; end: 103e2434f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e242ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130153c0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e24350; end: 103e24357;  */

void FUN_103e24350(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e24358; end: 103e243f7;  */

void FUN_103e24358(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e243f8; end: 103e24417;  */

void FUN_103e243f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e24418; end: 103e2447b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e24418(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130153c8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e2447c; end: 103e24483;  */

void FUN_103e2447c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e24484; end: 103e24523;  */

void FUN_103e24484(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e24524; end: 103e24543;  */

void FUN_103e24524(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e24544; end: 103e24697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e24544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113015360) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113015368) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113015370) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113015378) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113015380) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113015388) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113015390) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113015398) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130153a0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_1130153a8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130153b0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_1130153b8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_1130153c0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_1130153c8) = param_14;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e24698; end: 103e246f7; -[_TtC32CameoUserSessionScopeGraphBridge40CameoUserSessionScopeGraphBridgeServices init] */

void FUN_103e24698(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameoUserSessionScopeGraphBridge.CameoUserSessionScopeGraphBridgeServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e246c4);
  (*pcVar1)();
}



/* Entry: 103e246f8; end: 103e2484b; -[_TtC32CameoUserSessionScopeGraphBridge40CameoUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e246f8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015388));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015360));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015368));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015370));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015378));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015380));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015390));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113015398));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130153a0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130153a8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130153b0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130153b8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130153c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130153c8));
  return;
}



/* Entry: 103e2484c; end: 103e24883;  */

undefined1  [16] FUN_103e2484c(void)

{
  return ZEXT816(0x1107162a0);
}



/* Entry: 103e24884; end: 103e248c7; -[SCCameoUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e24884(undefined8 param_1)

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



/* Entry: 103e248c8; end: 103e248fb;  */

void FUN_103e248c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e248fc; end: 103e24943; -[SCCameoUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e248fc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113015420);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113015428));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113015430));
  return;
}



/* Entry: 103e24944; end: 103e24963;  */

void FUN_103e24944(void)

{
  _objc_opt_self(&PTR_PTR_112951750);
  return;
}



/* Entry: 103e24964; end: 103e249a7; -[SCSCBloopsServicesSaberEntryPoint end] */

void FUN_103e24964(undefined8 param_1)

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



/* Entry: 103e249a8; end: 103e249db;  */

void FUN_103e249a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e249dc; end: 103e24a33; -[SCSCBloopsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e249dc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113015460);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113015468);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113015470));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113015478));
  return;
}



/* Entry: 103e24a34; end: 103e24a53;  */

void FUN_103e24a34(void)

{
  _objc_opt_self(&PTR_PTR_112951818);
  return;
}



/* Entry: 103e24a54; end: 103e24a5f; -[SCDreams2PFriendSelectionServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e24a54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130154a8;
  _swift_beginAccess(param_1 + _DAT_1130154a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



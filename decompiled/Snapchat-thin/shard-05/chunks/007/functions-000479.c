/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10405f3d8; end: 10405f41f; -[SCOAuthLoginConfig init] */

void FUN_10405f3d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AuthenticationExperimentServices/OAuthLoginConfigWrapper.swift",0x3e,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405f420);
  (*pcVar1)();
}



/* Entry: 10405f420; end: 10405f513; -[SCOAuthLoginConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f420(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113052408));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113052410));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113052418));
  return;
}



/* Entry: 10405f514; end: 10405f54b;  */

void FUN_10405f514(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10405f54c; end: 10405f567; -[SCOAuthLoginPage description] */

void FUN_10405f54c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405f568; end: 10405f5af; -[SCOAuthLoginPage init] */

void FUN_10405f568(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AuthenticationExperimentServices/OAuthLoginConfigWrapper.swift",0x3e,2,0x7d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10405f5b0);
  (*pcVar1)();
}



/* Entry: 10405f5b0; end: 10405f5f7; -[SCOAuthLoginPage hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f5b0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_113052420));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10405f5f8; end: 10405f697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10405f5f8(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113052420);
      cVar2 = *(char *)(lStack_58 + _DAT_113052420);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 10405f698; end: 10405f6a3; -[SCOAuthLoginPage isEqual:] */

uint FUN_10405f698(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10405f5f8(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10405f6a4; end: 10405f72f;  */

uint FUN_10405f6a4(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10405f730; end: 10405f737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f730(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113052420) = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405f738; end: 10405f747; +[SCOAuthLoginPage oneTapLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f738(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113052420) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405f748; end: 10405f757; +[SCOAuthLoginPage splash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f748(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113052420) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405f758; end: 10405f7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f758(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113052420) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10405f7a4; end: 10405f7ab; +[SCOAuthLoginPage passwordLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f7a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113052420) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405f7ac; end: 10405f7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f7ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113052420) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10405f7fc; end: 10405f82b; -[SCOAuthLoginPage matchOneTapLogin:splash:passwordLogin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10405f7fc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_113052420) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_113052420) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010405f824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 10405f82c; end: 10405f85f;  */

void FUN_10405f82c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10405f860; end: 10405fa07;  */

ulong FUN_10405f860(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10405f934);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10405f938);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010486de80(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = 0;
    func_0x00010486de80(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x707954687475414f,0xed0000636a624f65);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10405fa08);
  (*pcVar2)();
}



/* Entry: 10405fa08; end: 10405fa5f;  */

void FUN_10405fa08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10405fa60();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10405fa60; end: 10405fb7f;  */

undefined * FUN_10405fa60(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10405fb80);
        (*pcVar3)();
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
  puVar5 = param_1;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = param_1;
    FUN_10405fc70();
    _swift_allocObject();
    puVar5 = puVar4;
    _malloc_size();
    puVar1 = puVar5 + -0x19;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    func_0x00010405fa24();
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar7,puVar5);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar2,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 10405fb80; end: 10405fc6f;  */

undefined * FUN_10405fb80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10405fc70);
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
    puVar3 = (undefined *)0x113052480;
    func_0x0001000285a8(0x113052480,&UNK_10dcca2e8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 10405fc70; end: 10405fcc7;  */

void FUN_10405fc70(void)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar3 == 0) || (func_0x00010405fa24(), lVar3 == 0)) {
    puVar1 = (ulong *)0x112da3e10;
    plVar4 = (long *)&UNK_10d957ed0;
  }
  else {
    puVar1 = (ulong *)0x112d36e60;
    plVar4 = (long *)&UNK_10d901170;
  }
  if (*puVar1 == 0 || (*puVar1 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar4 + (long)(int)*plVar4);
    func_0x000107c61518(puVar2,*plVar4 >> 0x20,0,0);
    *puVar1 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10405fcc8; end: 10405fe53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10405fcc8(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_113052408);
  uVar6 = *(undefined8 *)(param_1 + _DAT_113052410);
  uVar7 = *(ulong *)(param_1 + _DAT_113052418);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar8 == 0) {
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    func_0x00010405fa44(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10405fe54);
      (*pcVar3)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar1 = *(undefined1 *)(*(long *)(uVar7 + uVar9 * 8 + 0x20) + _DAT_113052420);
      }
      else {
        uVar4 = uVar9;
        func_0x00010151e550(uVar9,uVar7);
        uVar1 = *(undefined1 *)(uVar4 + _DAT_113052420);
        _swift_unknownObjectRelease();
      }
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x00010405fa44(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      puVar2[uVar4 + 0x20] = uVar1;
    } while (uVar8 != uVar9);
  }
  return uVar5;
}



/* Entry: 10405fe54; end: 10405fe73;  */

void FUN_10405fe54(void)

{
  _objc_opt_self(&PTR_PTR_1129820e0);
  return;
}



/* Entry: 10405fe74; end: 10405ffdb;  */

int FUN_10405fe74(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10405fef0;
        goto LAB_10405fed4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10405fed4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10405fef0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10405ffdc; end: 10406001b;  */

void FUN_10405ffdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca248;
  _swift_getWitnessTable(&UNK_10dcca248,&UNK_11073bb20);
  puRam0000000113052478 = puVar1;
  return;
}



/* Entry: 10406001c; end: 10406001f; -[SCOAuthLoginConfig copyWithZone:] */

void FUN_10406001c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104060020; end: 104060027; -[SCOAuthLoginPage copyWithZone:] */

void FUN_104060020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104060028; end: 1040601d7;  */

undefined8 FUN_104060028(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar1 = PTR_PTR_1126e2dd0;
  _objc_allocWithZone(PTR_PTR_1126e2dd0);
  _objc_retain(unaff_x20);
  func_0x00010bfee200(puVar1);
  if ((param_4 & 0xff) == 0) {
    func_0x000107c52c78(puVar1);
  }
  else {
    if (((uint)param_4 & 0xff) == 1) {
      puVar3 = PTR_PTR_1126e2dd8;
      _objc_allocWithZone(PTR_PTR_1126e2dd8);
      func_0x00010bfee200();
      func_0x000107c5a4d8(puVar3);
      func_0x000107c55994(puVar1);
    }
    else {
      uVar2 = param_1;
      _objc_retain(param_1);
      func_0x000107c52c78(puVar1);
      puVar3 = PTR_PTR_1126adb70;
      _objc_allocWithZone(PTR_PTR_1126adb70);
      func_0x00010bfee200();
      uVar4 = param_2;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
      func_0x000107c5721c(puVar3);
      _objc_release(uVar4);
      func_0x000107c55990(puVar1);
      _objc_release(uVar2);
    }
    _objc_release(puVar3);
  }
  _objc_retain(puVar1);
  func_0x000107c52590(unaff_x20);
  _objc_release(unaff_x20);
  FUN_103ff4790(param_1,param_2,param_3,param_4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return unaff_x20;
}



/* Entry: 1040601d8; end: 10406084f;  */

undefined8 FUN_1040601d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 3;
  puVar4 = &UNK_11073bc18;
  _swift_allocObject(&UNK_11073bc18,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_90;
  puVar5 = &UNK_11073bc40;
  _swift_allocObject(&UNK_11073bc40,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_104060850;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a0 = FUN_104060868;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_10006eb60;
  puStack_a8 = &UNK_11073bc58;
  ppuVar6 = &puStack_c0;
  puStack_98 = puVar5;
  __Block_copy();
  puVar7 = puStack_98;
  _swift_retain(puVar5);
  _swift_release(puVar7);
  puVar7 = &UNK_11073bc90;
  _swift_allocObject(&UNK_11073bc90,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = &uStack_90;
  puVar8 = &UNK_11073bcb8;
  _swift_allocObject(&UNK_11073bcb8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x1040608a4;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_a0 = (code *)0x104060eec;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_10006eb60;
  puStack_a8 = &UNK_11073bcd0;
  ppuVar9 = &puStack_c0;
  puStack_98 = puVar8;
  __Block_copy();
  puVar10 = puStack_98;
  _swift_retain(puVar8);
  _swift_release(puVar10);
  puVar10 = &UNK_11073bd08;
  _swift_allocObject(&UNK_11073bd08,0x18,7);
  *(undefined8 **)(puVar10 + 0x10) = &uStack_90;
  puVar11 = &UNK_11073bd30;
  _swift_allocObject(&UNK_11073bd30,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_1040608b4;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_a0 = FUN_1040608d8;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100de58b0;
  puStack_a8 = &UNK_11073bd48;
  ppuVar12 = &puStack_c0;
  puStack_98 = puVar11;
  __Block_copy(ppuVar12);
  puVar13 = puStack_98;
  _swift_retain(puVar11);
  _swift_release(puVar13);
  puVar13 = &UNK_11073bd80;
  _swift_allocObject(&UNK_11073bd80,0x18,7);
  *(undefined8 **)(puVar13 + 0x10) = &uStack_90;
  puVar14 = &UNK_11073bda8;
  _swift_allocObject(&UNK_11073bda8,0x20,7);
  *(code **)(puVar14 + 0x10) = FUN_1040608f8;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_a0 = FUN_104060908;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100de58f0;
  puStack_a8 = &UNK_11073bdc0;
  ppuVar15 = &puStack_c0;
  puStack_98 = puVar14;
  __Block_copy(ppuVar15);
  puVar16 = puStack_98;
  _swift_retain(puVar14);
  _swift_release(puVar16);
  puVar16 = &UNK_11073bdf8;
  _swift_allocObject(&UNK_11073bdf8,0x18,7);
  *(undefined8 **)(puVar16 + 0x10) = &uStack_90;
  puVar17 = &UNK_11073be20;
  _swift_allocObject(&UNK_11073be20,0x20,7);
  *(code **)(puVar17 + 0x10) = FUN_104060928;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  pcStack_a0 = (code *)0x104060ed4;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100de58f0;
  puStack_a8 = &UNK_11073be38;
  ppuVar18 = &puStack_c0;
  puStack_98 = puVar17;
  __Block_copy();
  puVar19 = puStack_98;
  _swift_retain(puVar17);
  _swift_release(puVar19);
  puVar19 = &UNK_11073be70;
  _swift_allocObject(&UNK_11073be70,0x18,7);
  *(undefined8 **)(puVar19 + 0x10) = &uStack_90;
  puVar20 = &UNK_11073be98;
  _swift_allocObject(&UNK_11073be98,0x20,7);
  *(undefined8 *)(puVar20 + 0x10) = 0x104060ef4;
  *(undefined **)(puVar20 + 0x18) = puVar19;
  pcStack_a0 = (code *)0x104060ed8;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100de58f0;
  puStack_a8 = &UNK_11073beb0;
  ppuVar21 = &puStack_c0;
  puStack_98 = puVar20;
  __Block_copy();
  puVar22 = puStack_98;
  _swift_retain(puVar20);
  _swift_release(puVar22);
  puVar22 = &UNK_11073bee8;
  _swift_allocObject(&UNK_11073bee8,0x18,7);
  *(undefined8 **)(puVar22 + 0x10) = &uStack_90;
  puVar23 = &UNK_11073bf10;
  _swift_allocObject(&UNK_11073bf10,0x20,7);
  *(undefined8 *)(puVar23 + 0x10) = 0x104060ef8;
  *(undefined **)(puVar23 + 0x18) = puVar22;
  pcStack_a0 = (code *)0x104060edc;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100de58f0;
  puStack_a8 = &UNK_11073bf28;
  ppuVar24 = &puStack_c0;
  puStack_98 = puVar23;
  __Block_copy();
  puVar1 = puStack_98;
  _swift_retain(puVar23);
  _swift_release(puVar1);
  func_0x000107c4c580(param_1);
  _objc_release(param_1);
  __Block_release(ppuVar24);
  __Block_release(ppuVar21);
  __Block_release(ppuVar18);
  __Block_release(ppuVar15);
  __Block_release(ppuVar12);
  __Block_release(ppuVar9);
  __Block_release(ppuVar6);
  uVar2 = uStack_90;
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x5e,0x38,0x28,1);
  _swift_release(puVar7);
  _swift_release(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104060838);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  _swift_isEscapingClosureAtFileLocation(puVar8,"",0x5e,0x3a,0x15,1);
  _swift_release(puVar10);
  _swift_release(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10406083c);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  _swift_isEscapingClosureAtFileLocation(puVar11,"",0x5e,0x3c,0x17,1);
  _swift_release(puVar13);
  _swift_release(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104060840);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  _swift_isEscapingClosureAtFileLocation(puVar14,"",0x5e,0x45,0x1f,1);
  _swift_release(puVar16);
  _swift_release(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar17;
    _swift_isEscapingClosureAtFileLocation(puVar17,"",0x5e,0x47,0x1f,1);
    _swift_release(puVar19);
    _swift_release(puVar17);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104060848);
      (*pcVar3)();
    }
    puVar4 = puVar20;
    _swift_isEscapingClosureAtFileLocation(puVar20,"",0x5e,0x49,0x18,1);
    _swift_release(puVar22);
    _swift_release(puVar20);
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar23;
      _swift_isEscapingClosureAtFileLocation(puVar23,"",0x5e,0x4b,0x19,1);
      _swift_release(puVar23);
      if (((ulong)puVar4 & 1) == 0) {
        return uVar2;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104060850);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10406084c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104060844);
  (*pcVar3)();
}



/* Entry: 104060850; end: 104060867;  */

void FUN_104060850(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  cVar3 = *(char *)(puVar4 + 2);
  *(undefined1 *)(puVar4 + 2) = 0;
  if ((cVar3 != '\x03') && (cVar3 != '\x02')) {
    if (cVar3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 104060868; end: 104060887;  */

void FUN_104060868(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 104060888; end: 1040608b3;  */

void FUN_104060888(long param_1,long param_2)

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



/* Entry: 1040608b4; end: 1040608d7;  */

void FUN_1040608b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104060d4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),1,&LAB_100de5fcc);
  return;
}



/* Entry: 1040608d8; end: 1040608f7;  */

void FUN_1040608d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1040608f8; end: 104060907;  */

void FUN_1040608f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = param_1;
  puVar4[1] = param_2;
  uVar3 = *(undefined1 *)(puVar4 + 2);
  *(undefined1 *)(puVar4 + 2) = 2;
  _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x000104060e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&LAB_100de5fcc)(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104060908; end: 104060927;  */

void FUN_104060908(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 104060928; end: 104060937;  */

void FUN_104060928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = param_1;
  puVar4[1] = param_2;
  uVar3 = *(undefined1 *)(puVar4 + 2);
  *(undefined1 *)(puVar4 + 2) = 3;
  _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x000104060e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&LAB_100de5fcc)(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104060938; end: 104060d1b;  */

undefined8 FUN_104060938(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 3;
  puVar4 = &UNK_11073bf60;
  _swift_allocObject(&UNK_11073bf60,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_88;
  puVar5 = &UNK_11073bf88;
  _swift_allocObject(&UNK_11073bf88,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_104060d1c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x104060ef0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10006eb60;
  puStack_a0 = &UNK_11073bfa0;
  ppuVar6 = &puStack_b8;
  puStack_90 = puVar5;
  __Block_copy();
  puVar7 = puStack_90;
  _swift_retain(puVar5);
  _swift_release(puVar7);
  puVar7 = &UNK_11073bfd8;
  _swift_allocObject(&UNK_11073bfd8,0x18,7);
  *(undefined8 **)(puVar7 + 0x10) = &uStack_88;
  puVar8 = &UNK_11073c000;
  _swift_allocObject(&UNK_11073c000,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_104060de8;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_98 = 0x104060ee8;
  puStack_b8 = puVar1;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_100de58b0;
  puStack_a0 = &UNK_11073c018;
  ppuVar9 = &puStack_b8;
  puStack_90 = puVar8;
  __Block_copy(ppuVar9);
  puVar10 = puStack_90;
  _swift_retain(puVar8);
  _swift_release(puVar10);
  puVar10 = &UNK_11073c050;
  _swift_allocObject(&UNK_11073c050,0x18,7);
  *(undefined8 **)(puVar10 + 0x10) = &uStack_88;
  puVar11 = &UNK_11073c078;
  _swift_allocObject(&UNK_11073c078,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_104060e0c;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_98 = 0x104060ee0;
  puStack_b8 = puVar1;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_100de58f0;
  puStack_a0 = &UNK_11073c090;
  ppuVar12 = &puStack_b8;
  puStack_90 = puVar11;
  __Block_copy(ppuVar12);
  puVar13 = puStack_90;
  _swift_retain(puVar11);
  _swift_release(puVar13);
  puVar13 = &UNK_11073c0c8;
  _swift_allocObject(&UNK_11073c0c8,0x18,7);
  *(undefined8 **)(puVar13 + 0x10) = &uStack_88;
  puVar14 = &UNK_11073c0f0;
  _swift_allocObject(&UNK_11073c0f0,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x104060e1c;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  uStack_98 = 0x104060ee4;
  puStack_b8 = puVar1;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_100de58f0;
  puStack_a0 = &UNK_11073c108;
  ppuVar15 = &puStack_b8;
  puStack_90 = puVar14;
  __Block_copy(ppuVar15);
  puVar1 = puStack_90;
  _swift_retain(puVar14);
  _swift_release(puVar1);
  func_0x000107c4c584(param_1);
  _objc_release(param_1);
  __Block_release(ppuVar15);
  __Block_release(ppuVar12);
  __Block_release(ppuVar9);
  __Block_release(ppuVar6);
  uVar2 = uStack_88;
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x5e,0x57,0x2a,1);
  _swift_release(puVar7);
  _swift_release(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104060d10);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  _swift_isEscapingClosureAtFileLocation(puVar8,"",0x5e,0x59,0x17,1);
  _swift_release(puVar10);
  _swift_release(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104060d14);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  _swift_isEscapingClosureAtFileLocation(puVar11,"",0x5e,0x62,0x26,1);
  _swift_release(puVar13);
  _swift_release(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104060d18);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  _swift_isEscapingClosureAtFileLocation(puVar14,"",0x5e,100,0x19,1);
  _swift_release(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104060d1c);
  (*pcVar3)();
}



/* Entry: 104060d1c; end: 104060d4b;  */

void FUN_104060d1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  uVar3 = *(undefined1 *)(puVar4 + 2);
  *(undefined1 *)(puVar4 + 2) = 1;
  (*(code *)&UNK_100dd0920)(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104060d4c; end: 104060de7;  */

void FUN_104060d4c(long param_1,long *param_2,undefined1 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != 0) {
    func_0x00010befe880();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar2 = 0;
      FUN_104063788();
      _objc_allocWithZone();
      func_0x00010bff2800();
      _objc_release(param_1);
      if (lVar2 != 0) {
        lVar3 = *param_2;
        lVar4 = param_2[1];
        *param_2 = lVar2;
        param_2[1] = 0;
        uVar1 = (undefined1)param_2[2];
        *(undefined1 *)(param_2 + 2) = param_3;
        goto LAB_104060dd0;
      }
    }
  }
  lVar3 = *param_2;
  lVar4 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = (undefined1)param_2[2];
  *(undefined1 *)(param_2 + 2) = 3;
LAB_104060dd0:
                    /* WARNING: Could not recover jumptable at 0x000104060de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar3,lVar4,uVar1);
  return;
}



/* Entry: 104060de8; end: 104060e0b;  */

void FUN_104060de8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104060d4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),0,&UNK_100dd0920);
  return;
}



/* Entry: 104060e0c; end: 104060e2b;  */

void FUN_104060e0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = param_1;
  puVar4[1] = param_2;
  uVar3 = *(undefined1 *)(puVar4 + 2);
  *(undefined1 *)(puVar4 + 2) = 2;
  _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x000104060e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100dd0920)(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104060e2c; end: 104060e83;  */

void FUN_104060e2c(undefined8 param_1,undefined8 param_2,undefined1 param_3,
                  code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  *puVar4 = param_1;
  puVar4[1] = param_2;
  uVar3 = *(undefined1 *)(puVar4 + 2);
  *(undefined1 *)(puVar4 + 2) = param_3;
  _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x000104060e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 104060e84; end: 104060efb;  */

void FUN_104060e84(long param_1,long param_2)

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



/* Entry: 104060efc; end: 104060f7f;  */

void FUN_104060efc(void)

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



/* Entry: 104060f80; end: 104060fbb;  */

uint FUN_104060f80(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  cVar4 = (char)param_2[2];
  bVar5 = (byte)param_1[2];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if (cVar4 == '\0') {
        uVar6 = (uint)uVar1 ^ (uint)uVar8 ^ 1;
        goto LAB_1040610ac;
      }
    }
    else if (cVar4 == '\x01') {
      uVar7 = 0;
      func_0x0001007bbbf8(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar1,uVar7);
      uVar6 = (uint)uVar8;
      goto LAB_1040610ac;
    }
  }
  else if (bVar5 == 2) {
    if (cVar4 == '\x02') {
      if (uVar2 == 0) goto LAB_104060ff4;
LAB_104061024:
      if ((uVar3 != 0) &&
         (((uVar8 == uVar1 && (uVar2 == uVar3)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar8,uVar2,uVar1,uVar3,0), (uVar8 & 1) != 0)))) goto LAB_104061064;
    }
  }
  else if (bVar5 == 3) {
    if (cVar4 == '\x03') {
      if (uVar2 != 0) goto LAB_104061024;
LAB_104060ff4:
      if (uVar3 == 0) goto LAB_104061064;
    }
  }
  else if ((cVar4 == '\x04') && (uVar3 == 0 && uVar1 == 0)) {
LAB_104061064:
    uVar6 = 1;
    goto LAB_1040610ac;
  }
  uVar6 = 0;
LAB_1040610ac:
  return uVar6 & 1;
}



/* Entry: 104060fbc; end: 1040611a7;  */

uint FUN_104060fbc(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        uVar1 = (uint)param_4 ^ (uint)param_1 ^ 1;
        goto LAB_1040610ac;
      }
    }
    else if (param_6 == '\x01') {
      uVar2 = 0;
      func_0x0001007bbbf8(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_4,uVar2);
      uVar1 = (uint)param_1;
      goto LAB_1040610ac;
    }
  }
  else if (param_3 == 2) {
    if (param_6 == '\x02') {
      if (param_2 == 0) goto LAB_104060ff4;
LAB_104061024:
      if ((param_5 != 0) &&
         (((param_1 == param_4 && (param_2 == param_5)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (param_1,param_2,param_4,param_5,0), (param_1 & 1) != 0)))) goto LAB_104061064;
    }
  }
  else if (param_3 == 3) {
    if (param_6 == '\x03') {
      if (param_2 != 0) goto LAB_104061024;
LAB_104060ff4:
      if (param_5 == 0) goto LAB_104061064;
    }
  }
  else if ((param_6 == '\x04') && (param_5 == 0 && param_4 == 0)) {
LAB_104061064:
    uVar1 = 1;
    goto LAB_1040610ac;
  }
  uVar1 = 0;
LAB_1040610ac:
  return uVar1 & 1;
}



/* Entry: 1040611a8; end: 1040611ab;  */

void FUN_1040611a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca310;
  _swift_getWitnessTable(&UNK_10dcca310,&UNK_11073c240);
  puRam0000000113052488 = puVar1;
  return;
}



/* Entry: 1040611ac; end: 1040611eb;  */

void FUN_1040611ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca310;
  _swift_getWitnessTable(&UNK_10dcca310,&UNK_11073c240);
  puRam0000000113052488 = puVar1;
  return;
}



/* Entry: 1040611ec; end: 1040611ef;  */

void FUN_1040611ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca378;
  _swift_getWitnessTable(&UNK_10dcca378,&UNK_11073c2d0);
  puRam0000000113052490 = puVar1;
  return;
}



/* Entry: 1040611f0; end: 10406122f;  */

void FUN_1040611f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcca378;
  _swift_getWitnessTable(&UNK_10dcca378,&UNK_11073c2d0);
  puRam0000000113052490 = puVar1;
  return;
}



/* Entry: 104061230; end: 10406125b;  */

long FUN_104061230(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10406125c; end: 10406126f;  */

void FUN_10406125c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  if (*(char *)(param_1 + 3) == '\x02') {
    _objc_release(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 104061270; end: 104061337;  */

undefined8 * FUN_104061270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x000100de5f68(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 104061338; end: 104061383;  */

undefined8 * FUN_104061338(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_103ff4790(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 104061384; end: 1040617ef;  */

int FUN_104061384(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1040617f0; end: 104061837;  */

undefined8 * FUN_1040617f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 104061838; end: 10406184b;  */

undefined8 * FUN_104061838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*(code *)&UNK_100dd0978)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*(code *)&UNK_100dd0920)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10406184c; end: 1040618ab;  */

undefined8 *
FUN_10406184c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*param_5)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 1040618ac; end: 1040618b7;  */

undefined8 * FUN_1040618ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*(code *)&UNK_100dd0920)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1040618b8; end: 1040618fb;  */

undefined8 * FUN_1040618b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*param_4)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1040618fc; end: 1040619eb;  */

int FUN_1040618fc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1040619ec; end: 104061e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1040619ec(long param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar16;
  long *plVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined1 *puVar20;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined *puStack_90;
  undefined8 ***pppuStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar10 = 0x112d36580;
  ppppuVar11 = (undefined8 ****)&UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = param_1;
  func_0x00010bf12b60();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar18 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    pppuStack_88 = (undefined8 ****)0x0;
    uVar6 = 0;
    FUN_10406205c(0);
    ppppuVar11 = &pppuStack_88;
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (lVar10,ppppuVar11,uVar6);
    _objc_release(lVar10);
    if ((undefined8 ****)pppuStack_88 != (undefined8 ****)0x0) {
      ppppuVar18 = (undefined8 ****)pppuStack_88;
    }
  }
  ppppuVar16 = (undefined8 ****)((ulong)ppppuVar18 & 0xffffffffffffff8);
  if ((ulong)ppppuVar18 >> 0x3e == 0) {
    ppppuVar19 = (undefined8 ****)ppppuVar16[2];
  }
  else {
    ppppuVar19 = ppppuVar16;
    if ((undefined8 ****)0x7fffffffffffffff < ppppuVar18) {
      ppppuVar19 = ppppuVar18;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar19 != (undefined8 ****)0x0) {
    ppppuVar9 = (undefined8 ****)0x0;
    puStack_98 = auStack_c0 + -extraout_x8;
    do {
      while( true ) {
        if (((ulong)ppppuVar18 & 0xc000000000000001) == 0) {
          if (ppppuVar16[2] <= ppppuVar9) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104061d60);
            (*pcVar5)();
          }
          ppppuVar7 = (undefined8 ****)ppppuVar18[(long)((long)ppppuVar9 + 4)];
          _objc_retain();
        }
        else {
          ppppuVar7 = ppppuVar9;
          ppppuVar11 = ppppuVar18;
          FUN_104061ea8();
        }
        ppppuVar1 = (undefined8 ****)((long)ppppuVar9 + 1);
        if (SCARRY8((long)ppppuVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104061d5c);
          (*pcVar5)();
        }
        ppppuVar8 = ppppuVar7;
        func_0x000107c5dce8();
        uVar4 = (int)ppppuVar8 - 1;
        if (uVar4 < 5) break;
        _objc_release(ppppuVar7);
        ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
        if (ppppuVar1 == ppppuVar19) goto LAB_104061d84;
      }
      uVar6 = *(undefined8 *)(&UNK_10dcca4e8 + (ulong)uVar4 * 8);
      ppppuVar9 = ppppuVar7;
      lStack_a8 = param_1;
      uStack_a0 = unaff_x20;
      func_0x000107c4a8ac();
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = uVar6;
      if (ppppuVar9 == (undefined8 ****)0x0) {
LAB_104061bd4:
        lVar10 = 0;
        __s10Foundation3URLVMa();
        puVar20 = puStack_98;
        (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puStack_98,1,1,lVar10);
      }
      else {
        ppppuVar8 = ppppuVar9;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar9);
        if (ppppuVar8 == (undefined8 ****)0x0) goto LAB_104061bd4;
        ppppuVar9 = ppppuVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(ppppuVar8);
        puVar20 = puStack_98;
        uVar3 = (ulong)ppppuVar9 & 0xffffffffffff;
        if (((ulong)ppppuVar11 & 0x2000000000000000) != 0) {
          uVar3 = (ulong)ppppuVar11 >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
          _swift_bridgeObjectRelease(ppppuVar11);
          goto LAB_104061bd4;
        }
        __s10Foundation3URLV6stringACSgSSh_tcfC(puStack_98,ppppuVar9,ppppuVar11);
        _swift_bridgeObjectRelease(ppppuVar11);
      }
      ppppuVar11 = ppppuVar7;
      func_0x000107c4cedc();
      uStack_b8 = (ulong)ppppuVar11 & 0xffffffff;
      ppppuVar11 = ppppuVar7;
      func_0x000107c4c82c();
      lVar14 = 0;
      FUN_104063688();
      lVar10 = lVar14;
      _objc_allocWithZone();
      *(undefined8 *)(lVar10 + _DAT_1130524a0) = uStack_b0;
      *(ulong *)(lVar10 + _DAT_1130524a8) = uStack_b8;
      *(ulong *)(lVar10 + _DAT_1130524b0) = (ulong)ppppuVar11 & 0xffffffff;
      func_0x000100029394(puVar20,lVar10 + _DAT_113813098);
      plVar17 = &lStack_70;
      ppppuVar11 = (undefined8 ****)PTR_s_init_1125d9248;
      lStack_70 = lVar10;
      lStack_68 = lVar14;
      _objc_msgSendSuper2();
      _objc_release(ppppuVar7);
      func_0x0001000293e4(puVar20);
      puVar13 = puStack_90;
      puVar12 = puStack_90;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      param_1 = lStack_a8;
      if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        ppppuVar11 = (undefined8 ****)(puVar12 + 1);
        puVar12 = (undefined *)0x0;
        FUN_103ff51f0(0,ppppuVar11,1,puVar13);
        puVar13 = puVar12;
      }
      uVar15 = (ulong)puVar13 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar15 + 0x10);
      ppppuVar9 = (undefined8 ****)(uVar3 + 1);
      puStack_90 = puVar13;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar3) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        ppppuVar11 = ppppuVar9;
        FUN_103ff51f0(puVar12,ppppuVar9,1,puVar13);
        uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
        puStack_90 = puVar12;
      }
      *(undefined8 *****)(uVar15 + 0x10) = ppppuVar9;
      *(long **)(uVar15 + uVar3 * 8 + 0x20) = plVar17;
      ppppuVar9 = ppppuVar1;
      unaff_x20 = uStack_a0;
    } while (ppppuVar1 != ppppuVar19);
  }
LAB_104061d84:
  _swift_bridgeObjectRelease(ppppuVar18);
  if ((ulong)puStack_90 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puStack_90 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_90) {
      puVar13 = puStack_90;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar13 == (undefined *)0x0) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(puStack_90);
    uVar6 = unaff_x20;
    _swift_getObjectType(unaff_x20);
    _swift_deallocPartialClassInstance(unaff_x20,uVar6,0x20,7);
    plVar17 = (long *)0x0;
  }
  else {
    lVar14 = 0;
    FUN_104063788();
    lVar10 = lVar14;
    _objc_allocWithZone();
    *(undefined **)(lVar10 + _DAT_1130524b8) = puStack_90;
    puVar2 = (undefined8 *)(lVar10 + _DAT_1130524c0);
    *puVar2 = 0;
    puVar2[1] = 0;
    plVar17 = &lStack_80;
    lStack_80 = lVar10;
    lStack_78 = lVar14;
    _objc_msgSendSuper2(plVar17,PTR_s_init_1125d9248);
    _objc_release(param_1);
    uVar6 = unaff_x20;
    _swift_getObjectType(unaff_x20);
    _swift_deallocPartialClassInstance(unaff_x20,uVar6,0x20,7);
  }
  return plVar17;
}



/* Entry: 104061e80; end: 104061ea7; -[AgeVerificationChallengeData initWithAgeVerificationChallenge:] */

void FUN_104061e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1040619ec();
  return;
}



/* Entry: 104061ea8; end: 10406205b;  */

ulong FUN_104061ea8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104061f8c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104061f90);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_1126e2dc8;
    _objc_opt_self(PTR_PTR_1126e2dc8);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_1126e2dc8;
    _objc_opt_self(PTR_PTR_1126e2dc8);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10406205c(0);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10406205c);
  (*pcVar2)();
}



/* Entry: 10406205c; end: 10406209f;  */

void FUN_10406205c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113052498 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e2dc8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000113052498 = puVar1;
  return;
}



/* Entry: 1040620a0; end: 1040620b3;  */

bool FUN_1040620a0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1040620b4; end: 10406218b;  */

void FUN_1040620b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10406218c; end: 104062197;  */

void FUN_10406218c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104062198; end: 1040622a3;  */

undefined1  [16] FUN_104062198(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      auVar7._8_8_ = 0xe200000000000000;
      auVar7._0_8_ = 0x6469;
      return auVar7;
    }
    if (param_1 == 1) {
      auVar4._8_8_ = 0xe600000000000000;
      auVar4._0_8_ = 0x6c6169636166;
      return auVar4;
    }
  }
  else {
    if (param_1 == 2) {
      auVar5._8_8_ = 0xe900000000000064;
      auVar5._0_8_ = 0x497463656e6e6f63;
      return auVar5;
    }
    if (param_1 == 3) {
      auVar6._8_8_ = 0xe600000000000000;
      auVar6._0_8_ = 0x79654b656761;
      return auVar6;
    }
    if (param_1 == 4) {
      auVar3._8_8_ = 0xe600000000000000;
      auVar3._0_8_ = 0x746e65726170;
      return auVar3;
    }
  }
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x286e776f6e6b6e75;
  return auVar1;
}



/* Entry: 1040622a4; end: 1040622ab;  */

undefined1  [16] FUN_1040622a4(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar2 = *unaff_x20;
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      auVar8._8_8_ = 0xe200000000000000;
      auVar8._0_8_ = 0x6469;
      return auVar8;
    }
    if (lVar2 == 1) {
      auVar5._8_8_ = 0xe600000000000000;
      auVar5._0_8_ = 0x6c6169636166;
      return auVar5;
    }
  }
  else {
    if (lVar2 == 2) {
      auVar6._8_8_ = 0xe900000000000064;
      auVar6._0_8_ = 0x497463656e6e6f63;
      return auVar6;
    }
    if (lVar2 == 3) {
      auVar7._8_8_ = 0xe600000000000000;
      auVar7._0_8_ = 0x79654b656761;
      return auVar7;
    }
    if (lVar2 == 4) {
      auVar4._8_8_ = 0xe600000000000000;
      auVar4._0_8_ = 0x746e65726170;
      return auVar4;
    }
  }
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x286e776f6e6b6e75;
  return auVar1;
}



/* Entry: 1040622ac; end: 1040622bb; -[AgeVerificationOption method] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040622ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130524a0);
}



/* Entry: 1040622bc; end: 1040622cb; -[AgeVerificationOption minEligibleAge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040622bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130524a8);
}



/* Entry: 1040622cc; end: 1040622db; -[AgeVerificationOption maxEligibleAge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040622cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130524b0);
}



/* Entry: 1040622dc; end: 1040623b3; -[AgeVerificationOption webviewURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040622dc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_1040636c0(param_1 + _DAT_113813098,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1040623b4; end: 10406247b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1040623b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130524a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130524a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130524b0) = param_3;
  FUN_1040636c0(param_4,unaff_x20 + _DAT_113813098,0x112d36580,&UNK_10d9016d0);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x000104063708(param_4,0x112d36580,&UNK_10d9016d0);
  return puVar1;
}



/* Entry: 10406247c; end: 10406252b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10406247c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_1130524a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130524a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130524b0) = param_3;
  FUN_1040636c0(param_4,unaff_x20 + _DAT_113813098,0x112d36580,&UNK_10d9016d0);
  FUN_104063688();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000104063708(param_4,0x112d36580,&UNK_10d9016d0);
  return puVar1;
}



/* Entry: 10406252c; end: 104062677; -[AgeVerificationOption initWithMethod:minEligibleAge:maxEligibleAge:webviewURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10406252c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = (long)&lStack_50 - extraout_x8;
  if (param_6 == 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar1,param_6);
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar1,param_6 == 0,1);
  *(undefined8 *)(param_1 + _DAT_1130524a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130524a8) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130524b0) = param_5;
  FUN_1040636c0(lVar1,param_1 + _DAT_113813098,0x112d36580,&UNK_10d9016d0);
  uVar3 = 0;
  FUN_104063688();
  plVar4 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = uVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x000104063708(lVar1,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 104062678; end: 104062a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104062678(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar9;
  uint uVar10;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined1 *)(lVar12 - extraout_x8_00);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = (long)puVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  FUN_1040636c0(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    uVar5 = 0x112d387f8;
    puVar8 = &UNK_10d902650;
    puVar9 = auStack_80;
LAB_1040628f4:
    func_0x000104063708(puVar9,uVar5,puVar8);
  }
  else {
    uVar5 = 0;
    FUN_104063688(0);
    plVar6 = &lStack_88;
    _swift_dynamicCast(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
    lVar2 = _DAT_113813098;
    if (((ulong)plVar6 & 1) != 0) {
      if (((*(int *)(unaff_x20 + _DAT_1130524a0) == *(int *)(lStack_88 + _DAT_1130524a0)) &&
          (*(long *)(unaff_x20 + _DAT_1130524a8) == *(long *)(lStack_88 + _DAT_1130524a8))) &&
         (*(long *)(unaff_x20 + _DAT_1130524b0) == *(long *)(lStack_88 + _DAT_1130524b0))) {
        lStack_90 = lStack_88;
        FUN_1040636c0(lStack_88 + _DAT_113813098,lVar14,0x112d36580,&UNK_10d9016d0);
        iVar1 = *(int *)(lVar4 + 0x30);
        FUN_1040636c0(unaff_x20 + lVar2,puVar9,0x112d36580,&UNK_10d9016d0);
        FUN_1040636c0(lVar14,puVar9 + iVar1,0x112d36580,&UNK_10d9016d0);
        pcVar11 = *(code **)(lVar15 + 0x30);
        puVar7 = puVar9;
        (*pcVar11)(puVar9,1,lVar3);
        if ((int)puVar7 == 1) {
          _objc_release(lStack_90);
          func_0x000104063708(lVar14,0x112d36580,&UNK_10d9016d0);
          puVar7 = puVar9 + iVar1;
          (*pcVar11)(puVar7,1,lVar3);
          if ((int)puVar7 == 1) {
            func_0x000104063708(puVar9,0x112d36580,&UNK_10d9016d0);
            uVar10 = 1;
            goto LAB_104062904;
          }
        }
        else {
          FUN_1040636c0(puVar9,lVar13,0x112d36580,&UNK_10d9016d0);
          puVar7 = puVar9 + iVar1;
          (*pcVar11)(puVar7,1,lVar3);
          if ((int)puVar7 != 1) {
            (**(code **)(lVar15 + 0x20))(lVar12,puVar9 + iVar1,lVar3);
            uVar5 = 0x112d7e688;
            func_0x000104063748(0x112d7e688,PTR___s10Foundation3URLVSQAAMc_1103509a8);
            lVar4 = lVar13;
            __sSQ2eeoiySbx_xtFZTj(lVar13,lVar12,lVar3,uVar5);
            uVar10 = (uint)lVar4;
            _objc_release(lStack_90);
            pcVar11 = *(code **)(lVar15 + 8);
            (*pcVar11)(lVar12,lVar3);
            func_0x000104063708(lVar14,0x112d36580,&UNK_10d9016d0);
            (*pcVar11)(lVar13,lVar3);
            func_0x000104063708(puVar9,0x112d36580,&UNK_10d9016d0);
            goto LAB_104062904;
          }
          _objc_release(lStack_90);
          func_0x000104063708(lVar14,0x112d36580,&UNK_10d9016d0);
          (**(code **)(lVar15 + 8))(lVar13,lVar3);
        }
        uVar5 = 0x112d7e680;
        puVar8 = &UNK_10d95e350;
        goto LAB_1040628f4;
      }
      _objc_release();
    }
  }
  uVar10 = 0;
LAB_104062904:
  return uVar10 & 1;
}



/* Entry: 104062a40; end: 104062a4b; -[AgeVerificationOption isEqual:] */

uint FUN_104062a40(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104062678(&uStack_50);
  _objc_release(param_1);
  func_0x000104063708(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 104062a4c; end: 104062a7f; -[AgeVerificationOption hash] */

undefined8 FUN_104062a4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104062a80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104062a80; end: 104062c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104062a80(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar4 - extraout_x8_00;
  __ss6HasherVABycfC(auStack_98);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130524a0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130524a8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1130524b0));
  FUN_1040636c0(unaff_x20 + _DAT_113813098,lVar5,0x112d36580,&UNK_10d9016d0);
  lVar2 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar1);
  if ((int)lVar2 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar6 + 0x20))(puVar4,lVar5,lVar1);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar3 = 0x112e092e0;
    func_0x000104063748(0x112e092e0,PTR___s10Foundation3URLVSHAAMc_1103509a0);
    __sSH4hash4intoys6HasherVz_tFTj(auStack_98,lVar1,uVar3);
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104062c14; end: 104062c1f; -[AgeVerificationOption description] */

void FUN_104062c14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104062c20();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104062c20; end: 104062d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104062c20(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  __ss11_StringGutsV4growyySiF(0x39);
  uVar2 = 0x800000010f1e47e0;
  __sSS6appendyySSF(0xd00000000000001e,0x800000010f1e47e0);
  FUN_104062198(*(undefined8 *)(unaff_x20 + _DAT_1130524a0));
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x6567416e696d202c,0xea0000000000203a);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (_DAT_1130524a8,PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x65674178616d202c,0xea0000000000203a);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(_DAT_1130524b0,puVar1,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104062d70; end: 104062d9b; -[AgeVerificationOption init] */

void FUN_104062d70(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AgeVerificationScope.AgeVerificationOption",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104062d9c);
  (*pcVar1)();
}



/* Entry: 104062d9c; end: 104062dab;  */

void FUN_104062d9c(void)

{
  FUN_104063688();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104062dac; end: 104062ddb; -[AgeVerificationOption .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104062dac(long param_1)

{
  func_0x000104063708(param_1 + _DAT_113813098,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 104062ddc; end: 104062e2b; -[AgeVerificationChallengeData verificationOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104062ddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130524b8);
  FUN_104063688(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104062e2c; end: 104062feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104062e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130524b8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130524c0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104062fec; end: 10406322f;  */

uint FUN_104062fec(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104063230);
          (*pcVar1)();
        }
        FUN_104063688(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1040631d0);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1040631d4);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1040631d8);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_1040630f8;
LAB_1040630c8:
              func_0x000100de9c4c(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              func_0x000100de9c4c(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_1040630c8;
LAB_1040630f8:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1040631dc);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_104063208;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_104063208:
  return uVar8 & 1;
}



/* Entry: 104063230; end: 10406323b; -[AgeVerificationChallengeData isEqual:] */

uint FUN_104063230(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*(code *)0x104062e98)(&uStack_50);
  _objc_release(param_1);
  func_0x000104063708(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10406323c; end: 1040632d7;  */

uint FUN_10406323c(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x000104063708(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1040632d8; end: 10406330b; -[AgeVerificationChallengeData hash] */

undefined8 FUN_1040632d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10406330c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10406330c; end: 10406344f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406330c(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  
  __ss6HasherVABycfC(&uStack_e8);
  uVar4 = *(ulong *)(unaff_x20 + _DAT_1130524b8);
  if (uVar4 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar6 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104063450);
      (*pcVar1)();
    }
    uVar7 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(uVar4 + uVar7 * 8 + 0x20);
        _objc_retain(uVar2);
      }
      else {
        uVar2 = uVar7;
        func_0x000100de9c4c(uVar7,uVar4);
      }
      uVar7 = uVar7 + 1;
      func_0x00010bfde980();
      __ss6HasherV8_combineyySuF();
      _objc_release(uVar2);
    } while (uVar6 != uVar7);
  }
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_1130524c0))[1];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130524c0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_e8,uVar5,lVar3);
  }
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  uStack_68 = uStack_b0;
  uStack_70 = uStack_b8;
  uStack_60 = uStack_a8;
  uStack_98 = uStack_e0;
  uStack_a0 = uStack_e8;
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104063450; end: 10406345b; -[AgeVerificationChallengeData description] */

void FUN_104063450(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  (*(code *)0x1040634b8)();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10406345c; end: 1040635d3;  */

void FUN_10406345c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  (*param_3)();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040635d4; end: 1040635ff; -[AgeVerificationChallengeData init] */

void FUN_1040635d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AgeVerificationScope.AgeVerificationChallengeData",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104063600);
  (*pcVar1)();
}



/* Entry: 104063600; end: 10406360b;  */

void FUN_104063600(void)

{
  FUN_104063788();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10406360c; end: 10406363b;  */

void FUN_10406360c(undefined8 param_1,code *param_2)

{
  (*param_2)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



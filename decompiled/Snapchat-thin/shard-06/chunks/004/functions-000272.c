/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10486de7c; end: 10486de7f; -[SCOAuthType .cxx_destruct] */

void FUN_10486de7c(void)

{
  return;
}



/* Entry: 10486de80; end: 10486de9f;  */

void FUN_10486de80(void)

{
  _objc_opt_self(&PTR_PTR_1129de350);
  return;
}



/* Entry: 10486dea0; end: 10486e007;  */

int FUN_10486dea0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10486df1c;
        goto LAB_10486df00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10486df00:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10486df1c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10486e008; end: 10486e047;  */

void FUN_10486e008(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39864;
  _swift_getWitnessTable(&UNK_10dd39864,&UNK_1107a5be0);
  puRam0000000113093690 = puVar1;
  return;
}



/* Entry: 10486e048; end: 10486e0f3;  */

void FUN_10486e048(void)

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



/* Entry: 10486e0f4; end: 10486e12b;  */

void FUN_10486e0f4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10486e12c; end: 10486e147; -[SCOptedIn1TLStatus description] */

void FUN_10486e12c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486e148; end: 10486e18f; -[SCOptedIn1TLStatus init] */

void FUN_10486e148(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"OAuthScope/OptedIn1TLStatusWrapper.swift",
             0x28,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10486e190);
  (*pcVar1)();
}



/* Entry: 10486e190; end: 10486e1d7; -[SCOptedIn1TLStatus hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486e190(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_113093698));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10486e1d8; end: 10486e277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10486e1d8(undefined8 param_1)

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
      cVar1 = *(char *)(unaff_x20 + _DAT_113093698);
      cVar2 = *(char *)(lStack_58 + _DAT_113093698);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 10486e278; end: 10486e2f7; -[SCOptedIn1TLStatus isEqual:] */

uint FUN_10486e278(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10486e1d8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10486e2f8; end: 10486e303; -[SCOptedIn1TLStatus copyWithZone:] */

void FUN_10486e2f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486e304; end: 10486e30b; +[SCOptedIn1TLStatus optedIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486e304(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093698) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486e30c; end: 10486e31b; +[SCOptedIn1TLStatus optedOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486e30c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093698) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486e31c; end: 10486e367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486e31c(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113093698) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10486e368; end: 10486e36f; +[SCOptedIn1TLStatus unchanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486e368(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093698) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486e370; end: 10486e3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486e370(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093698) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486e3c0; end: 10486e3eb; -[SCOptedIn1TLStatus matchOptedIn:optedOut:unchanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486e3c0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_113093698) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_113093698) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010486e3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 10486e3ec; end: 10486e43f;  */

void FUN_10486e3ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10486e440; end: 10486e5a7;  */

int FUN_10486e440(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10486e4bc;
        goto LAB_10486e4a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10486e4a0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10486e4bc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10486e5a8; end: 10486e5e7;  */

void FUN_10486e5a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130936c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39948;
  _swift_getWitnessTable(&UNK_10dd39948,&UNK_1107a5cc8);
  puRam00000001130936c8 = puVar1;
  return;
}



/* Entry: 10486e5e8; end: 10486e693;  */

void FUN_10486e5e8(void)

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



/* Entry: 10486e694; end: 10486e697;  */

void FUN_10486e694(void)

{
  undefined *puVar1;
  
  if (puRam00000001130936d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39a30;
  _swift_getWitnessTable(&UNK_10dd39a30,&UNK_1107a5e30);
  puRam00000001130936d0 = puVar1;
  return;
}



/* Entry: 10486e698; end: 10486e6d7;  */

void FUN_10486e698(void)

{
  undefined *puVar1;
  
  if (puRam00000001130936d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39a30;
  _swift_getWitnessTable(&UNK_10dd39a30,&UNK_1107a5e30);
  puRam00000001130936d0 = puVar1;
  return;
}



/* Entry: 10486e6d8; end: 10486e84f;  */

bool FUN_10486e6d8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10486e850; end: 10486e897;  */

uint FUN_10486e850(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_10486e898(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10486e898; end: 10486e9e3;  */

undefined8 FUN_10486e898(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  undefined1 auStack_90 [48];
  
  if (*param_1 == '\f') {
    if (*param_2 != '\f') {
      return 0;
    }
  }
  else if (*param_1 != *param_2) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar10 = *(ulong *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  bVar8 = param_1[0x28];
  lVar2 = *(long *)(param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  bVar9 = param_2[0x28];
  if (lVar5 == 1) {
    if (lVar7 == 1) {
      return 1;
    }
  }
  else if (lVar7 != 1) {
    if (lVar1 != lVar2) {
      return 0;
    }
    if (lVar4 != lVar6) {
      return 0;
    }
    if (lVar5 == 0) {
      if (lVar7 != 0) {
        return 0;
      }
    }
    else {
      if (lVar7 == 0) {
        return 0;
      }
      if (((uVar10 != uVar3) || (lVar5 != lVar7)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar10,lVar5,uVar3,lVar7,0), (uVar10 & 1) == 0)) {
        return 0;
      }
    }
    if (((bVar8 ^ bVar9) & 1) != 0) {
      return 0;
    }
    return 1;
  }
  FUN_10486ed3c(param_1,auStack_90);
  FUN_10486ed3c(param_2,auStack_90);
  FUN_10486ed70(lVar1,lVar4,uVar10,lVar5,bVar8);
  FUN_10486ed70(lVar2,lVar6,uVar3,lVar7,bVar9);
  return 0;
}



/* Entry: 10486e9e4; end: 10486ea0f;  */

long FUN_10486e9e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10486ea10; end: 10486ea23;  */

void FUN_10486ea10(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10486ea24; end: 10486ea93;  */

undefined1 * FUN_10486ea24(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    param_1[0x28] = param_2[0x28];
    return param_1;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(long *)(param_1 + 0x20) = lVar1;
  param_1[0x28] = param_2[0x28];
  _swift_bridgeObjectRetain(lVar1);
  return param_1;
}



/* Entry: 10486ea94; end: 10486eb8b;  */

undefined1 * FUN_10486ea94(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 1) {
    if (*(long *)(param_2 + 0x20) == 1) {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[0x28] = param_2[0x28];
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
    else {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      param_1[0x28] = param_2[0x28];
      _swift_bridgeObjectRetain();
    }
  }
  else if (*(long *)(param_2 + 0x20) == 1) {
    FUN_10486eb8c(param_1 + 8);
    uVar1 = param_2[0x28];
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    param_1[0x28] = uVar1;
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    param_1[0x28] = param_2[0x28];
  }
  return param_1;
}



/* Entry: 10486eb8c; end: 10486ec67;  */

undefined8 FUN_10486eb8c(undefined8 param_1)

{
  FUN_10486efdc();
  return param_1;
}



/* Entry: 10486ec68; end: 10486ed3b;  */

int FUN_10486ec68(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 10486ed3c; end: 10486ed6f;  */

undefined8 FUN_10486ed3c(undefined8 param_1,undefined8 param_2)

{
  FUN_10486ea24(param_2,param_1,&UNK_1107a5ee0);
  return param_2;
}



/* Entry: 10486ed70; end: 10486ed9b;  */

void FUN_10486ed70(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
  return;
}



/* Entry: 10486ed9c; end: 10486eddb;  */

void FUN_10486ed9c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130936d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39ae0;
  _swift_getWitnessTable(&UNK_10dd39ae0,&UNK_1107a5f18);
  puRam00000001130936d8 = puVar1;
  return;
}



/* Entry: 10486eddc; end: 10486ee87;  */

void FUN_10486eddc(void)

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



/* Entry: 10486ee88; end: 10486eebf;  */

void FUN_10486ee88(ulong *param_1,ulong *param_2)

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



/* Entry: 10486eec0; end: 10486ef07;  */

uint FUN_10486eec0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_10486ef08(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10486ef08; end: 10486efdb;  */

byte FUN_10486ef08(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    lVar2 = param_1[3];
    lVar1 = param_2[3];
    if (lVar2 == 0) {
      if (lVar1 == 0) goto LAB_10486ef8c;
    }
    else if (lVar1 != 0) {
      uVar3 = param_1[2];
      if (((uVar3 != param_2[2]) || (lVar2 != lVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,lVar2,param_2[2],lVar1,0), (uVar3 & 1) == 0)) {
        return 0;
      }
LAB_10486ef8c:
      return (*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4) ^ 1) & 1;
    }
  }
  return 0;
}



/* Entry: 10486efdc; end: 10486efe3;  */

void FUN_10486efdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10486efe4; end: 10486f01f;  */

undefined8 * FUN_10486efe4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10486f020; end: 10486f083;  */

undefined8 * FUN_10486f020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10486f084; end: 10486f0c7;  */

undefined8 * FUN_10486f084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 10486f0c8; end: 10486f18b;  */

int FUN_10486f0c8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10486f18c; end: 10486f25f;  */

void FUN_10486f18c(void)

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



/* Entry: 10486f260; end: 10486f283;  */

void FUN_10486f260(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10486f284; end: 10486f29f; -[SCRegistrationState description] */

void FUN_10486f284(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486f2a0; end: 10486f2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10486f2a0(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_1130936e0);
  _objc_release();
  return uVar1;
}



/* Entry: 10486f2cc; end: 10486f313; -[SCRegistrationState init] */

void FUN_10486f2cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCRegistrationStateTransition/SCRegistrationStateWrapper.swift",0x3e,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10486f314);
  (*pcVar1)();
}



/* Entry: 10486f314; end: 10486f39f; -[SCRegistrationState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486f314(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_1130936e0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10486f3a0; end: 10486f43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10486f3a0(undefined8 param_1)

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
      cVar1 = *(char *)(unaff_x20 + _DAT_1130936e0);
      cVar2 = *(char *)(lStack_58 + _DAT_1130936e0);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 10486f440; end: 10486f4bf; -[SCRegistrationState isEqual:] */

uint FUN_10486f440(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10486f3a0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10486f4c0; end: 10486f4c3; -[SCRegistrationState copyWithZone:] */

void FUN_10486f4c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486f4c4; end: 10486f67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_10486f4c4(undefined8 param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  ulong uVar8;
  undefined **unaff_x25;
  undefined8 *puVar9;
  undefined8 unaff_x30;
  undefined8 in_register_00005008;
  undefined **in_stack_00000000;
  undefined **in_stack_00000008;
  undefined **in_stack_00000010;
  undefined **in_stack_00000018;
  undefined **in_stack_00000020;
  undefined **in_stack_00000028;
  undefined **in_stack_00000030;
  undefined **in_stack_00000038;
  undefined **in_stack_00000040;
  undefined **in_stack_00000048;
  undefined **in_stack_00000050;
  undefined **in_stack_00000058;
  undefined **in_stack_00000060;
  undefined **in_stack_00000068;
  undefined **in_stack_00000070;
  undefined **in_stack_00000078;
  undefined8 *in_stack_00000120;
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar9 = (undefined8 *)&stack0xfffffffffffffff0;
  pcVar6 = (char *)(ulong)*(byte *)((long)unaff_x20 + _DAT_1130936e0);
  puVar7 = &UNK_10dd39c00;
  puVar2 = &stack0xffffffffffffffd0;
  ppuVar3 = param_2;
  ppuVar4 = param_2;
  switch(*(byte *)((long)unaff_x20 + _DAT_1130936e0)) {
  default:
    pcVar6 = "notifPayloadError";
  case 0x7c:
  case 0x8a:
  case 0xc2:
  case 0xe0:
  case 0xe8:
  case 0xf0:
  case 0xf8:
    pcVar6 = pcVar6 + 0xb70;
    goto code_r0x00010486f504;
  case 1:
    pcVar6 = "NAME_AND_BIRTHDAY";
    ppuVar3 = (undefined **)0xd000000000000010;
    goto code_r0x00010486f620;
  case 2:
  case 0xa8:
  case 0xb0:
  case 0xb8:
    pcVar6 = "notifPayloadError";
  case 0x12:
    pcVar6 = pcVar6 + 0xb00;
    goto code_r0x00010486f56c;
  case 3:
  case 0x14:
    pcVar6 = "SUBTYPE_USERNAME_FROM_BIRTHDAY";
    puVar7 = (undefined *)0xd00000000000001e;
  case 0x94:
    ppuVar3 = (undefined **)(puVar7 + -4);
    goto code_r0x00010486f620;
  case 4:
    pcVar6 = "notifPayloadError";
  case 0x1e:
    pcVar6 = pcVar6 + 0xae0;
    goto code_r0x00010486f540;
  case 5:
  case 0x80:
    pcVar6 = "SUBTYPE_USERNAME_FROM_SUGGESTED_USERNAME";
    goto code_r0x00010486f610;
  case 6:
    pcVar6 = "SUBTYPE_PASSWORD_FROM_BIRTHDAY";
    break;
  case 7:
    pcVar6 = "SUBTYPE_PASSWORD_FROM_USERNAME";
    break;
  case 8:
    pcVar6 = "SUBTYPE_PASSWORD_FROM_SUGGESTED_USERNAME";
code_r0x00010486f610:
    pcVar6 = pcVar6 + -0x20;
    ppuVar3 = (undefined **)0xd000000000000028;
    goto code_r0x00010486f620;
  case 9:
  case 0x22:
    pcVar6 = "SUBTYPE_CHALLENGED_FROM_PASSWORD";
  case 0xd:
  case 0x20:
    pcVar6 = pcVar6 + -0x20;
    goto code_r0x00010486f550;
  case 10:
    ppuVar3 = (undefined **)0x54425553;
  case 0x6c:
    ppuVar3 = (undefined **)((ulong)ppuVar3 & 0xffffffff | 0x5f45505900000000);
    param_3 = (undefined **)0xec00000054495845;
    goto code_r0x00010486f624;
  case 0xb:
    ppuVar3 = (undefined **)0x5553;
  case 0x15:
  case 0x1a:
    ppuVar3 = (undefined **)((ulong)ppuVar3 & 0xffff00000000ffff | 0x505954420000);
    goto code_r0x00010486f524;
  case 0xe:
    goto code_r0x00010486f528;
  case 0xf:
  case 0x1d:
    goto code_r0x00010486f534;
  case 0x10:
  case 0x93:
  case 0xcb:
    goto code_r0x00010486f510;
  case 0x11:
    goto code_r0x00010486f558;
  case 0x13:
    goto code_r0x00010486f540;
  case 0x16:
    goto code_r0x00010486f570;
  case 0x17:
  case 0x7a:
  case 0xa2:
  case 0xa4:
  case 0xda:
    goto code_r0x00010486f508;
  case 0x18:
    goto code_r0x00010486f550;
  case 0x1b:
    goto code_r0x00010486f524;
  case 0x1c:
  case 0xdc:
    goto code_r0x00010486f50c;
  case 0x1f:
    goto code_r0x00010486f52c;
  case 0x21:
    goto code_r0x00010486f514;
  case 0x23:
  case 0x6f:
  case 0x83:
  case 0x97:
  case 0xab:
  case 0xb3:
  case 0xbb:
  case 0xcf:
  case 0xe3:
  case 0xeb:
  case 0xf3:
  case 0xfb:
    goto code_r0x00010486f504;
  case 0x30:
  case 0x50:
    goto code_r0x00010486f644;
  case 0x31:
  case 0x40:
  case 0x51:
  case 0x60:
  case 0x67:
    goto code_r0x00010486f690;
  case 0x32:
  case 0x52:
    goto code_r0x00010486f698;
  case 0x33:
  case 0x39:
  case 0x53:
  case 0x59:
    goto code_r0x00010486f6a0;
  case 0x34:
  case 0x54:
    goto code_r0x00010486f6c8;
  case 0x35:
  case 0x38:
  case 0x3d:
  case 0x3f:
  case 0x55:
  case 0x58:
  case 0x5d:
  case 0x5f:
  case 100:
    goto code_r0x00010486f6cc;
  case 0x36:
  case 0x56:
    goto code_r0x00010486f6c4;
  case 0x37:
  case 0x3e:
  case 0x57:
  case 0x5e:
    puVar1 = &stack0xffffffffffffffa0;
  case 0x42:
  case 99:
    *(undefined ***)(puVar1 + 0x10) = unaff_x20;
    *(undefined ***)(puVar1 + 0x18) = param_2;
    puVar2 = puVar1;
    goto code_r0x00010486f688;
  case 0x3a:
  case 0x5a:
    goto code_r0x00010486f6b8;
  case 0x3b:
  case 0x5b:
    goto code_r0x00010486f6b4;
  case 0x3c:
  case 0x5c:
  case 0x61:
    goto code_r0x00010486f648;
  case 0x41:
    goto code_r0x00010486f638;
  case 0x43:
    goto code_r0x00010486f6a4;
  case 0x44:
    goto code_r0x00010486f688;
  case 0x62:
  case 0x65:
  case 0xe5:
    _objc_allocWithZone();
    FUN_10486f700(param_2);
code_r0x00010486f6fc:
    return param_2;
  case 0x66:
    goto code_r0x00010486f6bc;
  case 0x6d:
  case 0x81:
  case 0x95:
  case 0xa9:
  case 0xb1:
  case 0xb9:
  case 0xcd:
  case 0xe1:
  case 0xe9:
  case 0xf1:
  case 0xf9:
    goto code_r0x00010486f80c;
  case 0x6e:
  case 0x82:
  case 0x96:
  case 0xaa:
  case 0xb2:
  case 0xba:
  case 0xce:
  case 0xe2:
  case 0xea:
  case 0xf2:
  case 0xfa:
    goto code_r0x00010486f794;
  case 0x70:
    goto code_r0x00010486f56c;
  case 0x71:
    goto code_r0x00010486f668;
  case 0x72:
  case 0x9a:
  case 0xae:
  case 0xd2:
    goto code_r0x00010486f7b4;
  case 0x84:
    goto code_r0x00010486f89c;
  case 0x85:
  case 0xb5:
  case 0xbd:
    goto code_r0x00010486f650;
  case 0x86:
  case 0xb6:
  case 0xbe:
  case 0xee:
  case 0xf6:
  case 0xfe:
    goto code_r0x00010486f7c8;
  case 0x87:
  case 0xb7:
  case 0xbf:
  case 0xef:
  case 0xf7:
  case 0xff:
    goto code_r0x00010486f8d4;
  case 0x90:
    goto code_r0x00010486f6fc;
  case 0x91:
  case 0xc9:
    goto code_r0x00010486f898;
  case 0x92:
  case 0xca:
    goto code_r0x00010486f74c;
  case 0x98:
    goto code_r0x00010486f8cc;
  case 0x99:
  case 0xd1:
    goto code_r0x00010486f664;
  case 0xac:
    goto code_r0x00010486f8a8;
  case 0xad:
    goto code_r0x00010486f8dc;
  case 0xb4:
    in_stack_00000120 = puVar9;
    _swift_getObjectType();
    ppuVar3 = (undefined **)0x55535f4445444f43;
    param_3 = (undefined **)0xed00004550595442;
    unaff_x21 = unaff_x20;
    puVar9 = &stack0x00000120;
code_r0x00010486f74c:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar3,param_3);
    unaff_x22 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    if (unaff_x22 == (undefined **)0x0) {
      param_1 = 0;
      in_register_00005008 = 0;
code_r0x00010486f794:
      puVar9[-0xf] = in_register_00005008;
      puVar9[-0x10] = param_1;
      puVar9[-0xd] = in_register_00005008;
      puVar9[-0xe] = param_1;
    }
    else {
      pcVar6 = (char *)(puVar9 + -0x10);
code_r0x00010486f77c:
      __ss018_bridgeAnyObjectToB0yypyXlSgF(pcVar6,unaff_x22);
      _swift_unknownObjectRelease(unaff_x22);
code_r0x00010486f78c:
    }
    puVar9[-0xb] = puVar9[-0xf];
    puVar9[-0xc] = puVar9[-0x10];
    puVar9[-9] = puVar9[-0xd];
    puVar9[-10] = puVar9[-0xe];
    if (puVar9[-9] == 0) {
      _objc_release(param_2);
      func_0x00010006e7f4(puVar9 + -0xc);
      goto LAB_10486fd5c;
    }
    param_5 = &PTR__sqlite3_column_name_11034d000;
    pcVar6 = PTR___sypN_11034f1a8;
code_r0x00010486f7b4:
    param_5 = (undefined **)param_5[0x150];
    ppuVar3 = (undefined **)(puVar9 + -0x12);
    param_3 = (undefined **)(puVar9 + -0xc);
    param_4 = (undefined **)(pcVar6 + 8);
    param_6 = 6;
code_r0x00010486f7c8:
    _swift_dynamicCast(ppuVar3,param_3,param_4,param_5,param_6);
    if (((ulong)ppuVar3 & 1) == 0) {
LAB_10486fd54:
      _objc_release(param_2);
LAB_10486fd5c:
      _swift_getObjectType();
      _swift_deallocPartialClassInstance();
      return (undefined **)0x0;
    }
    unaff_x25 = (undefined **)0xd00000000000001e;
    param_3 = (undefined **)0x800000010f212b50;
    unaff_x22 = (undefined **)puVar9[-0x11];
    unaff_x23 = (undefined **)puVar9[-0x12];
code_r0x00010486f7ec:
    param_4 = unaff_x23;
    param_5 = unaff_x22;
    ppuVar3 = (undefined **)((long)unaff_x25 + -10);
    unaff_x22 = param_5;
    if ((param_4 == ppuVar3) && (param_3 == param_5)) {
LAB_10486f814:
      _swift_bridgeObjectRelease(unaff_x22);
code_r0x00010486f81c:
      _objc_allocWithZone();
      *(char *)((long)unaff_x21 + _DAT_1130936e0) = '\0';
code_r0x00010486f830:
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      param_3 = (undefined **)PTR_s_init_1125d9248;
    }
    else {
      param_6 = 0;
      unaff_x23 = param_4;
code_r0x00010486f80c:
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (ppuVar3,param_3,param_4,param_5,param_6);
      if (((ulong)ppuVar3 & 1) != 0) goto LAB_10486f814;
      param_3 = (undefined **)0x800000010f212b30;
code_r0x00010486f898:
      ppuVar4 = (undefined **)((long)unaff_x25 + -0xe);
code_r0x00010486f89c:
      if (unaff_x23 == ppuVar4) {
        in_ZR = param_3 == unaff_x22;
code_r0x00010486f8a8:
        ppuVar3 = unaff_x21;
        if (!(bool)in_ZR) goto LAB_10486f8ac;
LAB_10486f8c0:
        _swift_bridgeObjectRelease(unaff_x22);
code_r0x00010486f8cc:
        _objc_allocWithZone();
        pcVar6 = (char *)0x113093000;
        goto code_r0x00010486f8d4;
      }
LAB_10486f8ac:
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (ppuVar4,param_3,unaff_x23,unaff_x22,0);
      ppuVar3 = unaff_x21;
      if (((ulong)ppuVar4 & 1) != 0) goto LAB_10486f8c0;
      ppuVar3 = (undefined **)((long)unaff_x25 + 3);
      if (((unaff_x23 == ppuVar3) && (unaff_x22 == (undefined **)0x800000010f212b00)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (ppuVar3,0x800000010f212b00,unaff_x23,unaff_x22,0), ((ulong)ppuVar3 & 1) != 0))
      {
        _swift_bridgeObjectRelease(unaff_x22);
        _objc_allocWithZone();
        *(char *)((long)unaff_x21 + _DAT_1130936e0) = '\x02';
        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
        param_3 = (undefined **)PTR_s_init_1125d9248;
      }
      else {
        ppuVar3 = (undefined **)((long)unaff_x25 + -4);
        if (((unaff_x23 == ppuVar3) && (unaff_x22 == (undefined **)0x800000010f212ae0)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (ppuVar3,0x800000010f212ae0,unaff_x23,unaff_x22,0), ((ulong)ppuVar3 & 1) != 0)
           ) {
          _swift_bridgeObjectRelease(unaff_x22);
          ppuVar3 = unaff_x21;
          _objc_allocWithZone();
          *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\x03';
          param_3 = (undefined **)PTR_s_init_1125d9248;
          in_stack_00000000 = ppuVar3;
          in_stack_00000008 = unaff_x21;
        }
        else {
          if ((unaff_x23 != unaff_x25) || (unaff_x22 != (undefined **)0x800000010f212ac0)) {
            uVar8 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001e,0x800000010f212ac0,unaff_x23,unaff_x22,0);
            if ((uVar8 & 1) == 0) {
              ppuVar3 = (undefined **)((long)unaff_x25 + 10);
              if (((unaff_x23 == ppuVar3) && (unaff_x22 == (undefined **)0x800000010f212a90)) ||
                 (ppuVar4 = ppuVar3,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (ppuVar3,0x800000010f212a90,unaff_x23,unaff_x22,0),
                 ((ulong)ppuVar4 & 1) != 0)) {
                _swift_bridgeObjectRelease(unaff_x22);
                ppuVar3 = unaff_x21;
                _objc_allocWithZone();
                *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\x05';
                register0x00000008 = (BADSPACEBASE *)&stack0x00000020;
                param_3 = (undefined **)PTR_s_init_1125d9248;
                in_stack_00000020 = ppuVar3;
                in_stack_00000028 = unaff_x21;
              }
              else {
                if ((unaff_x23 != unaff_x25) || (unaff_x22 != (undefined **)0x800000010f212a70)) {
                  uVar8 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd00000000000001e,0x800000010f212a70,unaff_x23,unaff_x22,0);
                  if ((uVar8 & 1) == 0) {
                    if ((unaff_x23 != unaff_x25) || (unaff_x22 != (undefined **)0x800000010f212a50))
                    {
                      uVar8 = 0;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd00000000000001e,0x800000010f212a50,unaff_x23,unaff_x22,0);
                      if ((uVar8 & 1) == 0) {
                        if ((unaff_x23 != ppuVar3) ||
                           (unaff_x22 != (undefined **)0x800000010f212a20)) {
                          pcVar6 = (char *)((long)unaff_x25 + 10);
                          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (pcVar6,0x800000010f212a20,unaff_x23,unaff_x22,0);
                          if (((ulong)pcVar6 & 1) == 0) {
                            ppuVar3 = (undefined **)((long)unaff_x25 + 2);
                            if (((unaff_x23 == ppuVar3) &&
                                (unaff_x22 == (undefined **)0x800000010f2129f0)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (ppuVar3,0x800000010f2129f0,unaff_x23,unaff_x22,0),
                               ((ulong)ppuVar3 & 1) != 0)) {
                              _swift_bridgeObjectRelease(unaff_x22);
                              ppuVar3 = unaff_x21;
                              _objc_allocWithZone();
                              *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\t';
                              register0x00000008 = (BADSPACEBASE *)&stack0x00000060;
                              param_3 = (undefined **)PTR_s_init_1125d9248;
                              in_stack_00000060 = ppuVar3;
                              in_stack_00000068 = unaff_x21;
                            }
                            else {
                              uVar8 = 0x5f45505954425553;
                              if (((unaff_x23 == (undefined **)0x5f45505954425553) &&
                                  (unaff_x22 == (undefined **)0xec00000054495845)) ||
                                 (uVar5 = uVar8,
                                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                           (0x5f45505954425553,0xec00000054495845,unaff_x23,
                                            unaff_x22,0), (uVar5 & 1) != 0)) {
                                _swift_bridgeObjectRelease(unaff_x22);
                                ppuVar3 = unaff_x21;
                                _objc_allocWithZone();
                                *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\n';
                                register0x00000008 = (BADSPACEBASE *)&stack0x00000070;
                                param_3 = (undefined **)PTR_s_init_1125d9248;
                                in_stack_00000070 = ppuVar3;
                                in_stack_00000078 = unaff_x21;
                              }
                              else {
                                if ((unaff_x23 == (undefined **)0x5f45505954425553) &&
                                   (unaff_x22 == (undefined **)0xec000000454e4f44)) {
                                  _swift_bridgeObjectRelease(0xec000000454e4f44);
                                }
                                else {
                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (0x5f45505954425553,0xec000000454e4f44,unaff_x23,
                                             unaff_x22,0);
                                  _swift_bridgeObjectRelease(unaff_x22);
                                  if ((uVar8 & 1) == 0) goto LAB_10486fd54;
                                }
                                ppuVar3 = unaff_x21;
                                _objc_allocWithZone();
                                *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\v';
                                puVar9[-0x14] = ppuVar3;
                                puVar9[-0x13] = unaff_x21;
                                register0x00000008 = (BADSPACEBASE *)(puVar9 + -0x14);
                                param_3 = (undefined **)PTR_s_init_1125d9248;
                              }
                            }
                            goto LAB_10486f840;
                          }
                        }
                        _swift_bridgeObjectRelease(unaff_x22);
                        ppuVar3 = unaff_x21;
                        _objc_allocWithZone();
                        *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\b';
                        register0x00000008 = (BADSPACEBASE *)&stack0x00000050;
                        param_3 = (undefined **)PTR_s_init_1125d9248;
                        in_stack_00000050 = ppuVar3;
                        in_stack_00000058 = unaff_x21;
                        goto LAB_10486f840;
                      }
                    }
                    _swift_bridgeObjectRelease(unaff_x22);
                    ppuVar3 = unaff_x21;
                    _objc_allocWithZone();
                    *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\a';
                    register0x00000008 = (BADSPACEBASE *)&stack0x00000040;
                    param_3 = (undefined **)PTR_s_init_1125d9248;
                    in_stack_00000040 = ppuVar3;
                    in_stack_00000048 = unaff_x21;
                    goto LAB_10486f840;
                  }
                }
                _swift_bridgeObjectRelease(unaff_x22);
                ppuVar3 = unaff_x21;
                _objc_allocWithZone();
                *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\x06';
                register0x00000008 = (BADSPACEBASE *)&stack0x00000030;
                param_3 = (undefined **)PTR_s_init_1125d9248;
                in_stack_00000030 = ppuVar3;
                in_stack_00000038 = unaff_x21;
              }
              goto LAB_10486f840;
            }
          }
          _swift_bridgeObjectRelease(unaff_x22);
          ppuVar3 = unaff_x21;
          _objc_allocWithZone();
          *(char *)((long)ppuVar3 + _DAT_1130936e0) = '\x04';
          register0x00000008 = (BADSPACEBASE *)&stack0x00000010;
          param_3 = (undefined **)PTR_s_init_1125d9248;
          in_stack_00000010 = ppuVar3;
          in_stack_00000018 = unaff_x21;
        }
      }
    }
    goto LAB_10486f840;
  case 0xbc:
    goto code_r0x00010486f78c;
  case 200:
    goto code_r0x00010486f81c;
  case 0xcc:
    goto code_r0x00010486f530;
  case 0xd0:
    goto code_r0x00010486f7ec;
  case 0xe4:
    goto code_r0x00010486f640;
  case 0xe6:
    goto code_r0x00010486f830;
  case 0xec:
    goto code_r0x00010486f77c;
  case 0xed:
  case 0xf5:
  case 0xfd:
    goto code_r0x00010486f64c;
  case 0xf4:
    goto code_r0x00010486f86c;
  case 0xfc:
    goto code_r0x00010486f8ec;
  }
code_r0x00010486f5d4:
  param_3 = (undefined **)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
  ppuVar3 = (undefined **)0xd00000000000001e;
code_r0x00010486f624:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar3,param_3);
  ppuVar4 = (undefined **)0x5f4445444f43;
  unaff_x20 = ppuVar3;
code_r0x00010486f638:
  ppuVar3 = (undefined **)((ulong)ppuVar4 & 0xffffffffffff | 0x5553000000000000);
  param_3 = (undefined **)0x5442;
  goto code_r0x00010486f640;
code_r0x00010486f8d4:
  pcVar6 = *(char **)(pcVar6 + 0x6e0);
  puVar7 = (undefined *)0x1;
code_r0x00010486f8dc:
  *(char *)((long)ppuVar3 + (long)pcVar6) = (char)puVar7;
  param_3 = (undefined **)PTR_s_init_1125d9248;
  goto code_r0x00010486f8ec;
code_r0x00010486f688:
  *(undefined8 **)(puVar2 + 0x20) = puVar9;
  *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
code_r0x00010486f690:
  ppuVar3 = param_4;
code_r0x00010486f698:
  _objc_retain(ppuVar3);
  unaff_x21 = ppuVar3;
code_r0x00010486f6a0:
code_r0x00010486f6a4:
  _objc_retain(param_2);
  FUN_10486f4c4(unaff_x21);
  unaff_x20 = param_2;
code_r0x00010486f6b4:
  param_2 = unaff_x21;
code_r0x00010486f6b8:
  _objc_release(param_2);
code_r0x00010486f6bc:
  param_2 = unaff_x20;
code_r0x00010486f6c4:
code_r0x00010486f6c8:
code_r0x00010486f6cc:
  goto code_r0x00010bdbf3e4;
code_r0x00010486f524:
  ppuVar3 = (undefined **)((ulong)ppuVar3 & 0xffffffffffff | 0x5f45000000000000);
code_r0x00010486f528:
  param_3 = (undefined **)0x4f44;
code_r0x00010486f52c:
  param_3 = (undefined **)((ulong)param_3 & 0xffffffff0000ffff | 0x454e0000);
code_r0x00010486f530:
  param_3 = (undefined **)((ulong)param_3 & 0xffffffffffff | 0xec00000000000000);
code_r0x00010486f534:
  goto code_r0x00010486f624;
code_r0x00010486f550:
  puVar7 = (undefined *)0xd00000000000001e;
code_r0x00010486f558:
  ppuVar3 = (undefined **)(puVar7 + 2);
  goto code_r0x00010486f620;
code_r0x00010486f540:
  goto code_r0x00010486f5d4;
code_r0x00010486f56c:
  puVar7 = (undefined *)0x1e;
code_r0x00010486f570:
  ppuVar3 = (undefined **)(((ulong)puVar7 | 0xd000000000000000) + 3);
  goto code_r0x00010486f620;
code_r0x00010486f504:
  pcVar6 = pcVar6 + -0x20;
code_r0x00010486f508:
  puVar7 = (undefined *)0x1e;
code_r0x00010486f50c:
  puVar7 = (undefined *)((ulong)puVar7 | 0xd000000000000000);
code_r0x00010486f510:
  ppuVar3 = (undefined **)(puVar7 + -10);
code_r0x00010486f514:
code_r0x00010486f620:
  param_3 = (undefined **)((ulong)pcVar6 | 0x8000000000000000);
  goto code_r0x00010486f624;
code_r0x00010486f640:
  param_3 = (undefined **)((ulong)param_3 & 0xffffffff0000ffff | 0x50590000);
code_r0x00010486f644:
  param_3 = (undefined **)((ulong)param_3 & 0xffff0000ffffffff | 0x4500000000);
code_r0x00010486f648:
  param_3 = (undefined **)((ulong)param_3 & 0xffffffffffff | 0xed00000000000000);
code_r0x00010486f64c:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar3,param_3);
code_r0x00010486f650:
  func_0x00010bf93020(param_2);
  unaff_x21 = ppuVar3;
code_r0x00010486f664:
  ppuVar3 = unaff_x20;
code_r0x00010486f668:
  param_2 = unaff_x21;
  _objc_release(ppuVar3);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return param_2;
code_r0x00010486f8ec:
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
LAB_10486f840:
  _objc_msgSendSuper2(register0x00000008,param_3);
  _objc_release(param_2);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  unaff_x21 = (undefined **)register0x00000008;
code_r0x00010486f86c:
  return unaff_x21;
}



/* Entry: 10486f680; end: 10486f6cf; -[SCRegistrationState encodeWithCoder:] */

void FUN_10486f680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10486f4c4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10486f6d0; end: 10486f6ff;  */

void FUN_10486f6d0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10486f700(param_1);
  return;
}



/* Entry: 10486f700; end: 10486fd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10486f700(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar4 = auStack_160;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
    goto LAB_10486fd5c;
  }
  plVar3 = &lStack_a0;
  _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_10486fd54:
    _objc_release(param_1);
LAB_10486fd5c:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0;
  if (((lStack_a0 == -0x2fffffffffffffec) && (lStack_98 == -0x7ffffffef0ded4b0)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000014,0x800000010f212b50,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 0;
    goto LAB_10486f840;
  }
  uVar6 = 0;
  if (((lStack_a0 == -0x2ffffffffffffff0) && (lStack_98 == -0x7ffffffef0ded4d0)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000010,0x800000010f212b30,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 1;
    puVar4 = auStack_150;
    goto LAB_10486f840;
  }
  uVar6 = 0xd000000000000021;
  if (((lStack_a0 == -0x2fffffffffffffdf) && (lStack_98 == -0x7ffffffef0ded500)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000021,0x800000010f212b00,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 2;
    puVar4 = auStack_140;
    goto LAB_10486f840;
  }
  uVar6 = 0;
  if (((lStack_a0 == -0x2fffffffffffffe6) && (lStack_98 == -0x7ffffffef0ded520)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000001a,0x800000010f212ae0,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 3;
    puVar4 = auStack_130;
    goto LAB_10486f840;
  }
  if ((lStack_a0 != -0x2fffffffffffffe2) || (lStack_98 != -0x7ffffffef0ded540)) {
    uVar6 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd00000000000001e,0x800000010f212ac0,lStack_a0,lStack_98,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      if (((lStack_a0 == -0x2fffffffffffffd8) && (lStack_98 == -0x7ffffffef0ded570)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000028,0x800000010f212a90,lStack_a0,lStack_98,0), (uVar6 & 1) != 0)
         ) {
        _swift_bridgeObjectRelease(lStack_98);
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 5;
        puVar4 = auStack_110;
        goto LAB_10486f840;
      }
      if ((lStack_a0 != -0x2fffffffffffffe2) || (lStack_98 != -0x7ffffffef0ded590)) {
        uVar6 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd00000000000001e,0x800000010f212a70,lStack_a0,lStack_98,0);
        if ((uVar6 & 1) == 0) {
          if ((lStack_a0 != -0x2fffffffffffffe2) || (lStack_98 != -0x7ffffffef0ded5b0)) {
            uVar6 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001e,0x800000010f212a50,lStack_a0,lStack_98,0);
            if ((uVar6 & 1) == 0) {
              if ((lStack_a0 != -0x2fffffffffffffd8) || (lStack_98 != -0x7ffffffef0ded5e0)) {
                uVar6 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000028,0x800000010f212a20,lStack_a0,lStack_98,0);
                if ((uVar6 & 1) == 0) {
                  uVar6 = 0;
                  if (((lStack_a0 == -0x2fffffffffffffe0) && (lStack_98 == -0x7ffffffef0ded610)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000020,0x800000010f2129f0,lStack_a0,lStack_98,0),
                     (uVar6 & 1) != 0)) {
                    _swift_bridgeObjectRelease(lStack_98);
                    _objc_allocWithZone();
                    *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 9;
                    puVar4 = auStack_d0;
                    goto LAB_10486f840;
                  }
                  uVar6 = 0x5f45505954425553;
                  if (((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x13ffffffabb6a7bb)) ||
                     (uVar5 = uVar6,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (0x5f45505954425553,0xec00000054495845,lStack_a0,lStack_98,0),
                     (uVar5 & 1) != 0)) {
                    _swift_bridgeObjectRelease(lStack_98);
                    _objc_allocWithZone();
                    *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 10;
                    puVar4 = auStack_c0;
                    goto LAB_10486f840;
                  }
                  if ((lStack_a0 == 0x5f45505954425553) && (lStack_98 == -0x13ffffffbab1b0bc)) {
                    _swift_bridgeObjectRelease(0xec000000454e4f44);
                  }
                  else {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x5f45505954425553,0xec000000454e4f44,lStack_a0,lStack_98,0);
                    _swift_bridgeObjectRelease(lStack_98);
                    if ((uVar6 & 1) == 0) goto LAB_10486fd54;
                  }
                  _objc_allocWithZone();
                  *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 0xb;
                  puVar4 = auStack_b0;
                  goto LAB_10486f840;
                }
              }
              _swift_bridgeObjectRelease(lStack_98);
              _objc_allocWithZone();
              *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 8;
              puVar4 = auStack_e0;
              goto LAB_10486f840;
            }
          }
          _swift_bridgeObjectRelease(lStack_98);
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 7;
          puVar4 = auStack_f0;
          goto LAB_10486f840;
        }
      }
      _swift_bridgeObjectRelease(lStack_98);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 6;
      puVar4 = auStack_100;
      goto LAB_10486f840;
    }
  }
  _swift_bridgeObjectRelease(lStack_98);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130936e0) = 4;
  puVar4 = auStack_120;
LAB_10486f840:
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar4;
}



/* Entry: 10486fd98; end: 10486fdbf; -[SCRegistrationState initWithCoder:] */

void FUN_10486fd98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10486f700();
  return;
}



/* Entry: 10486fdc0; end: 10486fdc7; +[SCRegistrationState displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fdc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fdc8; end: 10486fdcf; +[SCRegistrationState birthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fdc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fdd0; end: 10486fdd7; +[SCRegistrationState displayNameAndBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fdd0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fdd8; end: 10486fddf; +[SCRegistrationState suggestedUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fdd8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fde0; end: 10486fde7; +[SCRegistrationState usernameFromBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fde0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fde8; end: 10486fdef; +[SCRegistrationState usernameFromSuggestedUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fde8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fdf0; end: 10486fdf7; +[SCRegistrationState passwordFromBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fdf0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fdf8; end: 10486fdff; +[SCRegistrationState passwordFromUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fdf8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fe00; end: 10486fe07; +[SCRegistrationState passwordFromSuggestedUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fe00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fe08; end: 10486fe0f; +[SCRegistrationState challengedFromPassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fe08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fe10; end: 10486fe17; +[SCRegistrationState exit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fe10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fe18; end: 10486fe1f; +[SCRegistrationState done] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fe18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fe20; end: 10486fe6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486fe20(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130936e0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486fe70; end: 10486ff77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10486fe70(code *param_1,undefined *param_2,code *param_3,undefined1 *param_4,
                    code *param_5,undefined1 *param_6,code *param_7,undefined1 *param_8,
                    code *param_9,undefined4 param_10,undefined4 param_11,code *param_12,
                    undefined4 param_13,undefined4 param_14,code *param_15,
                    code *UNRECOVERED_JUMPTABLE,code *param_17,undefined4 param_18,
                    undefined4 param_19,code *param_20,ulong param_21,code *param_22,ulong param_23,
                    code *param_24,code *param_25,code *param_26,code *param_27)

{
  uint uVar1;
  code *pcVar2;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  code *pcStack_70;
  
  pcVar3 = (code *)&stack0xffffffffffffffa0;
  uVar5 = (uint)param_2;
  pcVar4 = param_1;
  pcVar2 = param_27;
  switch(*(undefined1 *)(unaff_x20 + _DAT_1130936e0)) {
  default:
  case 0x70:
  case 0x7e:
  case 0xb6:
  case 0xd4:
  case 0xdc:
  case 0xe4:
  case 0xec:
  case 0xf6:
    (*param_1)();
code_r0x00010486fedc:
    break;
  case 1:
  case 0x14:
  case 0xc:
    (*param_3)();
    break;
  case 2:
  case 0x13:
    (*param_5)();
code_r0x00010486ff08:
    break;
  case 3:
  case 0x11:
    (*param_7)();
  case 0x12:
    break;
  case 4:
  case 0x87:
  case 0xbf:
  case 0xff:
  case 0x15:
    (*param_9)();
    break;
  case 5:
    (*param_12)();
  case 0x9c:
  case 0xa4:
  case 0xac:
    break;
  case 6:
    (*param_15)();
  case 100:
    break;
  case 7:
  case 0x16:
    (*param_17)();
    break;
  case 8:
    (*param_20)();
    break;
  case 9:
  case 0xe:
  case 0xfc:
    (*param_22)();
  case 0xf:
    break;
  case 10:
    (*param_24)();
    break;
  case 0xb:
  case 0x6e:
  case 0x96:
  case 0x98:
  case 0xce:
    (*param_26)();
  case 0x10:
  case 0xd0:
    break;
  case 0x17:
  case 99:
  case 0x77:
  case 0x8b:
  case 0x9f:
  case 0xa7:
  case 0xaf:
  case 0xc3:
  case 0xd7:
  case 0xdf:
  case 0xe7:
  case 0xef:
    goto code_r0x00010486fedc;
  case 0x24:
  case 0x44:
    goto code_r0x00010487001c;
  case 0x25:
  case 0x34:
  case 0x45:
  case 0x54:
  case 0x5b:
    goto code_r0x000104870068;
  case 0x26:
  case 0x46:
    goto code_r0x000104870070;
  case 0x27:
  case 0x2d:
  case 0x47:
  case 0x4d:
    goto code_r0x000104870078;
  case 0x28:
  case 0x48:
    goto code_r0x0001048700a0;
  case 0x29:
  case 0x2c:
  case 0x31:
  case 0x33:
  case 0x49:
  case 0x4c:
  case 0x51:
  case 0x53:
  case 0x58:
    goto code_r0x0001048700a4;
  case 0x2a:
  case 0x4a:
    goto code_r0x0001048700a0;
  case 0x2b:
  case 0x32:
  case 0x4b:
  case 0x52:
    goto code_r0x000104870058;
  case 0x2e:
  case 0x4e:
    goto code_r0x000104870090;
  case 0x2f:
  case 0x4f:
    goto code_r0x00010487008c;
  case 0x30:
  case 0x50:
  case 0x55:
    goto code_r0x000104870020;
  case 0x35:
    goto code_r0x000104870010;
  case 0x36:
  case 0x57:
    goto code_r0x00010487005c;
  case 0x37:
    goto code_r0x00010487007c;
  case 0x38:
    goto code_r0x000104870060;
  case 0x56:
    goto code_r0x0001048700a8;
  case 0x59:
  case 0xd9:
    goto code_r0x0001048700b8;
  case 0x5a:
    goto code_r0x000104870094;
  case 0x60:
    goto code_r0x00010486ffc8;
  case 0x61:
  case 0x75:
  case 0x89:
  case 0x9d:
  case 0xa5:
  case 0xad:
  case 0xc1:
  case 0xd5:
  case 0xdd:
  case 0xe5:
  case 0xed:
code_r0x0001048701e4:
    if (in_CY) {
      param_21._0_4_ = (uint)param_23;
    }
    if (((uint)((ulong)param_25 >> 8) & 0xffffff) < 0xff) {
      param_21._0_4_ = 1;
    }
    param_25 = (code *)(ulong)(uint)param_21;
  case 0xbc:
    if ((int)param_25 == 4) {
      uVar5 = *(uint *)(param_1 + 1);
    }
    else if ((int)param_25 == 2) {
      param_25 = (code *)(ulong)*(ushort *)(param_1 + 1);
code_r0x000104870208:
      uVar5 = (uint)param_25;
    }
    else {
      uVar5 = (uint)(byte)param_1[1];
    }
    if (uVar5 != 0) {
      return (code *)(ulong)(((uint)(byte)*param_1 | uVar5 << 8) - 0xb);
    }
LAB_104870240:
    param_25 = (code *)(ulong)(byte)*param_1;
code_r0x000104870244:
    iVar6 = (uint)param_25 - 0xc;
    if ((uint)param_25 < 0xc) {
      iVar6 = -1;
    }
    return (code *)(ulong)(iVar6 + 1);
  case 0x62:
  case 0x76:
  case 0x8a:
  case 0x9e:
  case 0xa6:
  case 0xae:
  case 0xc2:
  case 0xd6:
  case 0xde:
  case 0xe6:
  case 0xee:
    goto code_r0x00010487017c;
  case 0x65:
    goto code_r0x000104870040;
  case 0x66:
  case 0x8e:
  case 0xa2:
  case 0xc6:
    goto code_r0x00010487018c;
  case 0x74:
    puStack_90 = param_6;
    pcStack_70 = param_5;
    _objc_retain();
    goto code_r0x00010486ffc8;
  case 0x78:
  case 0xfd:
    goto code_r0x000104870274;
  case 0x79:
  case 0xa9:
  case 0xb1:
    goto code_r0x000104870028;
  case 0x7a:
  case 0xaa:
  case 0xb2:
  case 0xe2:
  case 0xea:
  case 0xf2:
    goto code_r0x0001048701a0;
  case 0x7b:
  case 0xab:
  case 0xb3:
  case 0xe3:
  case 0xeb:
  case 0xf3:
    goto code_r0x0001048702ac;
  case 0x84:
    if (in_CY) {
      param_1 = (code *)0xc;
    }
    return param_1;
  case 0x85:
  case 0xbd:
    in_CY = 0xfe < (uint)param_25;
code_r0x000104870274:
    uVar7 = (uint)param_23;
    if (!in_CY) {
      uVar7 = 1;
    }
    uVar1 = 0;
    if (0xf4 < (uint)param_3) {
      uVar1 = uVar7;
    }
    param_25 = (code *)(ulong)uVar1;
code_r0x000104870280:
    if (uVar5 < 0xf5) {
      if ((int)param_25 < 2) {
        if ((int)param_25 != 0) {
          param_1[1] = (code)0x0;
          if (uVar5 == 0) {
            return param_1;
          }
          goto code_r0x0001048702d4;
        }
      }
      else {
code_r0x0001048702c4:
        if ((int)param_25 == 2) {
          *(undefined2 *)(param_1 + 1) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 1) = 0;
        }
      }
      if (uVar5 != 0) {
code_r0x0001048702d4:
        *param_1 = (code)((char)param_2 + '\v');
        return param_1;
      }
    }
    else {
      param_21 = (ulong)(uVar5 - 0xf5);
code_r0x0001048702a4:
      param_23 = (ulong)(((uint)(param_21 >> 8) & 0xffffff) + 1);
code_r0x0001048702ac:
      *param_1 = SUB81(param_21,0);
      iVar6 = (int)param_25;
      in_OV = SBORROW4(iVar6,1);
      in_NG = iVar6 + -1 < 0;
      in_ZR = iVar6 == 1;
code_r0x0001048702b4:
      if (!(bool)in_ZR && in_NG == in_OV) {
        if ((int)param_25 != 2) {
          *(int *)(param_1 + 1) = (int)param_23;
          return param_1;
        }
        *(short *)(param_1 + 1) = (short)param_23;
        return param_1;
      }
      if ((int)param_25 != 0) {
        param_1[1] = SUB81(param_23,0);
        return param_1;
      }
    }
    return param_1;
  case 0x86:
  case 0xbe:
  case 0xfe:
    goto code_r0x000104870124;
  case 0x88:
    break;
  case 0x8c:
    goto code_r0x0001048702a4;
  case 0x8d:
  case 0xc5:
    goto code_r0x00010487003c;
  case 0xa0:
    goto code_r0x000104870280;
  case 0xa1:
    goto code_r0x0001048702b4;
  case 0xa8:
    FUN_1048701a4();
    _objc_allocWithZone();
    UNRECOVERED_JUMPTABLE =
         (code *)((ulong)(byte)(&UNK_10dd39c18)[(ulong)param_1 & 0xff] * 4 + 0x104870128);
    param_25 = (code *)&stack0xffffffffffffffa0;
code_r0x000104870124:
                    /* WARNING: Could not recover jumptable at 0x000104870124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_25);
    return pcVar4;
  case 0xb0:
    goto code_r0x00010487017c;
  case 0xc0:
    goto code_r0x00010486ff08;
  case 0xc4:
    if (uVar5 == 0) {
      return (code *)0x0;
    }
    if (0xf4 < uVar5) {
      param_25 = (code *)(ulong)(uVar5 + 0xb);
      in_CY = 0xfffeff < uVar5 + 0xb;
      param_23 = 4;
      param_21._0_4_ = 2;
      goto code_r0x0001048701e4;
    }
    goto LAB_104870240;
  case 0xd8:
    goto code_r0x000104870018;
  case 0xda:
    goto code_r0x000104870208;
  case 0xe0:
code_r0x00010487017c:
    param_1[param_23] = SUB81(param_22,0);
    *(code **)param_25 = param_1;
    *(code **)(param_25 + 8) = param_27;
    param_2 = PTR_s_init_1125d9248;
code_r0x00010487018c:
    _objc_msgSendSuper2(param_25,param_2);
    param_1 = param_25;
code_r0x0001048701a0:
    return param_1;
  case 0xe1:
  case 0xe9:
  case 0xf1:
    goto code_r0x000104870024;
  case 0xe8:
    goto code_r0x000104870244;
  case 0xf0:
    goto code_r0x0001048702c4;
  }
  return param_1;
code_r0x0001048700a0:
code_r0x0001048700a4:
code_r0x0001048700a8:
  _swift_getObjectType();
  param_2 = PTR_s_dealloc_112525b20;
code_r0x0001048700b8:
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,param_2);
  return pcVar3;
code_r0x00010486ffc8:
  param_27 = param_1;
code_r0x000104870010:
code_r0x000104870018:
code_r0x00010487001c:
  param_2 = &stack0xffffffffffffffc0;
code_r0x000104870020:
code_r0x000104870024:
code_r0x000104870028:
  param_4 = &stack0xffffffffffffffa0;
  param_6 = auStack_80;
code_r0x00010487003c:
code_r0x000104870040:
  param_1 = (code *)0x104870000;
code_r0x000104870058:
  param_1 = param_1 + 0x36c;
code_r0x00010487005c:
  param_3 = (code *)0x104870000;
code_r0x000104870060:
  param_3 = param_3 + 0x378;
code_r0x000104870068:
  param_5 = (code *)0x10487037c;
code_r0x000104870070:
  param_7 = (code *)0x104870380;
code_r0x000104870078:
  param_8 = auStack_a0;
  pcVar4 = param_1;
  pcVar2 = param_27;
code_r0x00010487007c:
  param_1 = pcVar2;
  FUN_10486fe70(pcVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_1);
code_r0x00010487008c:
code_r0x000104870090:
code_r0x000104870094:
  return param_1;
}



/* Entry: 10486ff78; end: 104870097; -[SCRegistrationState matchDisplayName:birthday:displayNameAndBirthday:suggestedUsername:usernameFromBirthday:usernameFromSuggestedUsername:passwordFromBirthday:passwordFromUsername:passwordFromSuggestedUsername:challengedFromPassword:exit:done:] */

void FUN_10486ff78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_190 = param_14;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10486fe70(FUN_10487036c,auStack_40,0x104870378,auStack_60,0x10487037c,auStack_80,0x104870380,
                auStack_a0,0x104870384,auStack_c0,0x104870388,auStack_e0,0x10487038c,auStack_100,
                0x104870390,auStack_120,0x104870394,auStack_140,0x104870398,auStack_160,0x10487039c,
                auStack_180,0x1048703a0,auStack_1a0);
  _objc_release(param_1);
  return;
}



/* Entry: 104870098; end: 1048700cb;  */

void FUN_104870098(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048700cc; end: 1048700df; -[SCRegistrationState .cxx_destruct] */

void FUN_1048700cc(void)

{
  return;
}



/* Entry: 1048700e0; end: 1048701a3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte ******* FUN_1048700e0(byte *******param_1,uint param_2,undefined8 param_3,byte *******param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte ******ppppppbVar3;
  byte ******ppppppbVar4;
  undefined *puVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  byte *******pppppppbVar19;
  byte *******pppppppbVar20;
  byte *******pppppppbVar21;
  byte *******pppppppbVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  byte ******ppppppbVar26;
  byte ******ppppppbVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  int iVar31;
  byte *******pppppppbVar32;
  ulong uVar33;
  byte bVar34;
  byte *******unaff_x21;
  byte ******ppppppbVar35;
  byte ******ppppppbVar36;
  long in_stack_00000638;
  long in_stack_00000640;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  byte ******ppppppbStack_70;
  undefined8 uStack_68;
  byte ******appppppbStack_60 [2];
  byte ******appppppbStack_50 [2];
  byte ******appppppbStack_40 [2];
  byte ******appppppbStack_30 [2];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar29 = (undefined4)((ulong)param_3 >> 0x20);
  uVar28 = (uint)param_3;
  pppppppbVar20 = (byte *******)&pppppppbStack_e0;
  uVar14 = (uint)&pppppppbStack_e0;
  iVar15 = (int)&pppppppbStack_e0;
  iVar16 = (int)&pppppppbStack_e0;
  iVar18 = (int)&pppppppbStack_e0;
  iVar17 = (int)&pppppppbStack_e0;
  pppppppbVar21 = (byte *******)&pppppppbStack_e0;
  pppppppbVar32 = (byte *******)&pppppppbStack_e0;
  pppppppbVar22 = (byte *******)&pppppppbStack_e0;
  pppppppbVar25 = (byte *******)&pppppppbStack_e0;
  pppppppbVar19 = param_1;
  FUN_1048701a4();
  pppppppbVar24 = pppppppbVar19;
  _objc_allocWithZone();
  bVar34 = (byte)param_1;
  uVar30 = (uint)_DAT_1130936e0;
  pppppppbVar23 = pppppppbVar24;
  pppppppbVar6 = (byte *******)&pppppppbStack_e0;
  pppppppbVar7 = (byte *******)&pppppppbStack_e0;
  pppppppbVar8 = (byte *******)&pppppppbStack_e0;
  pppppppbVar9 = (byte *******)&pppppppbStack_e0;
  pppppppbVar10 = (byte *******)&pppppppbStack_e0;
  uVar33 = _DAT_1130936e0;
  iVar31 = (int)&pppppppbStack_e0;
  iVar11 = (int)&pppppppbStack_e0;
  iVar12 = (int)&pppppppbStack_e0;
  iVar13 = (int)&pppppppbStack_e0;
  switch((ulong)param_1 & 0xff) {
  case 0:
    break;
  default:
    pppppppbVar10 = (byte *******)&pppppppbStack_d0;
  case 100:
  case 0x72:
  case 0xaa:
  case 200:
  case 0xd0:
  case 0xd8:
  case 0xe0:
  case 0xea:
    pppppppbVar20 = pppppppbVar10;
    break;
  case 2:
  case 0xf0:
    pppppppbVar20 = (byte *******)&stack0xffffffffffffff40;
    break;
  case 3:
    pppppppbVar20 = (byte *******)&stack0xffffffffffffff50;
    break;
  case 4:
  case 0xc4:
    pppppppbVar8 = (byte *******)&stack0xffffffffffffff60;
  case 0x7b:
  case 0xb3:
  case 0xf3:
    pppppppbVar20 = pppppppbVar8;
    break;
  case 5:
    pppppppbVar20 = (byte *******)&stack0xffffffffffffff70;
    break;
  case 6:
    pppppppbVar20 = (byte *******)&pppppppbStack_80;
    break;
  case 7:
    pppppppbVar7 = &ppppppbStack_70;
  case 0xb4:
    pppppppbVar20 = pppppppbVar7;
    break;
  case 8:
    pppppppbVar20 = appppppbStack_60;
    break;
  case 9:
    pppppppbVar20 = appppppbStack_50;
    break;
  case 10:
    pppppppbVar20 = appppppbStack_40;
    break;
  case 0xb:
  case 0x57:
  case 0x6b:
  case 0x7f:
  case 0x93:
  case 0x9b:
  case 0xa3:
  case 0xb7:
  case 0xcb:
  case 0xd3:
  case 0xdb:
  case 0xe3:
    pppppppbVar9 = appppppbStack_30;
  case 0x62:
  case 0x8a:
  case 0x8c:
  case 0xc2:
    pppppppbVar20 = pppppppbVar9;
    break;
  case 0x18:
  case 0x38:
  case 0xf8:
    goto code_r0x000104870270;
  case 0x19:
  case 0x28:
  case 0x39:
  case 0x48:
  case 0x4f:
  case 0xf9:
    goto code_r0x0001048702bc;
  case 0x1a:
  case 0x3a:
  case 0xfa:
    goto code_r0x0001048702c4;
  case 0x1b:
  case 0x21:
  case 0x3b:
  case 0x41:
  case 0xfb:
    goto code_r0x0001048702cc;
  case 0x1c:
  case 0x3c:
  case 0xfc:
    goto code_r0x0001048702f4;
  case 0x1d:
  case 0x20:
  case 0x25:
  case 0x27:
  case 0x3d:
  case 0x40:
  case 0x45:
  case 0x47:
  case 0x4c:
  case 0xfd:
    goto code_r0x0001048702f8;
  case 0x1e:
  case 0x3e:
  case 0xfe:
    goto code_r0x0001048702f0;
  case 0x1f:
  case 0x26:
  case 0x3f:
  case 0x46:
  case 0xff:
    goto code_r0x0001048702ac;
  case 0x22:
  case 0x42:
    goto code_r0x0001048702e4;
  case 0x23:
  case 0x43:
    goto code_r0x0001048702e0;
  case 0x24:
  case 0x44:
  case 0x49:
    goto code_r0x000104870274;
  case 0x29:
    uVar14 = 2;
    if ((bool)in_CY) {
      uVar14 = uVar30;
    }
    uVar33 = (ulong)uVar14;
  case 0xcc:
    uVar14 = (uint)&pppppppbStack_e0 >> 8;
code_r0x000104870270:
    in_CY = 0xfe < uVar14;
code_r0x000104870274:
    iVar11 = (int)uVar33;
    if (!(bool)in_CY) {
      iVar11 = 1;
    }
code_r0x000104870278:
    iVar15 = iVar11;
    in_CY = 0xf4 < uVar28;
code_r0x00010487027c:
    iVar16 = 0;
    if ((bool)in_CY) {
      iVar16 = iVar15;
    }
    if (0xf4 < param_2) {
      bVar34 = (byte)(param_2 - 0xf5);
      uVar33 = (ulong)((param_2 - 0xf5 >> 8) + 1);
      iVar13 = iVar16;
code_r0x0001048702ac:
      iVar18 = iVar13;
      *(byte *)pppppppbVar24 = bVar34;
code_r0x0001048702b0:
      in_OV = SBORROW4(iVar18,1);
      in_NG = iVar18 + -1 < 0;
      in_ZR = iVar18 == 1;
      iVar12 = iVar18;
code_r0x0001048702b4:
      iVar17 = iVar12;
      if ((bool)in_ZR || in_NG != in_OV) {
        if (iVar17 == 0) {
          return pppppppbVar24;
        }
code_r0x0001048702bc:
        *(byte *)((long)pppppppbVar24 + 1) = (byte)uVar33;
        return pppppppbVar24;
      }
code_r0x0001048702e0:
      in_ZR = iVar17 == 2;
code_r0x0001048702e4:
      if (!(bool)in_ZR) {
code_r0x0001048702fc:
        *(int *)((long)pppppppbVar24 + 1) = (int)uVar33;
        return pppppppbVar24;
      }
code_r0x0001048702e8:
      *(short *)((long)pppppppbVar24 + 1) = (short)uVar33;
      return pppppppbVar24;
    }
    iVar31 = iVar16;
    if (iVar16 < 2) {
code_r0x000104870290:
      if (iVar16 != 0) {
code_r0x000104870294:
        *(byte *)((long)pppppppbVar24 + 1) = 0;
        if (param_2 == 0) {
          return pppppppbVar24;
        }
        goto code_r0x0001048702d4;
      }
code_r0x0001048702d0:
    }
    else {
code_r0x0001048702c4:
      if (iVar31 == 2) {
code_r0x0001048702cc:
        ((byte *)((long)pppppppbVar24 + 1))[0] = 0;
        ((byte *)((long)pppppppbVar24 + 1))[1] = 0;
        goto code_r0x0001048702d0;
      }
code_r0x0001048702f0:
      pbVar1 = (byte *)((long)pppppppbVar24 + 1);
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
code_r0x0001048702f4:
    }
    if (param_2 == 0) {
code_r0x0001048702f8:
      return pppppppbVar24;
    }
code_r0x0001048702d4:
    *(byte *)pppppppbVar24 = (char)param_2 + 0xb;
    return pppppppbVar24;
  case 0x2a:
  case 0x4b:
    goto code_r0x0001048702b0;
  case 0x2b:
    goto code_r0x0001048702d0;
  case 0x2c:
    goto code_r0x0001048702b4;
  case 0x4a:
    goto code_r0x0001048702fc;
  case 0x4d:
  case 0xcd:
    return pppppppbVar24;
  case 0x4e:
    goto code_r0x0001048702e8;
  case 0x54:
LAB_10487021c:
    uVar30 = *(uint *)((long)pppppppbVar24 + 1);
    goto joined_r0x00010487023c;
  case 0x55:
  case 0x69:
  case 0x7d:
  case 0x91:
  case 0x99:
  case 0xa1:
  case 0xb5:
  case 0xc9:
  case 0xd1:
  case 0xd9:
  case 0xe1:
    pppppppbVar19 = (byte *******)CONCAT44(uVar29,uVar28);
    param_1 = param_4;
    unaff_x21 = pppppppbVar24;
  case 0xb0:
    _swift_getObjectType();
    *(byte ********)((long)unaff_x21 + _DAT_113093718) = pppppppbVar19;
    pppppppbVar32 = (byte *******)0x113093000;
code_r0x00010487045c:
    *(byte ********)((long)unaff_x21 + *(long *)((long)pppppppbVar32 + 0x720)) = param_1;
    puVar5 = PTR_s_init_1125d9248;
    pppppppbStack_e0 = unaff_x21;
    pppppppbStack_d8 = pppppppbVar24;
    _objc_retain(pppppppbVar19);
    _objc_retain(param_1);
    _objc_msgSendSuper2(&pppppppbStack_e0,puVar5);
    pppppppbVar24 = pppppppbVar22;
code_r0x000104870498:
    return pppppppbVar24;
  case 0x56:
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0x9a:
  case 0xa2:
  case 0xb6:
  case 0xca:
  case 0xd2:
  case 0xda:
  case 0xe2:
    goto code_r0x0001048703c0;
  case 0x58:
    goto code_r0x000104870198;
  case 0x59:
    goto code_r0x000104870294;
  case 0x5a:
  case 0x82:
  case 0x96:
  case 0xba:
    pppppppbVar24 = pppppppbVar19;
    _objc_allocWithZone();
    *(byte ********)((long)pppppppbVar24 + _DAT_113093718) = unaff_x21;
  case 0x6e:
  case 0x9e:
  case 0xa6:
  case 0xd6:
  case 0xde:
  case 0xe6:
    *(byte ********)((long)pppppppbVar24 + _DAT_113093720) = param_1;
    pppppppbStack_e0 = pppppppbVar24;
    pppppppbStack_d8 = pppppppbVar19;
    _objc_msgSendSuper2(&pppppppbStack_e0,PTR_s_init_1125d9248);
    pppppppbVar24 = pppppppbVar21;
code_r0x000104870418:
    return pppppppbVar24;
  case 0x68:
    if ((uint)&pppppppbStack_e0 < 0xff) {
      uVar30 = 1;
    }
    if (uVar30 == 4) goto LAB_10487021c;
    if (uVar30 == 2) {
      uVar30 = (uint)*(ushort *)((long)pppppppbVar24 + 1);
      if (*(ushort *)((long)pppppppbVar24 + 1) == 0) goto LAB_104870240;
      goto LAB_104870224;
    }
    uVar30 = (uint)*(byte *)((long)pppppppbVar24 + 1);
joined_r0x00010487023c:
    if (uVar30 == 0) {
LAB_104870240:
      iVar16 = *(byte *)pppppppbVar24 - 0xc;
      if (*(byte *)pppppppbVar24 < 0xc) {
        iVar16 = -1;
      }
      return (byte *******)(ulong)(iVar16 + 1);
    }
LAB_104870224:
    return (byte *******)(ulong)(((uint)*(byte *)pppppppbVar24 | uVar30 << 8) - 0xb);
  case 0x6c:
  case 0xf1:
    goto code_r0x0001048704c8;
  case 0x6d:
  case 0x9d:
  case 0xa5:
    goto code_r0x00010487027c;
  case 0x6f:
  case 0x9f:
  case 0xa7:
  case 0xd7:
  case 0xdf:
  case 0xe7:
    goto code_r0x000104870500;
  case 0x78:
    if (pppppppbRam0000000113093710 != (byte *******)0x0) {
      return pppppppbRam0000000113093710;
    }
    pppppppbVar20 = (byte *******)&UNK_10dd39c6c;
    _swift_getWitnessTable(&UNK_10dd39c6c,&UNK_1107a6098);
    pppppppbRam0000000113093710 = pppppppbVar20;
    return pppppppbVar20;
  case 0x79:
  case 0xb1:
code_r0x0001048704c8:
    return pppppppbVar24;
  case 0x7a:
  case 0xb2:
  case 0xf2:
    pppppppbVar20 = (byte *******)pppppppbVar19[2];
                    /* WARNING: Could not recover jumptable at 0x000104870374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)pppppppbVar20[2])();
    return pppppppbVar20;
  case 0x7c:
    return pppppppbVar24;
  case 0x80:
    goto code_r0x0001048704f8;
  case 0x81:
  case 0xb9:
    goto code_r0x000104870290;
  case 0x90:
  case 0x98:
  case 0xa0:
    goto code_r0x00010487018c;
  case 0x94:
    uStack_68 = 0x104870100;
    pppppppbVar23 = pppppppbVar19;
    unaff_x21 = pppppppbVar24;
    pppppppbStack_80 = pppppppbVar19;
    pppppppbStack_78 = param_1;
    ppppppbStack_70 = (byte ******)&stack0xfffffffffffffff0;
code_r0x0001048704f8:
    _swift_getObjectType();
    param_1 = pppppppbVar23;
code_r0x000104870500:
    pppppppbVar24 = (byte *******)(ulong)*(byte *)unaff_x21;
    in_ZR = *(byte *)unaff_x21 == 0xc;
code_r0x000104870508:
    if ((bool)in_ZR) {
      pppppppbVar24 = (byte *******)0x0;
    }
    else {
      FUN_1048700e0();
    }
LAB_104870518:
    *(byte ********)((long)pppppppbVar19 + _DAT_113093718) = pppppppbVar24;
    ppppppbVar35 = unaff_x21[4];
    if (ppppppbVar35 == (byte ******)0x1) {
      pppppppbVar25 = (byte *******)0x0;
    }
    else {
      bVar34 = *(byte *)(unaff_x21 + 5);
      ppppppbVar3 = unaff_x21[2];
      ppppppbVar4 = unaff_x21[3];
      ppppppbVar36 = unaff_x21[1];
      ppppppbVar26 = (byte ******)0x0;
      FUN_1048710bc();
      ppppppbVar27 = ppppppbVar26;
      _objc_allocWithZone();
      *(byte *******)((long)ppppppbVar27 + _DAT_113093750) = ppppppbVar36;
      *(byte *******)((long)ppppppbVar27 + _DAT_113093758) = ppppppbVar3;
      puVar2 = (undefined8 *)((long)ppppppbVar27 + _DAT_113093760);
      *puVar2 = ppppppbVar4;
      puVar2[1] = ppppppbVar35;
      *(byte *)((long)ppppppbVar27 + _DAT_113093768) = bVar34 & 1;
      pppppppbStack_e0 = (byte *******)ppppppbVar27;
      pppppppbStack_d8 = (byte *******)ppppppbVar26;
      _objc_msgSendSuper2(&pppppppbStack_e0,PTR_s_init_1125d9248);
    }
    *(byte ********)((long)pppppppbVar19 + _DAT_113093720) = pppppppbVar25;
    pppppppbVar20 = (byte *******)&pppppppbStack_d0;
    pppppppbStack_d0 = pppppppbVar19;
    pppppppbStack_c8 = param_1;
    _objc_msgSendSuper2(pppppppbVar20,PTR_s_init_1125d9248);
    return pppppppbVar20;
  case 0x95:
    goto code_r0x000104870508;
  case 0x9c:
    return pppppppbVar24;
  case 0xa4:
    pppppppbVar24 = *(byte ********)((long)pppppppbVar24 + in_stack_00000640);
code_r0x0001048703c0:
_objc_retainAutoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
    return pppppppbVar24;
  case 0xb8:
    goto code_r0x000104870418;
  case 0xce:
    goto code_r0x00010487045c;
  case 0xd4:
    pppppppbVar24 = *(byte ********)((long)pppppppbVar24 + in_stack_00000638);
    goto _objc_retainAutoreleaseReturnValue;
  case 0xd5:
  case 0xdd:
  case 0xe5:
    goto code_r0x000104870278;
  case 0xdc:
    goto code_r0x000104870498;
  case 0xe4:
    goto LAB_104870518;
  }
  *(byte *)((long)pppppppbVar24 + _DAT_1130936e0) = bVar34;
  *pppppppbVar20 = (byte ******)pppppppbVar24;
  pppppppbVar20[1] = (byte ******)pppppppbVar19;
  pppppppbVar6 = pppppppbVar20;
code_r0x00010487018c:
  pppppppbVar24 = pppppppbVar6;
  _objc_msgSendSuper2(pppppppbVar24);
code_r0x000104870198:
  return pppppppbVar24;
}



/* Entry: 1048701a4; end: 1048701c3;  */

void FUN_1048701a4(void)

{
  _objc_opt_self(&PTR_PTR_1129de4d8);
  return;
}



/* Entry: 1048701c4; end: 10487032b;  */

int FUN_1048701c4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104870240;
        goto LAB_104870224;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104870224:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_104870240:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10487032c; end: 10487036b;  */

void FUN_10487032c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39c6c;
  _swift_getWitnessTable(&UNK_10dd39c6c,&UNK_1107a6098);
  puRam0000000113093710 = puVar1;
  return;
}



/* Entry: 10487036c; end: 1048703a3;  */

void FUN_10487036c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104870374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1048703a4; end: 1048703b3; -[SCRegistrationStateConfig state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048703a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093718));
  return;
}



/* Entry: 1048703b4; end: 1048703c3; -[SCRegistrationStateConfig viewConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048703b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093720));
  return;
}



/* Entry: 1048703c4; end: 104870427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048703c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093718) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113093720) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104870428; end: 10487049f; -[SCRegistrationStateConfig initWithState:viewConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104870428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113093718) = param_3;
  *(undefined8 *)(param_1 + _DAT_113093720) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1048704a0; end: 1048704cf;  */

void FUN_1048704a0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048704d0(param_1);
  return;
}



/* Entry: 1048704d0; end: 1048705eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048704d0(byte *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  
  plVar6 = &lStack_80;
  _swift_getObjectType();
  uVar5 = (ulong)*param_1;
  if (*param_1 == 0xc) {
    uVar5 = 0;
  }
  else {
    FUN_1048700e0();
  }
  *(ulong *)(unaff_x20 + _DAT_113093718) = uVar5;
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    bVar4 = param_1[0x28];
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar10 = *(undefined8 *)(param_1 + 8);
    lVar7 = 0;
    FUN_1048710bc();
    lVar8 = lVar7;
    _objc_allocWithZone();
    *(undefined8 *)(lVar8 + _DAT_113093750) = uVar10;
    *(undefined8 *)(lVar8 + _DAT_113093758) = uVar2;
    puVar1 = (undefined8 *)(lVar8 + _DAT_113093760);
    *puVar1 = uVar3;
    puVar1[1] = lVar9;
    *(byte *)(lVar8 + _DAT_113093768) = bVar4 & 1;
    lStack_80 = lVar8;
    lStack_78 = lVar7;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_113093720) = plVar6;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048705ec; end: 10487061f; -[SCRegistrationStateConfig hash] */

undefined8 FUN_1048705ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104870620();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104870620; end: 104870877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104870620(void)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar2 = *(long *)(unaff_x20 + _DAT_113093718);
  if (lVar2 == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    uVar1 = (ulong)*(byte *)(lVar2 + _DAT_1130936e0);
    __ss6HasherV8_combineyySuF(uVar1);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113093720) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104870b84();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104870878; end: 1048708f7; -[SCRegistrationStateConfig isEqual:] */

uint FUN_104870878(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001048706fc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048708f8; end: 1048708fb; -[SCRegistrationStateConfig copyWithZone:] */

void FUN_1048708f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048708fc; end: 10487092f; -[SCRegistrationStateConfig description] */

void FUN_1048708fc(void)

{
  undefined1 auStack_40 [48];
  
  FUN_1048709e4(auStack_40);
  FUN_104870ab4(auStack_40);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104870930; end: 1048709ab; -[SCRegistrationStateConfig init] */

void FUN_104870930(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCRegistrationStateTransition/SCRegistrationStateConfigWrapper.swift",0x44,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104870978);
  (*pcVar1)();
}



/* Entry: 1048709ac; end: 1048709e3; -[SCRegistrationStateConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048709ac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093718));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113093720));
  return;
}



/* Entry: 1048709e4; end: 104870ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048709e4(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  if (*(long *)(param_2 + _DAT_113093718) == 0) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = *(undefined1 *)(*(long *)(param_2 + _DAT_113093718) + _DAT_1130936e0);
  }
  lVar2 = *(long *)(param_2 + _DAT_113093720);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_113093750);
    uVar5 = *(undefined8 *)(lVar2 + _DAT_113093758);
    uVar6 = *(undefined8 *)(lVar2 + _DAT_113093760);
    uVar1 = ((undefined8 *)(lVar2 + _DAT_113093760))[1];
    uVar7 = *(undefined1 *)(lVar2 + _DAT_113093768);
    _swift_bridgeObjectRetain();
  }
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  param_1[0x28] = uVar7;
  return;
}



/* Entry: 104870ab4; end: 104870ae7;  */

undefined8 FUN_104870ab4(undefined8 param_1)

{
  FUN_10486ea10();
  return param_1;
}



/* Entry: 104870ae8; end: 104870b07;  */

void FUN_104870ae8(void)

{
  _objc_opt_self(&PTR_PTR_1129de5a0);
  return;
}



/* Entry: 104870b08; end: 104870b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104870b08(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113093750) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113093758) = uVar2;
  uVar2 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093760);
  puVar1[1] = param_1[3];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_113093768) = *(undefined1 *)(param_1 + 4);
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104870b84; end: 104870c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104870b84(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113093750));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113093758));
  if (((undefined8 *)(unaff_x20 + _DAT_113093760))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093760);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113093768));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104870c40; end: 104870d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104870c40(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar3 = &lStack_78;
    _swift_dynamicCast(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar8 = *(long *)(unaff_x20 + _DAT_113093750);
      lVar9 = *(long *)(lStack_78 + _DAT_113093750);
      lVar10 = *(long *)(unaff_x20 + _DAT_113093758);
      lVar11 = *(long *)(lStack_78 + _DAT_113093758);
      lVar4 = ((long *)(unaff_x20 + _DAT_113093760))[1];
      lVar5 = ((long *)(lStack_78 + _DAT_113093760))[1];
      uVar6 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113093760);
        if (lVar7 == *(long *)(lStack_78 + _DAT_113093760) && lVar4 == lVar5) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar7);
          uVar6 = (uint)lVar7;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_113093768);
      bVar2 = *(byte *)(lStack_78 + _DAT_113093768);
      _objc_release();
      if (lVar8 == lVar9 && lVar10 == lVar11) {
        uVar6 = uVar6 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_104870d5c;
      }
    }
  }
  uVar6 = 0;
LAB_104870d5c:
  return uVar6 & 1;
}



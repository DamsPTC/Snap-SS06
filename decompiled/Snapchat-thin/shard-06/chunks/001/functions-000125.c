/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045320a8; end: 1045320e7;  */

void FUN_1045320a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd156d0;
  _swift_getWitnessTable(&UNK_10dd156d0,&UNK_110785378);
  puRam0000000113084390 = puVar1;
  return;
}



/* Entry: 1045320e8; end: 1045320eb;  */

void FUN_1045320e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15770;
  _swift_getWitnessTable(&UNK_10dd15770,&UNK_110785398);
  puRam0000000113084398 = puVar1;
  return;
}



/* Entry: 1045320ec; end: 10453212b;  */

void FUN_1045320ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd15770;
  _swift_getWitnessTable(&UNK_10dd15770,&UNK_110785398);
  puRam0000000113084398 = puVar1;
  return;
}



/* Entry: 10453212c; end: 1045321af;  */

undefined1  [16] FUN_10453212c(void)

{
  return ZEXT816(0x110785358);
}



/* Entry: 1045321b0; end: 10453221b;  */

undefined8 * FUN_1045321b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Entry: 10453221c; end: 1045322b7;  */

int FUN_10453221c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1045322b8; end: 1045322c7; -[SCStartupJournalManager setIsInCrashLoop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045322b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130843a8) = param_3;
  return;
}



/* Entry: 1045322c8; end: 1045322d7; -[SCStartupJournalManager setLastLaunchHadCrash:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045322c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130843b0) = param_3;
  return;
}



/* Entry: 1045322d8; end: 10453232b;  */

undefined8 FUN_1045322d8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001130843b8 != -1) {
    _swift_once(0x1130843b8,&UNK_10006a52c);
  }
  uVar1 = uRam00000001130843c0;
  _objc_retain(uRam00000001130843c0);
  return uVar1;
}



/* Entry: 10453232c; end: 10453238b; -[SCStartupJournalManager init] */

void FUN_10453232c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StartupJournal.StartupJournalManager",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104532358);
  (*pcVar1)();
}



/* Entry: 10453238c; end: 1045323e7; -[SCStartupJournalManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10453238c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130843a0));
  lVar1 = _DAT_1130843c8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130843d0));
  return;
}



/* Entry: 1045323e8; end: 1045323f7; -[SCStartupJournalManager signalAppWillTerminate] */

/* WARNING: Removing unreachable block (ram,0x000100074c04) */

void FUN_1045323e8(undefined8 param_1)

{
  undefined1 auStack_90 [96];
  
  func_0x000107c61174();
  func_0x000100074c20(auStack_90,7,1);
  func_0x000100074ef8(auStack_90);
  func_0x000107c61170(param_1);
  func_0x000100076b30(auStack_90);
  return;
}



/* Entry: 1045323f8; end: 104532443;  */

/* WARNING: Removing unreachable block (ram,0x00010453242c) */

void FUN_1045323f8(undefined8 param_1)

{
  undefined1 auStack_80 [96];
  
  func_0x000100074c20(auStack_80,param_1,1);
  func_0x000100074ef8(auStack_80);
  func_0x000100076b30(auStack_80);
  return;
}



/* Entry: 104532444; end: 104532477; -[SCStartupJournalManager didAttemptRecovery] */

uint FUN_104532444(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104532478();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 104532478; end: 104532513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104532478(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100075034(&lStack_48,&UNK_100076dd8,0,&UNK_110785fd0);
  func_0x00010006c090(uStack_40,uStack_38);
  lVar3 = *(long *)(lStack_48 + 0x10);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    plVar2 = (long *)(lStack_48 + 0x20);
    do {
      lVar3 = lVar3 + -1;
      bVar1 = *plVar2 == 5;
      plVar2 = plVar2 + 0xc;
    } while (!bVar1 && lVar3 != 0);
  }
  _swift_bridgeObjectRelease(lStack_48);
  return bVar1;
}



/* Entry: 104532514; end: 104532547; -[SCStartupJournalManager objcJournal] */

void FUN_104532514(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104532548();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104532548; end: 1045329cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104532548(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100075034(&puStack_78,&UNK_100076dd8,0,&UNK_110785fd0);
  puVar4 = puStack_78;
  uVar10 = *(ulong *)(puStack_78 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar10 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000104532a38(0,uVar10,0);
    uVar12 = 0;
    puVar7 = puVar4 + 0x40;
    do {
      puVar9 = puStack_78;
      if (*(ulong *)(puVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1045327d4);
        (*pcVar5)();
      }
      uVar1 = *(undefined8 *)(puVar7 + 0x28);
      uVar3 = *(undefined8 *)(puVar7 + 0x30);
      uVar11 = *(undefined8 *)(puVar7 + 0x38);
      puVar6 = PTR_PTR_1126e1970;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar1);
      func_0x00010006c00c(uVar3,uVar11);
      func_0x00010bfee200();
      func_0x00010c197d00();
      func_0x00010c197be0(puVar6);
      func_0x00010c1e36e0(puVar6);
      func_0x00010c1e3720(puVar6);
      func_0x00010c1b68e0(puVar6);
      func_0x00010c173260(puVar6);
      func_0x00010c21d300(puVar6);
      _swift_bridgeObjectRelease(uVar1);
      func_0x00010006c090(uVar3,uVar11);
      uVar2 = *(ulong *)(puVar9 + 0x10);
      puStack_78 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        func_0x000104532a38(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
      *(undefined **)(puStack_78 + uVar2 * 8 + 0x20) = puVar6;
      puVar7 = puVar7 + 0x60;
      puVar9 = puStack_78;
    } while (uVar10 != uVar12);
  }
  puVar7 = PTR_PTR_1126add00;
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar6 = puVar7;
  func_0x00010bf96fe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar8 = puVar9;
    func_0x0001045327d8(puVar9);
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puVar8;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar8,PTR___sypN_11034f1a8 + 8);
    _swift_bridgeObjectRelease(puVar8);
    func_0x00010befa160(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar9);
    func_0x00010006c090(uStack_70,uStack_68);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1045327d8);
  (*pcVar5)();
}



/* Entry: 1045329cc; end: 104532a53;  */

void FUN_1045329cc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000100c7ba5c(0,0x113084418,&PTR_PTR_1126e1970);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x113084420;
  plVar5 = (long *)&UNK_10dd15938;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 104532a54; end: 104532b87;  */

undefined * FUN_104532a54(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104532b88);
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
    FUN_1045329cc();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
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
    uVar5 = 0;
    func_0x000100c7ba5c(0,0x113084418,&PTR_PTR_1126e1970);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 104532b88; end: 104532d4b;  */

ulong FUN_104532b88(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104532c6c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104532c70);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_1126e1970;
    _objc_opt_self(PTR_PTR_1126e1970);
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
    puVar4 = PTR_PTR_1126e1970;
    _objc_opt_self(PTR_PTR_1126e1970);
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
  func_0x000100c7ba5c(0,0x113084418,&PTR_PTR_1126e1970);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104532d4c);
  (*pcVar2)();
}



/* Entry: 104532d4c; end: 104532e2f;  */

undefined * FUN_104532d4c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104532e30);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = (undefined *)0x113084428;
      func_0x0001000285a8(0x113084428,&UNK_10dd15948);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x60) * 2;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104532e2c);
      (*pcVar2)();
    }
    _swift_arrayInitWithCopy(puVar3 + 0x20,param_2 + param_3 * 0x60,lVar1,&UNK_110785f30);
  }
  return puVar3;
}



/* Entry: 104532e30; end: 1045330f3;  */

void FUN_104532e30(long *param_1,long param_2,long param_3,code *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  lVar6 = ((ulong)unaff_x20[3] >> 1) - unaff_x20[2];
  if (SBORROW8((ulong)unaff_x20[3] >> 1,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330bc);
    (*pcVar5)();
  }
  lVar13 = *param_1;
  lVar3 = *(long *)(lVar13 + 0x10) - param_2;
  if (SBORROW8(*(long *)(lVar13 + 0x10),param_2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330c0);
    (*pcVar5)();
  }
  lVar4 = lVar3 - param_3;
  if (SBORROW8(lVar3,param_3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330c4);
    (*pcVar5)();
  }
  if (SBORROW8(lVar6,param_2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330c8);
    (*pcVar5)();
  }
  lVar3 = (lVar6 - param_2) - lVar4;
  if (SBORROW8(lVar6 - param_2,lVar4)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330cc);
    (*pcVar5)();
  }
  uVar1 = lVar13 + 0x20;
  lVar10 = uVar1 + param_2 * 0x60;
  uVar7 = lVar10 + param_3 * 0x60;
  lVar9 = lVar6;
  FUN_1045332c0();
  if (lVar9 == 0) {
    lVar12 = unaff_x20[2];
    lVar6 = lVar12 + param_2;
    if (SCARRY8(lVar12,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330e0);
      (*pcVar5)();
    }
    if (lVar6 < lVar12) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330e4);
      (*pcVar5)();
    }
    if (SBORROW8(lVar6,lVar12)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330e8);
      (*pcVar5)();
    }
    lVar9 = unaff_x20[1];
    _swift_arrayInitWithCopy(uVar1,lVar9 + lVar12 * 0x60,lVar6 - lVar12,&UNK_110785f30);
    (*param_4)(uVar1 + (lVar6 - lVar12) * 0x60,param_3);
    lVar4 = lVar6 + lVar3;
    if (SCARRY8(lVar6,lVar3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330ec);
      (*pcVar5)();
    }
    uVar8 = (ulong)unaff_x20[3] >> 1;
    if ((long)uVar8 < lVar4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330f0);
      (*pcVar5)();
    }
    if (SBORROW8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330f4);
      (*pcVar5)();
    }
    _swift_arrayInitWithCopy(uVar7,lVar9 + lVar4 * 0x60,uVar8 - lVar4,&UNK_110785f30);
  }
  else {
    lVar12 = unaff_x20[2];
    uVar11 = unaff_x20[1] + lVar12 * 0x60;
    uVar8 = uVar11 + param_2 * 0x60;
    lVar2 = lVar9 + 0x20;
    _swift_arrayDestroy(lVar2,(long)(uVar11 - lVar2) / 0x60,&UNK_110785f30);
    if ((uVar1 != uVar11) || (uVar8 <= uVar1)) {
      _memmove(uVar1,uVar11,param_2 * 0x60);
    }
    _swift_arrayDestroy(uVar8,lVar3,&UNK_110785f30);
    (*param_4)(lVar10,param_3);
    uVar8 = uVar8 + lVar3 * 0x60;
    if (uVar7 != uVar8 || uVar8 + lVar4 * 0x60 <= uVar7) {
      _memmove(uVar7,uVar8,lVar4 * 0x60);
    }
    lVar6 = uVar11 + lVar6 * 0x60;
    _swift_arrayDestroy(lVar6,((lVar2 + *(long *)(lVar9 + 0x10) * 0x60) - lVar6) / 0x60,
                        &UNK_110785f30);
    *(undefined8 *)(lVar9 + 0x10) = 0;
    _swift_release(lVar9);
  }
  _swift_unknownObjectRelease(*unaff_x20);
  if (SBORROW8(0,lVar12)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330d0);
    (*pcVar5)();
  }
  lVar6 = lVar12 + *(long *)(lVar13 + 0x10);
  if (SCARRY8(lVar12,*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330d4);
    (*pcVar5)();
  }
  if (lVar6 < lVar12) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330d8);
    (*pcVar5)();
  }
  if (-1 < lVar6) {
    *unaff_x20 = lVar13;
    unaff_x20[1] = uVar1 + lVar12 * -0x60;
    unaff_x20[2] = lVar12;
    unaff_x20[3] = lVar6 * 2 | 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(lVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1045330dc);
  (*pcVar5)();
}



/* Entry: 1045330f4; end: 1045332ab;  */

undefined *
FUN_1045330f4(long param_1,long param_2,undefined *param_3,long param_4,long param_5,ulong param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (param_6 >> 1) - param_5;
  if (SBORROW8(param_6 >> 1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104533290);
    (*pcVar1)();
  }
  if ((param_6 & 1) == 0) {
    if (param_2 <= lVar7) goto LAB_104533268;
  }
  else {
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = param_3;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_3);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar8 = *(long *)(puVar3 + 0x10);
    puVar5 = (undefined *)(param_4 + param_5 * 0x60 + lVar7 * 0x60);
    if (puVar5 == puVar3 + lVar8 * 0x60 + 0x20) {
      uVar4 = *(ulong *)(puVar3 + 0x18);
      _swift_release();
      lVar8 = (uVar4 >> 1) - lVar8;
      lVar6 = lVar7 + lVar8;
      if (SCARRY8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045332a4);
        (*pcVar1)();
      }
    }
    else {
      _swift_release();
      lVar6 = lVar7;
    }
    puVar3 = param_3;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (param_2 <= lVar6) {
      if (puVar3 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_3);
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar8 = *(long *)(puVar3 + 0x10);
      if (puVar5 == puVar3 + lVar8 * 0x60 + 0x20) {
        uVar4 = *(ulong *)(puVar3 + 0x18);
        _swift_release();
        lVar8 = (uVar4 >> 1) - lVar8;
        bVar2 = SCARRY8(lVar7,lVar8);
        lVar7 = lVar7 + lVar8;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1045332ac);
          (*pcVar1)();
        }
      }
      else {
        _swift_release();
      }
      goto LAB_104533268;
    }
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_3);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar8 = *(long *)(puVar3 + 0x10);
    if (puVar5 == puVar3 + lVar8 * 0x60 + 0x20) {
      uVar4 = *(ulong *)(puVar3 + 0x18);
      _swift_release();
      lVar8 = (uVar4 >> 1) - lVar8;
      bVar2 = SCARRY8(lVar7,lVar8);
      lVar7 = lVar7 + lVar8;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1045332a8);
        (*pcVar1)();
      }
    }
    else {
      _swift_release();
    }
  }
  if (lVar7 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1045332a0);
    (*pcVar1)();
  }
  lVar7 = lVar7 << 1;
LAB_104533268:
  if (lVar7 <= param_2) {
    lVar7 = param_2;
  }
  if (lVar7 <= param_1) {
    lVar7 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 != 0) {
    puVar3 = (undefined *)0x113084428;
    func_0x0001000285a8(0x113084428,&UNK_10dd15948);
    func_0x000107c613fc();
    puVar5 = puVar3;
    func_0x000107c610a4();
    *(long *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = ((long)(puVar5 + -0x20) / 0x60) * 2;
  }
  return puVar3;
}



/* Entry: 1045332ac; end: 1045332bf;  */

undefined1  [16] FUN_1045332ac(void)

{
  return ZEXT816(0x1045332bc);
}



/* Entry: 1045332c0; end: 104533437;  */

void FUN_1045332c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  
  iVar6 = (int)*unaff_x20;
  _swift_isUniquelyReferencedNonObjC_nonNull();
  if (iVar6 != 0) {
    lVar1 = unaff_x20[2];
    uVar9 = (ulong)unaff_x20[3] >> 1;
    lVar4 = uVar9 - lVar1;
    if (SBORROW8(uVar9,lVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104533414);
      (*pcVar5)();
    }
    puVar2 = (undefined *)*unaff_x20;
    lVar3 = unaff_x20[1];
    lVar8 = lVar4;
    if ((unaff_x20[3] & 1) != 0) {
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar7 = puVar2;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar2);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar10 = *(long *)(puVar7 + 0x10);
      if ((undefined *)(lVar3 + lVar1 * 0x60 + lVar4 * 0x60) == puVar7 + lVar10 * 0x60 + 0x20) {
        uVar9 = *(ulong *)(puVar7 + 0x18);
        _swift_release();
        lVar10 = (uVar9 >> 1) - lVar10;
        lVar8 = lVar4 + lVar10;
        if (SCARRY8(lVar4,lVar10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104533438);
          (*pcVar5)();
        }
      }
      else {
        _swift_release();
      }
    }
    if (param_1 <= lVar8) {
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar7 = puVar2;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar2);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar3 = (((lVar3 + lVar1 * 0x60) - (long)puVar7) + -0x20) / 0x60;
      lVar1 = lVar4 + lVar3;
      if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104533418);
        (*pcVar5)();
      }
      if (lVar1 < *(long *)(puVar7 + 0x10)) {
        FUN_104533604(lVar1,*(long *)(puVar7 + 0x10),0);
      }
    }
  }
  return;
}



/* Entry: 104533438; end: 104533603;  */

long FUN_104533438(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  double dVar6;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x00010006ad78();
  lVar4 = 0x113084428;
  func_0x0001000285a8(0x113084428,&UNK_10dd15948);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0xe000000000000000;
  dVar6 = 0.0;
  *(undefined8 *)(lVar4 + 0x78) = 0xc000000000000000;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 1;
  *(undefined1 *)(lVar4 + 0x28) = 1;
  if (lRam0000000113084448 != -1) {
    _swift_once(0x113084448,&UNK_100074e84);
  }
  *(undefined8 *)(lVar4 + 0x40) = uRam0000000113813c40;
  if (lRam0000000113084450 != -1) {
    _swift_once(0x113084450,&UNK_100074ea0);
  }
  *(undefined8 *)(lVar4 + 0x38) = uRam0000000113813c48;
  __s10Foundation4DateVACycfC(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1045335fc);
    (*pcVar1)();
  }
  if (dVar6 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104533600);
    (*pcVar1)();
  }
  if (dVar6 < 1.8446744073709552e+19) {
    *(long *)(lVar4 + 0x30) = (long)dVar6;
    *(undefined4 *)(lVar4 + 0x48) = 1;
    _swift_bridgeObjectRelease(lVar3);
    return lVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104533604);
  (*pcVar1)();
}



/* Entry: 104533604; end: 1045336d7;  */

void FUN_104533604(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045336c8);
    (*pcVar3)();
  }
  lVar6 = *unaff_x20;
  lVar7 = lVar6 + 0x20 + param_1 * 0x60;
  _swift_arrayDestroy(lVar7,lVar1,&UNK_110785f30);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1045336cc);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045336d0);
      (*pcVar3)();
    }
    uVar4 = lVar7 + param_3 * 0x60;
    uVar5 = lVar6 + 0x20 + param_2 * 0x60;
    if (uVar4 != uVar5 || uVar5 + lVar1 * 0x60 <= uVar4) {
      _memmove(uVar4,uVar5,lVar1 * 0x60);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1045336d4);
      (*pcVar3)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1045336d8);
  (*pcVar3)();
}



/* Entry: 1045336d8; end: 1045336df;  */

void FUN_1045336d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1045336e0; end: 10453372f;  */

void FUN_1045336e0(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 1;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined4 *)(unaff_x20 + 0x1c) = 2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010f207920;
  return;
}



/* Entry: 104533730; end: 10453394b;  */

void FUN_104533730(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
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
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_104535070(&uStack_e8);
  uStack_98 = uStack_e0;
  uStack_a0 = uStack_e8;
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  uStack_128 = uStack_e0;
  uStack_130 = uStack_e8;
  uStack_118 = uStack_d0;
  uStack_120 = uStack_d8;
  uStack_108 = uStack_c0;
  lStack_110 = uStack_c8;
  uStack_f8 = uStack_b0;
  uStack_100 = uStack_b8;
  func_0x000100bcb1dc(&uStack_a0);
  uStack_130 = 0x6964656d61726170;
  uStack_128 = 0xe900000000000063;
  func_0x000100bcb1dc(&uStack_90);
  uStack_120 = 0x5f70757472617473;
  uStack_118 = 0xec00000074696e69;
  lVar4 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = 0x6f6c5f6873617263;
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  uStack_a8 = uStack_c8;
  *(undefined8 *)(lVar4 + 0x28) = 0xea0000000000706f;
  *(undefined8 *)(lVar4 + 0x30) = uVar1;
  *(undefined8 *)(lVar4 + 0x38) = uVar2;
  lVar5 = lVar4;
  func_0x0001001830b8();
  _swift_setDeallocating(lVar4);
  func_0x000104534a44((undefined8 *)(lVar4 + 0x20),0x112d38308,&UNK_10d902040);
  lVar4 = 0x112d550a0;
  puVar10 = &UNK_10d91c290;
  func_0x000104534a44(&uStack_a8,0x112d550a0,&UNK_10d91c290);
  uVar6 = uStack_c0;
  lStack_110 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = uStack_c0;
  if ((uVar6 & 1) == 0) {
    lVar4 = *(long *)(uStack_c0 + 0x10) + 1;
    uVar8 = 0;
    puVar10 = (undefined *)0x1;
    func_0x000101cef030(0,lVar4,1,uStack_c0);
  }
  uVar6 = *(ulong *)(uVar8 + 0x10);
  lVar5 = uVar6 + 1;
  uVar9 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    puVar10 = (undefined *)0x1;
    lVar4 = lVar5;
    func_0x000101cef030(uVar9,lVar5,1,uVar8);
  }
  *(long *)(uVar9 + 0x10) = lVar5;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = 1;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  lStack_60 = lStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  puVar7 = &uStack_80;
  uStack_108 = uVar9;
  uStack_58 = uVar9;
  FUN_10453394c(puVar7);
  FUN_104534050();
  func_0x00010006c090(puVar7,lVar4);
  _swift_release(puVar10);
  func_0x000104534a10(&uStack_130);
  return;
}



/* Entry: 10453394c; end: 10453404f;  */

undefined8 * FUN_10453394c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *****pppppuVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 ****ppppuVar18;
  ulong uVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ****ppppuStack_e0;
  ulong uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar3 = param_1;
  FUN_1045354c0();
  ppppuVar4 = (undefined8 ****)PTR_PTR_1126b0380;
  uVar17 = param_2;
  _objc_opt_self();
  ppppuVar18 = ppppuVar4;
  func_0x00010bf066e0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar5 = ppppuVar18;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(ppppuVar18);
  pppuStack_130 = (undefined8 ***)0x2e;
  uStack_128 = 0xe100000000000000;
  lVar6 = 0x7fffffffffffffff;
  pppuStack_d0 = &pppuStack_130;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_104534e08,&ppppuStack_e0,ppppuVar5,uVar17);
  uVar14 = *(ulong *)(lVar6 + 0x10);
  if (uVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533e18);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x20);
  uVar19 = *(ulong *)(lVar6 + 0x28);
  if ((uVar19 ^ (ulong)pppppuVar9) < 0x4000) {
    uVar19 = 0;
  }
  else {
    pppppuVar12 = *(undefined8 ******)(lVar6 + 0x30);
    uVar14 = *(ulong *)(lVar6 + 0x38);
    if ((uVar14 >> 0x3c & 1) == 0) {
      if ((uVar14 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar14);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar14 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar14 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_104534ac4();
    }
    else {
      _swift_bridgeObjectRetain(uVar14);
      func_0x0001045346a4(pppppuVar9,uVar19,pppppuVar12,uVar14,10);
      _swift_bridgeObjectRelease(uVar14);
    }
    uVar19 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar19 = (ulong)pppppuVar9 & 0xffffffff;
    }
    uVar14 = *(ulong *)(lVar6 + 0x10);
  }
  if (uVar14 < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533e28);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x40);
  uVar15 = *(ulong *)(lVar6 + 0x48);
  if ((uVar15 ^ (ulong)pppppuVar9) < 0x4000) {
    uVar15 = 0;
  }
  else {
    pppppuVar12 = *(undefined8 ******)(lVar6 + 0x50);
    uVar14 = *(ulong *)(lVar6 + 0x58);
    if ((uVar14 >> 0x3c & 1) == 0) {
      if ((uVar14 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar14);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar14 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar14 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_104534ac4();
    }
    else {
      _swift_bridgeObjectRetain(uVar14);
      func_0x0001045346a4(pppppuVar9,uVar15,pppppuVar12,uVar14,10);
      _swift_bridgeObjectRelease(uVar14);
    }
    uVar15 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar15 = (long)pppppuVar9 << 0x20;
    }
    uVar14 = *(ulong *)(lVar6 + 0x10);
  }
  if (uVar14 < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533e7c);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x60);
  uVar16 = *(ulong *)(lVar6 + 0x68);
  if ((uVar16 ^ (ulong)pppppuVar9) < 0x4000) {
    uVar16 = 0;
  }
  else {
    pppppuVar12 = *(undefined8 ******)(lVar6 + 0x70);
    uVar14 = *(ulong *)(lVar6 + 0x78);
    if ((uVar14 >> 0x3c & 1) == 0) {
      if ((uVar14 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar14);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar14 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar14 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_104534ac4();
    }
    else {
      _swift_bridgeObjectRetain(uVar14);
      func_0x0001045346a4(pppppuVar9,uVar16,pppppuVar12,uVar14,10);
      _swift_bridgeObjectRelease(uVar14);
    }
    uVar16 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar16 = (long)pppppuVar9 << 0x20;
    }
    uVar14 = *(ulong *)(lVar6 + 0x10);
  }
  if (uVar14 < 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533ed4);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x80);
  uVar14 = *(ulong *)(lVar6 + 0x88);
  pppppuVar12 = *(undefined8 ******)(lVar6 + 0x90);
  uVar1 = *(ulong *)(lVar6 + 0x98);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(lVar6);
  if ((uVar14 ^ (ulong)pppppuVar9) >> 0xe == 0) {
    _swift_bridgeObjectRelease(uVar1);
    uVar14 = 0;
  }
  else {
    if ((uVar1 >> 0x3c & 1) == 0) {
      if ((uVar1 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar1);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar1 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar1 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_104534ac4();
    }
    else {
      func_0x0001045346a4(pppppuVar9,uVar14,pppppuVar12,uVar1,10);
    }
    _swift_bridgeObjectRelease(uVar1);
    uVar14 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar14 = (ulong)pppppuVar9 & 0xffffffff;
    }
  }
  func_0x00010006c00c(0,0xc000000000000000);
  uVar13 = 0;
  FUN_104534e5c(0,0,0,0xf000000000000000);
  func_0x00010c1504e0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar18 = ppppuVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(ppppuVar4);
  uVar17 = uVar13;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(uVar13);
  ppppuVar4 = ppppuVar18;
  __sSS5countSivg(ppppuVar18,uVar17);
  func_0x00010006c090(0,0xc000000000000000);
  if (ppppuVar4 == (undefined8 ****)0x0) {
    _swift_bridgeObjectRelease(uVar17);
    uVar17 = 0xe400000000000000;
    ppppuVar18 = (undefined8 ****)0x646f7270;
  }
  uStack_f8 = uVar14 | uVar16;
  uStack_100 = uVar15 | uVar19;
  dStack_120 = 1.30823642362304e-319;
  uStack_118 = 0xe200000000000000;
  uStack_108 = 0xc000000000000000;
  uStack_110 = 0;
  uStack_e8 = 0xc000000000000000;
  uStack_f0 = 0;
  pppuStack_d0 = (undefined8 ***)0x676f;
  uStack_c8 = 0xe200000000000000;
  uStack_b8 = 0xc000000000000000;
  uStack_c0 = 0;
  uStack_98 = 0xc000000000000000;
  uStack_a0 = 0;
  pppuStack_130 = ppppuVar18;
  uStack_128 = uVar17;
  ppppuStack_e0 = ppppuVar18;
  uStack_d8 = uVar17;
  uStack_b0 = uStack_100;
  uStack_a8 = uStack_f8;
  FUN_104534e78(&pppuStack_130,&pppuStack_180);
  func_0x000104534eb4(&ppppuStack_e0);
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_178 = uStack_128;
  pppuStack_180 = pppuStack_130;
  uStack_168 = uStack_118;
  dStack_170 = dStack_120;
  dVar20 = dStack_120;
  FUN_10453534c(&pppuStack_180);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010bfee200();
  func_0x00010c26f320();
  _objc_release(puVar7);
  dVar20 = dVar20 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533f30);
    (*pcVar2)();
  }
  if (dVar20 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533f50);
    (*pcVar2)();
  }
  if (1.8446744073709552e+19 <= dVar20) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533f54);
    (*pcVar2)();
  }
  FUN_104535244((long)dVar20);
  puVar11 = puVar3;
  FUN_104535208(puVar3,param_2,param_3);
  if (puVar11 == (undefined8 *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104533f58);
    (*pcVar2)();
  }
  func_0x0001045352c8((long)puVar11 + 1);
  puVar11 = puVar3;
  func_0x0001045350b8(puVar3,param_2,param_3);
  puVar8 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar10 = puVar11;
  if (((ulong)puVar8 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
    FUN_10453459c(0,puVar11[2] + 1,1,puVar11);
  }
  uVar14 = puVar10[2];
  puVar11 = puVar10;
  if ((ulong)puVar10[3] >> 1 <= uVar14) {
    puVar11 = (undefined8 *)(ulong)(1 < (ulong)puVar10[3]);
    FUN_10453459c(puVar11,uVar14 + 1,1,puVar10);
  }
  puVar11[2] = uVar14 + 1;
  uVar13 = param_1[1];
  uVar17 = *param_1;
  uVar22 = param_1[3];
  uVar21 = param_1[2];
  uVar23 = param_1[4];
  uVar25 = param_1[7];
  uVar24 = param_1[6];
  puVar11[uVar14 * 8 + 9] = param_1[5];
  puVar11[uVar14 * 8 + 8] = uVar23;
  puVar11[uVar14 * 8 + 0xb] = uVar25;
  puVar11[uVar14 * 8 + 10] = uVar24;
  puVar11[uVar14 * 8 + 5] = uVar13;
  puVar11[uVar14 * 8 + 4] = uVar17;
  puVar11[uVar14 * 8 + 7] = uVar22;
  puVar11[uVar14 * 8 + 6] = uVar21;
  FUN_104534dcc(param_1,&ppppuStack_e0);
  FUN_1045350f8(puVar11);
  FUN_104535434(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  func_0x000104535184(2);
  func_0x00010006c00c(puVar3,param_2);
  _swift_retain(param_3);
  func_0x00010006c090(puVar3,param_2);
  _swift_release(param_3);
  return puVar3;
}



/* Entry: 104534050; end: 1045343b7;  */

/* WARNING: Removing unreachable block (ram,0x00010453431c) */

void FUN_104534050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar9 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12;
  puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  func_0x00010c22bfa0();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(0x697274656d2f3176,0xea00000000007363);
  uVar7 = uStack_70;
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar13,uStack_78,uStack_70);
  _swift_bridgeObjectRelease(uVar7);
  lVar2 = lVar13;
  (**(code **)(lVar12 + 0x30))(lVar13,1,lVar3);
  if ((int)lVar2 == 1) {
    _objc_release(puVar4);
    func_0x000104534a44(lVar13,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar10,lVar13,lVar3);
    (**(code **)(lVar12 + 0x10))(lVar8,lVar10,lVar3);
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (puVar9,0x404e000000000000,lVar8,0);
    __s10Foundation10URLRequestV10httpMethodSSSgvs(0x54534f50,0xe400000000000000);
    uVar7 = 0x800000010f207960;
    __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
              (0xd000000000000016,0x800000010f207960,0x2d746e65746e6f43,0xec00000065707954);
    puVar5 = PTR_PTR_1126b0380;
    _objc_opt_self(PTR_PTR_1126b0380);
    func_0x00010c291260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar5);
    __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
              (puVar6,uVar7,0x6567412d72657355,0xea0000000000746e);
    _swift_bridgeObjectRelease(uVar7);
    uStack_78 = uStack_a8;
    uStack_70 = uStack_a0;
    uStack_68 = uStack_98;
    FUN_104534a84();
    func_0x000100075890(&uStack_88,0,0,&UNK_110785b88,PTR___s10Foundation4DataVN_110350ae0,uVar7,
                        &PTR_DAT_110789f58);
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(uStack_88,uStack_80);
    uVar7 = uStack_88;
    __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
    puVar5 = puVar4;
    func_0x00010bf647c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x00010c13d1c0(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    (**(code **)(lVar11 + 8))(puVar9,lVar1);
    (**(code **)(lVar12 + 8))(lVar10,lVar3);
  }
  return;
}



/* Entry: 1045343b8; end: 1045343cf;  */

void FUN_1045343b8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_104535070(&uStack_f0);
  uStack_88 = uStack_d0;
  uStack_a8 = uStack_e8;
  uStack_b0 = uStack_f0;
  uStack_98 = uStack_d8;
  uStack_a0 = uStack_e0;
  uStack_128 = uStack_e8;
  uStack_130 = uStack_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  lStack_110 = uStack_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  func_0x000100bcb1dc(&uStack_b0);
  uStack_130 = 0x6964656d61726170;
  uStack_128 = 0xe900000000000063;
  func_0x000100bcb1dc(&uStack_a0);
  uStack_120 = 0xd000000000000012;
  uStack_118 = 0x800000010f207940;
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  _swift_initStaticObject();
  lVar2 = lVar1;
  func_0x0001001830b8();
  func_0x000104534a44(lVar1 + 0x20,0x112d38308,&UNK_10d902040);
  lVar1 = 0x112d550a0;
  puVar7 = &UNK_10d91c290;
  func_0x000104534a44(&uStack_88,0x112d550a0,&UNK_10d91c290);
  uVar3 = uStack_c8;
  lStack_110 = lVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uStack_c8;
  if ((uVar3 & 1) == 0) {
    lVar1 = *(long *)(uStack_c8 + 0x10) + 1;
    uVar5 = 0;
    puVar7 = (undefined *)0x1;
    func_0x000101cef030(0,lVar1,1,uStack_c8);
  }
  uVar3 = *(ulong *)(uVar5 + 0x10);
  lVar2 = uVar3 + 1;
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    puVar7 = (undefined *)0x1;
    lVar1 = lVar2;
    func_0x000101cef030(uVar6,lVar2,1,uVar5);
  }
  *(long *)(uVar6 + 0x10) = lVar2;
  *(undefined8 *)(uVar6 + uVar3 * 8 + 0x20) = 1;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  lStack_60 = lStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  puVar4 = &uStack_80;
  uStack_108 = uVar6;
  uStack_58 = uVar6;
  FUN_10453394c(puVar4);
  FUN_104534050();
  func_0x00010006c090(puVar4,lVar1);
  _swift_release(puVar7);
  func_0x000104534a10(&uStack_130);
  return;
}



/* Entry: 1045343d0; end: 104534577;  */

void FUN_1045343d0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_104535070(&uStack_f0);
  uStack_88 = uStack_d0;
  uStack_a8 = uStack_e8;
  uStack_b0 = uStack_f0;
  uStack_98 = uStack_d8;
  uStack_a0 = uStack_e0;
  uStack_128 = uStack_e8;
  uStack_130 = uStack_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  lStack_110 = uStack_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  func_0x000100bcb1dc(&uStack_b0);
  uStack_130 = 0x6964656d61726170;
  uStack_128 = 0xe900000000000063;
  func_0x000100bcb1dc(&uStack_a0);
  uStack_120 = 0xd000000000000012;
  uStack_118 = 0x800000010f207940;
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  _swift_initStaticObject();
  lVar2 = lVar1;
  func_0x0001001830b8();
  func_0x000104534a44(lVar1 + 0x20,0x112d38308,&UNK_10d902040);
  lVar1 = 0x112d550a0;
  puVar7 = &UNK_10d91c290;
  func_0x000104534a44(&uStack_88,0x112d550a0,&UNK_10d91c290);
  uVar3 = uStack_c8;
  lStack_110 = lVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uStack_c8;
  if ((uVar3 & 1) == 0) {
    lVar1 = *(long *)(uStack_c8 + 0x10) + 1;
    uVar5 = 0;
    puVar7 = (undefined *)0x1;
    func_0x000101cef030(0,lVar1,1,uStack_c8);
  }
  uVar3 = *(ulong *)(uVar5 + 0x10);
  lVar2 = uVar3 + 1;
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    puVar7 = (undefined *)0x1;
    lVar1 = lVar2;
    func_0x000101cef030(uVar6,lVar2,1,uVar5);
  }
  *(long *)(uVar6 + 0x10) = lVar2;
  *(undefined8 *)(uVar6 + uVar3 * 8 + 0x20) = 1;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  lStack_60 = lStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  puVar4 = &uStack_80;
  uStack_108 = uVar6;
  uStack_58 = uVar6;
  FUN_10453394c(puVar4);
  FUN_104534050();
  func_0x00010006c090(puVar4,lVar1);
  _swift_release(puVar7);
  func_0x000104534a10(&uStack_130);
  return;
}



/* Entry: 104534578; end: 10453459b;  */

void FUN_104534578(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10453459c; end: 1045347a7;  */

undefined * FUN_10453459c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045346a4);
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
    puVar3 = (undefined *)0x1130845a8;
    func_0x0001000285a8(0x1130845a8,&UNK_10dd15a00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&UNK_110785af8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 1045347a8; end: 104534a0f;  */

ulong FUN_1045347a8(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = (int)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104534a10);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_1045349fc;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 + uVar12, SCARRY4(iVar8,uVar12)))
        goto LAB_1045349e8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_104534928:
      uVar9 = 0;
      uVar7 = uVar10;
      goto LAB_1045349fc;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104534a0c);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_1045349fc;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 - uVar12, SBORROW4(iVar8,uVar12)))
        goto LAB_1045349e8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_104534928;
    }
  }
  else if (param_2 != 0) {
    uVar10 = iVar5 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = iVar5 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar10 = 0x3a;
      uVar2 = iVar5 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar11 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar10 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar2 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar1 & 0xff) <= uVar12)) goto LAB_1045349fc;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar11 * (long)iVar5);
        if (((long)(int)uVar11 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar11 = (uint)bVar3 + iVar6 & 0xff, uVar7 = iVar8 + uVar11, SCARRY4(iVar8,uVar11)))
        goto LAB_1045349e8;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar11 = uVar7;
      } while (param_2 != 0);
      uVar9 = 0;
    }
    goto LAB_1045349fc;
  }
LAB_1045349e8:
  uVar7 = 0;
  uVar9 = 0x100000000;
LAB_1045349fc:
  return uVar9 | uVar7;
}



/* Entry: 104534a10; end: 104534a83;  */

undefined8 FUN_104534a10(undefined8 param_1)

{
  FUN_104539a20();
  return param_1;
}



/* Entry: 104534a84; end: 104534ac3;  */

void FUN_104534a84(void)

{
  undefined *puVar1;
  
  if (puRam00000001130845a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd15dd8;
  _swift_getWitnessTable(&DAT_10dd15dd8,&UNK_110785b88);
  puRam00000001130845a0 = puVar1;
  return;
}



/* Entry: 104534ac4; end: 104534dcb;  */

ulong FUN_104534ac4(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = (uint)(param_4 >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  uVar9 = 4L << uVar3;
  uVar5 = param_2;
  if ((param_2 & 0xc) == uVar9) {
    func_0x000100e36e7c(param_2,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_104534b6c;
LAB_104534b0c:
    uVar8 = uVar5 >> 0x10;
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_104534b0c;
LAB_104534b6c:
    uVar8 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar8 = param_5 >> 0x38 & 0xf;
    }
    if (uVar8 < uVar5 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104534dcc);
      (*pcVar2)();
    }
    uVar8 = 0xf;
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(0xf,uVar5,param_4,param_5);
  }
  if ((param_2 & 0xc) == uVar9) {
    func_0x000100e36e7c(param_2,param_4,param_5);
  }
  if ((param_3 & 0xc) == uVar9) {
    func_0x000100e36e7c(param_3,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_104534c24;
LAB_104534b28:
    param_2 = (param_3 >> 0x10) - (param_2 >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_104534b28;
LAB_104534c24:
    uVar5 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 < param_2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104534dbc);
      (*pcVar2)();
    }
    if (uVar5 < param_3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104534dc0);
      (*pcVar2)();
    }
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(param_2,param_3,param_4,param_5);
  }
  uVar5 = uVar8 + param_2;
  if (SCARRY8(uVar8,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104534db4);
    (*pcVar2)();
  }
  if ((long)uVar5 < (long)uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104534db8);
    (*pcVar2)();
  }
  pbVar6 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar6 = (byte *)(uVar8 + param_1);
  }
  if (*pbVar6 == 0x2b) {
    if (uVar5 == uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104534dc8);
      (*pcVar2)();
    }
    if (uVar5 - uVar8 != 1) {
      uVar3 = 0;
      lVar7 = param_2 - 1;
      do {
        pbVar6 = pbVar6 + 1;
        if (((9 < *pbVar6 - 0x30) ||
            (iVar4 = (int)((long)(int)uVar3 * 10), (long)(int)uVar3 * 10 - (long)iVar4 != 0)) ||
           (uVar1 = *pbVar6 - 0x30 & 0xff, uVar3 = iVar4 + uVar1, SCARRY4(iVar4,uVar1)))
        goto LAB_104534d80;
        uVar5 = 0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      goto LAB_104534d88;
    }
  }
  else if (*pbVar6 == 0x2d) {
    if (uVar5 == uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104534dc4);
      (*pcVar2)();
    }
    if (uVar5 - uVar8 != 1) {
      uVar3 = 0;
      lVar7 = param_2 - 1;
      do {
        pbVar6 = pbVar6 + 1;
        if (((9 < *pbVar6 - 0x30) ||
            (iVar4 = (int)((long)(int)uVar3 * 10), (long)(int)uVar3 * 10 - (long)iVar4 != 0)) ||
           (uVar1 = *pbVar6 - 0x30 & 0xff, uVar3 = iVar4 - uVar1, SBORROW4(iVar4,uVar1)))
        goto LAB_104534d80;
        uVar5 = 0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      goto LAB_104534d88;
    }
  }
  else if (uVar5 != uVar8) {
    uVar3 = 0;
    if (pbVar6 == (byte *)0x0) {
      uVar5 = 0;
    }
    else {
      do {
        if (((9 < *pbVar6 - 0x30) ||
            (iVar4 = (int)((long)(int)uVar3 * 10), (long)(int)uVar3 * 10 - (long)iVar4 != 0)) ||
           (uVar1 = *pbVar6 - 0x30 & 0xff, uVar3 = iVar4 + uVar1, SCARRY4(iVar4,uVar1)))
        goto LAB_104534d80;
        uVar5 = 0;
        param_2 = param_2 - 1;
        pbVar6 = pbVar6 + 1;
      } while (param_2 != 0);
    }
    goto LAB_104534d88;
  }
LAB_104534d80:
  uVar3 = 0;
  uVar5 = 0x100000000;
LAB_104534d88:
  return uVar5 | uVar3;
}



/* Entry: 104534dcc; end: 104534e07;  */

undefined8 FUN_104534dcc(undefined8 param_1,undefined8 param_2)

{
  FUN_104539a60(param_2,param_1);
  return param_2;
}



/* Entry: 104534e08; end: 104534e5b;  */

uint FUN_104534e08(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 104534e5c; end: 104534e77;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104534e5c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 104534e78; end: 104534ee7;  */

undefined8 FUN_104534e78(undefined8 param_1,undefined8 param_2)

{
  FUN_104539528(param_2,param_1);
  return param_2;
}



/* Entry: 104534ee8; end: 104534ef7;  */

void FUN_104534ee8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 104534ef8; end: 104534f27;  */

void FUN_104534ef8(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_104538a14();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 104534f28; end: 104534f2f;  */

undefined8 FUN_104534f28(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 104534f30; end: 104534fa3;  */

void FUN_104534f30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113084648;
  func_0x0001000285a8(0x113084648,&UNK_10dd15a20);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104534fa4; end: 104534faf;  */

void FUN_104534fa4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104534fb0; end: 10453505b;  */

void FUN_104534fb0(void)

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



/* Entry: 10453505c; end: 10453506f;  */

bool FUN_10453505c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104535070; end: 1045350f7;  */

void FUN_104535070(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = puVar2;
  param_1[5] = puVar1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 1045350f8; end: 104535207;  */

void FUN_1045350f8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_104538a20(0);
    _swift_allocObject();
    FUN_10453689c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x18) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 104535208; end: 104535243;  */

undefined8 FUN_104535208(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x30,auStack_38,0,0);
  return *(undefined8 *)(param_3 + 0x30);
}



/* Entry: 104535244; end: 10453534b;  */

void FUN_104535244(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_104538a20(0);
    _swift_allocObject();
    FUN_10453689c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x30,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  return;
}



/* Entry: 10453534c; end: 104535433;  */

void FUN_10453534c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_f8 [24];
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_104538a20(0);
    _swift_allocObject();
    FUN_10453689c();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  _swift_beginAccess(lVar2 + 0x40,auStack_f8,1,0);
  uStack_58 = *(undefined8 *)(lVar2 + 0x78);
  uStack_60 = *(undefined8 *)(lVar2 + 0x70);
  uStack_48 = *(undefined8 *)(lVar2 + 0x88);
  uStack_50 = *(undefined8 *)(lVar2 + 0x80);
  uStack_78 = *(undefined8 *)(lVar2 + 0x58);
  uStack_80 = *(undefined8 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x68);
  uStack_70 = *(undefined8 *)(lVar2 + 0x60);
  uStack_88 = *(undefined8 *)(lVar2 + 0x48);
  uStack_90 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x68) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x78) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x70) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x88) = uStack_98;
  *(undefined8 *)(lVar2 + 0x80) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x48) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x40) = uStack_e0;
  *(undefined8 *)(lVar2 + 0x58) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x50) = uStack_d0;
  func_0x000104538a88(&uStack_90,0x113084658,&UNK_10dd15a30);
  return;
}



/* Entry: 104535434; end: 1045354bf;  */

void FUN_104535434(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_104538a20(0);
    _swift_allocObject();
    FUN_10453689c(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x90,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x90) = param_1;
  *(undefined1 *)(lVar3 + 0x98) = param_2;
  return;
}



/* Entry: 1045354c0; end: 10453551b;  */

undefined8 FUN_1045354c0(void)

{
  if (lRam0000000113084668 != -1) {
    _swift_once(0x113084668,0x104536820);
  }
  _swift_retain(uRam0000000113084670);
  return 0;
}



/* Entry: 10453551c; end: 104535563;  */

void FUN_10453551c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd160f0,0x56,2);
  uRam0000000113813c58 = uStack_38;
  uRam0000000113813c50 = uStack_40;
  uRam0000000113813c68 = uStack_28;
  uRam0000000113813c60 = uStack_30;
  uRam0000000113813c78 = uStack_18;
  uRam0000000113813c70 = uStack_20;
  return;
}



/* Entry: 104535564; end: 104535603;  */

void FUN_104535564(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113084678 != -1) {
    _swift_once(0x113084678,FUN_10453551c);
  }
  uVar5 = uRam0000000113813c78;
  uVar4 = uRam0000000113813c70;
  uVar3 = uRam0000000113813c68;
  uVar2 = uRam0000000113813c60;
  uVar1 = uRam0000000113813c58;
  *param_1 = uRam0000000113813c50;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104535604; end: 10453564b;  */

void FUN_104535604(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd160c0,0x22,2);
  uRam0000000113813c88 = uStack_38;
  uRam0000000113813c80 = uStack_40;
  uRam0000000113813c98 = uStack_28;
  uRam0000000113813c90 = uStack_30;
  uRam0000000113813ca8 = uStack_18;
  uRam0000000113813ca0 = uStack_20;
  return;
}



/* Entry: 10453564c; end: 104535733;  */

/* WARNING: Removing unreachable block (ram,0x000104535724) */

void FUN_10453564c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x150);
LAB_1045356b4:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_1045356b4;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1045391c8();
          (*pcVar4)(unaff_x20 + 0x30,&UNK_110785a68,lVar1,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104535734; end: 1045357f3;  */

void FUN_104535734(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_1045357f4();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,2,param_2,param_3);
    }
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 1045357f4; end: 10453587f;  */

void FUN_1045357f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x48);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045391c8();
    (*pcVar1)(&uStack_60,1,&UNK_110785a68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 104535880; end: 1045358cb;  */

void FUN_104535880(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  return;
}



/* Entry: 1045358cc; end: 1045358fb;  */

undefined1  [16] FUN_1045358cc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1045358fc; end: 10453592f;  */

void FUN_1045358fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 104535930; end: 104535943;  */

undefined1  [16] FUN_104535930(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x104535940;
  return auVar1;
}



/* Entry: 104535944; end: 104535957;  */

void FUN_104535944(void)

{
  FUN_10453564c();
  return;
}



/* Entry: 104535958; end: 104535997;  */

void FUN_104535958(void)

{
  FUN_104535734();
  return;
}



/* Entry: 104535998; end: 10453599b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104535998(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10453599c; end: 1045359d3;  */

uint FUN_10453599c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104539fa0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1045359d4; end: 104535a2b;  */

uint FUN_1045359d4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_104538ac8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104535a2c; end: 104535acb;  */

void FUN_104535a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113084680 != -1) {
    _swift_once(0x113084680,FUN_104535604);
  }
  uVar5 = uRam0000000113813ca8;
  uVar4 = uRam0000000113813ca0;
  uVar3 = uRam0000000113813c98;
  uVar2 = uRam0000000113813c90;
  uVar1 = uRam0000000113813c88;
  *param_1 = uRam0000000113813c80;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104535acc; end: 104535b07;  */

void FUN_104535acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130849b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130849b0,&UNK_10dd15f80);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104535b08; end: 104535c1b;  */

void FUN_104535b08(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_c8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_c8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104535c1c; end: 104535cbb;  */

uint FUN_104535c1c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_104538ac8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104535cbc; end: 104535d87;  */

void FUN_104535cbc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_104535d54;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_104535d54;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 4) goto LAB_104535d64;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_104535d54:
        (*pcVar3)();
      }
LAB_104535d64:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 104535d88; end: 104535e6b;  */

void FUN_104535d88(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((((((int)param_2 == 0) ||
        ((**(code **)(param_7 + 0x18))(param_2,1,param_6,param_7), unaff_x21 == 0)) &&
       ((param_2 >> 0x20 == 0 ||
        ((**(code **)(param_7 + 0x18))(param_2 >> 0x20,2,param_6,param_7), unaff_x21 == 0)))) &&
      (((int)param_3 == 0 ||
       ((**(code **)(param_7 + 0x18))(param_3,3,param_6,param_7), unaff_x21 == 0)))) &&
     ((param_3 >> 0x20 == 0 ||
      ((**(code **)(param_7 + 0x18))(param_3 >> 0x20,4,param_6,param_7), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 104535e6c; end: 104535e9f;  */

void FUN_104535e6c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 104535ea0; end: 104535ecf;  */

undefined1  [16] FUN_104535ea0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 104535ed0; end: 104535f03;  */

void FUN_104535ed0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 104535f04; end: 104535f17;  */

undefined1  [16] FUN_104535f04(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x104535f14;
  return auVar1;
}



/* Entry: 104535f18; end: 104535f4f;  */

void FUN_104535f18(void)

{
  FUN_104535cbc();
  return;
}



/* Entry: 104535f50; end: 104535f53;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104535f50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 104535f54; end: 104535f8b;  */

uint FUN_104535f54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104539f60();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104535f8c; end: 104535fc3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104535f8c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  undefined1 (*unaff_x20) [16];
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  auVar46 = *unaff_x20;
  iVar11 = -(uint)(auVar46._0_4_ == (int)*param_1);
  iVar22 = -(uint)(auVar46._4_4_ == (int)((ulong)*param_1 >> 0x20));
  iVar5 = -(uint)(auVar46._8_4_ == (int)param_1[1]);
  iVar6 = -(uint)(auVar46._12_4_ == (int)((ulong)param_1[1] >> 0x20));
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  pbVar13 = *(byte **)unaff_x20[1];
  pbVar28 = *(byte **)(unaff_x20[1] + 8);
  lVar27 = param_1[2];
  uVar19 = param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined1 (*) [16])((ulong)pbVar28 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(undefined1 (**) [16])(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 104535fc4; end: 104536063;  */

void FUN_104535fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113084690 != -1) {
    _swift_once(0x113084690,0x104535c74);
  }
  uVar5 = uRam0000000113813cd8;
  uVar4 = uRam0000000113813cd0;
  uVar3 = uRam0000000113813cc8;
  uVar2 = uRam0000000113813cc0;
  uVar1 = uRam0000000113813cb8;
  *param_1 = uRam0000000113813cb0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104536064; end: 10453609f;  */

void FUN_104536064(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130849a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130849a0,&UNK_10dd15f78);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045360a0; end: 104536193;  */

void FUN_1045360a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104536194; end: 1045361c7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104536194(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  auVar46 = *param_2;
  iVar11 = -(uint)((int)*param_1 == auVar46._0_4_);
  iVar22 = -(uint)((int)((ulong)*param_1 >> 0x20) == auVar46._4_4_);
  iVar5 = -(uint)((int)param_1[1] == auVar46._8_4_);
  iVar6 = -(uint)((int)((ulong)param_1[1] >> 0x20) == auVar46._12_4_);
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  lVar27 = *(long *)param_2[1];
  uVar19 = *(ulong *)(param_2[1] + 8);
  pbVar13 = (byte *)param_1[2];
  pbVar28 = (byte *)param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(ulong *)(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar28 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(ulong *)(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(ulong *)(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 1045361c8; end: 10453620f;  */

void FUN_1045361c8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd16060,0x39,2);
  uRam0000000113813ce8 = uStack_38;
  uRam0000000113813ce0 = uStack_40;
  uRam0000000113813cf8 = uStack_28;
  uRam0000000113813cf0 = uStack_30;
  uRam0000000113813d08 = uStack_18;
  uRam0000000113813d00 = uStack_20;
  return;
}



/* Entry: 104536210; end: 10453631f;  */

/* WARNING: Removing unreachable block (ram,0x00010453631c) */

void FUN_104536210(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_104536298;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_104536288:
        (*pcVar3)();
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x1b8))
                  (unaff_x20 + 0x20,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,
                   &PTR_DAT_110787dc8,param_2,param_3);
      }
      else if (lVar1 == 4) {
        pcVar3 = *(code **)(param_3 + 0x70);
        goto LAB_104536288;
      }
LAB_104536298:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 104536320; end: 104536427;  */

void FUN_104536320(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
        ((*(long *)(unaff_x20[4] + 0x10) == 0 ||
         ((**(code **)(param_3 + 0x198))
                    (unaff_x20[4],3,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,
                     &PTR_DAT_110787dc8,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(long *)(unaff_x20[5] + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x140))(unaff_x20[5],4,param_2,param_3), unaff_x21 == 0)))) {
      func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 104536428; end: 10453646f;  */

void FUN_104536428(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = puVar2;
  param_1[5] = puVar1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 104536470; end: 10453648b;  */

undefined1  [16] FUN_104536470(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe600000000000000;
  auVar1._0_8_ = 0x63697274654d;
  return auVar1;
}



/* Entry: 10453648c; end: 1045364bb;  */

undefined1  [16] FUN_10453648c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 1045364bc; end: 1045364ef;  */

void FUN_1045364bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 1045364f0; end: 104536503;  */

undefined1  [16] FUN_1045364f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x104536500;
  return auVar1;
}



/* Entry: 104536504; end: 10453652b;  */

void FUN_104536504(void)

{
  FUN_104536210();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e69fb0; end: 103e69fcf;  */

void FUN_103e69fb0(void)

{
  _objc_opt_self(&PTR_PTR_1130217e0);
  return;
}



/* Entry: 103e69fd0; end: 103e6a01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e69fd0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113021848) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6a01c; end: 103e6a07b; -[FriendingFacebookContactSyncServices init] */

void FUN_103e6a01c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingFacebookContactSyncServices.FriendingFacebookContactSyncServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6a048);
  (*pcVar1)();
}



/* Entry: 103e6a07c; end: 103e6a28b; -[FriendingFacebookContactSyncServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113021848));
  return;
}



/* Entry: 103e6a28c; end: 103e6a337;  */

void FUN_103e6a28c(void)

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



/* Entry: 103e6a338; end: 103e6a36f;  */

void FUN_103e6a338(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103e6a370; end: 103e6a3b7; -[SCFacebookContactSyncResult description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a370(long param_1)

{
  code *pcVar1;
  
  if ((1 < *(byte *)(param_1 + _DAT_113021878)) && (*(char *)(param_1 + _DAT_113021880) == '\x02'))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6a3b8);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6a3b8; end: 103e6a3ff; -[SCFacebookContactSyncResult init] */

void FUN_103e6a3b8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendingFacebookContactSyncServices/FacebookContactSyncResultWrapper.swift",0x4b,2,
             0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6a400);
  (*pcVar1)();
}



/* Entry: 103e6a400; end: 103e6a49b; -[SCFacebookContactSyncResult hash] */

void FUN_103e6a400(void)

{
  func_0x000103e6a420();
  return;
}



/* Entry: 103e6a49c; end: 103e6a597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103e6a49c(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar5 = &lStack_58;
    _swift_dynamicCast(plVar5,auStack_50,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113021878);
      if (cVar1 == *(char *)(lStack_58 + _DAT_113021878)) {
        if ((cVar1 == '\0') || (cVar1 == '\x01')) {
          _objc_release();
          bVar6 = 1;
        }
        else {
          bVar2 = *(byte *)(unaff_x20 + _DAT_113021880);
          bVar3 = *(byte *)(lStack_58 + _DAT_113021880);
          _objc_release();
          bVar6 = bVar3 == 2 && bVar2 == 2;
          if (bVar2 != 2 && bVar3 != 2) {
            bVar6 = bVar2 ^ bVar3 ^ 1;
          }
        }
        goto LAB_103e6a540;
      }
      _objc_release();
    }
  }
  bVar6 = 0;
LAB_103e6a540:
  return bVar6 & 1;
}



/* Entry: 103e6a598; end: 103e6a617; -[SCFacebookContactSyncResult isEqual:] */

uint FUN_103e6a598(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e6a49c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e6a618; end: 103e6a623; -[SCFacebookContactSyncResult copyWithZone:] */

void FUN_103e6a618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e6a624; end: 103e6a633; +[SCFacebookContactSyncResult skipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a624(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021878) = 0;
  *(undefined1 *)(lVar1 + _DAT_113021880) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6a634; end: 103e6a68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a634(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113021878) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113021880) = 2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6a690; end: 103e6a697; +[SCFacebookContactSyncResult needLinking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a690(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021878) = 1;
  *(undefined1 *)(lVar1 + _DAT_113021880) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6a698; end: 103e6a753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a698(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021878) = param_3;
  *(undefined1 *)(lVar1 + _DAT_113021880) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6a754; end: 103e6a81f; +[SCFacebookContactSyncResult finishedWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a754(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021878) = 2;
  *(undefined1 *)(lVar1 + _DAT_113021880) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6a820; end: 103e6a877; -[SCFacebookContactSyncResult matchSkipped:needLinking:finished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6a820(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113021878) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000103e6a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_113021878) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103e6a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (*(byte *)(param_1 + _DAT_113021880) != 2) {
                    /* WARNING: Could not recover jumptable at 0x000103e6a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5,*(byte *)(param_1 + _DAT_113021880) & 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6a878);
  (*pcVar1)();
}



/* Entry: 103e6a878; end: 103e6a8cb;  */

void FUN_103e6a878(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e6a8cc; end: 103e6aa33;  */

int FUN_103e6a8cc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e6a948;
        goto LAB_103e6a92c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e6a92c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103e6a948:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e6aa34; end: 103e6aa73;  */

void FUN_103e6aa34(void)

{
  undefined *puVar1;
  
  if (puRam00000001130218b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1934;
  _swift_getWitnessTable(&UNK_10dca1934,&UNK_1107195a8);
  puRam00000001130218b0 = puVar1;
  return;
}



/* Entry: 103e6aa74; end: 103e6aa83; -[FriendingGoogleContactSyncServices contactSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6aa74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130218b8));
  return;
}



/* Entry: 103e6aa84; end: 103e6aacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6aa84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130218b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6aad0; end: 103e6ab27; -[FriendingGoogleContactSyncServices initWithContactSyncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6aad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130218b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103e6ab28; end: 103e6ab87; -[FriendingGoogleContactSyncServices init] */

void FUN_103e6ab28(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingGoogleContactSyncServices.FriendingGoogleContactSyncServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6ab54);
  (*pcVar1)();
}



/* Entry: 103e6ab88; end: 103e6abaf; -[FriendingGoogleContactSyncServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ab88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130218b8));
  return;
}



/* Entry: 103e6abb0; end: 103e6abef;  */

void FUN_103e6abb0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130218e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1a10;
  _swift_getWitnessTable(&UNK_10dca1a10,&UNK_110719658);
  puRam00000001130218e8 = puVar1;
  return;
}



/* Entry: 103e6abf0; end: 103e6ac9b;  */

void FUN_103e6abf0(void)

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



/* Entry: 103e6ac9c; end: 103e6acd3;  */

void FUN_103e6ac9c(ulong *param_1,ulong *param_2)

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



/* Entry: 103e6acd4; end: 103e6ace3; -[FriendingComplianceServices friendingComplianceChecker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6acd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130218f0));
  return;
}



/* Entry: 103e6ace4; end: 103e6ad7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ace4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130218f0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6ad7c; end: 103e6addb; -[FriendingComplianceServices init] */

void FUN_103e6ad7c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingComplianceServices.FriendingComplianceServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6ada8);
  (*pcVar1)();
}



/* Entry: 103e6addc; end: 103e6adff; -[FriendingComplianceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6addc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130218f0));
  return;
}



/* Entry: 103e6ae00; end: 103e6ae2b;  */

void FUN_103e6ae00(void)

{
  func_0x0001000285a8(0x112de1040,&UNK_10dca1af0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103e6ae2c; end: 103e6ae53;  */

bool FUN_103e6ae2c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103e6ae54; end: 103e6af83;  */

void FUN_103e6ae54(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (param_2 < 4) {
    pcVar1 = "INCOMING_FRIEND_REQUEST";
    uVar2 = 0xd00000000000001b;
    if (param_2 != 2) {
      pcVar1 = "CONTACT_SYNC_REMINDER";
      uVar2 = 0xd000000000000017;
    }
    uVar4 = 0xd00000000000001b;
    pcVar5 = "RECENTLY_JOINED_SUGGESTIONS";
    if (param_2 == 0) {
      uVar4 = 0xd00000000000001c;
      pcVar5 = "UNVIEWED_FRIEND_SUGGESTIONS";
    }
    if (param_2 < 2) {
      pcVar1 = pcVar5;
      uVar2 = uVar4;
    }
    uVar3 = (ulong)pcVar1 | 0x8000000000000000;
  }
  else {
    uVar3 = 0xeb0000000052454d;
    uVar2 = 0x49545f4c41434f4c;
    if (param_2 != 6) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x4e574f4e4b4e55;
    }
    pcVar1 = "PENDING_FRIEND_REQUEST";
    uVar4 = 0xd000000000000015;
    if (param_2 != 4) {
      pcVar1 = "before checker was resolved";
      uVar4 = 0xd000000000000016;
    }
    if (param_2 < 6) {
      uVar2 = uVar4;
      uVar3 = (ulong)pcVar1 | 0x8000000000000000;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 103e6af84; end: 103e6af8b;  */

void FUN_103e6af84(void)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  if (bVar1 < 4) {
    pcVar2 = "INCOMING_FRIEND_REQUEST";
    uVar3 = 0xd00000000000001b;
    if (bVar1 != 2) {
      pcVar2 = "CONTACT_SYNC_REMINDER";
      uVar3 = 0xd000000000000017;
    }
    uVar5 = 0xd00000000000001b;
    pcVar6 = "RECENTLY_JOINED_SUGGESTIONS";
    if (bVar1 == 0) {
      uVar5 = 0xd00000000000001c;
      pcVar6 = "UNVIEWED_FRIEND_SUGGESTIONS";
    }
    if (bVar1 < 2) {
      pcVar2 = pcVar6;
      uVar3 = uVar5;
    }
    uVar4 = (ulong)pcVar2 | 0x8000000000000000;
  }
  else {
    uVar4 = 0xeb0000000052454d;
    uVar3 = 0x49545f4c41434f4c;
    if (bVar1 != 6) {
      uVar4 = 0xe700000000000000;
      uVar3 = 0x4e574f4e4b4e55;
    }
    pcVar2 = "PENDING_FRIEND_REQUEST";
    uVar5 = 0xd000000000000015;
    if (bVar1 != 4) {
      pcVar2 = "before checker was resolved";
      uVar5 = 0xd000000000000016;
    }
    if (bVar1 < 6) {
      uVar3 = uVar5;
      uVar4 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 103e6af8c; end: 103e6afb7;  */

void FUN_103e6af8c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010199c528(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103e6afb8; end: 103e6b0cf;  */

void FUN_103e6afb8(undefined8 *param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 < 4) {
    pcVar2 = "INCOMING_FRIEND_REQUEST";
    uVar3 = 0xd00000000000001b;
    if (bVar1 != 2) {
      pcVar2 = "CONTACT_SYNC_REMINDER";
      uVar3 = 0xd000000000000017;
    }
    uVar5 = 0xd00000000000001b;
    pcVar6 = "RECENTLY_JOINED_SUGGESTIONS";
    if (bVar1 == 0) {
      uVar5 = 0xd00000000000001c;
      pcVar6 = "UNVIEWED_FRIEND_SUGGESTIONS";
    }
    if (bVar1 < 2) {
      pcVar2 = pcVar6;
      uVar3 = uVar5;
    }
    *param_1 = uVar3;
    param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
    return;
  }
  uVar4 = 0xeb0000000052454d;
  uVar3 = 0x49545f4c41434f4c;
  if (bVar1 != 6) {
    uVar4 = 0xe700000000000000;
    uVar3 = 0x4e574f4e4b4e55;
  }
  pcVar2 = "PENDING_FRIEND_REQUEST";
  uVar5 = 0xd000000000000015;
  if (bVar1 != 4) {
    pcVar2 = "before checker was resolved";
    uVar5 = 0xd000000000000016;
  }
  if (bVar1 < 6) {
    uVar4 = (ulong)pcVar2 | 0x8000000000000000;
    uVar3 = uVar5;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Entry: 103e6b0d0; end: 103e6b10f;  */

void FUN_103e6b0d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112de1040;
  func_0x0001000285a8(0x112de1040,&UNK_10dca1af0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103e6b110; end: 103e6b147;  */

void FUN_103e6b110(undefined8 param_1)

{
  if (lRam00000001130219c0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7cdee4);
  return;
}



/* Entry: 103e6b148; end: 103e6b14b;  */

void FUN_103e6b148(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1af8;
  _swift_getWitnessTable(&UNK_10dca1af8,&UNK_110719878);
  puRam0000000113021950 = puVar1;
  return;
}



/* Entry: 103e6b14c; end: 103e6b18b;  */

void FUN_103e6b14c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1af8;
  _swift_getWitnessTable(&UNK_10dca1af8,&UNK_110719878);
  puRam0000000113021950 = puVar1;
  return;
}



/* Entry: 103e6b18c; end: 103e6b18f;  */

void FUN_103e6b18c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113021958 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113021960;
  func_0x00010002969c(0x113021960,&UNK_10dca1b98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113021958 = puVar2;
  return;
}



/* Entry: 103e6b190; end: 103e6b1df;  */

void FUN_103e6b190(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113021958 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113021960;
  func_0x00010002969c(0x113021960,&UNK_10dca1b98);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113021958 = puVar2;
  return;
}



/* Entry: 103e6b1e0; end: 103e6b203;  */

void FUN_103e6b1e0(long param_1)

{
  if (*(byte *)(param_1 + 0x10) < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



/* Entry: 103e6b204; end: 103e6b2a7;  */

undefined1 * FUN_103e6b204(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_2[0x10];
  func_0x000103e6adec(uVar2,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_1[0x10] = uVar1;
  return param_1;
}



/* Entry: 103e6b2a8; end: 103e6b2eb;  */

undefined1 * FUN_103e6b2a8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_2[0x10];
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = param_1[0x10];
  param_1[0x10] = uVar1;
  func_0x000103e6b1f0(uVar3,uVar2);
  return param_1;
}



/* Entry: 103e6b2ec; end: 103e6b4fb;  */

int FUN_103e6b2ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103e6b4fc; end: 103e6b54b;  */

undefined8 * FUN_103e6b4fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000103e6adec(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103e6b1f0(uVar3,uVar2);
  return param_1;
}



/* Entry: 103e6b54c; end: 103e6b587;  */

undefined8 * FUN_103e6b54c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103e6b1f0(uVar3,uVar2);
  return param_1;
}



/* Entry: 103e6b588; end: 103e6b657;  */

int FUN_103e6b588(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103e6b658; end: 103e6b6eb;  */

long * FUN_103e6b658(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    _objc_retain(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain(lVar5);
  }
  return param_1;
}



/* Entry: 103e6b6ec; end: 103e6b72f;  */

void FUN_103e6b6ec(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _objc_release(*param_1);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000103e6b72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 103e6b730; end: 103e6b79b;  */

undefined8 * FUN_103e6b730(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  _objc_retain(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 103e6b79c; end: 103e6b8c3;  */

undefined8 * FUN_103e6b79c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar3);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 103e6b8c4; end: 103e6b8db;  */

void FUN_103e6b8c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103e6b8dc; end: 103e6b953;  */

void FUN_103e6b8dc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 103e6b954; end: 103e6b963;  */

undefined1 * FUN_103e6b954(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = param_2[0x10];
  func_0x000103e6adec(uVar2,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_1[0x10] = uVar1;
  return param_1;
}



/* Entry: 103e6b964; end: 103e6b973; -[FriendingBadgeServices badgeRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6b964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130219f8));
  return;
}



/* Entry: 103e6b974; end: 103e6b983; -[FriendingBadgeServices badgeMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6b974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021a00));
  return;
}



/* Entry: 103e6b984; end: 103e6b993; -[FriendingBadgeServices badgeLoggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6b984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021a08));
  return;
}



/* Entry: 103e6b994; end: 103e6b9a3; -[FriendingBadgeServices reminderPinMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6b994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021a10));
  return;
}



/* Entry: 103e6b9a4; end: 103e6b9b3; -[FriendingBadgeServices reminderPinReader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6b9a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021a18));
  return;
}



/* Entry: 103e6b9b4; end: 103e6ba4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6b9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130219f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021a00) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113021a08) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113021a10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113021a18) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6ba50; end: 103e6baaf; -[FriendingBadgeServices init] */

void FUN_103e6ba50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingBadgeServices.FriendingBadgeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6ba7c);
  (*pcVar1)();
}



/* Entry: 103e6bab0; end: 103e6bb17; -[FriendingBadgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bab0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130219f8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113021a00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113021a08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113021a10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113021a18));
  return;
}



/* Entry: 103e6bb18; end: 103e6bb27; -[SCFriendingBadgeInfo type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021a48));
  return;
}



/* Entry: 103e6bb28; end: 103e6bb37; -[SCFriendingBadgeInfo source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bb28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021a50));
  return;
}



/* Entry: 103e6bb38; end: 103e6bbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bb38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113021a48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021a50) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6bc00; end: 103e6bc77; -[SCFriendingBadgeInfo initWithType:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bc00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113021a48) = param_3;
  *(undefined8 *)(param_1 + _DAT_113021a50) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103e6bc78; end: 103e6bcff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  FUN_103e6cc8c();
  *(undefined8 *)(unaff_x20 + _DAT_113021a48) = param_1;
  FUN_103e6cd38(param_2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_113021a50) = param_2;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6bd00; end: 103e6bd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bd00(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_a0 [16];
  
  uVar5 = param_1;
  func_0x000103e6d380();
  uVar6 = uVar5;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar4 = auStack_a0 + 0xc;
  if (uVar1 != 6) {
    puVar4 = auStack_a0 + 0xe;
  }
  puVar3 = auStack_a0 + 8;
  if (uVar1 != 4) {
    puVar3 = auStack_a0 + 10;
  }
  if (uVar1 < 6) {
    puVar4 = puVar3;
  }
  puVar3 = auStack_a0 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_a0 + 6;
  }
  puVar2 = auStack_a0;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_a0 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  if (uVar1 < 4) {
    puVar4 = puVar3;
  }
  *(char *)(uVar6 + _DAT_113021a58) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6bd08; end: 103e6bd5b; -[SCFriendingBadgeInfo description] */

void FUN_103e6bd08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_103e6d2b8();
  _objc_release(param_1);
  func_0x000103e6b1f0(param_2,param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6bd5c; end: 103e6bda3; -[SCFriendingBadgeInfo init] */

void FUN_103e6bd5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendingBadgeServices/FriendingBadgeInfoWrapper.swift",0x36,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6bda4);
  (*pcVar1)();
}



/* Entry: 103e6bda4; end: 103e6be2f; -[SCFriendingBadgeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bda4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113021a48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113021a50));
  return;
}



/* Entry: 103e6be30; end: 103e6be4b; -[SCFriendingBadgeInfoType description] */

void FUN_103e6be30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6be4c; end: 103e6be93; -[SCFriendingBadgeInfoType init] */

void FUN_103e6be4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendingBadgeServices/FriendingBadgeInfoWrapper.swift",0x36,2,0x78,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6be94);
  (*pcVar1)();
}



/* Entry: 103e6be94; end: 103e6be9b; +[SCFriendingBadgeInfoType availableFriendSuggestions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6be94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6be9c; end: 103e6bea3; +[SCFriendingBadgeInfoType unviewedFriendSuggestions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6be9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6bea4; end: 103e6beab; +[SCFriendingBadgeInfoType recentlyJoinedSuggestions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bea4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6beac; end: 103e6beb3; +[SCFriendingBadgeInfoType incomingFriendRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6beac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6beb4; end: 103e6bebb; +[SCFriendingBadgeInfoType contactSyncReminder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6beb4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6bebc; end: 103e6bec3; +[SCFriendingBadgeInfoType pendingFriendRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bebc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6bec4; end: 103e6becb; +[SCFriendingBadgeInfoType localTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bec4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6becc; end: 103e6bed3; +[SCFriendingBadgeInfoType unknown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6becc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6bed4; end: 103e6bfcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6bed4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a58) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6bfcc; end: 103e6c117; -[SCFriendingBadgeInfoType matchAvailableFriendSuggestions:unviewedFriendSuggestions:recentlyJoinedSuggestions:incomingFriendRequest:contactSyncReminder:pendingFriendRequest:localTimer:unknown:] */

void FUN_103e6bfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
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
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x000103e6bf24(0x103e6d7bc,auStack_40,0x103e6d878,auStack_60,0x103e6d87c,auStack_80,
                      0x103e6d880,auStack_a0,0x103e6d884,auStack_c0,0x103e6d888,auStack_e0,
                      0x103e6d88c,auStack_100,0x103e6d890,auStack_120);
  _objc_release(param_1);
  return;
}



/* Entry: 103e6c118; end: 103e6c12f;  */

void FUN_103e6c118(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103e6c130; end: 103e6c1e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e6c130(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  
  puVar5 = auStack_50;
  _objc_allocWithZone();
  uVar6 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021a60) = uVar6;
  lVar4 = 0;
  FUN_103e6b110();
  lVar3 = _DAT_113812208;
  iVar1 = *(int *)(lVar4 + 0x14);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(unaff_x20 + lVar3,(long)param_1 + (long)iVar1,lVar4);
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(uVar6);
  _objc_msgSendSuper2(auStack_50,puVar2);
  FUN_103e6d324(param_1);
  return puVar5;
}



/* Entry: 103e6c1e4; end: 103e6c237; -[SCFriendingBadgeInfoSource description] */

void FUN_103e6c1e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e6cfd8();
  _objc_release(param_1);
  func_0x000103e6b1f0(uVar1,param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6c238; end: 103e6c27f; -[SCFriendingBadgeInfoSource init] */

void FUN_103e6c238(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendingBadgeServices/FriendingBadgeInfoWrapper.swift",0x36,2,0x108,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6c280);
  (*pcVar1)();
}



/* Entry: 103e6c280; end: 103e6c2e3; +[SCFriendingBadgeInfoSource none] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c280(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a68) = 0;
  *(undefined8 *)(lVar1 + _DAT_113021a70) = 0;
  *(undefined8 *)(lVar1 + _DAT_113021a78) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6c2e4; end: 103e6c367; +[SCFriendingBadgeInfoSource userIdWithUserIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021a68) = 1;
  *(undefined8 *)(lVar1 + _DAT_113021a70) = param_3;
  *(undefined8 *)(lVar1 + _DAT_113021a78) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6c368; end: 103e6c467; +[SCFriendingBadgeInfoSource notificationSnapchatterWithNotificationSnapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = 0;
  FUN_103e6d3c8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113021a68) = 2;
  *(undefined8 *)(lVar2 + _DAT_113021a70) = 0;
  *(undefined8 *)(lVar2 + _DAT_113021a78) = param_3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6c468; end: 103e6c557; -[SCFriendingBadgeInfoSource matchNone:userId:notificationSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c468(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_113021a68) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000103e6c4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_113021a68) == '\x01') {
    lVar3 = *(long *)(param_1 + _DAT_113021a70);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e6c554);
      (*pcVar2)();
    }
    _objc_retain();
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,PTR___sSSN_11034da80);
    pcVar2 = *(code **)(param_4 + 0x10);
    param_5 = param_4;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_113021a78);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e6c558);
      (*pcVar2)();
    }
    uVar1 = 0;
    FUN_103e6d3c8(0);
    _objc_retain(param_1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
    pcVar2 = *(code **)(param_5 + 0x10);
  }
  (*pcVar2)(param_5,lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103e6c558; end: 103e6c58f; -[SCFriendingBadgeInfoSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c558(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113021a70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113021a78));
  return;
}



/* Entry: 103e6c590; end: 103e6c59f; -[SCFriendingNotificationBadgeInfo snapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021a60));
  return;
}



/* Entry: 103e6c5a0; end: 103e6c637; -[SCFriendingNotificationBadgeInfo timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c5a0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113812208,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103e6c638; end: 103e6c6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e6c638(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113021a60) = param_1;
  lVar1 = _DAT_113812208;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_2,lVar2);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_2,lVar2);
  return puVar3;
}



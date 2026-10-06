/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0021b8dc; end: 0021b923;  */

ulong FUN_0021b8dc(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 0021b924; end: 0021b927; -[SCAttributedJobSchedulerSubtask copyWithZone:] */

void FUN_0021b924(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0021b928; end: 0021b92f; -[SCAttributedWorkSchedulingTask copyWithZone:] */

void FUN_0021b928(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0021b930; end: 0021b94f;  */

void FUN_0021b930(byte param_1)

{
  FUN_0021b950();
  bRam0000000000b65cb8 = param_1 & 1;
  return;
}



/* Entry: 0021b950; end: 0021bab3;  */

uint FUN_0021b950(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar6 - extraout_x12;
  puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  _objc_opt_self();
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0077ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,puVar3);
    _objc_release(puVar3);
    lVar4 = lVar8;
    (**(code **)(lVar9 + 0x20))(lVar8,lVar6,lVar1);
    __s10Foundation3URLV14absoluteStringSSvg();
    uStack_60 = 0x52786f62646e6173;
    uStack_58 = 0xee00747069656365;
    lStack_50 = lVar4;
    lStack_48 = lVar6;
    FUN_00033a8c();
    puVar5 = &uStack_60;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (puVar5,PTR___sSSN_0099b040,PTR___sSSN_0099b040,lVar4,lVar4);
    uVar7 = (uint)puVar5;
    _swift_bridgeObjectRelease(lVar6);
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
  }
  return uVar7 & 1;
}



/* Entry: 0021bab4; end: 0021baf3;  */

undefined8 FUN_0021bab4(void)

{
  if (lRam0000000000b5d840 != -1) {
    _swift_once(0xb5d840,FUN_0021b930);
  }
  return 0xb65cb8;
}



/* Entry: 0021baf4; end: 0021bb13;  */

void FUN_0021baf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 0x69;
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
  _objc_opt_self(PTR__OBJC_CLASS___NSProcessInfo_00ac2a20);
  func_0x0078aa40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077f100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (puVar2,PTR___sSSN_0099b040);
  _objc_release(puVar2);
  FUN_000b5378(0x7473655449557369,0xe800000000000000,puVar1);
  _swift_bridgeObjectRelease(puVar1);
  bRam0000000000b65cb9 = bVar3 & 1;
  return;
}



/* Entry: 0021bb14; end: 0021bb53;  */

undefined8 FUN_0021bb14(void)

{
  if (lRam0000000000b5d848 != -1) {
    _swift_once(0xb5d848,FUN_0021baf4);
  }
  return 0xb65cb9;
}



/* Entry: 0021bb54; end: 0021bbfb;  */

void FUN_0021bb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
  _objc_opt_self(PTR__OBJC_CLASS___NSProcessInfo_00ac2a20);
  func_0x0078aa40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077f100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (puVar2,PTR___sSSN_0099b040);
  _objc_release(puVar2);
  FUN_000b5378(param_2,param_3,puVar1);
  _swift_bridgeObjectRelease(puVar1);
  *param_4 = (byte)param_2 & 1;
  return;
}



/* Entry: 0021bbfc; end: 0021bdaf;  */

void FUN_0021bbfc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
  _objc_opt_self();
  puVar2 = puVar1;
  func_0x0078aa40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00782d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar3,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
  _objc_release(puVar3);
  if (*(long *)(puVar2 + 0x10) == 0) {
LAB_0021bcb0:
    _swift_bridgeObjectRelease(puVar2);
    func_0x0078aa40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00782d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar2 = puVar3;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar3,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
    _objc_release(puVar3);
    if (*(long *)(puVar2 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar2);
      uVar6 = 0;
      FUN_000202c0(0xd000000000000012);
      _swift_bridgeObjectRelease(puVar2);
      if ((uVar6 & 1) != 0) goto LAB_0021bd48;
    }
    _swift_bridgeObjectRelease(puVar2);
    lVar4 = 0x6143747365544358;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6143747365544358,0xea00000000006573);
    lVar5 = lVar4;
    _NSClassFromString();
    _objc_release(lVar4);
    uRam0000000000b65cba = lVar5 != 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar2);
    uVar6 = 0;
    FUN_000202c0(0x7463656a6e494358);
    _swift_bridgeObjectRelease(puVar2);
    if ((uVar6 & 1) == 0) goto LAB_0021bcb0;
LAB_0021bd48:
    _swift_bridgeObjectRelease(puVar2);
    uRam0000000000b65cba = true;
  }
  return;
}



/* Entry: 0021bdb0; end: 0021be67;  */

undefined8 FUN_0021bdb0(void)

{
  if (lRam0000000000b5d850 != -1) {
    _swift_once(0xb5d850,FUN_0021bbfc);
  }
  return 0xb65cba;
}



/* Entry: 0021be68; end: 0021bed3; +[SCTracer shared] */

void FUN_0021be68(void)

{
  undefined1 auStack_38 [24];
  
  if (lRam0000000000af8160 != -1) {
    _swift_once(0xaf8160,0x21be04);
  }
  _swift_beginAccess(0xb65cc0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(uRam0000000000b65cc0);
  return;
}



/* Entry: 0021bed4; end: 0021bf73; -[SCTracer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021bed4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_00af8168;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  func_0x000115a8(0xaf8158,&UNK_007ed730);
  _swift_allocObject();
  ppuVar3 = &puStack_38;
  func_0x0021d8e8();
  *(undefined ***)(param_1 + lVar1) = ppuVar3;
  _swift_unknownObjectWeakInit(param_1 + _DAT_00af8170,0);
  lStack_48 = param_1;
  lStack_40 = lVar2;
  _objc_msgSendSuper2(&lStack_48,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0021bf74; end: 0021bfa7;  */

void FUN_0021bf74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021bfa8; end: 0021c003; -[SCTracer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0021bfa8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_00af8168));
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 0021c004; end: 0021c123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0021c004(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar2 = unaff_x20 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    puVar3 = &UNK_009c0088;
    _swift_allocObject(&UNK_009c0088,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcStack_50 = FUN_0021c134;
    puStack_70 = PTR___NSConcreteStackBlock_00999f30;
    uStack_68 = 0x42000000;
    uStack_60 = 0x21c154;
    puStack_58 = &UNK_009c00a0;
    puStack_48 = puVar3;
    __Block_copy(&puStack_70);
    puVar5 = puStack_48;
    _swift_retain(puVar3);
    _swift_release(puVar5);
    lVar6 = lVar2;
    func_0x0077f8c0(lVar2);
    __Block_release(ppuVar4);
    _swift_unknownObjectRelease(lVar2);
    puVar5 = puVar3;
    _swift_isEscapingClosureAtFileLocation(puVar3,"",0x38,0x21,0x34,1);
    _swift_release(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21c104);
      (*pcVar1)();
    }
  }
  return lVar6;
}



/* Entry: 0021c124; end: 0021c133;  */

void FUN_0021c124(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0021c134; end: 0021c18b;  */

void FUN_0021c134(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 0021c18c; end: 0021c1a7;  */

void FUN_0021c18c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 0021c1a8; end: 0021c1f3; -[SCTracer beginAsyncTraceWithNameBlock:] */

undefined8 FUN_0021c1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  uVar1 = 0x21d60c;
  FUN_0021c004(0x21d60c,auStack_40);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 0021c1f4; end: 0021c2b7;  */

undefined1  [16] FUN_0021c1f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 0021c2b8; end: 0021c303; -[SCTracer beginAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c2b8(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x0077f8a0();
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 0021c304; end: 0021c347; -[SCTracer beginAsyncTraceWithoutName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c304(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x0077f8e0();
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 0021c348; end: 0021c397; -[SCTracer pauseAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c348(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_00af8170;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x0078a500();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 0021c398; end: 0021c3e7; -[SCTracer resumeAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c398(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_00af8170;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x0078bba0();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 0021c3e8; end: 0021c487; -[SCTracer cancelAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c3e8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_00af8170;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x0077ffc0();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 0021c488; end: 0021c4d7; -[SCTracer endAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c488(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_00af8170;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x00782860();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 0021c4d8; end: 0021c53b; -[SCTracer endAsyncTrace:withName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c4d8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_00af8170;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x00782880();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 0021c53c; end: 0021c65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0021c53c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar2 = unaff_x20 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    puVar3 = &UNK_009c00d8;
    _swift_allocObject(&UNK_009c00d8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    uStack_50 = 0x21d610;
    puStack_70 = PTR___NSConcreteStackBlock_00999f30;
    uStack_68 = 0x42000000;
    uStack_60 = 0x21c154;
    puStack_58 = &UNK_009c00f0;
    puStack_48 = puVar3;
    __Block_copy(&puStack_70);
    puVar5 = puStack_48;
    _swift_retain(puVar3);
    _swift_release(puVar5);
    lVar6 = lVar2;
    func_0x0077f960(lVar2);
    __Block_release(ppuVar4);
    _swift_unknownObjectRelease(lVar2);
    puVar5 = puVar3;
    _swift_isEscapingClosureAtFileLocation(puVar3,"",0x38,0x53,0x33,1);
    _swift_release(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21c63c);
      (*pcVar1)();
    }
  }
  return lVar6;
}



/* Entry: 0021c65c; end: 0021c6a7; -[SCTracer beginSyncTraceWithNameBlock:] */

undefined8 FUN_0021c65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  _objc_retain();
  uVar1 = 0x21d608;
  FUN_0021c53c(0x21d608,auStack_40);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 0021c6a8; end: 0021c6f3; -[SCTracer beginSyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c6a8(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x0077f940();
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 0021c6f4; end: 0021c743; -[SCTracer endSyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c6f4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_00af8170;
    _swift_unknownObjectWeakLoadStrong();
    if (param_1 != 0) {
      func_0x00782900();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 0021c744; end: 0021c7a3; -[SCTracer traceCounter:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c744(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00792be0();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
    return;
  }
  return;
}



/* Entry: 0021c7a4; end: 0021c7ef; -[SCTracer logPerfEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c7a4(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x007888a0();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
    return;
  }
  return;
}



/* Entry: 0021c7f0; end: 0021c833; -[SCTracer emitUnclosedAsyncSpans] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c7f0(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00782580();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
    return;
  }
  return;
}



/* Entry: 0021c834; end: 0021c877; -[SCTracer currentTraceClockUs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c834(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00781460();
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 0021c878; end: 0021c8df; -[SCTracer insertSyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c878(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00787140();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
    return;
  }
  return;
}



/* Entry: 0021c8e0; end: 0021c947; -[SCTracer insertAsyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c8e0(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x007870e0();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
    return;
  }
  return;
}



/* Entry: 0021c948; end: 0021c993; -[SCTracer cancelSyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c948(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00780040();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
    return;
  }
  return;
}



/* Entry: 0021c994; end: 0021c9d7; -[SCTracer isTracing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c994(long param_1)

{
  param_1 = param_1 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x00787ec0();
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Entry: 0021c9d8; end: 0021ca83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021c9d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _DAT_00af8170;
  lVar1 = unaff_x20 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    lVar2 = lVar1;
    func_0x0077f940();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
    if (lVar2 != 0) {
      lVar3 = unaff_x20 + lVar3;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        func_0x00782900();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(lVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 0021ca84; end: 0021ca8f; -[SCTracer putSyncInstant:] */

void FUN_0021ca84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_0021c9d8(param_3,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0021ca90; end: 0021cb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ca90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _DAT_00af8170;
  lVar1 = unaff_x20 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    lVar2 = lVar1;
    func_0x0077f8a0();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
    if (lVar2 != 0) {
      lVar3 = unaff_x20 + lVar3;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        func_0x00782860();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(lVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 0021cb3c; end: 0021cb47; -[SCTracer putAsyncInstant:] */

void FUN_0021cb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_0021ca90(param_3,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0021cb48; end: 0021cc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021cb48(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _DAT_00af8170;
  lVar1 = unaff_x20 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    (*param_3)();
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    lVar2 = lVar1;
    func_0x0077f940();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(param_1);
    (*param_3)();
    if (lVar2 != 0) {
      lVar3 = unaff_x20 + lVar3;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        func_0x00782900();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(lVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 0021cc14; end: 0021cc8b; -[SCTracer trace:operation:] */

void FUN_0021cc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uStack_40 = param_4;
  _objc_retain(param_1);
  FUN_0021cb48(param_3,param_2,0x21d618,auStack_50);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 0021cc8c; end: 0021cde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021cc8c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar7 = _DAT_00af8170;
  ppuVar4 = &puStack_80;
  lVar2 = unaff_x20 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    (*param_3)();
  }
  else {
    puVar3 = &UNK_009c0128;
    _swift_allocObject(&UNK_009c0128,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    uStack_60 = 0x21d614;
    puStack_80 = PTR___NSConcreteStackBlock_00999f30;
    uStack_78 = 0x42000000;
    uStack_70 = 0x21c154;
    puStack_68 = &UNK_009c0140;
    puStack_58 = puVar3;
    __Block_copy(&puStack_80);
    puVar6 = puStack_58;
    _swift_retain(puVar3);
    _swift_release(puVar6);
    lVar5 = lVar2;
    func_0x0077f960();
    __Block_release(ppuVar4);
    _swift_unknownObjectRelease(lVar2);
    puVar6 = puVar3;
    _swift_isEscapingClosureAtFileLocation(puVar3,"",0x38,0x53,0x33,1);
    _swift_release(puVar3);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x21cde8);
      (*pcVar1)();
    }
    (*param_3)();
    if (lVar5 != 0) {
      lVar7 = unaff_x20 + lVar7;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        func_0x00782900();
        _swift_unknownObjectRelease(lVar7);
      }
    }
  }
  return;
}



/* Entry: 0021cde8; end: 0021ce3b; -[SCTracer traceWithNameBlock:operation:] */

void FUN_0021cde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_0021cc8c(0x21d5e4,auStack_40,0x21d5ec,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 0021ce3c; end: 0021cf23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021ce3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = unaff_x20 + _DAT_00af8170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    lVar3 = lVar1;
    func_0x0077f8a0();
    _swift_unknownObjectRelease(lVar1);
    _objc_release(uVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_00af8168);
      _swift_retain(uVar4);
      func_0x0021d940(&uStack_48);
      uVar2 = uStack_48;
      _swift_isUniquelyReferenced_nonNull_native(uStack_48);
      uStack_50 = uStack_48;
      FUN_0021d070(lVar3,param_1,param_2,uVar2);
      func_0x0021d9b8(&uStack_50);
      _swift_release(uVar4);
    }
  }
  return;
}



/* Entry: 0021cf24; end: 0021cf2f; -[SCTracer beginAsyncTraceAndStoreCookieID:] */

void FUN_0021cf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_0021ce3c(param_3,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0021cf30; end: 0021d007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021cf30(long param_1,ulong param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00af8168);
  _swift_retain(uVar1);
  func_0x0021d940(&lStack_38);
  _swift_release(uVar1);
  if (*(long *)(lStack_38 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lStack_38);
  }
  else {
    _swift_bridgeObjectRetain(lStack_38);
    FUN_000202c0();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease_n(lStack_38,2);
    }
    else {
      lVar2 = *(long *)(*(long *)(lStack_38 + 0x38) + param_1 * 8);
      _swift_bridgeObjectRelease_n(lStack_38,2);
      if (lVar2 != 0) {
        lVar2 = unaff_x20 + _DAT_00af8170;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar2 != 0) {
          func_0x00782860();
          _swift_unknownObjectRelease(lVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 0021d008; end: 0021d013; -[SCTracer endAsyncTraceWithStoredCookieID:] */

void FUN_0021d008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_0021cf30(param_3,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0021d014; end: 0021d06f;  */

void FUN_0021d014(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  (*param_4)(param_3,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0021d070; end: 0021d31f;  */

void FUN_0021d070(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_000202c0();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x21d140);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_0021d320(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    FUN_000202c0();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_0099b040)
      ;
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x21d110);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0021d1b8();
    lVar6 = *unaff_x20;
    goto joined_r0x0021d154;
  }
  lVar6 = *unaff_x20;
joined_r0x0021d154:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x21d1b8);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_3);
  return;
}



/* Entry: 0021d320; end: 0021d5b3;  */

void FUN_0021d320(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0xaf81a0;
  func_0x000115a8(0xaf81a0,&UNK_007ed780);
  lVar7 = lVar15;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_0021d580:
    _swift_release(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x21d5b0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_0021d580;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x21d5b4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 0021d5b4; end: 0021d5d3;  */

void FUN_0021d5b4(void)

{
  _objc_opt_self(&PTR_PTR_00acf3a0);
  return;
}



/* Entry: 0021d5d4; end: 0021d623;  */

undefined1  [16] FUN_0021d5d4(void)

{
  return ZEXT816(0x9c0178);
}



/* Entry: 0021d624; end: 0021d63f; +[SCTracingSessionServicesBinder sharedTracingSessionServices] */

void FUN_0021d624(void)

{
  _swift_unknownObjectRetain(uRam0000000000af81a8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021d640; end: 0021d67b; -[SCTracingSessionServicesBinder init] */

void FUN_0021d640(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0021d67c; end: 0021d6af;  */

void FUN_0021d67c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021d6b0; end: 0021d6b3; -[SCTracingSessionServicesBinder .cxx_destruct] */

void FUN_0021d6b0(void)

{
  return;
}



/* Entry: 0021d6b4; end: 0021d6d3;  */

void FUN_0021d6b4(void)

{
  _objc_opt_self(&PTR_PTR_00acf460);
  return;
}



/* Entry: 0021d6d4; end: 0021d74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021d6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00af81d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00af81e0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0021d750; end: 0021d75b; -[SCTraceSessionInformation traceSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021d750(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00af81d8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_00af81d8))[1];
  func_0x00023304(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_00023358(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0021d75c; end: 0021d767; -[SCTraceSessionInformation traceSessionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021d75c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00af81e0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_00af81e0))[1];
  func_0x00023304(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_00023358(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0021d768; end: 0021d7bf;  */

void FUN_0021d768(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + *param_3);
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x00023304(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_00023358(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0021d7c0; end: 0021d81f; -[SCTraceSessionInformation init] */

void FUN_0021d7c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCTracingServicesAPI.TraceSessionInformation",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21d7ec);
  (*pcVar1)();
}



/* Entry: 0021d820; end: 0021d85f; -[SCTraceSessionInformation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021d820(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  FUN_00023358(*(undefined8 *)(param_1 + _DAT_00af81d8),((undefined8 *)(param_1 + _DAT_00af81d8))[1]
              );
  uVar1 = ((undefined8 *)(param_1 + _DAT_00af81e0))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + _DAT_00af81e0));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0021d860; end: 0021d87f;  */

void FUN_0021d860(void)

{
  _objc_opt_self(&PTR_PTR_00acf510);
  return;
}



/* Entry: 0021d880; end: 0021d9f3;  */

long * FUN_0021d880(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  _swift_allocObject();
  lVar2 = *unaff_x20;
  lVar1 = 1;
  _dispatch_semaphore_create();
  unaff_x20[2] = lVar1;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(lVar2 + 0x60),param_1);
  return unaff_x20;
}



/* Entry: 0021d9f4; end: 0021da43;  */

void FUN_0021d9f4(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _objc_release(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0021da44; end: 0021dac3;  */

void FUN_0021da44(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar1,auStack_48,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x18))((long)unaff_x20 + lVar1,param_1);
  _swift_endAccess(auStack_48);
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  return;
}



/* Entry: 0021dac4; end: 0021dac7;  */

void FUN_0021dac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0021dac8; end: 0021db47;  */

void FUN_0021dac8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_0099ae70 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&puStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 0021db48; end: 0021db53;  */

void FUN_0021db48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00849404);
  return;
}



/* Entry: 0021db54; end: 0021dba3;  */

long * FUN_0021db54(undefined8 param_1)

{
  long *unaff_x20;
  
  _swift_allocObject();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58),param_1);
  return unaff_x20;
}



/* Entry: 0021dba4; end: 0021dbdb;  */

void FUN_0021dba4(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0021dbdc; end: 0021dc33;  */

undefined8 FUN_0021dbdc(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_0021dcbc(param_1,param_2);
  _swift_release(param_2);
  return param_1;
}



/* Entry: 0021dc34; end: 0021dc37;  */

void FUN_0021dc34(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)();
  return;
}



/* Entry: 0021dc38; end: 0021dcbb;  */

void FUN_0021dc38(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_28,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  _pthread_getspecific();
  if (lVar1 != 0) {
    _swift_release();
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_40,0,0);
  _pthread_key_delete(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 0021dcbc; end: 0021de2f;  */

void FUN_0021dcbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar5 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  _swift_beginAccess(puVar5,&uStack_58,0x21,0);
  _swift_retain(param_2);
  _pthread_key_create(puVar5,FUN_0021dc34);
  _swift_endAccess(&uStack_58);
  if ((int)puVar5 == 0) {
    return;
  }
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3d);
  __sSS6appendyySSF(0xd00000000000001b,0x80000000008bedd0);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x1000000000000020,0x80000000008bedf0);
  uVar2 = uStack_50;
  uVar1 = uStack_58;
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x18);
  _swift_bridgeObjectRelease(uStack_50);
  uStack_58 = 0xd000000000000016;
  uStack_50 = 0x80000000008bee20;
  __sSS6appendyySSF(uVar1,uVar2);
  uVar2 = uStack_50;
  uVar1 = uStack_58;
  _swift_bridgeObjectRetain(uStack_50);
  FUN_0021df14(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x21de30);
  (*pcVar3)();
}



/* Entry: 0021de30; end: 0021de9f;  */

void FUN_0021de30(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&lStack_28,param_1 + 0x58);
  }
  return;
}



/* Entry: 0021dea0; end: 0021deaf;  */

void FUN_0021dea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00849454);
  return;
}



/* Entry: 0021deb0; end: 0021deff;  */

void FUN_0021deb0(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___syycWV_0099b8e8 + 0x40;
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 0021df00; end: 0021df13;  */

void FUN_0021df00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008494a4);
  return;
}



/* Entry: 0021df14; end: 0021e0c7;  */

void FUN_0021df14(undefined8 *****param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *****pppppuVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  
  uVar3 = param_2;
  _swift_bridgeObjectRetain();
  FUN_0076f2a0();
  if (uVar3 != 0) {
    lVar8 = 0;
    uVar1 = (ulong)param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar7 = (uint)((ulong)param_1 >> 0x3b) & 1;
      if ((param_2 & 0x1000000000000000) == 0) {
        uVar7 = 1;
      }
      uVar9 = 4L << uVar7;
      uVar4 = 0xf;
      do {
        uVar10 = uVar4 & 0xc;
        uVar6 = uVar4;
        if (uVar10 == uVar9) {
          FUN_0002269c();
        }
        if (uVar1 <= uVar6 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x21e0c0);
          (*pcVar2)();
        }
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) == 0) {
            pppppuVar5 = (undefined8 *****)((param_2 & 0xfffffffffffffff) + 0x20);
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              pppppuVar5 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
          }
          else {
            ppppuStack_70 = param_1;
            uStack_68 = param_2 & 0xffffffffffffff;
            pppppuVar5 = &ppppuStack_70;
          }
          uVar7 = (uint)*(byte *)((long)pppppuVar5 + (uVar6 >> 0x10));
          if (uVar10 != uVar9) goto LAB_0021dff4;
LAB_0021e054:
          FUN_0002269c();
          if ((param_2 >> 0x3c & 1) != 0) goto LAB_0021e064;
LAB_0021dff8:
          uVar4 = (uVar4 & 0xffffffffffff0000) + 0x10004;
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar6,param_1,param_2);
          uVar7 = (uint)uVar6;
          if (uVar10 == uVar9) goto LAB_0021e054;
LAB_0021dff4:
          if ((param_2 >> 0x3c & 1) == 0) goto LAB_0021dff8;
LAB_0021e064:
          if (uVar1 <= uVar4 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x21e0c8);
            (*pcVar2)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
        }
        if (lVar8 == 0x3ff) break;
        if ((uVar7 >> 7 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x21e0c4);
          (*pcVar2)();
        }
        *(char *)(uVar3 + lVar8) = (char)uVar7;
        lVar8 = lVar8 + 1;
      } while (uVar1 * 4 - (uVar4 >> 0xe) != 0);
    }
    *(undefined1 *)(uVar3 + lVar8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
  return;
}



/* Entry: 0021e0c8; end: 0021e14f;  */

void FUN_0021e0c8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_bridgeObjectRetain(param_2);
  uVar2 = param_2;
  FUN_0021e2a4(param_3);
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
    _swift_bridgeObjectRelease(param_2);
    FUN_00023344(param_3,uVar2);
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0021e150; end: 0021e23f;  */

void FUN_0021e150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long extraout_x8;
  long lVar7;
  long alStack_70 [2];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = (undefined1 *)0x0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + lVar1;
  __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(puVar5);
  __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
  uStack_58 = param_3;
  uStack_50 = param_2;
  __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
  puVar3 = &uStack_58;
  plVar6 = &lStack_48;
  FUN_0021e240(puVar3,plVar6);
  puVar4 = puVar3;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  FUN_00023358(puVar3,plVar6);
  (**(code **)(lVar7 + 8))();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  if ((puVar5 == (undefined1 *)0x0) || (puVar2 == puVar5)) {
    return;
  }
  *(undefined1 **)((long)alStack_70 + lVar1) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_70 + lVar1 + 8) = FUN_0021e240;
  if ((ulong)((long)puVar2 - (long)puVar5) < 0xf) {
    FUN_000541a4();
    return;
  }
  if (0x7ffffffe < (ulong)((long)puVar2 - (long)puVar5)) {
    FUN_000536d8();
    return;
  }
  func_0x00053674();
  return;
}



/* Entry: 0021e240; end: 0021e2a3;  */

undefined1  [16] FUN_0021e240(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 == 0) || (param_2 == param_1)) {
    return ZEXT816(0xc000000000000000) << 0x40;
  }
  if (param_2 - param_1 < 0xf) {
    FUN_000541a4();
    auVar1._8_8_ = param_2 & 0xffffffffffffff;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  if (0x7ffffffe < param_2 - param_1) {
    FUN_000536d8();
    auVar3._8_8_ = param_2 | 0x8000000000000000;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  func_0x00053674();
  auVar2._8_8_ = param_2 | 0x4000000000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 0021e2a4; end: 0021e413;  */

long * FUN_0021e2a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = 0xae8228;
  func_0x000115a8(0xae8228,&UNK_007cf9c0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(puVar6,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  puVar2 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_000535a0(puVar6);
    plVar3 = (long *)0x0;
    plVar5 = (long *)0xf000000000000000;
  }
  else {
    lVar4 = lVar7;
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar1);
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    lStack_58 = lVar4;
    puStack_50 = puVar6;
    __s10Foundation4UUIDV4uuids5UInt8V_A15Ftvg();
    plVar3 = &lStack_58;
    plVar5 = &lStack_48;
    FUN_0021e240(plVar3,plVar5);
    (**(code **)(lVar8 + 8))(lVar7,lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail(plVar3,plVar5);
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 0021e414; end: 0021e41b;  */

undefined8 FUN_0021e414(void)

{
  return 1;
}



/* Entry: 0021e41c; end: 0021e4bb;  */

void FUN_0021e41c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0021e4bc; end: 0021e5bb;  */

void FUN_0021e4bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 0021e5bc; end: 0021e5fb;  */

void FUN_0021e5bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed8d8;
  _swift_getWitnessTable(&UNK_007ed8d8,&UNK_009c05b8);
  puRam0000000000af8390 = puVar1;
  return;
}



/* Entry: 0021e5fc; end: 0021e703;  */

void FUN_0021e5fc(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_4 + -8);
  uStack_70 = param_3;
  uStack_68 = param_5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar5);
  lVar3 = *(long *)(param_4 + 0x10);
  lVar2 = *(long *)(lVar3 + -8);
  lVar1 = lVar5;
  (**(code **)(lVar2 + 0x30))(lVar5,1,lVar3);
  if ((int)lVar1 == 1) {
    (**(code **)(lVar4 + 8))(lVar5,param_4);
    (*param_2)(param_7);
    FUN_00058224(param_7,uStack_68,param_6);
  }
  else {
    (**(code **)(lVar2 + 0x20))(param_1,lVar5,lVar3);
  }
  return;
}



/* Entry: 0021e704; end: 0021e793;  */

undefined1  [16] FUN_0021e704(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  __ss11_StringGutsV4growyySiF(0x27);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar2 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x3e,0xe100000000000000);
  auVar1._8_8_ = 0x80000000008bee40;
  auVar1._0_8_ = 0xd000000000000024;
  return auVar1;
}



/* Entry: 0021e794; end: 0021e83f;  */

void FUN_0021e794(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 0021e840; end: 0021e94b;  */

/* WARNING: Removing unreachable block (ram,0x0021e8d8) */
/* WARNING: Removing unreachable block (ram,0x0021e924) */
/* WARNING: Removing unreachable block (ram,0x0021e8dc) */

void FUN_0021e840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [16];
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  uVar2 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar2);
  FUN_0021e94c(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,param_2);
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
  (**(code **)(lVar3 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 0021e94c; end: 0021ec97;  */

void FUN_0021e94c(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_7e [14];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  uint uVar12;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  uVar12 = uVar1 >> 0x1e;
  iVar9 = (int)param_2;
  iVar8 = (int)((ulong)param_2 >> 0x20);
  if (uVar1 >> 0x1e < 2) {
    if (uVar11 == 0) {
      if ((param_3 >> 0x30 & 0xff) != 0x10) goto LAB_0021ea0c;
    }
    else {
      if (SBORROW4(iVar8,iVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x21ec88);
        (*pcVar2)();
      }
      if (iVar8 - iVar9 != 0x10) goto LAB_0021ea0c;
    }
LAB_0021e9bc:
    if (uVar12 == 0) {
      puVar14 = auStack_7e;
LAB_0021ebcc:
      __s10Foundation4UUIDV4uuidACs5UInt8V_A15Ft_tcfC
                (param_1,*puVar14,puVar14[1],puVar14[2],puVar14[3],puVar14[4],puVar14[5],puVar14[6],
                 puVar14[7],*(undefined8 *)(puVar14 + 8));
      FUN_00023358(param_2,param_3);
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
        return;
      }
      goto LAB_0021ec94;
    }
    puVar3 = param_2;
    if (uVar12 == 2) {
      lVar15 = param_2[2];
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3;
        __s10Foundation13__DataStorageC7_offsetSivg();
        lVar7 = lVar15 - (long)puVar4;
        if (SBORROW8(lVar15,(long)puVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x21e9f4);
          (*pcVar2)();
        }
        goto LAB_0021ebbc;
      }
LAB_0021ec3c:
      __s10Foundation13__DataStorageC7_lengthSivg();
    }
    else {
      lVar15 = (long)iVar9;
      if ((long)param_2 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x21ec90);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar3 == (undefined8 *)0x0) goto LAB_0021ec3c;
      puVar4 = puVar3;
      __s10Foundation13__DataStorageC7_offsetSivg();
      lVar7 = lVar15 - (long)puVar4;
      if (SBORROW8(lVar15,(long)puVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x21ec94);
        (*pcVar2)();
      }
LAB_0021ebbc:
      puVar14 = (undefined1 *)(lVar7 + (long)puVar3);
      __s10Foundation13__DataStorageC7_lengthSivg();
      puVar3 = puVar4;
      if (puVar14 != (undefined1 *)0x0) goto LAB_0021ebcc;
    }
    uVar10 = 0x80000000008bee90;
    FUN_0021ec98();
    _swift_allocError(&UNK_009c0748,puVar3,0,0);
    uVar13 = 0xd000000000000020;
  }
  else {
    if (uVar11 == 2) {
      if (SBORROW8(param_2[3],param_2[2])) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x21ec84);
        (*pcVar2)();
      }
      if (param_2[3] - param_2[2] == 0x10) goto LAB_0021e9bc;
    }
LAB_0021ea0c:
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x32);
    _swift_bridgeObjectRelease(uStack_60);
    uStack_68 = 0xd00000000000001c;
    uStack_60 = 0x80000000008bee70;
    uStack_70 = 0x10;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x202c736574796220,0xec00000020746f67);
    if (uVar12 < 2) {
      if (uVar11 == 0) {
        uVar6 = param_3 >> 0x30 & 0xff;
      }
      else {
        if (SBORROW4(iVar8,iVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x21ec8c);
          (*pcVar2)();
        }
        uVar6 = (ulong)(iVar8 - iVar9);
      }
    }
    else {
      uVar6 = 0;
      if ((uVar11 == 2) && (uVar6 = param_2[3] - param_2[2], SBORROW8(param_2[3],param_2[2]))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x21eacc);
        (*pcVar2)();
      }
    }
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
    uStack_70 = uVar6;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    puVar3 = (undefined8 *)0x736574796220;
    __sSS6appendyySSF(0x736574796220,0xe600000000000000);
    uVar10 = uStack_60;
    uVar13 = uStack_68;
    FUN_0021ec98();
    _swift_allocError(&UNK_009c0748,puVar3,0,0);
  }
  *puVar3 = uVar13;
  puVar3[1] = uVar10;
  _swift_willThrow();
  FUN_00023358(param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
LAB_0021ec94:
  ___stack_chk_fail();
  if (puRam0000000000af8398 != (undefined *)0x0) {
    return;
  }
  puVar5 = &UNK_007eda38;
  _swift_getWitnessTable(&UNK_007eda38,&UNK_009c0748);
  puRam0000000000af8398 = puVar5;
  return;
}



/* Entry: 0021ec98; end: 0021ecd7;  */

void FUN_0021ec98(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eda38;
  _swift_getWitnessTable(&UNK_007eda38,&UNK_009c0748);
  puRam0000000000af8398 = puVar1;
  return;
}



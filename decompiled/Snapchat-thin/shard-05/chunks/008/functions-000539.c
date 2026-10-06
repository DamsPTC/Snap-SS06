/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104188018; end: 10418808f;  */

undefined8 FUN_104188018(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 unaff_x20;
  undefined8 uVar1;
  
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  uVar1 = 0;
  if (param_3 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    uVar1 = param_2;
  }
  _swift_getObjCClassFromMetadata();
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  return unaff_x20;
}



/* Entry: 104188090; end: 10418813b;  */

void FUN_104188090(void)

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



/* Entry: 10418813c; end: 10418813f;  */

void FUN_10418813c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdbc70;
  _swift_getWitnessTable(&UNK_10dcdbc70,&UNK_11074c0a8);
  puRam0000000113066280 = puVar1;
  return;
}



/* Entry: 104188140; end: 10418817f;  */

void FUN_104188140(void)

{
  undefined *puVar1;
  
  if (puRam0000000113066280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdbc70;
  _swift_getWitnessTable(&UNK_10dcdbc70,&UNK_11074c0a8);
  puRam0000000113066280 = puVar1;
  return;
}



/* Entry: 104188180; end: 1041882f7;  */

bool FUN_104188180(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1041882f8; end: 10418839f;  */

void FUN_1041882f8(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined1 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  return;
}



/* Entry: 1041883a0; end: 1041883d3;  */

undefined1  [16] FUN_1041883a0(void)

{
  return ZEXT816(0x11074c1a8);
}



/* Entry: 1041883d4; end: 104188407;  */

void FUN_1041883d4(undefined8 *param_1,undefined8 param_2)

{
  FUN_104188408();
  _objc_allocWithZone();
  func_0x00010bfee200();
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_11074c2f8;
  return;
}



/* Entry: 104188408; end: 104188427;  */

void FUN_104188408(void)

{
  _objc_opt_self(&PTR_PTR_11298cf38);
  return;
}



/* Entry: 104188428; end: 104188463; -[_TtC30DiskCacheLoggingImplementation30DiskCacheLoggingImplementation init] */

void FUN_104188428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_104188408();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104188464; end: 10418847f; +[_TtC30DiskCacheLoggingImplementation30DiskCacheLoggingImplementation defaultSnapshotFilePath] */

void FUN_104188464(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104188480; end: 104188497;  */

void FUN_104188480(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104188498,0,0);
  return;
}



/* Entry: 104188498; end: 1041884d3;  */

void FUN_104188498(void)

{
  long unaff_x22;
  
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC
            (*(undefined8 *)(unaff_x22 + 0x10),0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0001041884d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1041884d4; end: 1041884eb;  */

void FUN_1041884d4(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1041885a4,0,0);
  return;
}



/* Entry: 1041884ec; end: 10418851b;  */

void FUN_1041884ec(void)

{
  FUN_104188408();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418851c; end: 10418854b;  */

void FUN_10418851c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1041885a8,0,0);
  return;
}



/* Entry: 10418854c; end: 104188587;  */

void FUN_10418854c(void)

{
  long unaff_x22;
  
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC
            (*(undefined8 *)(unaff_x22 + 0x10),0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x000104188584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104188588; end: 1041885e3;  */

undefined1  [16] FUN_104188588(void)

{
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1041885e4; end: 104188633;  */

void FUN_1041885e4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126adc40;
  _objc_allocWithZone();
  func_0x00010c00ca40();
  _objc_release(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 104188634; end: 104188643;  */

undefined1  [16] FUN_104188634(void)

{
  return ZEXT816(0x11074c5d8);
}



/* Entry: 104188644; end: 1041889fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104188644(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined1 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar11 - extraout_x12;
  func_0x000100083b20(auStack_80 + 0x10);
  lVar4 = lStack_70;
  lVar3 = *(long *)(lStack_70 + _DAT_113091ad8);
  _objc_retain();
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x000107c5d984();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar4 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar5);
  }
  puVar5 = PTR_PTR_1126ba528;
  _objc_opt_self();
  func_0x00010bf64da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (puVar5 != (undefined *)0x0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar13,puVar5);
    _objc_release(puVar5);
  }
  (**(code **)(lVar14 + 0x38))(lVar13,puVar5 == (undefined *)0x0,1,lVar2);
  func_0x000100029394(lVar13,puVar11);
  puVar6 = puVar11;
  (**(code **)(lVar14 + 0x30))(puVar11,1,lVar2);
  if ((int)puVar6 == 1) {
    func_0x0001000293e4(lVar13);
    func_0x0001000293e4(puVar11);
    *param_1 = 0;
  }
  else {
    (**(code **)(lVar14 + 0x20))(lVar12,puVar11,lVar2);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_opt_self();
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    lStack_70 = 0;
    puVar8 = puVar5;
    func_0x00010bf55da0();
    _objc_release(puVar5);
    _objc_release(puVar7);
    lVar4 = lStack_70;
    if ((int)puVar8 == 0) {
      lVar3 = lStack_70;
      _objc_retain(lStack_70);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(lVar3);
      _swift_willThrow();
      uVar9 = 0x112d393f0;
      lStack_70 = lVar4;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar10 = 0;
      func_0x000100ea57c8(0);
      puVar11 = auStack_80 + 0x10;
      _swift_dynamicCast(auStack_80 + 8,puVar11,uVar9,uVar10,0);
      _objc_release(uStack_78);
      lVar4 = lStack_70;
      _swift_errorRelease(lStack_70);
    }
    else {
      _objc_retain(lStack_70);
    }
    __s10Foundation3URLV4pathSSvg();
    func_0x000100083b20(auStack_80 + 0x10);
    lVar3 = lStack_70;
    func_0x000100083b20(auStack_80 + 8);
    puVar5 = PTR_PTR_1126adc48;
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar4,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    func_0x00010c009440();
    _objc_release(lVar3);
    _swift_unknownObjectRelease(uStack_78);
    _objc_release(lVar4);
    if (puVar5 == (undefined *)0x0) goto LAB_1041889f8;
    func_0x0001000293e4(lVar13);
    *param_1 = puVar5;
    (**(code **)(lVar14 + 8))(lVar12,lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1041889f8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041889fc);
  (*pcVar1)();
}



/* Entry: 1041889fc; end: 104188a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041889fc(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  __s10Foundation3URLVMa(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined1 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar11 - extraout_x12;
  func_0x000100083b20(auStack_80 + 0x10);
  lVar4 = lStack_70;
  lVar3 = *(long *)(lStack_70 + _DAT_113091ad8);
  _objc_retain();
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x000107c5d984();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar4 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar5);
  }
  puVar5 = PTR_PTR_1126ba528;
  _objc_opt_self();
  func_0x00010bf64da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (puVar5 != (undefined *)0x0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar13,puVar5);
    _objc_release(puVar5);
  }
  (**(code **)(lVar14 + 0x38))(lVar13,puVar5 == (undefined *)0x0,1,lVar2);
  func_0x000100029394(lVar13,puVar11);
  puVar6 = puVar11;
  (**(code **)(lVar14 + 0x30))(puVar11,1,lVar2);
  if ((int)puVar6 == 1) {
    func_0x0001000293e4(lVar13);
    func_0x0001000293e4(puVar11);
    *param_1 = 0;
  }
  else {
    (**(code **)(lVar14 + 0x20))(lVar12,puVar11,lVar2);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_opt_self();
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    lStack_70 = 0;
    puVar8 = puVar5;
    func_0x00010bf55da0();
    _objc_release(puVar5);
    _objc_release(puVar7);
    lVar4 = lStack_70;
    if ((int)puVar8 == 0) {
      lVar3 = lStack_70;
      _objc_retain(lStack_70);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(lVar3);
      _swift_willThrow();
      uVar9 = 0x112d393f0;
      lStack_70 = lVar4;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar10 = 0;
      func_0x000100ea57c8(0);
      puVar11 = auStack_80 + 0x10;
      _swift_dynamicCast(auStack_80 + 8,puVar11,uVar9,uVar10,0);
      _objc_release(uStack_78);
      lVar4 = lStack_70;
      _swift_errorRelease(lStack_70);
    }
    else {
      _objc_retain(lStack_70);
    }
    __s10Foundation3URLV4pathSSvg();
    func_0x000100083b20(auStack_80 + 0x10);
    lVar3 = lStack_70;
    func_0x000100083b20(auStack_80 + 8);
    puVar5 = PTR_PTR_1126adc48;
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar4,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    func_0x00010c009440();
    _objc_release(lVar3);
    _swift_unknownObjectRelease(uStack_78);
    _objc_release(lVar4);
    if (puVar5 == (undefined *)0x0) goto LAB_1041889f8;
    func_0x0001000293e4(lVar13);
    *param_1 = puVar5;
    (**(code **)(lVar14 + 8))(lVar12,lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_1041889f8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041889fc);
  (*pcVar1)();
}



/* Entry: 104188a18; end: 104188a47;  */

void FUN_104188a18(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 104188a48; end: 1041890bb;  */

void FUN_104188a48(code *param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  pcStack_c8 = param_1;
  uStack_c0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_d0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar12 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_d8 = lVar12;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_e8 = *(long *)(lVar4 + -8);
  lStack_e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lStack_f0 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = param_3;
  func_0x000107c5cec4();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar6;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar15 == (undefined *)0x0) {
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar6 = PTR_PTR_1126adc48;
    _objc_opt_self(PTR_PTR_1126adc48);
    puVar16 = puVar15;
    _swift_dynamicCastObjCClass(puVar15,puVar6);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar16 == (undefined *)0x0) {
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_unknownObjectRetain(puVar15);
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar5 = puVar6;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
      }
      puVar6 = (undefined *)0x0;
      FUN_1041891f8(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar13 + 0x10);
      puStack_b8 = puVar6;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar14) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_1041891f8(puVar5,uVar14 + 1,1,puVar6);
        uVar13 = (ulong)puVar5 & 0xffffffffffffff8;
        puStack_b8 = puVar5;
      }
      *(ulong *)(uVar13 + 0x10) = uVar14 + 1;
      *(undefined **)(uVar13 + uVar14 * 8 + 0x20) = puVar16;
    }
    _swift_unknownObjectRelease(puVar15);
  }
  func_0x00010bf05220();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined *)0x0) {
    puVar15 = PTR_PTR_1126adc48;
    _objc_opt_self(PTR_PTR_1126adc48);
    puVar16 = puVar6;
    _swift_dynamicCastObjCClass(puVar6,puVar15);
    if (puVar16 != (undefined *)0x0) {
      _swift_unknownObjectRetain(puVar6);
      puVar15 = puStack_b8;
      puVar5 = puStack_b8;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar5 == 0) || ((long)puVar15 < 0)) ||
         (puVar5 = puVar15, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar15 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar15) {
            puVar7 = puVar15;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
        }
        puVar5 = (undefined *)0x0;
        FUN_1041891f8(0,puVar7 + 1,1,puVar15);
      }
      uVar13 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar13 + 0x10);
      puStack_b8 = puVar5;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar14) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_1041891f8(puVar15,uVar14 + 1,1,puVar5);
        uVar13 = (ulong)puVar15 & 0xffffffffffffff8;
        puStack_b8 = puVar15;
      }
      *(ulong *)(uVar13 + 0x10) = uVar14 + 1;
      *(undefined **)(uVar13 + uVar14 * 8 + 0x20) = puVar16;
    }
    _swift_unknownObjectRelease();
    param_3 = puVar6;
  }
  puVar6 = puStack_b8;
  lStack_110 = lVar3;
  lStack_108 = lVar18;
  lStack_100 = lVar17;
  lStack_f8 = lVar2;
  if ((ulong)puStack_b8 >> 0x3e == 0) {
    uVar14 = (ulong)puStack_b8 & 0xffffffffffffff8;
    if (*(long *)(uVar14 + 0x10) == 0) {
LAB_104189018:
      (*pcStack_c8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar6);
      return;
    }
    _dispatch_group_create();
    puVar15 = *(undefined **)(uVar14 + 0x10);
    puVar6 = puStack_b8;
  }
  else {
    puVar15 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_b8) {
      puVar15 = puStack_b8;
    }
    param_3 = puVar15;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)param_3 < 1) goto LAB_104189018;
    _dispatch_group_create();
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar6 = puStack_b8;
  }
  puStack_b8 = puVar6;
  if (puVar15 != (undefined *)0x0) {
    uVar14 = 0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104188e24);
          (*pcVar1)();
        }
        uVar13 = *(ulong *)(puVar6 + uVar14 * 8 + 0x20);
        _objc_retain(uVar13);
      }
      else {
        uVar13 = uVar14;
        FUN_1041894b8(uVar14,puVar6);
      }
      puVar16 = (undefined *)(uVar14 + 1);
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104188e20);
        (*pcVar1)();
      }
      _dispatch_group_enter(param_3);
      _objc_release(uVar13);
      uVar14 = uVar14 + 1;
    } while (puVar16 != puVar15);
    if ((long)puVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041890a8);
      (*pcVar1)();
    }
    puVar16 = (undefined *)0x0;
    puVar5 = puVar6;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar7 = *(undefined **)(puVar5 + (long)puVar16 * 8 + 0x20);
        _objc_retain(puVar7);
      }
      else {
        puVar7 = puVar16;
        FUN_1041894b8(puVar16,puVar5);
      }
      puVar16 = puVar16 + 1;
      puVar5 = &UNK_11074c838;
      _swift_allocObject(&UNK_11074c838,0x18,7);
      *(undefined **)(puVar5 + 0x10) = param_3;
      pcStack_88 = FUN_10418967c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000b0c7c;
      puStack_90 = &UNK_11074c850;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar5;
      __Block_copy(ppuVar8);
      puVar5 = puStack_80;
      _objc_retain(param_3);
      _swift_release(puVar5);
      func_0x00010bf65dc0(puVar7);
      __Block_release(ppuVar8);
      _objc_release(puVar7);
      puVar5 = puStack_b8;
    } while (puVar15 != puVar16);
  }
  puVar15 = puStack_b8;
  func_0x0001041896a4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar4 = lStack_e0;
  lVar3 = lStack_e8;
  lVar2 = lStack_f0;
  (**(code **)(lStack_e8 + 0x68))
            (lStack_f0,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
             lStack_e0);
  lVar12 = lVar2;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar2);
  (**(code **)(lVar3 + 8))(lVar2,lVar4);
  puVar6 = &UNK_11074c888;
  _swift_allocObject(&UNK_11074c888,0x20,7);
  uVar9 = uStack_c0;
  *(code **)(puVar6 + 0x10) = pcStack_c8;
  *(undefined8 *)(puVar6 + 0x18) = uStack_c0;
  pcStack_88 = (code *)0x104189684;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_11074c8a0;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar6;
  __Block_copy(ppuVar8);
  _swift_retain(uVar9);
  lVar4 = lStack_d8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_d8);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar10 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar11 = uVar10;
  func_0x0001001c7f30();
  lVar3 = lStack_f8;
  lVar2 = lStack_108;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lStack_108,&puStack_b0,uVar10,uVar11,lStack_f8,uVar9);
  __sSo17OS_dispatch_groupC8DispatchE6notify3qos5flags5queue7executeyAC0D3QoSV_AC0D13WorkItemFlagsVSo0a1_b1_H0CyyXBtF
            (lVar4,lVar2,lVar12,ppuVar8);
  __Block_release(ppuVar8);
  _objc_release(param_3);
  _objc_release(lVar12);
  (**(code **)(lStack_100 + 8))(lVar2,lVar3);
  (**(code **)(lStack_d0 + 8))(lVar4,lStack_110);
  _swift_bridgeObjectRelease(puVar15);
  _swift_release(puStack_80);
  return;
}



/* Entry: 1041890bc; end: 1041890c3;  */

void FUN_1041890bc(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar13 = *(undefined **)(unaff_x20 + 0x10);
  lVar2 = 0;
  pcStack_c8 = param_1;
  uStack_c0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_d0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar14 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_d8 = lVar14;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_e8 = *(long *)(lVar4 + -8);
  lStack_e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lStack_f0 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar13;
  func_0x000107c5cec4();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar6;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (puVar17 == (undefined *)0x0) {
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar6 = PTR_PTR_1126adc48;
    _objc_opt_self(PTR_PTR_1126adc48);
    puVar7 = puVar17;
    _swift_dynamicCastObjCClass(puVar17,puVar6);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 == (undefined *)0x0) {
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_unknownObjectRetain(puVar17);
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar5 = puVar6;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
      }
      puVar6 = (undefined *)0x0;
      FUN_1041891f8(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar15 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar15 + 0x10);
      puStack_b8 = puVar6;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar16) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_1041891f8(puVar5,uVar16 + 1,1,puVar6);
        uVar15 = (ulong)puVar5 & 0xffffffffffffff8;
        puStack_b8 = puVar5;
      }
      *(ulong *)(uVar15 + 0x10) = uVar16 + 1;
      *(undefined **)(uVar15 + uVar16 * 8 + 0x20) = puVar7;
    }
    _swift_unknownObjectRelease(puVar17);
  }
  func_0x00010bf05220();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined *)0x0) {
    puVar13 = PTR_PTR_1126adc48;
    _objc_opt_self(PTR_PTR_1126adc48);
    puVar17 = puVar6;
    _swift_dynamicCastObjCClass(puVar6,puVar13);
    if (puVar17 != (undefined *)0x0) {
      _swift_unknownObjectRetain(puVar6);
      puVar13 = puStack_b8;
      puVar7 = puStack_b8;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar7 == 0) || ((long)puVar13 < 0)) ||
         (puVar7 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar5 = puVar13;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
        }
        puVar7 = (undefined *)0x0;
        FUN_1041891f8(0,puVar5 + 1,1,puVar13);
      }
      uVar15 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar15 + 0x10);
      puStack_b8 = puVar7;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar16) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_1041891f8(puVar13,uVar16 + 1,1,puVar7);
        uVar15 = (ulong)puVar13 & 0xffffffffffffff8;
        puStack_b8 = puVar13;
      }
      *(ulong *)(uVar15 + 0x10) = uVar16 + 1;
      *(undefined **)(uVar15 + uVar16 * 8 + 0x20) = puVar17;
    }
    _swift_unknownObjectRelease();
    puVar13 = puVar6;
  }
  puVar6 = puStack_b8;
  lStack_110 = lVar3;
  lStack_108 = lVar19;
  lStack_100 = lVar18;
  lStack_f8 = lVar2;
  if ((ulong)puStack_b8 >> 0x3e == 0) {
    uVar16 = (ulong)puStack_b8 & 0xffffffffffffff8;
    if (*(long *)(uVar16 + 0x10) == 0) {
LAB_104189018:
      (*pcStack_c8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar6);
      return;
    }
    _dispatch_group_create();
    puVar17 = *(undefined **)(uVar16 + 0x10);
    puVar6 = puStack_b8;
  }
  else {
    puVar17 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_b8) {
      puVar17 = puStack_b8;
    }
    puVar13 = puVar17;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)puVar13 < 1) goto LAB_104189018;
    _dispatch_group_create();
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar6 = puStack_b8;
  }
  puStack_b8 = puVar6;
  if (puVar17 != (undefined *)0x0) {
    uVar16 = 0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104188e24);
          (*pcVar1)();
        }
        uVar15 = *(ulong *)(puVar6 + uVar16 * 8 + 0x20);
        _objc_retain(uVar15);
      }
      else {
        uVar15 = uVar16;
        FUN_1041894b8(uVar16,puVar6);
      }
      puVar7 = (undefined *)(uVar16 + 1);
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104188e20);
        (*pcVar1)();
      }
      _dispatch_group_enter(puVar13);
      _objc_release(uVar15);
      uVar16 = uVar16 + 1;
    } while (puVar7 != puVar17);
    if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041890a8);
      (*pcVar1)();
    }
    puVar7 = (undefined *)0x0;
    puVar5 = puVar6;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(puVar5 + (long)puVar7 * 8 + 0x20);
        _objc_retain(puVar9);
      }
      else {
        puVar9 = puVar7;
        FUN_1041894b8(puVar7,puVar5);
      }
      puVar7 = puVar7 + 1;
      puVar5 = &UNK_11074c838;
      _swift_allocObject(&UNK_11074c838,0x18,7);
      *(undefined **)(puVar5 + 0x10) = puVar13;
      pcStack_88 = FUN_10418967c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000b0c7c;
      puStack_90 = &UNK_11074c850;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar5;
      __Block_copy(ppuVar8);
      puVar5 = puStack_80;
      _objc_retain(puVar13);
      _swift_release(puVar5);
      func_0x00010bf65dc0(puVar9);
      __Block_release(ppuVar8);
      _objc_release(puVar9);
      puVar5 = puStack_b8;
    } while (puVar17 != puVar7);
  }
  puVar17 = puStack_b8;
  func_0x0001041896a4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar4 = lStack_e0;
  lVar3 = lStack_e8;
  lVar2 = lStack_f0;
  (**(code **)(lStack_e8 + 0x68))
            (lStack_f0,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
             lStack_e0);
  lVar14 = lVar2;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar2);
  (**(code **)(lVar3 + 8))(lVar2,lVar4);
  puVar6 = &UNK_11074c888;
  _swift_allocObject(&UNK_11074c888,0x20,7);
  uVar10 = uStack_c0;
  *(code **)(puVar6 + 0x10) = pcStack_c8;
  *(undefined8 *)(puVar6 + 0x18) = uStack_c0;
  pcStack_88 = (code *)0x104189684;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_11074c8a0;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar6;
  __Block_copy(ppuVar8);
  _swift_retain(uVar10);
  lVar4 = lStack_d8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_d8);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar11 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar12 = uVar11;
  func_0x0001001c7f30();
  lVar3 = lStack_f8;
  lVar2 = lStack_108;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lStack_108,&puStack_b0,uVar11,uVar12,lStack_f8,uVar10);
  __sSo17OS_dispatch_groupC8DispatchE6notify3qos5flags5queue7executeyAC0D3QoSV_AC0D13WorkItemFlagsVSo0a1_b1_H0CyyXBtF
            (lVar4,lVar2,lVar14,ppuVar8);
  __Block_release(ppuVar8);
  _objc_release(puVar13);
  _objc_release(lVar14);
  (**(code **)(lStack_100 + 8))(lVar2,lVar3);
  (**(code **)(lStack_d0 + 8))(lVar4,lStack_110);
  _swift_bridgeObjectRelease(puVar17);
  _swift_release(puStack_80);
  return;
}



/* Entry: 1041890c4; end: 1041890e7;  */

void FUN_1041890c4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1041890e8; end: 10418914f;  */

undefined1  [16] FUN_1041890e8(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_28;
  
  func_0x00010485773c();
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&uStack_28);
    puVar2 = &UNK_11074c7c0;
    _swift_allocObject(&UNK_11074c7c0,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uStack_28;
    uVar1 = 0x1041896ec;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 104189150; end: 10418918b;  */

undefined ** FUN_104189150(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10418918c; end: 1041891f7;  */

void FUN_10418918c(void)

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
    func_0x0001041896a4(0,0x113066488,&PTR_PTR_1126adc48);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x113066490;
  plVar5 = (long *)&UNK_10dcdc1a8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1041891f8; end: 10418931f;  */

ulong FUN_1041891f8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104189320);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_104189320(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10418931c);
      (*pcVar1)();
    }
    FUN_1041893a0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 104189320; end: 10418939f;  */

undefined * FUN_104189320(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_10418918c();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1041893a0; end: 1041894b7;  */

long FUN_1041893a0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1041894b4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1041894b8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001041896a4(0,0x113066488,&PTR_PTR_1126adc48);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001041896a4(0,0x113066488,&PTR_PTR_1126adc48);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1041894b0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1041894b8; end: 10418967b;  */

ulong FUN_1041894b8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10418959c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1041895a0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_1126adc48;
    _objc_opt_self(PTR_PTR_1126adc48);
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
    puVar4 = PTR_PTR_1126adc48;
    _objc_opt_self(PTR_PTR_1126adc48);
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
  func_0x0001041896a4(0,0x113066488,&PTR_PTR_1126adc48);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10418967c);
  (*pcVar2)();
}



/* Entry: 10418967c; end: 104189683;  */

void FUN_10418967c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104189684; end: 1041896e3;  */

void FUN_104189684(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1041896e4; end: 10418971b;  */

void FUN_1041896e4(long param_1,long param_2)

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



/* Entry: 10418971c; end: 104189f9b;  */

undefined1  [16] FUN_10418971c(void)

{
  return ZEXT816(0x11074ca38);
}



/* Entry: 104189f9c; end: 104189faf;  */

bool FUN_104189f9c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104189fb0; end: 10418a05b;  */

void FUN_104189fb0(void)

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



/* Entry: 10418a05c; end: 10418a083;  */

void FUN_10418a05c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10418a084; end: 10418a0a3; -[FollowCreatorsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a084(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130671c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418a0a4; end: 10418a0eb; -[FollowCreatorsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a0a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130671d0;
  _swift_beginAccess(param_1 + _DAT_1130671d0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418a0ec; end: 10418a143; -[FollowCreatorsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130671d0;
  _swift_beginAccess(param_1 + _DAT_1130671d0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10418a144; end: 10418a153; -[FollowCreatorsScope flow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10418a144(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130671d8);
}



/* Entry: 10418a154; end: 10418a1af; -[FollowCreatorsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10418a154(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130671c8));
  param_1 = param_1 + _DAT_1130671d0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10418a1b0; end: 10418a217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a1b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033d714();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130671e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10418a218; end: 10418a263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a218(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130671e8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418a264; end: 10418a363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10418a264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000100333c18();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_1130671d0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_1130671d0,0);
  *(long *)(lVar4 + _DAT_1130671c8) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  *(undefined8 *)(lVar4 + _DAT_1130671d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10418a364; end: 10418a3df; -[_TtC19FollowCreatorsScope27FollowCreatorsScopeServices buildWithUIContainer:delegate:flow:] */

void FUN_10418a364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10418a264(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10418a3e0; end: 10418a3e3;  */

void FUN_10418a3e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418a3e4; end: 10418a417;  */

void FUN_10418a3e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418a418; end: 10418a42b; -[_TtC19FollowCreatorsScope27FollowCreatorsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130671e8));
  return;
}



/* Entry: 10418a42c; end: 10418a46b;  */

void FUN_10418a42c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130671f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcdeca8;
  _swift_getWitnessTable(&UNK_10dcdeca8,&UNK_11074e0a0);
  puRam00000001130671f0 = puVar1;
  return;
}



/* Entry: 10418a46c; end: 10418a48f;  */

undefined1  [16] FUN_10418a46c(void)

{
  return ZEXT816(0x11074e0a0);
}



/* Entry: 10418a490; end: 10418a4d7; -[SCPasskeyManagementScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a490(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113067248;
  _swift_beginAccess(param_1 + _DAT_113067248,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418a4d8; end: 10418a52f; -[SCPasskeyManagementScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113067248;
  _swift_beginAccess(param_1 + _DAT_113067248,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10418a530; end: 10418a54f; -[SCPasskeyManagementScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a530(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113067250));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418a550; end: 10418a553;  */

void FUN_10418a550(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418a554; end: 10418a5af; -[SCPasskeyManagementScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a554(long param_1)

{
  func_0x00010418a58c(param_1 + _DAT_113067248);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113067250));
  return;
}



/* Entry: 10418a5b0; end: 10418a617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a5b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100342410();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113067260) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10418a618; end: 10418a663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a618(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113067260) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418a664; end: 10418a74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10418a664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000100336078();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113067248;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113067248,0);
  _swift_beginAccess(lVar4 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_113067250) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_2);
  plVar5 = &lStack_68;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar5;
}



/* Entry: 10418a74c; end: 10418a7bf; -[_TtC29SCPasskeyManagementSaberScope32SCPasskeyManagementScopeServices buildWithDelegate:uiContainer:] */

void FUN_10418a74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10418a664(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10418a7c0; end: 10418a7f3;  */

void FUN_10418a7c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418a7f4; end: 10418a817; -[_TtC29SCPasskeyManagementSaberScope32SCPasskeyManagementScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113067260));
  return;
}



/* Entry: 10418a818; end: 10418a837; -[SCBirthdaySettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a818(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130672b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418a838; end: 10418a847; -[SCBirthdaySettingsScope enableBirthdayParty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10418a838(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130672c0);
}



/* Entry: 10418a848; end: 10418a88f; -[SCBirthdaySettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130672c8;
  _swift_beginAccess(param_1 + _DAT_1130672c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418a890; end: 10418a8e7; -[SCBirthdaySettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130672c8;
  _swift_beginAccess(param_1 + _DAT_1130672c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10418a8e8; end: 10418a913; -[SCBirthdaySettingsScope init] */

void FUN_10418a8e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBirthdaySettingsScope.SCBirthdaySettingsScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418a914);
  (*pcVar1)();
}



/* Entry: 10418a914; end: 10418a96f; -[SCBirthdaySettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10418a914(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130672b8));
  param_1 = param_1 + _DAT_1130672c8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10418a970; end: 10418a9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a970(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033efa0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130672d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10418a9dc; end: 10418a9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a9dc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033efa0();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130672d8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10418a9e4; end: 10418aa2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418a9e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130672d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10418aa30; end: 10418ab2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10418aa30(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x0001003349dc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_1130672c8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_1130672c8,0);
  *(long *)(lVar4 + _DAT_1130672b8) = param_1;
  *(undefined1 *)(lVar4 + _DAT_1130672c0) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10418ab30; end: 10418abaf; -[_TtC23SCBirthdaySettingsScope31SCBirthdaySettingsScopeServices buildWithUiContainer:enableBirthdayParty:delegate:] */

void FUN_10418ab30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10418aa30(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10418abb0; end: 10418abdb; -[_TtC23SCBirthdaySettingsScope31SCBirthdaySettingsScopeServices init] */

void FUN_10418abb0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBirthdaySettingsScope.SCBirthdaySettingsScopeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10418abdc);
  (*pcVar1)();
}



/* Entry: 10418abdc; end: 10418abdf;  */

void FUN_10418abdc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418abe0; end: 10418ac13;  */

void FUN_10418abe0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418ac14; end: 10418ac37; -[_TtC23SCBirthdaySettingsScope31SCBirthdaySettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418ac14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130672d8));
  return;
}



/* Entry: 10418ac38; end: 10418ac57; -[SCMobileSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418ac38(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113067330));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418ac58; end: 10418ac9f; -[SCMobileSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418ac58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113067338;
  _swift_beginAccess(param_1 + _DAT_113067338,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418aca0; end: 10418acf7; -[SCMobileSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418aca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113067338;
  _swift_beginAccess(param_1 + _DAT_113067338,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10418acf8; end: 10418acfb;  */

void FUN_10418acf8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418acfc; end: 10418ada3; -[SCMobileSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10418acfc(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113067330));
  param_1 = param_1 + _DAT_113067338;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10418ada4; end: 10418ae8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10418ada4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000100335ee8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113067338;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113067338,0);
  *(long *)(lVar4 + _DAT_113067330) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_68;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar5;
}



/* Entry: 10418ae8c; end: 10418aeff; -[_TtC26SCMobileSettingsSaberScope29SCMobileSettingsScopeServices buildWithUiContainer:delegate:] */

void FUN_10418ae8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10418ada4(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10418af00; end: 10418af33;  */

void FUN_10418af00(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418af34; end: 10418af57; -[_TtC26SCMobileSettingsSaberScope29SCMobileSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418af34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113067348));
  return;
}



/* Entry: 10418af58; end: 10418af77; -[SCPasswordSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418af58(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130673a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418af78; end: 10418afbf; -[SCPasswordSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418af78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130673a8;
  _swift_beginAccess(param_1 + _DAT_1130673a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10418afc0; end: 10418b017; -[SCPasswordSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418afc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130673a8;
  _swift_beginAccess(param_1 + _DAT_1130673a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10418b018; end: 10418b01b;  */

void FUN_10418b018(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418b01c; end: 10418b0c3; -[SCPasswordSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10418b01c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130673a0));
  param_1 = param_1 + _DAT_1130673a8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10418b0c4; end: 10418b1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10418b0c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000100336184();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_1130673a8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_1130673a8,0);
  *(long *)(lVar4 + _DAT_1130673a0) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_68;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar5;
}



/* Entry: 10418b1ac; end: 10418b21f; -[_TtC28SCPasswordSettingsSaberScope31SCPasswordSettingsScopeServices buildWithUiContainer:delegate:] */

void FUN_10418b1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10418b0c4(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10418b220; end: 10418b253;  */

void FUN_10418b220(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10418b254; end: 10418b277; -[_TtC28SCPasswordSettingsSaberScope31SCPasswordSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130673b8));
  return;
}



/* Entry: 10418b278; end: 10418b287; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope attachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113067410));
  return;
}



/* Entry: 10418b288; end: 10418b2a7; -[_TtC32AdAttachmentPresenterPluginScope32AdAttachmentPresenterPluginScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10418b288(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113067418));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


